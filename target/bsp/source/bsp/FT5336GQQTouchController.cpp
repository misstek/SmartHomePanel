#include <bsp/FT5336GQQTouchController.hpp>
#include <touchgfx/transforms/TouchCalibration.hpp>

extern "C"
{
#include "board.h"
#include "fsl_i2c.h"
#include "fsl_touch_ft5406.h"
}
using namespace touchgfx;

ft5406_handle_t touch_handle;
touch_event_t touch_event;


void FT5336GQQTouchController::init()
{   
  FT5406_Init(&touch_handle, EXAMPLE_I2C_MASTER);
}

bool FT5336GQQTouchController::sampleTouch(int32_t& x, int32_t& y)
{
  int tmp_x = -1, tmp_y = -1;
  
  if (kStatus_Success == FT5406_GetSingleTouch(&touch_handle, &touch_event, &tmp_x, &tmp_y))
  {
    if ((touch_event == kTouch_Down) || (touch_event == kTouch_Contact))
    {
      /*Swap X, Y coordinates */
      x = tmp_y;
      y = tmp_x;
      return true;
    }
  }
  return false;
}

