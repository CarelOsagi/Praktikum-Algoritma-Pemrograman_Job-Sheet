//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>
#include <string.h>

int main() {
    char kata[] = "DNALROB";
    int panjang = strlen(kata);
	
    for (int i = 0; i < panjang; i++){
    	char *ptr = kata + i;
        for (int j = i; j >= 0; j--){
            printf("%c", *ptr);
            ptr--;
        }
        printf("\n");
    }
    return 0;
}
