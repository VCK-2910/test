#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main(){
    int n, sum=0;
    do{
        cin >> n;
    } while(n<1);
    
    for(int i = 1; i <= n; i++){
        if(n%1==0 && n%n==0){
            sum++;
        } 
    }
    if(sum==2){
        cout << "Yes";
    }else {
        cout << "No";
    }
    return 0;
}