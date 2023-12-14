//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){
	printf("## Program Antrian CS ##\n");
	
	char no_antrian[5] = {'A', 'B', 'C', 'D', 'E'};
	
	//menggunakan pointer
	char *ptr_current = &no_antrian[0];
	
	for(int i = 0; i < 5; i++){
		printf(" Pelanggan dengan nomor antrian %c silahkan ke loket!", *ptr_current);
		printf("Saat ini CS sedang melayani	: \n", *ptr_current);
		printf("-------- Tekan Enter untuk Next --------\n");
		getchar();
		ptr_current++;
	}
	printf("Selesai");
}
