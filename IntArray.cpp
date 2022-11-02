#include "IntArray.h"
IntArray::IntArray()
{
	size = 0;
	arr = NULL;
}
IntArray::IntArray(int _size)
{
	arr = new int[_size];
	size = _size;
	for (int i = 0; i < size; i++)
		arr[i] = 0;
}
IntArray::IntArray(const IntArray&temp)
{
	size = temp.size;
	arr = new int[size];
	for (int i = 0; i < size; i++)
		arr[i] = temp.arr[i];
}
IntArray::IntArray(int* a , int _size) {
	size = _size;
	arr = new int[_size];
	for (int i = 0; i < size; i++,a++)
		arr[i] = *a;
}
IntArray::~IntArray()
{
	size = 0;
	delete[]arr;
}
int IntArray::getAt(int pos)
{
	if (pos < 0 || pos >= size)
	{
		cout << "Invalid position" << endl;
		return -1;
	}
	return arr[pos];
}
void IntArray::setAt(int pos, int val)
{
	if (pos < 0 || pos >= size)
	{
		cout << "Invalid position" << endl;
		return;
	}
	arr[pos] = val;
}
int IntArray::getSize()
{
	return size;
}
void IntArray::setSize(int k)
{
	if (k < 0)
	{
		cout << "Invalid" << endl;
		return;
	}
	if (k >= size)
	{
		int* temp = new int[k];
		for (int i = 0; i < size; i++)
			temp[i] = arr[i];
		const int oo = 1e8;
		arr = new int[k];
		for (int i = 0; i < size; i++)
			arr[i] = temp[i];
		for (int i = size; i < k; i++)
			arr[i] = oo;
		delete[] temp;
	}
	size = k;
}
IntArray IntArray::getArray()
{
	IntArray temp;
	temp.setSize(size);
	for (int i = 0; i < temp.size; i++)
		temp.arr[i] = arr[i];
	return temp;
}
void IntArray::setArray(int *k, int t)
{
	size = t;
	arr = new int[size];
	for (int i = 0; i < t; i++)
		arr[i] = k[i];
}
istream& operator>>(istream& in, IntArray& temp)
{
	int t;
	cout << "Nhap so luong phan tu: ";
	in >> t;
	while (t < 0)
	{
		cout << "Invalid: ";
		in >> t;
	}
	temp.setSize(t);
	temp.arr = new int[temp.size];
	for (int i = 0; i < temp.size; i++)
	{
		cout << "Phan tu thu " << i + 1 << " : ";
		in >> temp.arr[i];
	}
	return in;
}
ostream& operator<<(ostream& out, IntArray& temp)
{
	for (int i = 0; i < temp.size; i++)
		out << temp.arr[i] << " ";
	return out;
}
void IntArray::operator=(const IntArray temp)
{
	setSize(temp.size);
	arr = new int[size];
	for (int i = 0; i < size; i++)
		arr[i] = temp.arr[i];
}

int IntArray::operator[](int k)
{
	if (k >= size && k < 0) {
		cout << "Invalid position ";
		return -1;
	}
	return arr[k];
}
IntArray::operator int *()const
{
	return arr;
}