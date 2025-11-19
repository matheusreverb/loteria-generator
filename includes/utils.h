#include <stdbool.h>

#ifndef UTILS_H
#define UTILS_H

void showNumbers(char *title, int*numbers, int LIMIT);
bool hasSameNumber(int newNumber, int *numbers, int LIMIT);
int *generateNumbers(int LIMIT, int MAX);
void bubbleSort(int arr[], int n);

#endif