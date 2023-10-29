#include <stdio.h>

int main(void)
{
	char st[256];
	int i = 0;
	int max = 0;
	int max_idx = 0;
	printf("Find the value of string, changing string to ASCII : ");
	scanf("%s", st);
	while(st[i] != NULL)
	{
		printf("st[%d] : %c, ASCII : ", i, st[i]);
		printf("%d\n", (int)st[i]);
		if(max < (int)st[i])
		{
			max = (int)st[i];
			max_idx = i;
		}
		i++;
	}
	printf("the ASCII MAX value of whole sentence is : %d, and then Last Index of the String : %d", max, max_idx);
	return 0;
}
