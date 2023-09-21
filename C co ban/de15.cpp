#include<stdio.h>
#include<conio.h>

int main() {
	float a[50];
	int n;
	printf("so luong phan tu la:");
	scanf("%d", &n);
	
	printf("nhap tung phan tu cho mang:\n");
	
	for(int i=0; i<=n-1; i++){
		printf("a[%d]=", i);
		scanf("%f", &a[i]);
	}
	printf("hien thi tung phan tu cua mang:\n");
	for(int i=0; i<=n-1; i++){
		printf("%.1f ", a[i]);
	}
	
	printf("\nhien thi gia tri cac phan tu lon hon 0 cua mang:\n");
	for(int i=0; i<=n-1; i++){
		if(a[i]<=0){
			printf("khong co gia tri nao lon hon 0");
			break;
		} else printf("%.1f ", a[i]); break; 
	}
	
	float sum=0;
	int count=0;
	for(int i=0; i<=n-1; i++){
		if(a[i]>=0){
		 sum+=a[i];
		 count++;	
		}
	 
	}
	float tbc;
	tbc=sum/count;
	printf("\ntbc= %.1f", tbc);
	return 0;
}
