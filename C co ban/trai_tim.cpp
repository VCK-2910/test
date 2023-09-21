#include<stdio.h>

int main() {
	int m=6, n=7;
	int i,j;
	for( i=1; i<7; i++) {
		for( j = 1; j <= 7; j++) {
			if (!((i == 1 && ( j == 1 || j == 4 || j == 7))
			|| (i == 4 && (j == 1 || j == 7))
			|| (i == 5 && (j == 1 || j == 2 || j == 6|| j == 7))
			|| (i == 6 && (j == 1 || j == 2 || j == 3 || j == 5 || j == 6|| j == 7)))){
			printf(" * ");}else printf("   ");
		}
		printf("\n");
	}
	printf("      MAI YEU <3");
	printf("\n   LE THI ANH HONG");
	return 0;
}
