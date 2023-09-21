#include<stdio.h>
#include<conio.h>

int main() {
	float a[50];
	int n;
	printf("ddd");
	printf("so luong phan tu :");
	scanf("%d", &n);
	printf("nhap tung phan tu cho mang:\n");
	
	for(int i=0; i<n; i++){
		printf("a[%d]=", i);
		scanf("%f", &a[i]);
	}
	printf("hien thi tung phan tu cua mang:\n");
	for(int i=0; i<n; i++){
		printf("%.1f ", a[i]);
	}
	
	float x;
	int kt;
	printf("\nnhap so thuc x:");
	scanf("%f", &x);
	for(int i=0; i<n; i++){
		if(a[i] == x)
			kt++;
	}
	if(kt==0){
		printf("so thuc x khong nam trong mang \n");
	} else {
		for(int i=0; i<=n-1; i++){
			if(a[i]==x){
				a[i]=0;
			}
		}
		printf("so thuc x co trong mang \n");
		printf("hien thi tung phan tu cua mang:\n");
	    for(int i=0; i<=n-1; i++){
		    printf("%.1f ", a[i]);
	    }
	}
      
	float sum=0;
	int count=0;
	for(int i=0; i<=n-1; i++){
		if(a[i]/2==0){
		 sum+=a[i];
		 count++;	
		 }
	}
	float tbc;
	tbc=sum/count;
	printf("\ntbc= %f", tbc);
	
	return 0;
}
