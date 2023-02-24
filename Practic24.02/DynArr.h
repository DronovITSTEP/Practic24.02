#pragma once
#include <iostream>
using namespace std;


class DynArr {
	int* arr;
	int size;

public:
	DynArr(int sizeP) : arr{ new int[sizeP] }, size{ sizeP } {
		cout << "DynArr constructed for " << size
			<< " elements, for " << this << endl;
	}
	DynArr() : DynArr{5}{}


	DynArr(const DynArr& d) : arr{ new int[d.size]}, size{d.size} {
		cout << "DynArr copy constructed for " << size
			<< " elements, for " << this << endl;
		for (int i{ 0 }; i < size; i++) {
			arr[i] = d.arr[i];
		}

	}

	int getElem(int index) { return arr[index]; }
	void setElem(int index, int val) { arr[index] = val; }
	void print();
	void randomize();

	~DynArr() {
		delete[] arr;
		cout << "DynArr destructed for " << size
			<< " elements, for " << this << endl;
	}
};

void DynArr::print() {
	for (int i{ 0 }; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void DynArr::randomize() {
	for (int i{ 0 }; i < size; i++) {
		 arr[i] = rand()%15;
	}
}