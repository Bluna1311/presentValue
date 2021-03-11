#ifndef __CashFlowCalc__
#define __CashFlowCalc__

#include <vector>

class CashFlowCalculator {

public:
	CashFlowCalculator(double rate);
	CashFlowCalculator(const CashFlowCalculator &v);
	CashFlowCalculator& operator =(const CashFlowCalculator& v);
	~CashFlowCalculator();

	void addCashPayment(double value, int timePeriod);
	double presentValue();

private:
	std::vector<double> m_cashPayment;
	std::vector<int> m_timePeriod;
	double m_rate;
	double presentValue(double futureValue, int timePeriod);
};

#endif 
