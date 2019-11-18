#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int x,y,p,u;

	printf("masukan angka : ");
	scanf("%d",&x);
	printf("masukan pangkat : ");
	scanf("%d",&y);
	
	for (p=1;p<=y;p++)
	{u=u*x;}
	
	printf("%d pangkat %d = %d",x,y,u);
	return 0;
}
