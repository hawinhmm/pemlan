#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main ()
{
    float  nilai[30],totl_nil=0,nil2[20];
    int i;
    char MK[5][30];
    char huruf[30];
    int total_sks=21;
    int bnyk_MK=7;
    float ipk;
    
	printf("Nama : Moch Hawin Hamami\n");
	printf("NPM : 18081010038\n\n");
	
	  
    for(i=0;i<bnyk_MK;i++)
    {
        printf("===================================");
        printf("\nNama mata kuliah ke-%i = ", i+1);
        fflush(stdin);
        scanf("%c",&MK[i]);
      
        printf ("Nilai matakuliah ke-%i = ",i+1);
        fflush(stdin);
        scanf("%f",&nilai[i]);
      
      
        if (nilai[i]>=80)
        {
            huruf [i]= 'A';
            nil2[i]=4*3;
        }
        if (nilai[i]>=60 && nilai[i]<80)
        {
            huruf [i]= 'B';
            nil2[i]=3*3;
        }  
        if (nilai[i]>=40 && nilai[i]<60)
        {
            huruf[i] = 'C';
            nil2[i]=2*3;
        }
        if ( nilai[i]>=20 && nilai[i]<40)
        {
            huruf[i] = 'D';
            nil2[i]=3;
        }
        if ( nilai[i]<20)
        {
            huruf[i] = 'E';
            nil2[i]=0;
        }
        
        totl_nil=totl_nil+nil2[i];
    }
    
    ipk=totl_nil/total_sks;
   
    printf ("\n");
    printf("============================TRANSKIP NILAI============================\n");
      for(i=0;i<bnyk_MK;i++)
    {
    printf ("\nNama mata kuliah ke-%i = ",i+1); printf ("%s",MK[i]);
    printf ("\tNilai matakuliah ke-%i = ",i+1); printf ("%c",huruf[i]);}
    printf ("\nJumlah SKS              = 21\n");
    printf ("IPK Anda Adalah         = %.2f",ipk);
    
    getch();
}

