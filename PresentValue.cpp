#include "CashFlowCalculator.h"
#include <iostream>

int main()
{
  
    double rate = 0.08;
    CashFlowCalculator cfc(rate);
    do {
        int period;
        std::cin >> period;
        if (period == -1) { break; }
        double value;
        std::cin >> value;
        cfc.addCashPayment(value, period);
    } while (1);

    double result = cfc.presentValue();
    std::cout << " the present values is " << result << std::endl;


    
    }




