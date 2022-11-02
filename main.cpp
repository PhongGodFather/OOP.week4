#include <iostream>
#include "IntArray.h"
using namespace std;
int main()
{
	IntArray temp;
	cin >> temp;
	/*cout << temp <<endl;
	cout << temp.getAt(2) << endl;
	temp.setAt(2, 365);
	cout << temp;*/

	/*IntArray temp2(4);
	cout << temp2 <<endl;
	temp2 = temp;
	cout << temp2 << endl;*/

	cout << temp[1] << endl;

	IntArray temp3 = temp.getArray();
	cout << temp3 << endl;

	int k[] = { 1,2,3 };
	temp.setArray(k, 3);
	cout << temp;
}