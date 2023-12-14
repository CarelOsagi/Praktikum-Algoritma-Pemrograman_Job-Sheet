//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main (){
	float n_presensi = 85;
	float n_praktek = 80;
	float n_uts = 90;
	float n_uas = 85;
	float n_akhir;
	
	n_akhir = n_presensi*0.1+n_praktek*0.2+n_uts*0.3+n_uas*0.4;
	
	printf("Nilai Presensi\t= %.2f (Bobot 10 persen)\n",n_presensi);
	printf("Nilai Praktek\t= %.2f (Bobot 20 persen)\n",n_praktek);
	printf("Nilai UTS\t= %.2f (Bobot 30 persen)\n",n_uts);
	printf("Nilai UAS\t= %.2f (Bobot 40 persen)\n",n_uas);
	
	printf("Nilai Akhir = %.2f",n_akhir);
}
