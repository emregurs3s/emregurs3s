#include <stdio.h>

int main (){
	
	int elma,gun;
	
	printf("kac elman var ?");
	scanf("%d",&elma);
	
	printf("kac gunde yemek istersin");
	scanf("%d",&gun);
	
	while(elma>0)
	{
		printf("%d elman kaldi \n",elma);
		elma = elma - gun;
	}
	
	printf("elmaniz tukendi");
	return 0;
}
