#include <stdio.h>
void main() {
	int n, i = 1;
	printf("Enter an integer number : ");
	scanf("%d", &n);
	do {
		printf("%d * %d = %d\n",n,i,n*i );
		i++;
	} while (i<=10 ); 
}