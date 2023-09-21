#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int a;
	int b;
	
	printf("enter a : ");
	scanf("%d", &a);
	
	printf("enter b : ");
	scanf("%d", &b);
	
	printf("%d / %d = %f\n", a, b, (float)a / b);

	return 0;
}
