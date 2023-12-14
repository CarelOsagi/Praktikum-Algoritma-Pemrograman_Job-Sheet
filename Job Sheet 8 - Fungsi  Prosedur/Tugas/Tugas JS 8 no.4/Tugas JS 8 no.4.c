//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

float potong(float totalPembelian){
    if(totalPembelian < 1000000){
        return 0.0;
    } 
	else if(totalPembelian >= 1000000 && totalPembelian < 3000000){
        return 20.0;
    } 
	else{
        return 35.0;
    }
}

int main(){
    float totalPembelian;

    printf("Program Hitung Diskon\n");
    printf("---------------------\n");
    printf("Total Pembelian	: Rp");
    scanf("%f", &totalPembelian);

    potong(totalPembelian);

    printf("Besar Diskon	: %.2f%%\n", potong(totalPembelian));
    printf("Besar Yang Harus Dibayarkan	: Rp%.2f\n", totalPembelian - (totalPembelian * (potong(totalPembelian) / 100)));

    return 0;
}
