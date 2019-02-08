/*
	Task: Please write a program that:
	1. Initiates some vector by some integer values.
	2. Includes 2 functions:
		a) for output a vector content
		b) for swapping  neighbors even and odd elements (example 1,2,3,4 => 2,1,4,3)
		   the function returns true, if replacing all elements is possible (even number of elements)
		   and false if the last element can not be swapped (odd number of elements)
	3. Outputs vector content before and after swapping.
*/

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

vector<int> v{ 1,-4,3,-2,3,5,6,-7 };

void output_func(vector<int>v) {
	for (size_t i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

void swap_func(vector<int> &v) {
	for (size_t i = 0; i < v.size(); ++i) {

		if (v[i] % 2==0) {
			int tmp = v[i];
			v[i] = v[i - 1];
			v[i - 1] = tmp;

		}
	}
}

int main()
{
	output_func(v);
	cout << "Show swaped vector:" << endl;
	swap_func(v);
	output_func(v);

	return 0;
}
