#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main() {
    int a, b, c, p;
    float s;
    printf("nhap lan luot cac canh cua tam giac:\n");
    printf("nhap a: "); scanf("%d", &a);
    printf("nhap b: "); scanf("%d", &b);
    printf("nhap c: "); scanf("%d", &c);

    p=(a+b+c) / 2.0;
    s=sqrt(p * (p - a) * (p - b) * (p - c));
    if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a && abs(a-c)<b && abs(a-b)<c && abs(c-b)<a)  {
        printf("3 do dai %d, %d, %d hop le de tao thanh mot tam giac\n", a,b,c);  
        printf("chu vi cua tam giac: %d", a+b+c);
        printf("\ndien tich cua tam giac: %.1f", s);
    } else 
        printf("3 do dai %d, %d, %d khong hop le de tao thanh mot tam giac", a,b,c);
    

}