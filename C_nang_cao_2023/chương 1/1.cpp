#include<stdio.h>

int USCLN(int a, int b){
    if(b==0) return a;
    return USCLN(b, b%a);
}

int BSCNN(int a, int b){
    return (a * b) / USCLN(a,b);
}

int main(){
    int a, b;
    printf("nhap a va b:");
    scanf("%d %d", &a, &b);
    printf("USCLN = %d\n", USCLN(a,b));
    printf("BSCNN = %d", BSCNN(a,b));

}
  