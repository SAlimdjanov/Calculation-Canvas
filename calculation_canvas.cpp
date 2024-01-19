#include "calculation_canvas.h"

CalculationCanvas::CalculationCanvas() : mButton("Button")
{
    set_border_width(10);
    mButton.signal_clicked().connect(sigc::mem_fun(*this, &CalculationCanvas::onButtonClicked));
    add(mButton);
    mButton.show();
}

CalculationCanvas::~CalculationCanvas() {}

void CalculationCanvas::onButtonClicked()
{
    std::cout << "Clicked!\n";
}