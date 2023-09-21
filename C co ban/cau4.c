#include<stdio.h>
#include<conio.h>

int main() {
	int n;
	do{
	   printf("nhap gia tri n:");
	   scanf("%d",&n);
	   if(n<1||n>100)
	   printf("ban da nhap sai yeu cau nhap lai\n");
	}while(n<1||n>100);
	
	for(int i=1; i<=n; i+=2)
	printf("%d ", i);
	
	int sum=0, count=0, tong=0, tbc=0;
	for(int i=1; i<=n; i++){
	if(i%3==0)
	printf("%d ", i);
	sum+=i;
	}
	printf("sum=%d ", sum);
	
    for(int j=1; j<=n; j++){
	if(j%2==0)
	if(j%5==0)
	printf("%d ", j);
	tong+=j;
	count++;
	}
	tbc=tong/count;
	printf("tbc=%d ", tbc);
	
	
	return 0;
}

