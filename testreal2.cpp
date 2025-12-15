#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cout << "Masukkan jumlah baris segitiga pascal : ";
	cin >> n;

	for (int i = 0; i <= n; i++) {

		for (int s = 0; s <= n - i; s++) {
			cout << " ";
		}

		int val = 1;
		for (int j = 0; j < i; j++) {
			cout << "*";
		}

		for (int k = 0; k+1 < i; k++) {
			cout << "*";

		}
		cout << endl;

	}
	return 0;
}

