#include<stdio.h>
#include<math.h>

void nhaphephuongtrinh() {
    
}

int main() {
    float a,b,c,d,e,f;
    printf("he phuong trinh bac nhat 2 an:\nax+by=c\ndx+ey=f");
    printf("\nnhap a= ");
    scanf("%f", &a);
    printf("nhap b= ");
    scanf("%f", &b);
    printf("nhap c= ");
    scanf("%f", &c);
    printf("nhap d= ");
    scanf("%f", &d);
    printf("nhap e= ");
    scanf("%f", &e);
    printf("nhap f= ");
    scanf("%f", &f);

    printf("\nhe phuong trinh da nhap:\n");
    printf("%.1fx + %.1fy = %.1f\n", a, b, c);
    printf("%.1fx + %.1fy = %.1f", d, e, f);

    float D, Dx, Dy;
    D=a*e-b*d;
    Dx=c*e-b*f;
    Dy=a*f-c*d;
    if(D == 0){
        if(Dx + Dy == 0){
            printf("\nhe phuong trinh vo so nghiem");
        } else printf("\nhe phuong trinh vo nghiem");
    } else {
        printf("\nhe phuong trinh co 1 he duy nhat\nx=%.1f\ny=%.1f",Dx/D,Dy/D);
        printf("\nHe phuong trinh co nghiem (x, y) = (%.1f, %.1f)", Dx/D,Dy/D);
    }
}