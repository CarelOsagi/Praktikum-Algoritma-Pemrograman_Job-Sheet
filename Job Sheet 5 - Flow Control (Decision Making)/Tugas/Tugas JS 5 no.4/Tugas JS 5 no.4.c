//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

void main(){
	int nilai_hadir, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;
	
	printf("Nilai Kehadiran\t= ");
	scanf("%d",&nilai_hadir);
	printf("Nilai Tugas\t= ");
	scanf("%d",&nilai_tugas);
	printf("Nilai UTS\t= ");
	scanf("%d",&nilai_uts);
	printf("Nilai UAS\t= ");
	scanf("%d",&nilai_uas);
	
	nilai_akhir=0.2*nilai_hadir+0.2*nilai_tugas+0.25*nilai_uts+0.35*nilai_uas;
	
	if((nilai_akhir>=0) && (nilai_akhir<=55)){
		if((nilai_akhir>=0) && (nilai_akhir<=44)){
			printf("\nNilai : E\n");
		}
		else{
			printf("\nNilai : D\n");
		}
		printf("Maaf, Anda tidak lulus!");
	}
	if((nilai_akhir>=56) && (nilai_akhir<=65)){
		printf("\nNilai : C");
		printf("Anda lulus, tingkatkan lagi untuk kedepannya!");
	}
	if((nilai_akhir>=66) && (nilai_akhir<=85)){
		if((nilai_akhir>=66) && (nilai_akhir<=75)){
			printf("\nNilai : B-\n");
		}
		else if((nilai_akhir>=76) && (nilai_akhir<=80)){
			printf("\nNilai : B\n");
		}
		else{
			printf("\nNilai : B+\n");
		}
		printf("Anda lulus dengan baik, tingkatkan terus belajarnya!");
	}
	if((nilai_akhir>=86) && (nilai_akhir<=100)){
		if((nilai_akhir>=86) && (nilai_akhir<=90)){
			printf("\nNilai : A-\n");
		}
		else{
			printf("\nNilai : A\n");
		}
		printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!");
	}
}
