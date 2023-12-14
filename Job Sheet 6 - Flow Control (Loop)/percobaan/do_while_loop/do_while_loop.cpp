//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){
	char ulangi = 'y';
	int counter = 0;
	
	do{
		printf("Apakah kamu mau mengulang?\n");
		printf("Jawab (y/t)\t: ");
		scanf(" %c", &ulangi);
		
		counter++;
	}
	while(ulangi=='y');
	
	printf("\n\n-----------------------\n");
	printf("Perulangan selesai!\n");
	printf("Kamu mengulang sebanyak %i kali.", counter);
}
