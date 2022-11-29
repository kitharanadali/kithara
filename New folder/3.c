#include<stdio.h>
int main()
{
	char student_name;
	int mark_1;
	int mark_2;
	int mark_3;
	
	printf("Enter student name");
	scanf("%s",student_name);
	printf("Enter mark_1");
	scanf("%d",mark_1);
	printf("Enter mark_2");
	scanf("%d",mark_2);
	printf("Enter mark_3");
	scanf("%d",mark_3);
	
	int total = mark_1 +mark_2 + mark_3;
	float average = total/3;
	
	printf("Student_name;%s\n",student_name);
	printf("Total;%d\n",total);
	printf("Average;%d\n",average);
	return 0;

	

}