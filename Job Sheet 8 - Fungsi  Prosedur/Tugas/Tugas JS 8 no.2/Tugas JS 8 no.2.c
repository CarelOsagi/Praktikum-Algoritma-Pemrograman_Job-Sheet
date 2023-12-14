//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

float tambah(float a, float b){
    return a + b;
}
float kurang(float a, float b){
    return a - b;
}
float kali(float a, float b){
    return a * b;
}
float bagi(float a, float b){
    if(b != 0){
        return a / b;
    } 
	else{
        return -1;
    }
}

int main(){
    float angka1, angka2;

    printf("Masukkan angka pertama	: ");
    scanf("%f", &angka1);

    printf("Masukkan angka kedua	: ");
    scanf("%f", &angka2);
    
    printf("--------------------------------\n");

    printf("Hasil penjumlahan	: %.2f\n", tambah(angka1, angka2));
    printf("Hasil pengurangan	: %.2f\n", kurang(angka1, angka2));
    printf("Hasil perkalian		: %.2f\n", kali(angka1, angka2));

    if(angka2 != 0){
        printf("Hasil pembagian		: %.2f\n", bagi(angka1, angka2));
    } 
	else{
        printf("Tidak bisa melakukan pembagian oleh nol.\n");
    }

    return 0;
}
