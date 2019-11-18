#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int bilangan(int x, int y)
{
	if(y==0){
		return 1;
	}
	else{
		return x*bilangan(x,y-1);
	}
}

main ()
{
	int x,y;
	printf("Masukkan Angka: ");
	scanf("%d",&x);
	printf("Masukkan Pangkat: ");
	scanf("%d",&y);
	printf("%d pangkat %d = %d\n",x,y,bilangan(x,y));
		
	return 0;
}
