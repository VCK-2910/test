#include<stdio.h>
#include<conio.h>

int main() {
	
	int h,c;
	printf("nhap so hang:");
	scanf("%d",&h);
	printf("nhap so cot:");
	scanf("%d",&c);
	
	printf("nhap gia tri:\n");
	int a[h][c];
	for(int i=0; i<h; i++){
		for(int j=0; j<c; j++){
			printf("a[%d][%d]=", i,j);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("\nma tran:\n");
	for(int i=0; i<h; i++){
		for(int j=0; j<c; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	 
	//ma tran vuong 
	printf("duong cheo phu:\n");
	for(int i=0; i<h; i++){
			printf("%d ", a[i][h-1-i]);
		
	}

	/*printf("\ngia tri lon nhat:\n");
	int max;
	for(int i=0; i<h; i++){
		for(int j=0; j<c; j++){
			if(max<a[i][j]) {
				max=a[i][j];
			}
			
		}
	}
	printf("max=%d", max);
	
	printf("\ntong duong cheo chinh:\n");
	int sum=0;
	for(int i=0; i<h; i++){
		for(int j=0; j<c; j++){
			if(i==j){
				sum+=a[i][j];
			}
		}
	}
	printf("sum=%d", sum);*/
	
	return 0;
}
