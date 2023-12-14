//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

struct Zodiak{
    int tanggalMulai;
    int bulanMulai;
    int tanggalAkhir;
    int bulanAkhir;
    const char *namaZodiak;
};

const char *tentukanZodiak(int tanggal, int bulan, struct Zodiak arrayZodiak[], int jumlahZodiak){
    for (int i = 0; i < jumlahZodiak; ++i) {
        if ((bulan == arrayZodiak[i].bulanMulai && tanggal >= arrayZodiak[i].tanggalMulai) ||
            (bulan == arrayZodiak[i].bulanAkhir && tanggal <= arrayZodiak[i].tanggalAkhir)) {
            return arrayZodiak[i].namaZodiak;
        }
    }
    return "Inputan Anda salah!";
}

int main() {
    struct Zodiak arrayZodiak[] = {
        {21, 3, 19, 4, "ARIES"},
        {20, 4, 20, 5, "TAURUS"},
        {21, 5, 20, 6, "GEMINI"},
        {21, 6, 22, 7, "CANCER"},
        {23, 7, 22, 8, "LEO"},
        {23, 8, 22, 9, "VIRGO"},
        {23, 9, 22, 10, "LIBRA"},
        {23, 10, 21, 11, "SCORPIO"},
        {22, 11, 21, 12, "SAGITTARIUS"},
        {22, 12, 19, 1, "CAPRICORN"},
        {20, 1, 18, 2, "AQUARIUS"},
        {19, 2, 20, 3, "PISCES"}
    };

    int tanggal, bulan, tahun;

    printf("Masukkan Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tanggal, &bulan, &tahun);

    printf("Tanggal Lahir Anda : %02d-%02d-%d\n", tanggal, bulan, tahun);

    const char *zodiak = tentukanZodiak(tanggal, bulan, arrayZodiak, sizeof(arrayZodiak) / sizeof(arrayZodiak[0]));
    printf("Zodiak Anda adalah : %s\n", zodiak);

    return 0;
}
