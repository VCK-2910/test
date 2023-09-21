#include<stdio.h>
#include<math.h>
#define MAX 100
 
void nhap (float a[], int &n)
{
  //s? d?ng vòng l?p do..while() d? yêu c?u ngu?i dùng nh?p vào s? ph?n t? c?a m?ng
    do
    {
        printf("\nNh?p vào s? ph?n t?: ");
        scanf("%d", &n);
        //n?u s? ph?n t? không h?p l? thì in ra màn hình
        if(n <= 0 || n > MAX)
        {
            printf("\nS? ph?n t? không h?p l?");
        }
    }while(n <= 0 || n > MAX);
    //dùng vòng l?p for d? nh?p các giá tr? cho m?ng
    for(int i = 0; i < n; i++)
    {
        printf("\nNh?p a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}
/* hàm xu?t các giá tr? trong m?ng ra màn hình */
void xuat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
    }
}
int main()
{
    int n;
    float a[MAX];
    nhap(a, n);
    xuat(a, n);
}
