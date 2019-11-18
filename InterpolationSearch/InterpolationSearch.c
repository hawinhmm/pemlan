#include <stdio.h>
#include <stdlib.h>

int main(){
	int Angka[100];
	int i,j,q,temp,atas,tengah,bawah,cari,k,posisi;
	int batas=7;

	printf("\n Masukkan Angka = \n",batas);
	for(i=0;i<batas;i++){
		printf("  ");
		scanf("  %d",&Angka[i]);
		fflush(stdin);
	}	
	printf("\n");
	for(i=batas-2;i>=0;i--){
		for(j=0;j<=i;j++){
			if(Angka[j]>Angka[j+1]){
				temp=Angka[j];
				Angka[j]=Angka[j+1];
				Angka[j+1]=temp;
			}
		}
	}
	for(i=0;i<batas;i++){
		printf("%d",Angka[i]);
	}
	printf("\n\n Cari Angka = "); 
	scanf("%d", &cari);
	
	k=0,atas=0,bawah=batas;
	do{
		posisi=((cari-Angka[atas])/(Angka[bawah]-Angka[atas]))*(bawah-atas)+atas;
	if(Angka[posisi]==cari){
		k++;
		break;
	}
	if(Angka[posisi]>cari){
		bawah=posisi-1;
	}
	else if(Angka[posisi]<cari){
		atas=posisi+1;
		}
	}
	while(cari>=Angka[atas]&&cari<=Angka[bawah]);
	if(k==1){
		printf(" %d ditemukan pada urutan ke %d\n", cari, posisi+1);
	}
	else{
		printf(" %d tidak ditemukan\n", cari);
		}
	
	return 0;
}
