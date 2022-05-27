#include <stdio.h>
void sayiya_kadar (int toplamais,int i,int sayi)

{


	for(i=0;i<=sayi;i++)
	{
		toplamais+=i;

	}
	
	
	printf("%d",toplamais);
	

}

int main (){
	
	int sayi1,toplam,a;
	
	printf("bir sayi giriniz");
	scanf("%d",&sayi1);
	
	
	
sayiya_kadar(toplam,a,sayi1);	

	
	return 0;
}
