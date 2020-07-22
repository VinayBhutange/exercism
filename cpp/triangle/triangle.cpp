#include "triangle.h"
#include <stdexcept>

triangle::flavor triangle::kind(double a, double b, double c)
{
    if (!((a > 0) && (b > 0) && (c > 0)) || !((a + b >= c) && (b + c >= a) && (c + a >= b)))
            throw std::domain_error("invalid triangle");
    if ((a == b) && (b == c))
        return flavor::equilateral;
    else if ((a == b) || (b == c) || (c == a))
        return flavor::isosceles;
    else
        return flavor::scalene;
}