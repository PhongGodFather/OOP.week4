#pragma once
#ifndef _IntArray_
#define _IntArray_
#include <iostream>
using namespace std;
class IntArray
{
	int* arr, size;
public:
	IntArray();
	IntArray(int);
	IntArray(const IntArray&);
	IntArray(int*, int);
	~IntArray();
	int getSize();
	void setSize(int);
	int getAt(int);
	void setAt(int, int);
	IntArray getArray();
	void setArray(int*, int);
	void operator=(const IntArray);
	// Bracket operator []
	int operator[](int);
	// Type-casting operator (int*)
	operator int* () const;
	friend istream& operator>>(istream& in, IntArray& temp);
	friend ostream& operator<<(ostream& out, IntArray& temp);
};
istream& operator>>(istream& in, IntArray& temp);
ostream& operator<<(ostream& out, IntArray& temp);
#endif // !_IntArray_
