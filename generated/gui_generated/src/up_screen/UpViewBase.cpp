/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/up_screen/UpViewBase.hpp>
#include "BitmapDatabase.hpp"

UpViewBase::UpViewBase()  :
    buttonCallback(this, &UpViewBase::buttonCallbackHandler),
    sliderValueChangedCallback(this, &UpViewBase::sliderValueChangedCallbackHandler)
{
    backgroundRight.setXY(0, -5);
    backgroundRight.setBitmap(Bitmap(BITMAP_IMG6_1_ID));

    image4.setXY(0, -5);
    image4.setBitmap(Bitmap(BITMAP_IMG6_2_ID));
    image4.setAlpha(4);

    buttonDown.setPosition(175, 206, 130, 56);
    buttonDown.setBitmaps(Bitmap(BITMAP_DOWN_BTN_ID), Bitmap(BITMAP_DOWN_BTN_PRESSED_ID));
    buttonDown.setAction(buttonCallback);
    buttonDown.setAlpha(100);

    slider2.setBitmaps(Bitmap(BITMAP_SLIDER_BACKGROUND_VERTICAL_FILLED_ID), Bitmap(BITMAP_SLIDER_BACKGROUND_VERTICAL_ID), Bitmap(BITMAP_SLIDER_KNOB_CIRCLE_ID));
    slider2.setXY(15, 52);
    slider2.setupVerticalSlider(14, 3, 0, 0, 140);
    slider2.setValueRange(1, 254);
    slider2.setValue(1);
    slider2.setNewValueCallback(sliderValueChangedCallback);

    add(backgroundRight);
    add(image4);
    add(buttonDown);
    add(slider2);
}

void UpViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonDown)
    {
        //GotoScreenMain
        //When buttonDown clicked change screen to Main
        //Go to Main with slide screen transition towards South
        application().gotoMainScreenSlideTransitionSouth();
    }
}

void UpViewBase::sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &slider2)
    {
        //Interaction1
        //When slider2 value changed execute C++ code
        //Execute C++ code
        image4.setAlpha(slider2.getValue());
        image4.invalidate();
    }
}