//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main() {
    int n;
    
    printf("Input banyak mahasiswa: ");
    scanf("%d", &n);

    char nama_mhs[n][100];

    for (int i = 0; i < n; i++) {
        printf("Input nama mahasiswa %d: ", i+1);
        scanf(" %[^\n]s", nama_mhs[i]);
    }
	printf("\n");
    for (int i = 0; i < n; i++) {
        printf("Nama mahasiswa ke-%d: %s\n", i+1, nama_mhs[i]);
    }
    return 0;
}
