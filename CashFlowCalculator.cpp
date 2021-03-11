#include "CashFlowCalculator.h"

#include <cmath>
#include <iostream>

CashFlowCalculator::CashFlowCalculator(double rate)
	:m_rate(rate)
{
// assisnging member variables using one method
};

CashFlowCalculator::CashFlowCalculator(const CashFlowCalculator& v)
{
	m_rate = v.m_rate;
	// copy constructor but assigns variable in a different way
}
CashFlowCalculator::~CashFlowCalculator() {

}
CashFlowCalculator& CashFlowCalculator::operator=(const CashFlowCalculator& v) {

	if (this != &v)
	{
		this->m_cashPayment = v.m_cashPayment;
		this->m_rate = v.m_rate;
		this->m_timePeriod = v.m_timePeriod;
	}
	return *this; // pointer to object.
}
	
void CashFlowCalculator::addCashPayment(double value, int timePeriod)
{
	m_cashPayment.push_back(value);
	m_timePeriod.push_back(timePeriod);
}

double CashFlowCalculator::presentValue(double futureValue, int timePeriod)
{
	double pValue = futureValue / pow(1 + m_rate, timePeriod);
	std::cout << " value " << pValue << std::endl;
	return pValue;
}

double CashFlowCalculator::presentValue()
{
	double total = 0;
	for (int i = 0; i < m_cashPayment.size(); i++)
	{
		total += presentValue(m_cashPayment[i], m_timePeriod[i]);
	}
	return total;
}

