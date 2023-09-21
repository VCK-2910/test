#include<stdio.h>
#include<math.h>
int main() {
	float a, sum = 0;
	printf("nhap a= ");
	scanf("%f", &a);
	
	printf("so da nhap a= %6.2f", a);
	sum = log(pow(a,2))-atan(3*a);
	printf("\nGia tri bieu thuc B= %f", sum);
	
	return 0;
}
