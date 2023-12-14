//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){
	char buffer[255];
	FILE *DataMhs = fopen("datamahasiswa.txt","r");
	
	if(DataMhs == NULL){
		printf("File tidak ada");
		return 1;
	}
	
	while(fgets(buffer, sizeof(buffer), DataMhs) != NULL){
		printf("%s", buffer);
	}
	fclose(DataMhs);
	
	return 0;
}
