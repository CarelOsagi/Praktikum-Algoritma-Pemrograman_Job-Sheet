//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

typedef struct MHS{
    char nama[50];
    char nim[20];
    char jurusan[50];
    char prodi[50];
}Mahasiswa;

void tambahMhs(Mahasiswa *mhs){
    printf("Nama           : ");
    scanf(" %[^\n]s", mhs->nama);
    printf("NIM            : ");
    scanf(" %[^\n]s", mhs->nim);
    printf("Jurusan        : ");
    scanf(" %[^\n]s", mhs->jurusan);
    printf("Program studi  : ");
    scanf(" %[^\n]s", mhs->prodi);
}

int main(){
    int jumlahMhs;

    printf("Inputkan jumlah mahasiswa : ");
    scanf("%d", &jumlahMhs);

    FILE *DataMhs;
    DataMhs = fopen("datamahasiswa.txt", "w");
    
    if(DataMhs == NULL) {
        printf("Gagal membuka file");
        return 1;
    }

    Mahasiswa mhs[jumlahMhs];

    for(int i = 0; i < jumlahMhs; i++){
    	printf("\nMasukkan data mahasiswa ke-%d\n", i+1);
        tambahMhs(&mhs[i]);
        fprintf(DataMhs, "Mahasiswa ke-%d\n", i+1);
        fprintf(DataMhs, "Nama	: %s\n", mhs[i].nama);
        fprintf(DataMhs, "NIM	: %s\n", mhs[i].nim);
        fprintf(DataMhs, "Jurusan	: %s\n", mhs[i].jurusan);
        fprintf(DataMhs, "Program Studi	: %s\n", mhs[i].prodi);
        fprintf(DataMhs, "\n");
    }

    fclose(DataMhs);

    return 0;
}
