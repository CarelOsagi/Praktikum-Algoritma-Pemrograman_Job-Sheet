//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){
	int durasi = 3;
	int tarif = 15000 + (durasi-1) * 15000/2;
	
	printf("Tarif film durasi jam pertama = Rp15.000,00\n");
	printf("Tarif film durasi lebih dari 1 jam, jam berikutnya ditambah 50 persen dari jam pertama per-jamnya\n");
	printf("Tarif dari film durasi %d jam : Rp%d", durasi, tarif);
}
