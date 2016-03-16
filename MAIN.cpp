#include<iostream>
#include "dice.h"
#include<time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	dice Mydice;
	int x;
	int y;
	int z[10] = { 5, 2, 11, 92, 71, 28, 111, 22, 43, 22 };

	cout << "enter rolls" << endl;
	cin >> y;
	cout << endl;

	for (x = 1; x <= y; x++)
	{
		Mydice.roll();
		Mydice.Average();
		Mydice.print();
		cout << endl;
	}



	cout << endl;
	cout << "average: " << endl << Average(10, z) << endl;

	return 0;
}