//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>
#include <time.h>

enum nomorTebakan {LebihRendah, LebihBesar, Benar};

void judul(){
	printf("Game tebak nomor!\n");
		printf("-----------------\n");
		printf("Tebak nomor antara 1 dan 20\n");
		printf("\n");
}
int random(){
	int nomorKomputer, tebakan, percobaan = 0;
	char mainLagi;
	
	srand(time(NULL));
	
	do{
		nomorKomputer = rand() % 20 + 1;
		
		do{
			printf("Masukkan nomor tebakan	: ");
			scanf("%d", &tebakan);
			
			percobaan++;
			
			enum nomorTebakan nomor;
			if(tebakan < nomorKomputer){
				nomor = LebihRendah;
			}
			else if(tebakan > nomorKomputer){
				nomor = LebihBesar;
			}
			else if(tebakan == nomorKomputer){
				nomor = Benar;
			}
			
			switch(nomor){
				case LebihRendah :
					printf("Nomor Saya lebih besar!\n\n");
					break;
				case LebihBesar :
					printf("Nomor Saya lebih kecil!\n\n");
					break;
				case Benar :
					printf("Selamat, Anda benar!\n");
					printf("Jumlah percobaan	: %d\n\n", percobaan);
					break;
			}
			
		} while(tebakan != nomorKomputer);
		printf("Ingin bermain lagi? (y/n)	: ");
		scanf(" %c", &mainLagi);
		
		percobaan = 0;
	} while(mainLagi == 'y' || mainLagi == 'Y');
	
	printf("Terima kasih telah bermain. Sampai jumpa lagi\n");
	
	return 0;
}

int main(){
	judul();
	random();
}
