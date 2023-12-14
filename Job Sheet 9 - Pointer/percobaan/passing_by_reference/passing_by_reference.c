//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

void add_score(int *score){
    *score = *score + 5;
	printf("score diubah ke : %d\n", *score);
}
void main(){
    int a = 0;

    printf("score sebelum diubah : %d\n", a);
    add_score(&a);
    add_score(&a);
    add_score(&a);
    add_score(&a);
    add_score(&a);
    add_score(&a);
    printf("score setelah diubah : %d\n", a);
}
