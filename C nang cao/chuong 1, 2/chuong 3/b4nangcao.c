#include<stdio.h>

int main() {
    int a;
    printf("nhap so (0-9)\n");
    do{
        printf("nhap a= ");
        scanf("%d", &a);
        if(a<0 || a>9) printf("yeu cau nhap lai\n");
    }while(a<0 || a>9);

    switch (a)
    {
    case 0 :
        printf("zero");
        break;
    case 1 :
        printf("one");
        break;
    case 2 :
        printf("two");
        break;
    case 3 :
        printf("three");
        break;
    case 4 :
        printf("four");
        break;
    case 5 :
        printf("five");
        break;
    case 6 :
        printf("six");
        break;
    case 7 :
        printf("seven");
        break;
    case 8 :
        printf("eight");
        break;
    case 9 :
        printf("nine");
        break;
    default:
        printf("so a khong phai chu so");
        break;
    }
    



}