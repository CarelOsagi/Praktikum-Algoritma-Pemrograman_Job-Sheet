//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){
	
	int totalBeli, hargaDiskon;
	
	printf("TOSERBA");
	printf("\n-------\n");
	printf("Diskon total pembelian <= Rp75.000 = 5 persen\n");
	printf("Diskon total pembelian > Rp75.000 = 15 persen\n");
	printf("Diskon total pembelian > Rp125.000 = 25 persen + cashback Rp5000\n");
	printf("Masukkan nominal total pembelian = Rp");
	scanf("%d",&totalBeli);
	
	if(totalBeli <= 75000){
		printf("Total pembelian Anda : %d, diskon 5 persen\n",totalBeli);
		printf("Harga setelah diskon :  %d", hargaDiskon = totalBeli - totalBeli*0.05 );
	}
	else if(totalBeli > 75000 && totalBeli<=125000){
		printf("Total pembelian Anda : %d, diskon 15 persen\n",totalBeli);
		printf("Harga setelah diskon :  %d", hargaDiskon = totalBeli - totalBeli*0.15 );
	}
	else if(totalBeli > 125000){
		printf("Total pembelian Anda : %d, diskon 25 persen + cashback Rp5000\n",totalBeli);
		printf("Harga setelah diskon :  %d", hargaDiskon = totalBeli - totalBeli*0.25 + 5000 );
	}
	return 0;
}
