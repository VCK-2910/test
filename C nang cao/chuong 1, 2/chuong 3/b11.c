#include <stdio.h>

int main() {
    int n;
    double sum = 0;

    printf("Nhap gia tri n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        double term = 1.0 / i;

        if (i % 2 == 0) {
            // Nếu i là số chẵn, trừ term ra khỏi tổng
            sum -= term;
        } else {
            // Nếu i là số lẻ, cộng term vào tổng
            sum += term;
        }
    }

    printf("Tong cua chuoi la: %lf\n", sum);

    return 0;
}
