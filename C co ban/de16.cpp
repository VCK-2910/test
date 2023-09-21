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
	
    printf("\nphan tu cua mang theo thu tu giam dan:\n");
    int b;
    for(int i=0; i<n; i++){
    	for(int j=i+1; j<n; j++){
    		if(a[i]<a[j]){
    		b=a[i];
    		a[i]=a[j];
    		a[j]=b;
			}
		}
	}
	for(int i=0; i<=n-1; i++){
		printf("%.1f ", a[i]);
	}
	return 0;
}
