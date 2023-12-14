//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

void main(){
	char username[100];
	char password[100];
	
	char password1[] = "NgodingJalanNinjaKu";
	
	printf("Username\t: ");
	scanf(" %[^\n]s", &username);
	
	if(strcmp(username,"Carel Habsian Osagi") == 0){
		printf("Password\t: ");
		scanf(" %[^\n]s", &password);
		
		int hasil = strcmp(password1,password);
		
		if(hasil == 0){
			printf("berhasil login");
		}
		else{
			printf("password salah");
		}
	}
	else{
		printf("Username ini tidak terdaftar. Silahkan melakukan tahap registrasi terlebih dahulu!");
	}
}
