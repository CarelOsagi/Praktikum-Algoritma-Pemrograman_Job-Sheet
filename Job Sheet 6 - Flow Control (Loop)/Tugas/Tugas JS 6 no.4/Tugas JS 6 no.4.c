//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int saldo = 175000;
const int saldo_minimal = 50000;

void tampilkanMenu(){
    printf("\nATM\n");
    printf("1) Cek Saldo\n");
    printf("2) Setoran\n");
    printf("3) Penarikan Tunai\n");
    printf("4) Exit\n");
}

void cekSaldo(){
    printf("Saldo Anda saat ini: Rp%d\n", saldo);
}

void setoran(){
    int jumlah_setoran;
    printf("Masukkan jumlah setoran: Rp");
    scanf("%d", &jumlah_setoran);

    saldo += jumlah_setoran;
    printf("Setoran berhasil. Saldo Anda saat ini: Rp%d\n", saldo);
}

void penarikanTunai(){
    int jumlah_penarikan;
    printf("Masukkan jumlah penarikan: Rp");
    scanf("%d", &jumlah_penarikan);

    if (saldo - jumlah_penarikan >= saldo_minimal){
        saldo -= jumlah_penarikan;
        printf("Penarikan berhasil. Saldo Anda saat ini: Rp%d\n", saldo);
    } 
	else{
        printf("Maaf, saldo minimal yang harus disisakan adalah Rp%d\n", saldo_minimal);
    }
}

int main(){
    int pilihan;

    printf("Selamat datang, Hattori!\n");
    do{
        tampilkanMenu();

        printf("Pilih menu (1-4): ");
        scanf("%d", &pilihan);

        switch (pilihan){
            case 1:
                cekSaldo();
                break;
            case 2:
                setoran();
                break;
            case 3:
                penarikanTunai();
                break;
            case 4:
                printf("Terima kasih telah menggunakan layanan ATM.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan pilih lagi.\n");
        }
    } while (pilihan != 4);

    return 0;
}
