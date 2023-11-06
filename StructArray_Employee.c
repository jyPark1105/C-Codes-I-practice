#include <stdio.h>

struct employee {
	char name[20];
	char rrNumber[30];
	int salary_Infor;
};

int main(void)
{
	struct employee emp_arr[3];
	int i;
	
	for(i = 0; i < 3; i++)
	{
		fputs("name, rrNumber, salary : ", stdout);
		scanf("%s %s %d", emp_arr[i].name, emp_arr[i].rrNumber, &emp_arr[i].salary_Infor);
	}
	for(i = 0; i < 3; i++)
	{
		printf("%s\t%s\t%d\n", emp_arr[i].name, emp_arr[i].rrNumber, emp_arr[i].salary_Infor);	
	}
	
	
	return 0;	
}
