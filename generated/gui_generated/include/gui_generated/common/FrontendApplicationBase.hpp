/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    // Main
    void gotoMainScreenNoTransition();

    void gotoMainScreenSlideTransitionNorth();

    void gotoMainScreenSlideTransitionSouth();

    void gotoMainScreenSlideTransitionWest();

    void gotoMainScreenSlideTransitionEast();


    // Down
    void gotoDownScreenSlideTransitionSouth();


    // Up
    void gotoUpScreenSlideTransitionNorth();


    // Right
    void gotoRightScreenSlideTransitionEast();


    // Left
    void gotoLeftScreenSlideTransitionWest();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // Main
    void gotoMainScreenNoTransitionImpl();

    void gotoMainScreenSlideTransitionNorthImpl();

    void gotoMainScreenSlideTransitionSouthImpl();

    void gotoMainScreenSlideTransitionWestImpl();

    void gotoMainScreenSlideTransitionEastImpl();


    // Down
    void gotoDownScreenSlideTransitionSouthImpl();


    // Up
    void gotoUpScreenSlideTransitionNorthImpl();


    // Right
    void gotoRightScreenSlideTransitionEastImpl();


    // Left
    void gotoLeftScreenSlideTransitionWestImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
