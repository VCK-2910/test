#include<stdio.h>
#include<conio.h>

int main() {
	int n;
    int a[100];
    do{
	   printf("nhap gia tri n:");
	   scanf("%d",&n);
	   if(n<=0)
	   printf("ban da nhap sai yeu cau nhap lai\n");
	}while(n<=0);
    float sum = 0;
    int sign = 1;
    for(int i = 2; i <= n; i++){
        sum += (1.0/i) * sign;
        sign = -sign;
    }
    printf("S = %f\n", sum + 1);

    printf("nhap tung phan tu cho mang:\n");
	for(int i=0; i<=n-1; i++){
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	printf("hien thi tung phan tu cua mang:\n");
	for(int i=0; i<=n-1; i++){
		printf(" %d ", a[i]);
	}

    int min = a[0];
    for(int i=0; i<=n-1; i++){
		if(a[i] <= min){
            min = a[i];
        }
	}
	printf("\ngia tri nho nhat cua mang la: %d\n", min);
	
	return 0;
}

