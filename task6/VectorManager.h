#ifndef VECTORMANAGER_H
#define VECTORMANAGER_H

#include <vector>
using namespace std;

void addNumber(vector<int>& numbers, int number);

int findMax(vector<int>& numbers);

void removeByPointer(vector<int>& numbers, int* number);

void incrementAll(vector<int>& numbers);

void printArray(const int* numbers, int size);

void swapValues(int& a, int& b);

#endif