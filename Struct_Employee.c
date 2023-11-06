#include <stdio.h>

struct employee {
	char name[20];
	char rrNumber[30];
	int salary_Infor;
};




int main(void)
{
	struct employee emp1;
	
	fputs("name is : ", stdout);
	scanf("%s", emp1.name);
	fputs("R_R_Number is : ", stdout);
	scanf("%s", emp1.rrNumber);
	
	fputs("salary Information is : ", stdout);
	scanf("%d", &emp1.salary_Infor);
	
	printf("%s\t%s\t%d\n", emp1.name, emp1.rrNumber, emp1.salary_Infor);
	return 0;
}
