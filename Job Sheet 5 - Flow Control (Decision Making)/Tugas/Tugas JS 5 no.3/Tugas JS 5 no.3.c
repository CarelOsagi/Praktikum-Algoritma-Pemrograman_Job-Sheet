//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){
	
	char rumus;
	
	printf("BANGUN RUANG");
	printf("\n------------\n");
	printf("Rumus Luas Permukaan Bangun Ruang : \n");
	printf("1.Luas permukaan bola\n2.Luas permukaan kubus\n3.Luas permukaan balok\n4.Luas permukaan tabung\n");
	printf("\nKetikkan 1/2/3/4 untuk luas permukaan yang diinginkan : ");
	scanf("%c",&rumus);
	
	switch(rumus){
		case '1' :
			printf("\nRumus luas permukaan bola\n");
			printf("luas permukaan = 4 * (PHI * jari-jari * jari-jari)");
			break;
		case '2' :
			printf("\nRumus luas permukaan kubus\n");
			printf("luas permukaan = 6 * (panjang * panjang)");
			break;
		case '3' :
			printf("\nRumus luas permukaan balok\n");
			printf("luas permukaan = 4 * (panjang * lebar) + 2 * (tinggi * lebar)");
			break;
		case '4' :
			printf("\nRumus luas permukaan tabung\n");
			printf("luas permukaan = 2 * (PHI* jari-jari * jari-jari) + tinggi * panjang");
			break;
			
	} 
}

