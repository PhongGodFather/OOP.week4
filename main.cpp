#include <iostream>
#include "IntArray.h"
using namespace std;
int main()
{
	int k[] = { 1,2,3,4 };
	int k_size = 4;
	//------------
	IntArray temp;
	cout << "Default constructor" << endl;
	//<<
	cout << temp << endl;
	//>>
	cin >> temp;
	cout << temp <<endl;

	cout << "Get/Set" << endl;
	
	cout << temp.getAt(2) << endl;
	temp.setAt(2, 365);
	cout << temp << endl;

	cout << "Get/Set size" << endl;
	cout << temp.getSize() << endl;
	temp.setSize(4);
	cout << temp << endl;

	cout << "Constructor with given size" << endl;
	IntArray temp2(4);
	cout << temp2 <<endl;
	cout << "operator =" << endl;
	temp2 = temp;
	cout << temp2 << endl;

	cout << "Get array" << endl;
	IntArray temp3 = temp.getArray();
	cout << temp3 << endl;
	cout << "Set array" << endl;
	temp.setArray(k, 3);
	cout << temp << endl;
	
	cout << "Constructor from int[] with given size" << endl;
	IntArray temp4(k, 4);
	cout << temp4 << endl;

	cout << "Constructor from another Array object" << endl;
	IntArray temp5(temp);
	cout << temp5 << endl;

	cout << "Bracket operator" << endl;
	cout << temp[1] << endl;
	cout << "Type-casting operator" << endl;
	int *temp6 = (int*)temp;
	for (int i = 0; i < temp.getSize(); i++,temp6++)
	{
		cout << *temp6 << " ";
	}
	cout << "\n";
	system("pause");
}