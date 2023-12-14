//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){

	int suku_genap = 0;
	int suku_ganjil = 1;
	int batas = 50;
	 
	printf("Batasan suku	: %d\n", batas);
	
	printf("Bilangan ganjil	: ");
	
	while(suku_ganjil <= batas){
		printf("%d ", suku_ganjil);
		
		suku_ganjil += 2;
	}
	printf("\n");
	printf("Bilangan Genap	: ");
	
	while(suku_genap <= batas){
		printf("%d ", suku_genap);
		
		suku_genap += 2;
	}
	return 0;
}
