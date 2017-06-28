#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter n\n";
	cin >> n;
	
	long long product = n;
	for (int i = n + 1; i <= n + 5; ++i) {
		product *= i;
	}
	cout << "Product is " << product << endl;

	return 0;
}