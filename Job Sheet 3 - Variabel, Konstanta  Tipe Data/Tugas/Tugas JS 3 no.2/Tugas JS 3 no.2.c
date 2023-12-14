//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){
	float C,K,F,R;
	
	printf("Input suhu (Celcius)\t: ");
	scanf("%f",&C);
	
	K = C + 273.15;
	F = C*1.8 + 32;
	R = C*0.8;
	
	printf("Suhu dalam Kelvin\t: %.2f\n",K);
	printf("Suhu dalam Farenheit\t: %.2f\n",F);
	printf("Suhu dalam Reamur\t: %.2f\n",R);
	
	return 0;
}
