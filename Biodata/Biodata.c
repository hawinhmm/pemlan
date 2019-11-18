#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	system ("color B");
	char nama[20],npm[20],alamat[20],lahir[20],email[20];
	
	printf("=== 			 [INPUT BIODATA]		    ===\n\n");	
	printf("masukan nama : ");
	scanf("%s", &nama);
	printf("masukan npm : ");
	scanf("%s", &npm);
	printf("masukan alamat : ");
	scanf("%s", &alamat);	
	printf("masukan tanggal lahir : ");
	scanf("%s", &lahir);
	printf("masukan alamat email : ");
	scanf("%s", &email);
	system("cls");
	
	printf("=== 			 [BIODATA]		    ===\n\n");
	
	printf("nama : %s",nama);
	printf("\nnpm : %s",npm);
	printf("\nalamat : %s",alamat);
	printf("\ntanggal lahir : %s",lahir);
	printf("\nalamat email : %s",email);
	
	return 0;
}
