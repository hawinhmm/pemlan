#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int i, n;
		int npm[7] = {2,4,23,34,35,44,78};
		float ipk[7] = {3.5,3.7,3.3,3.1,3.9,3.3,3.0};
	
			printf("Data Mahasiswa A-Z : \n\n");
			for(i = 0; i<7 ; i++){
				printf("NPM : %d IPK : %f\n", npm[i],ipk[i]);
				
			}
			
			printf("\n\nData Mahasiswa Z-A : \n\n");
			for(i = 6 ; i>=0 ; i--){
				printf("NPM : %d IPK : %f\n", npm[i],ipk[i]);
			}		
			printf("\nMasukkan NPM yang dicari : ");
			scanf("%d", &n);
			
			for(i = 0; i<=6; i++){
				if(n == npm[i]){
					printf("NPM : %d IPK : %f\n", npm[i],ipk[i]);
					break;
				}
				else{
					printf("NPM yang anda masukkan salah!!");
				}
			}
							
	return 0;
}
