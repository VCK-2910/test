#include<stdio.h>

int main() {
    float x;
    printf("nhap x=");
    scanf("%f", &x);
    if(x>=0){
        printf("so thuc x la %.2f", x);
    } else printf("x la so am khong co gia tri can bac 2");
}