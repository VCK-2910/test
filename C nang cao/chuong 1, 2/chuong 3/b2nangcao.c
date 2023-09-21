#include<stdio.h>
#include<math.h>

int main() {
    float a,b,c;
    printf("phuong trinh ax^2+bx+c=0");
    printf("\nnhap a= ");
    scanf("%f", &a);
    printf("nhap b= ");
    scanf("%f", &b);
    printf("nhap c= ");
    scanf("%f", &c);

    if(a==0){
        if(b==0){
            if(c==0){
                printf("\nphuong trinh vo so nghiem");
            } else printf("\nphuong trinh vo nghiem");
        }else printf("\nphuong trinh co nghiem x = %f", -c/b);
    } else {
        float delta = b*b-4*a*c;
        if(delta > 0){
            printf("phuong trinh co 2 nghiem\n");
            printf("x1= %f", (-b+sqrt(delta))/(2*a));
            printf("\nx2= %f", (-b-sqrt(delta))/(2*a));
        } else if(delta==0){
            printf("phuong trinh co 1 nghiem duy nhat: x1=x2= %f", -b/2*a);
        } else {
            printf("\nphuong trinh vo nghiem");
        }
    }
    
}