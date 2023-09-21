#include<stdio.h>
#include<conio.h>

int main() {
	int a[50];
	int n;
	printf("so luong phan tu la:");
	scanf("%d", &n);
	printf("nhap tung phan tu cho mang:\n");
	
	for(int i=0; i<=n-1; i++){
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	printf("hien thi tung phan tu cua mang:\n");
	for(int i=0; i<=n-1; i++){
		printf(" %d ", a[i]);
	}
	
	printf("\nhien thi cac so duong cua mang:\n");
	for(int i=0; i<=n-1; i++){
		if(a[i] > 0)
		printf(" %d ", a[i]);
	}
	int max=a[0];
	for(int i=1; i<n; i++)
	if(a[i]>max)
	max=a[i];
	printf("\nmax= %d", max);
	return 0;
}
