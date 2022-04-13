#ifndef HEADER_H

#define HEADER_H

#include <iostream>
#include "complex.h"
using namespace std;

void bubble_sorting(int* arr, int size);
void bubble_sorting(double* arr, int size);
void bubble_sorting(complex* arr, int size);

void print_arr(double* arr, int size);
void print_arr(int* arr, int size);
void print_arr(complex* arr, int size);




#endif // !HEADER_H

