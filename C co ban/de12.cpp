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
	
	int sum=0;
	for(int i=0; i<=n-1; i++){
		if(i%2==0)
		sum+=a[i];
	}
	printf("\nsum= %d\n", sum);
	
	printf("hien thi phan tu le cua mang:\n");
    for(int i=0; i<=n-1; i++){
		if(a[i]%2!=0){
		printf(" %d ", a[i]);} else printf("khong co phan tu le"); 
		break;
	}
	return 0;
}
