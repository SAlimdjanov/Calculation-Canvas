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

class CalculationCanvas : public wxApp
{
public:
    bool OnInit() override;
};

wxIMPLEMENT_APP(CalculationCanvas);

bool CalculationCanvas::OnInit()
{
    MainFrame *mainFrame = new MainFrame();
    mainFrame->Show(true);
    return true;
}
