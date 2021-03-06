/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <new>
#include <gui_generated/common/FrontendApplicationBase.hpp>
#include <gui/common/FrontendHeap.hpp>
#include <touchgfx/transitions/NoTransition.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Texts.hpp>
#include <gui/main_screen/MainView.hpp>
#include <gui/main_screen/MainPresenter.hpp>
#include <gui/down_screen/DownView.hpp>
#include <gui/down_screen/DownPresenter.hpp>
#include <gui/up_screen/UpView.hpp>
#include <gui/up_screen/UpPresenter.hpp>
#include <gui/right_screen/RightView.hpp>
#include <gui/right_screen/RightPresenter.hpp>
#include <gui/left_screen/LeftView.hpp>
#include <gui/left_screen/LeftPresenter.hpp>

using namespace touchgfx;


FrontendApplicationBase::FrontendApplicationBase(Model& m, FrontendHeap& heap)
    : touchgfx::MVPApplication(),
      transitionCallback(),
      frontendHeap(heap),
      model(m)
{
    Texts::setLanguage(GB);
}

/*
 * Screen Transition Declarations
 */
// Main

void FrontendApplicationBase::gotoMainScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoMainScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoMainScreenNoTransitionImpl()
{
    makeTransition<MainView, MainPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}


void FrontendApplicationBase::gotoMainScreenSlideTransitionNorth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoMainScreenSlideTransitionNorthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoMainScreenSlideTransitionNorthImpl()
{
    makeTransition<MainView, MainPresenter, SlideTransition<NORTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}


void FrontendApplicationBase::gotoMainScreenSlideTransitionSouth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoMainScreenSlideTransitionSouthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoMainScreenSlideTransitionSouthImpl()
{
    makeTransition<MainView, MainPresenter, SlideTransition<SOUTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}


void FrontendApplicationBase::gotoMainScreenSlideTransitionWest()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoMainScreenSlideTransitionWestImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoMainScreenSlideTransitionWestImpl()
{
    makeTransition<MainView, MainPresenter, SlideTransition<WEST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}


void FrontendApplicationBase::gotoMainScreenSlideTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoMainScreenSlideTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoMainScreenSlideTransitionEastImpl()
{
    makeTransition<MainView, MainPresenter, SlideTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Down

void FrontendApplicationBase::gotoDownScreenSlideTransitionSouth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoDownScreenSlideTransitionSouthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoDownScreenSlideTransitionSouthImpl()
{
    makeTransition<DownView, DownPresenter, SlideTransition<SOUTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Up

void FrontendApplicationBase::gotoUpScreenSlideTransitionNorth()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoUpScreenSlideTransitionNorthImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoUpScreenSlideTransitionNorthImpl()
{
    makeTransition<UpView, UpPresenter, SlideTransition<NORTH>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Right

void FrontendApplicationBase::gotoRightScreenSlideTransitionEast()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoRightScreenSlideTransitionEastImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoRightScreenSlideTransitionEastImpl()
{
    makeTransition<RightView, RightPresenter, SlideTransition<EAST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Left

void FrontendApplicationBase::gotoLeftScreenSlideTransitionWest()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoLeftScreenSlideTransitionWestImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoLeftScreenSlideTransitionWestImpl()
{
    makeTransition<LeftView, LeftPresenter, SlideTransition<WEST>, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

