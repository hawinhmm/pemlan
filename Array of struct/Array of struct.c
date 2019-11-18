#include <stdio.h>
#include <stdlib.h>

struct mahasiswa
{
	int npm;
	float ipk;
};
typedef struct mahasiswa mhs;

int main()
{
	int i,n;
	
	mhs data[2];
	data[0].npm = 2;
	data[0].ipk = 3.5;
	
	data[1].npm = 28;
	data[1].ipk = 3.6;
	
	data[2].npm = 29;
	data[2].ipk = 3.9;
	
	printf("Data Mahasiswa A-Z : \n\n");
	for(i=0 ; i<3 ; i++){
		printf(" NPM : %d IPK %f \n", data[i].npm, data[i].ipk);
		}
		printf("\n\nData Mahasiswa Z-A : \n\n");
			for(i=2 ; i>=0 ; i--){
				printf(" NPM : %d IPK %f \n", data[i].npm, data[i].ipk);
				}
				printf("\nMasukkan NPM yang dicari : ");
				scanf("%d", &n);
			
				for(i=0; i<=2; i++){
					if(data[i].npm == n){
						printf("NPM : %d IPK : %f\n", data[i].npm,data[i].ipk);
						break;
					}
					else{
					printf("NPM yang anda masukkan salah!!");
				}
			}
	

	return 0;
}
