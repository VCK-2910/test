#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	while (n <= 100) {
		for(int i=n; i<=100; i+=2){
			printf("%d ",i);
		}
	
	}
	return 0;
}
