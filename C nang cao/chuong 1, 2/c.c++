#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main(){
    int n,m;
    int sum = 0;
    do{
        cin >> m >> n;
    } while(m>=n);
    for(int i = m;i <= n;i++){
        for(int j = 2; j <= sqrt(n);j++){
            if(i%j==0){
                sum++;
            }
        }
    }
    cout << sum;
    return 0;
}