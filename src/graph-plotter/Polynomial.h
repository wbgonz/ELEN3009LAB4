#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include "Function.h"
#include <cmath>
#include <vector>

using std::vector;

class Polynomial : public Function
{
public:
    Polynomial(const vector<float> polynomialCoefficients);
    float evaluate(float x) const;
    
private:
    vector<float> _polynomialCoefficients;
};

#endif