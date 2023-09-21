#include<iostream>

using namespace std;

int main() {
	int a, b ,c, max;
    cout << "nhap 3 so ngau nhien:";
	cin >> a >> b >> c;
	max = (a >= 0 && a >=c )? a : ((b >= c) ? b : c);
	cout << max;
	return 0;
}
