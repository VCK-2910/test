#include<stdio.h>

int main() {
    int n;
    printf("Nhap so diem: ");
    scanf("%d", &n);
    switch (n)
    {
    case 8: case 9: case 10:
        printf("Do - xep loai gioi");
        break;
    case 7:
        printf("Do - xep loai kha");
        break;
    case 5: case 6:
        printf("Do - xep loai trung binh");
        break;
    case 0: case 1: case 2: case 3: case 4:
        printf("Truot - xep loai kem");
        break;
    default:
        printf("Diem khong hop le");
        break;
    }
}