#include<stdio.h>
#include<math.h>
typedef int bool;
#define true 1
#define false 0


int main() {
    int a, b;
    printf("nhap a= ");
    scanf("%d", &a);
    printf("nhap b= ");
    scanf("%d", &b);

    if(a>b){
        printf("a>b=%d\n", true);
    } else  printf("a>b=%d\n", false);

    printf("b+5=%d\n", b+5);
    printf("a^2=%d\n", pow(a,2));
   
    if(b+5 != pow(a,2)) {
        printf("b+5!=a^2=%d\n", true);
    } else printf("b+5!=a^2=%d\n", false);

     if((b+5 != pow(a,2)) && a>b) {
        printf("(a>b) and (b+5!=a^2)=%d\n", true);
    } else 
        printf("(a>b) and (b+5!=a^2)=%d\n", false);

    printf("b-5=%d\n", b-5);
    if(b-5 < a){
        printf("b-5<a=%d\n", true);
    } else  
        printf("b-5<a=%d\n", false);
    
    if(a>b && (b+5!=a^2) || (b-5<a) ) {
        printf("(a<b) and (b+5!=a^2) or (b-5<a) =%d", true);
    } else printf("(a<b) and (b+5!=a^2) or (b-5<a) =%d", false);
}