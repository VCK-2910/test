#include <conio.h>
#include <stdio.h>
int main()
{
    int a[50], n;
    prinf("nhap so luong phan tu:");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
      printf("a[%d]= ", i);
      scanf("%d", &a[i]);
    }
    printf("Mang vua nhap la : ");
    for(int i=0;i<n;i++)
    {
       printf("%5d", a[i]); 
    }
    for(int i=0;i<n;i++)
 	     if (a[i]<0)
 	      { for(int j=i;j<n-1;j++) a[j]=a[j+1];
	         n=n-1;
	      }
  printf("\n Day so sau khi xoa la:");
  for(int i=0;i<n;i++)
		printf("%5d", a[i]);
}