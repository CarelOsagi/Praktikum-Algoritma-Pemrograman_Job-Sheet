//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>
#define PHI 3.14

float luas(float a){
	return PHI *a *a;
}

float keliling(float a){
	return 2 *PHI *a;
}

int main(){
	float jari_jari;
	
	printf("Masukkan jari jari lingkaran	: ");
	scanf("%f", &jari_jari);
	
	printf("Luas Lingkaran		: %.2f\n", luas(jari_jari));
	printf("Keliling Lingkaran	: %.2f\n", keliling(jari_jari));
	
	return 0;
}
