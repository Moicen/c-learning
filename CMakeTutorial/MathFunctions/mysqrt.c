//
// Created by G2 on 2018/5/8.
//
#include <math.h>
double mysqrt(double input){
    double result;
    // if we have both log and exp then use them
#if defined (HAVE_LOG) && defined (HAVE_EXP)
    result = exp(log(x)*0.5);
#else // otherwise use an iterative approach
    double esp = 1e-12;
    result = input;
    while(abs(result - input / result) > esp){
        result = (input + input / result) / 2.0;
    }

    return result;
}
