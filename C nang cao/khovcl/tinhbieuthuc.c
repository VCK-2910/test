#include<stdio.h>
#include<math.h>

int main() {
    int n;
    do{
        printf("nhap n:");
        scanf("%d", &n);
    }while(n<=0);

    float tong=0;
    int giaithua=1;
    for(int i=1; i<=n; i++){
        giaithua*=i;
        tong += (pow(2,i)/giaithua);
    }
    printf("tong=%.1f", tong);

}