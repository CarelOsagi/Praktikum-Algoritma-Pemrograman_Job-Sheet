//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>
#include <string.h>

int main(){
	char kalimat[50];
	
	printf("Kalimat Masukan	: ");
	gets(kalimat);
	
	int panjang = strlen(kalimat);
	printf("Kebalikannya	: ");
	
	for(int i = panjang - 1; i >= 0; i--){
		char *ptr = kalimat + i;
		printf("%c", *ptr);
		*ptr--;
	}
	return 0;
}
