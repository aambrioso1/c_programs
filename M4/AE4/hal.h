#pragma once

#include <stdbool.h>

/******
#ifndef _HAL_H_
#define _HAL_H_
*****/


void intarray_display(const int data[], int size);
void intarray_scan(int data[], int size);
void intarray_sort(int data[], int size);
bool intarray_compare_by_position(const int data1[], const int data2[], int size);
bool intarray_compare_by_content(const int data1[], const int data2[], int size);
// #endif