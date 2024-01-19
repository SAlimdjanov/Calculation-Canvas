/**
 * @file calculationCanvas.h
 * @author Shonasir Alimdjanov (alimdjanov.ss@gmail.com)
 * @brief App initialization file
 * @version 0.1
 * @date 2024-01-18
 *
 * @copyright Copyright (c) 2024
 *
 */

#pragma once

#include <gtkmm/button.h>
#include <gtkmm/window.h>

#include <iostream>

class CalculationCanvas : public Gtk::Window
{
public:
    CalculationCanvas();
    virtual ~CalculationCanvas();

private:
protected:
    void onButtonClicked();
    Gtk::Button mButton;
};