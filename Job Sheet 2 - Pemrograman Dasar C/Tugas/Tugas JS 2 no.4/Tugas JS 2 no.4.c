//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){
	int panjang = 10, lebar = 5;
	float luas = (float)panjang * (float)lebar;
	
	printf("----Menentukan luas persegi panjang----\n");
	printf("Panjang alas		: %d\n", panjang);
	printf("Tinggi			: %d\n", lebar);
	printf("---------------------------------------\n");
	printf("Luas segitiga		: luas alas * tinggi / 2\n");
	printf("Luas segitiga		: %.2f\n", luas);
}
