#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

void sum(int a, int b) {
	if (a < 0 || b < 0)
		throw invalid_argument("���� �Դϴ�.");
	if (a > 10 || b > 10)
		throw out_of_range("10�� �Ѿ����ϴ�.");
	cout << a + b << endl;
}

int main() {
	int a = 6;
	int b = 5;

	try {
		sum(a, b);
	}
	catch (invalid_argument& e) {
		cout << e.what() << endl;
	}
	catch (out_of_range& e) {
		cout << e.what() << endl;
	}
}