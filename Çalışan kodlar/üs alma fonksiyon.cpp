#include <stdio.h>

void ustunu_al(int n ,int k)
{
int i;
int sonuc = 1;
for (i=0;i<k;i++)
	{

	sonuc = sonuc*n;
	
	}
	printf ("%d",sonuc);
}
int main (){
	
			
	int sayi1,sayi2;		
	printf ("ilk sayiyi giriniz");
	scanf ("%d",&sayi1);
	printf ("ikinci sayiyi giriniz");
	scanf("%d",&sayi2);

	ustunu_al(sayi1,sayi2);

	
	return 0;	
}
