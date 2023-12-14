//Created by Carel Habsian Osagi (23343061) Informatics'23
#include <stdio.h>

int main(){
	char buff[255];
	char text[255];
	FILE *fptr;
	
	//membuka file
	fptr = fopen("puisi.txt","w");
	
	for(int i = 0; i < 5; i++){
	//mengambil input dari user
	printf("Isi baris ke %d	: ", i+1);
	fgets(text, sizeof(text), stdin);
	
	//mengambil text ke file
	fputs(text, fptr);
	}
	
	printf("File berhasil ditulis\n");
	
	//tutup file
	fclose(fptr);
	
	//buka kembali file untuk dibaca
	fptr = fopen("puisi.txt","r");
	
	//baca isi file dengan gets lalu simpan ke buff
	while(fgets(buff, sizeof(buff), fptr) != NULL){
		printf("Isi filenya sekarang	: %s", buff);
	}
	//tutup file
	fclose(fptr);
}
