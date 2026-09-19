#include <stdio.h>
struct student {
	int roll_no;
	char name[50];
	int marks;
};
int main (){
	struct student s1 = {31,"Prateek",198};
	struct student s2 = {22,"Mohit",119};
	printf("%d %s %d",s1.marks,s1.name,s1.roll_no);
}
