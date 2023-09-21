#include <stdio.h>
 
int main() {
   int n=5,i,j;
   printf("n= ");
   scanf("%d", &n);  
   for(i = 1; i <= n; i++) {
	  for(j = 1; j <= n-i; j++)
         printf("  ");//khoang trong phia truoc
      
	  int cnt = 1;
      for(j = 1; j <= 2*i-1; j++){
         if(j<i){
         	printf("%d ", cnt), cnt++;
		 }else 
		    printf("%d ", cnt), cnt--;
    }
      printf("\n");
   }
   return 0;
}
