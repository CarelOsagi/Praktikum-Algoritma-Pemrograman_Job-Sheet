//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int kali(int a, int b){
	if(a == 0 || b == 0){
		return 0;
	}
	else{
		return a + kali(a, (b-1));
	}
}

int main(){
	int angka1 = 12;
	int angka2 = 6;
	
	printf("Perkalian dua bilangan\n");
	printf("------------------------\n");
	printf("Bilangan 1 = %d\n", angka1);
	
	printf("Bilangan 2 = %d\n", angka2);
	
	printf("Perkalian dari %d * %d = %d", angka1, angka2, kali(angka1, angka2));
	
	return 0;
}
