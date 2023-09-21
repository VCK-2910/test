#include<stdio.h>

int main() {
	float a, b;
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
    
	printf("\nCac so da nhap: \n");
    printf("a =%5f \n", a);
	printf("b =%12f \n", b);
	
	printf("a + b =%f \n", a + b);
    printf("a - b =%f \n", a - b);
    printf("a * b =%f \n", a * b);
    printf("a / b =%f \n", a / b);
    return 0;
}
