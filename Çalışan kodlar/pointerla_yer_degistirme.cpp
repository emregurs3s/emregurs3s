#include <stdio.h>
void degerdegistir(int *a ,int *b,int *c){


//	123	321 olmas� i�in sa�dan sola yerlerini de�i�tirece�im a 1 b 2 c 3 , a 2 b 3 c 1 pointer biriminde yapaca��m //

int gecici = *a ;
int gecici1 = *b;

*a = *c;
*c = gecici;
*b = *a;
*a = gecici1 ;


}
int main (){
	
	int x ,y ,z ;
	
	printf ("x , y , z icin degerler girin");
	scanf ("%d%d%d",&x,&y,&z);
	
	degerdegistir(&x,&y,&z);
	
	printf ("%d %d %d",x,y,z);
	
	
	
	
	return 0;	
		
	
}







