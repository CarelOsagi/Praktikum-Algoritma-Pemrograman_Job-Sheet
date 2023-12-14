//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){
	char nama_pembeli[50], nama_barang[50];
	int jumlah_barang_beli, harga_barang, harga_total;
	
	printf("-----------Kasir Toko Buku-----------\n");
	printf("1. Buku Novel		= Rp30.000,00\n2. Buku Non-Fiksi	= Rp35.000,00\n3. Buku Komik		= Rp45.000,00\n");
	printf("-------------------------------------\n");
	printf("Nama pembeli			: ");
	fgets(nama_pembeli, sizeof(nama_pembeli), stdin);
	printf("Barang yang dibeli (1/2/3)	: ");
	
	int pilihan;
	scanf("%d", &pilihan);
	
	switch(pilihan){
	case 1 :
		harga_barang = 30000;
		printf("Nama barang	: Buku Novel\n");
		printf("Harga barang 	: Rp%d\n", harga_barang);
		printf("Jumlah barang	: ");
		scanf("%d", &jumlah_barang_beli);
		
		break;
	
	case 2 :
		harga_barang = 35000;
		printf("Nama Barang	: Buku Non-Fiksi\n");
		printf("Harga barang 	: Rp%d\n", harga_barang);
		printf("Jumlah barang	: ");
		scanf("%d", &jumlah_barang_beli);
		
		break;

	case 3 :
		harga_barang = 45000;
		printf("Nama Barang	: Buku Komik\n");
		printf("Harga barang 	: Rp%d\n", harga_barang);
		printf("Jumlah barang	: ");
		scanf("%d", &jumlah_barang_beli);
	
		break;
		
	default :
		printf("Pilihan Anda tidak ada di invetori toko\n");
	}
	
	harga_total = harga_barang * jumlah_barang_beli;
	printf("-------------------------------------\n");
	printf("Total harga pembelian	: Rp%d", harga_total);
	
	return 0;
}
