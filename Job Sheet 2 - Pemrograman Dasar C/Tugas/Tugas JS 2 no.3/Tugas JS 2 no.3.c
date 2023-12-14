//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){
	int pjg_alas = 8, tinggi = 5;
	float luas = (float)pjg_alas * (float)tinggi / (double)2;
	
	printf("-------Menentukan luas segitiga-------\n");
	printf("Panjang alas		: %d\n", pjg_alas);
	printf("Tinggi			: %d\n", tinggi);
	printf("--------------------------------------\n");
	printf("Luas segitiga		: luas alas * tinggi / 2\n");
	printf("Luas segitiga		: %.2f\n", luas);
}
