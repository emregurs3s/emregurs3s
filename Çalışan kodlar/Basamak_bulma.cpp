#include <stdio.h>
void sayacv(int sayi){

	int basamak = 0;
	
	while(sayi>0)
	{
		sayi = sayi / 10;
		basamak++;
		

	}
	
		printf ("%d basamaklidir",basamak);

}
	
	int main (){
			
	int say;
	printf("bir sayi giriniz");
	scanf("%d",&say);
	
	printf("%d , ",say);
				
  	sayacv(say);

	  		
	return 0;
}
