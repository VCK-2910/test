#include<stdio.h>

int main() {
    char c;
    printf("nhap mot ki tu:"); scanf("%c", &c);
    
    (c>='a'&&c<='z')?printf("ky tu chu thuong"):
    (c>='A'&&c<='Z')?printf("ky tu chu hoa"):
    (c>='0'&&c<='9')?printf("ky tu chu so"):
    printf("ky tu dac biet");
    return 0;
}