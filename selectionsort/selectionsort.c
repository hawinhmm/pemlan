#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int bil[5]={53,4,67,3,45};
	int a,b,temp,min;
	
	printf("selection sort : ");
	for(a=0; a<5; a++){
		min=a;
		for(b=a; b<5; b++){
			if(bil[b] < bil[min]){
				min=b;
			}
		}
		temp=bil[a];
		bil[a]=bil[min];
		bil[min]=temp;
	}
	for(a=0; a<5; a++){
		printf("%d ", bil[a]);
	}
	return 0;
}
