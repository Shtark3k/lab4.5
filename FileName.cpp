#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
	double x, y;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if ((y = (x - 2) * (x - 2) - 3 && y >= abs(x) && x >= 0) ||
			(y = (x - 2) * (x - 2) - 3 && y <= abs(x) && x <= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = -1 + rand() * (6.0) / RAND_MAX;
		y = -3 + rand() * (8.0) / RAND_MAX;

		if ((y = (x - 2) * (x - 2) - 3 && y >= abs(x) && x >= 0) || 
			(y = (x - 2) * (x - 2) - 3 && y <= abs(x) && x <= 0))

			cout << setw(8) << setprecision(4) << x << " "
				 << setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
				 << setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}
