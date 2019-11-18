#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int tabel[3][3][3]={{{8,6,2},{5,4,2},{4,9,1}}
						,
						{{7,8,2},{-1,3,1},{8,9,7}}
						,
						{{2,-1,7},{7,6,5},{3,8,-1}}};
	float hasil, l1, l2;
		
	l1= sqrt((pow(tabel[0][0][0] - tabel[0][1][0],2))+(pow(tabel[0][0][1] - tabel[0][1][1],2))+(pow(tabel[0][0][2] - tabel[0][1][2],2)));
	l2= sqrt((pow(tabel[0][1][0] - tabel[0][2][0],2))+(pow(tabel[0][1][1] - tabel[0][2][1],2))+(pow(tabel[0][1][2] - tabel[0][2][2],2)));			
	hasil=l1+l2;
	printf("Tabel 1 : \n");
	printf("Lintasan A ke B adalah %f \nLintasan B ke C %f \n",l1, l2);
	printf("Hasil = %f\n\n", hasil);
				
	l1= sqrt((pow(tabel[1][0][0] - tabel[1][1][0],2))+(pow(tabel[1][0][1] - tabel[1][1][1],2))+(pow(tabel[1][0][2] - tabel[1][1][2],2)));
	l2= sqrt((pow(tabel[1][1][0] - tabel[1][2][0],2))+(pow(tabel[1][1][1] - tabel[1][2][1],2))+(pow(tabel[1][1][2] - tabel[1][2][2],2)));			
	hasil=l1+l2;
	printf("Tabel 2 : \n");
	printf("Lintasan A ke B adalah %f \nLintasan B ke C %f \n",l1, l2);
	printf("Hasil = %f\n\n", hasil);
				
	l1= sqrt((pow(tabel[2][0][0] - tabel[2][1][0],2))+(pow(tabel[2][0][1] - tabel[2][1][1],2))+(pow(tabel[2][0][2] - tabel[2][1][2],2)));
	l2= sqrt((pow(tabel[2][1][0] - tabel[2][2][0],2))+(pow(tabel[2][1][1] - tabel[2][2][1],2))+(pow(tabel[2][1][2] - tabel[2][2][2],2)));			
	hasil=l1+l2;
	printf("Tabel 3 : \n");
	printf("Lintasan A ke B adalah %f \nLintasan B ke C %f \n",l1, l2);
	printf("Hasil = %f\n\n", hasil);
							
	return 0;
}
