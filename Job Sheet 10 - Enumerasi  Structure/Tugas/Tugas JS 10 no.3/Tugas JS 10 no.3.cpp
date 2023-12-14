//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>
#define MAX_MHS 72

typedef struct Mhs{
    char npm[20];
    char nama[50];
    char tgl_lahir[25];
    char alamat[50];
    char hp[20];
}Mahasiswa;

void tambahMhs(Mahasiswa *mhs){
	printf("NPM	: ");
	scanf(" %[^\n]s", mhs->npm);
	printf("Nama	: ");
	scanf(" %[^\n]s", mhs->nama);
	printf("Tanggal Lahir	: ");
	scanf(" %[^\n]s", mhs->tgl_lahir);
	printf("Alamat	: ");
	scanf(" %[^\n]s", mhs->alamat);
	printf("Handphone	: ");
	scanf(" %[^\n]s", mhs->hp);
}

void tampilOutput(Mahasiswa mhs){
	printf("%s	%s	%s	%s	%s\n", mhs.npm, mhs.nama, mhs.tgl_lahir, mhs.alamat, mhs.hp);
}

int main(){
	Mahasiswa mhs[MAX_MHS];
	int jumlahMhs = 0;
	char lagi;
	do{
		tambahMhs(&mhs[jumlahMhs]);
		jumlahMhs++;
		
		printf("Mau memasukkan data lagi [y/t]	: ");
		scanf(" %c", &lagi);
		printf("\n");
	} while(lagi == 'y' || lagi == 'Y');
	
	for(int i = 0; i < jumlahMhs; i++){
		tampilOutput(mhs[i]);
	}
	return 0;
}
