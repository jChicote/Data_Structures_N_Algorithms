
#include <iostream>
#include "simpleCalculator.h"
using namespace std;

float SimpleCalculator::Add(float numA, float numB)
{
	return numA + numB;
}

float SimpleCalculator::Subtract(float numA, float numB)
{
	return numA - numB;
}

float SimpleCalculator::Multiply(float numA, float numB)
{
	return numA * numB;
}

float SimpleCalculator::Divide(float numA, float numB)
{
	return numA / numB;
}