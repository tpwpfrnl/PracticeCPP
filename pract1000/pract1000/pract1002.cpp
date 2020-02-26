#include <iostream>
using namespace std;

int main() {
	int caseN = 0;
	int x1 = 0;
	int y1 = 0;
	int r1 = 0;
	int x2 = 0;
	int y2 = 0;
	int r2 = 0;

	cin >> caseN;
	if (caseN >= 0) {
		for (int i = 0; i < caseN ; i++) {
			cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
			if (x1 == x2 && y1 == y2 && r1 == r2) {
				cout << -1 << endl;
			}
			else if ((x1 == x2 && y1 == y2) || ((r1 + r2) * (r1 + r2) < ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1))) || ((r2 - r1) * (r2 - r1) > ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)))) {
				cout << 0 << endl;
			}
			else if (((r1 + r2) * (r1 + r2) == ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)))|| ((r2 - r1) * (r2 - r1) == ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)))){
				cout << 1 << endl;
			}
			else {
				cout << 2 << endl;
			}
		}
	}
	return 0;
}