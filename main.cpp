/**
 * @file main.cpp
 * @author Shonasir Alimdjanov (alimdjanov.ss@gmail.com)
 * @brief CalculationCanvas Application
 * @version 0.1
 * @date 2024-01-18
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "calculation_canvas.h"
#include <gtkmm/application.h>

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create(argc, argv, "app.CalculationCanvas");
    CalculationCanvas calculationCanvas;
    return app->run(calculationCanvas);
}
