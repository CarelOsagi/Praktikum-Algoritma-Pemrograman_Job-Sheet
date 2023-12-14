//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){
	char nama;
	int prtkm, uts, uas, fnlScr;
	
	printf("Nama		: ");
	scanf(" %[^\n]s");
	printf("NIM		: ");
	scanf(" %[^\n]s");
	printf("Prodi		: ");
	scanf(" %[^\n]s");
	printf("Fakultas	: ");
	scanf(" %[^\n]s");
	printf("Nilai praktikum\t: ");
	scanf("%i",&prtkm);
	printf("Nilai UTS	: ");
	scanf("%i",&uts);
	printf("Nilai UAS	: ");
	scanf("%i",&uas);
	
	fnlScr=0.3*prtkm+0.3*uts+0.4*uas;

	printf("Nilai Akhir\t: ");
	printf("%i",fnlScr);
		
	return 0;
}
