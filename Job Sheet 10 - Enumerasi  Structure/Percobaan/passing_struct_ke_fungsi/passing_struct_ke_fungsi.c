//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

struct student{
	char name[50];
	int age;
};

void main(){
	struct student s1;
	
	printf("Enter name\t: ");
	scanf("%[^\n]%*c", &s1.name);
	
	printf("Enter age\t: ");
	scanf("%d", &s1.age);
	
	display(s1); //passing structure sebagai argumen
}
//membuat fungsi dengan struct sebagai parameter
void display(struct student s){
	printf("\nDisplaying information\n");
	printf("Name\t: %s", s.name);
	printf("\nRoll\t: %d", s.age);
}
