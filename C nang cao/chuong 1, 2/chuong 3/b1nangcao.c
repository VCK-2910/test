#include<stdio.h>
#include<math.h>

int main() {
    float a,b;
    printf("phuong trinh ax+b=0");
    printf("\nnhap a= ");
    scanf("%f", &a);
    printf("nhap b= ");
    scanf("%f", &b);

    
    /*if(a == 0 && b != 0){
        printf("\nphuong trinh khong co nghia");
    } else if (a==0 && b==0){
        printf("\nphuong trinh vo so nghiem");
    } else if (a!=0){
        printf("\nphuong trinh co nghiem x = %f", -b/a);
    }*/

    if(a==0){
        if(b==0){
            printf("\nphuong trinh vo so nghiem");
        } else printf("\nphuong trinh vo nghiem");
    } else printf("\nphuong trinh co nghiem x = %f", -b/a);


    return 0;
}