//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

float bagi(int a, int b){
	float hasil = (float)a / (float)b;
	return hasil;
}

void main(){
	printf("Hasil 5/2 : %.2f\n", bagi(5,2));
}
