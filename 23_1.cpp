#include <iostream>
using namespace std;

const int Nmax = 10;

int main()
{
	int arr[Nmax] = { 1, 4, 5, 2, 7, 8, 2, 5, 2, 11 };

	int prod = arr[0];
	for (int i = 1; i < Nmax; ++i)
		prod *= arr[i];

	cout << "Product of ";
	for (int i = 0; i < Nmax; ++i)
		cout << arr[i] << " ";
	cout << "is " << prod << endl;
	return 0;
}