#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,temp;
	int bil[5]={23,5,99,45,13};
	
	printf("insertion sort : ");
	for(a=0; a<5; a++){
		for(b=a; b>00 && bil[b] < bil[b-1]; b--){
			temp=bil[b-1];
			bil[b-1]=bil[b];
			bil[b]=temp;
			}
	}
	for(a=0; a<5; a++){
		printf(" %d ",bil[a]);
	}
	return 0;
}
