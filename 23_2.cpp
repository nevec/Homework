#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double Pi = 3.1415926;
	const double inner_r = 20;
	double outer_r = 0;

	cout << "Enter outer radius\n";
	cin >> outer_r;

	if (outer_r <= inner_r) {
		cout << "Outer radius must be bigger than inner." << endl;
		return 0;
	}
	double s = Pi*(pow(outer_r, 2.0) - pow(inner_r, 2.0));
	cout << "Ring square = " << s << endl;

	return 0;
}