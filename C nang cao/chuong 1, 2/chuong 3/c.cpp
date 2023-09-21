#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main() {
	long long a,b;
    cin >> a >> b;
    unsigned long long sum = 1;
    int tong = a*b;
    for(long long i = a; i <= b; i++){
        sum *= i;
    }
    cout << endl;
    cout << sum << endl; 
    cout << "hien len ne";
    system("pause");
    return 0;
}
