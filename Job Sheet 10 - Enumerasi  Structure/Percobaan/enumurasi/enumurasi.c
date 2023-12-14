//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

enum hari{SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

void main(){
	enum hari sekarang;
	sekarang = RABU;
	printf("Sekarang hari ke-%d\n", sekarang + 1);
	printf("Ukuran variabel enum : %d bytes\n", sizeof(sekarang));
}
