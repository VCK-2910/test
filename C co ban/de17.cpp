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
		printf("%d ", a[i]);
	}
	
	printf("\ncac phan tu co gia tri lon hon 9:\n");
	int kt=0;
	for(int i=0; i<=n-1; i++){
		if(a[i]>=9){
			kt++;
			if(kt==0){
		       printf("khong co");
	        } else {
		       printf("%d ", a[i]);
	        }
		} 
	}
	
	
	printf("\ntbc cac phan tu co gia tri chia het cho 7: ");
	int tong=0 ,dem=0;
	float tbc=0;
	for(int i=0; i<=n-1; i++){
		if(a[i]%7==0){
			tong=tong+a[i];
			dem++;
			tbc=tong/dem;
	        printf("%.1f", tbc);
		} else printf("\nkhong co gia tri nao chia het cho 7\n"); 
		break;
	}
	
	
	
	int min=a[0];
	for(int i=1; i<n; i++){
		if(min>a[i]){
			min=a[i];
		}printf("\nmin= %d", min);
	}
	
	
	printf("\ntinh tong gia tri ca phan tu o vi tri chan\n");
	int sum=0;
	for(int i=0; i<=n-1; i++){
		if(i%2==0){
			sum=sum+a[i];
		}
	}
	printf("sum= %d\n", sum);
	
	int c=0;
	for(int i=0; i<n-1; i++){
		if(a[i]>=30&&a[i]<=150.5){
			c++;
			printf("%d ",a[i]);
		}
	}
	
	
	return 0;
}
