#include <iostream>
using namespace std;

int one = 0;
int zero = 0;
int caseN = 0;
int num = 0;
int d[100];

int fibonacci(int n);

int main() {

	cin >> caseN;
	if (caseN >= 0) {
		for (int i = 0; i < caseN; i++) {
			cin >> num;
			fibonacci(num);
			cout << zero << " " << one << endl;
			zero = 0;
			one = 0;
		}
	}

	return 0;
}

int fibonacci(int n) {
	if (n == 0) {
		zero = zero + 1;
		return 1;
	}
	else if (n == 1) {
		one = one + 1;
		return 1;
	}
	else if (d[n] != 0) {
		return d[n];
	}
	else {
		d[n] = fibonacci(n - 1) + fibonacci(n - 2);
	}
}