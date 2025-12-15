#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cout << "Masukkan tinggi segitiga : ";
	cin >> n;

	for (int i = 1; i <= n; i++) {

		for (int s = i; s < n; s++) {
			cout << " ";
		}

		for (int k = 1; k <= (2 * i - 1); k++) {
			cout << "*";
		}
		cout << endl;

	}
	return 0;
