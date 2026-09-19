// array of structs
#include <stdio.h>
struct student{
	int id;
	char name[40];
	char roll_no[20];
};
int main (){
	struct student s[3];
	int i,dh;
	for(i=0;i<3;i++){
		printf("Enter the id,name and roll_no of the student : \n");
		scanf("%d %s %s",&s[i].id,&s[i].name,&s[i].roll_no);
		
	}
	for(i=0;i<3;i++){
		printf("%d %s %s\n",s[i].id,s[i].name,s[i].roll_no);
	
	}
	return 0;
}
