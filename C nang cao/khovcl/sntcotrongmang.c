#include <conio.h>
#include <stdio.h>
int main()
{ 
    int a[50], n;
   printf("Nhap so luong phan tu : ");    
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {   printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Mang vua nhap la : ");
    
for(int i=0;i<n;i++)
    {
        printf("%5d", a[i]);
    }
    int Dem = 0;
    printf("\nDanh sach cac so nguyen to : ");
    for(int i=0;i<n;i++)
    {
        if(a[i] > 0)
        {
            int SL_Uoc = 0;
            for(int j=1;j<=a[i];j++)
            {
                if(a[i]%j == 0)
                {
                    SL_Uoc++;
                }
            }
            if(SL_Uoc == 2)
            {
                Dem++;
                printf("%5d", a[i]);
            }
        }
    }
    if(Dem == 0){
        printf("khong co");
    }
    printf("\nSo luong so nguyen to : %d", Dem);
}
