#include <iostream>

using namespace std;
void fib(int n) {
	int *s = new int[n];
	s[0] = 0;
	s[1] = 1;
	for (int i = 2; i < n; i++) {
		s[i] = s[i - 1] + s[i - 2];
	}
	for (int i = 0; i < n; i++)
		cout << s[i] << endl;
}
int main() {
	fib(10);
	return 0;
}