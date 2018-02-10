/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef DOWN_VIEW_BASE_HPP
#define DOWN_VIEW_BASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/down_screen/DownPresenter.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/Slider.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>

class DownViewBase : public touchgfx::View<DownPresenter>
{
public:
    DownViewBase();
    virtual ~DownViewBase() {}

protected:
    FrontendApplication& application() { 
        return *static_cast<FrontendApplication*>(Application::getInstance()); 
    }

    /*
     * Member Declarations
     */
    touchgfx::Image backgroundDown;
    touchgfx::Image image1;
    touchgfx::Slider slider1;
    touchgfx::Button buttonUp;
    touchgfx::Image image2;
    touchgfx::TextArea textArea1;
    touchgfx::ToggleButton toggleButton1;
    touchgfx::TextArea textArea2;
    touchgfx::TextArea textArea3;

private:

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value);

    /*
     * Callback Declarations
     */
    touchgfx::Callback<DownViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<DownViewBase, const touchgfx::Slider&, int> sliderValueChangedCallback;

};

#endif // DOWN_VIEW_BASE_HPP
