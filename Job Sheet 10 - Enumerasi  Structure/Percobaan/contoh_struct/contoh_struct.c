//Created by Carel Habsian Osagi (23343061) Informatik'23
#include <stdio.h>

struct Mahasiswa{
	char *name;
	char *address;
	int age;
};

void main(){
	
	//menggunakan struct
	struct Mahasiswa mhs1, mhs2;
	
	//mengisi nilai ke struct
	mhs1.name = "Dian";
	mhs1.address = "Mataram";
	mhs1.age = 22;
	
	mhs2.name = "Bambang";
	mhs2.address = "Surabaya";
	mhs2.age = 23;
	
	//mencetak isi struct
	printf("## Mahasiswa 1 ##\n");
	printf("Nama\t: %s\n", mhs1.name);
	printf("Alamat\t: %s\n", mhs1.address);
	printf("Umur\t: %d\n",mhs1.age);
	
	printf("\n");
	
	printf("## Mahasiswa 2 ##\n");
	printf("Nama\t: %s\n", mhs2.name);
	printf("Alamat\t: %s\n", mhs2.address);
	printf("Umur\t: %d\n", mhs2.age);
}
