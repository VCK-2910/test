#include<stdio.h>
#include<conio.h>
 int main()
 {
 	int a[50];
 	int n ;

 	printf("nhap so luong phan tu \n");
 	scanf("%d",&n);
 	
 	printf("nhap tung phan tu cua mang \n");
 	for(int i=0;i<n;i++){
 	printf("a[%d]=",i);
 	scanf("%d",&a[i]);
    }
    printf("hien thi tunng gia tri cua mang \n");
    for(int i=0;i<n;i++){
    	printf ("%d ",a[i]);
	}
	
 	for(int i=0;i<n;i++){
 		if(a[i]>0){
 			printf("%d ",a[i]);
		 }
	 }
 }
