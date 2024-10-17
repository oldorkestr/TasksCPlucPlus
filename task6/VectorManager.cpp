#include "VectorManager.h"
#include <iostream>

using namespace std;

void addNumber(vector<int>& numbers, int number) {
	numbers.push_back(number);
}

int findMax(vector<int>& numbers) {
	if (numbers.empty())
	{
		cout << "Vector is empty";
		return - 1;
	}
	else if (numbers.capacity() == 1) {
		return numbers[0];
	}
	if (numbers.capacity() > 1)
	{
		int m = numbers[0];
		for (int i = 1; i < numbers.capacity(); i++) {
			if (numbers[i] > m) {
				m = numbers[i];
			}
		}
		return m;
	}
}

void removeByPointer(vector<int>& numbers, int* number) {
	auto it = find(numbers.begin(), numbers.end(), number);
	if (it != numbers.end())
	{
		numbers.erase(it);
	}
	else cout << "No element was found!";
}

void incrementAll(vector<int>& numbers) {
	for (int& num: numbers)
	{
		num++;
	}
}

void printArray(const int* numbers, int size) {

}

void swapValues(int& a, int& b) {

}