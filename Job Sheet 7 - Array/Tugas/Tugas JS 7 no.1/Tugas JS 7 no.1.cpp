//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){
	int jumlah_mhs;
	
	printf("Masukkan jumlah mahasiswa : ");
	scanf("%d", &jumlah_mhs);

	int nilai_mhs[jumlah_mhs];
	int sum = 0;
	char nama_mhs[100];
	
	for(int i = 0; i < jumlah_mhs; i++){
		printf("Nama mahasiswa : ");
		scanf(" %[^\n]s", &nama_mhs);
		printf("Nilai siswa ke-%d : ", i+1);
		scanf("%d", &nilai_mhs[i]);
		
		sum += nilai_mhs[i];
	}
	
	float rata_rata = (float)sum / jumlah_mhs;
	
	printf("Rata-rata nilai : %.2f\n", rata_rata);
	
	return 0;
}
