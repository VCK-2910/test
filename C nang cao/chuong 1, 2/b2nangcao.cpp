#include<stdio.h>
#include<math.h>
int main() {
	float a, sum = 0;
	printf("nhap a= ");
	scanf("%f", &a);
	
	printf("so da nhap a= %7.3f", a);
	sum = 5*pow(a,3) - 4*pow(a,2) + 3*a - 2;
	printf("\ngia tri bieu thuc B= %f", sum);
	
	
	
	return 0;
}
