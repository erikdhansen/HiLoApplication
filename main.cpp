/* 
 * File:   main.cpp
 *
 * Created on June 17, 2018, 4:11 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void find_lo_hi(int x, int y, int *lo, int *hi) {
    (*lo) = (x < y) ? x : y;
    (*hi) = (x < y) ? y : x;
}

void find_lo_hi(double x, double y, double *lo, double *hi) {
    *lo = (x < y) ? x : y;
    *hi = (x < y) ? y : x;    
}

/*
 * 
 */
int main(int argc, char** argv) {
    int x = 10;
    int y = 20;
    double i = 22;
    double j = 11;
    int loInt;
    int hiInt;
    double loDouble;
    double hiDouble;
    
    find_lo_hi(x, y, &loInt, &hiInt);
    find_lo_hi(i, j, &loDouble, &hiDouble);
    
    cout << "x = " << x << " y = " << y << " hi = " << hiInt << " lo = " << loInt << "\n";
    cout << "i = " << i << " j = " << j << " hi = " << hiDouble << " lo = " << loDouble << "\n";
    return 0;
}

