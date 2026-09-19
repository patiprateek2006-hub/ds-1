#include <stdio.h>
struct student {
	int num;
	int roll_n0[12];
};
int main() {
	// create struct;
	struct student s1;
	// give names//
	printf("Enter the  number of student \n:");
	scanf("%d",&s1.num);
		printf("Enter the roll number :\n");
		scanf("%d",&s1.roll_n0);

		
		printf("%d  %d",s1.num,s1.roll_n0);
	return 0;
	
}
