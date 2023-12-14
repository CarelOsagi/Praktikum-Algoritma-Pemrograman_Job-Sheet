//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>
#define PHI 3.14

int main(){
	
	int diameter = 12;
	int radius = diameter/2;
	float volume = 4*PHI*radius*radius*radius/3;
	float luas_permukaan = 4*PHI*radius*radius;
		
	printf("Diameter\t= %i cm\n", diameter);
	printf("Radius\t\t= %i cm\n", radius);	
	printf("Volume bola\t: %.2f cm3\n", volume);
	printf("Luas Permukaan\t: %.2f cm2\n", luas_permukaan);
	
}
