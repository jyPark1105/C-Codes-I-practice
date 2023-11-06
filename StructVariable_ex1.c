#include <stdio.h>

typedef struct point 
{
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point *ptr1, Point *ptr2)
{
	Point temp;
	temp.xpos = ptr1 -> xpos;		// x of pos1 is stored into the x of temp
	temp.ypos = ptr1 -> ypos;		// y of pos1 is stored into the y of temp
	ptr1 -> xpos = ptr2 -> xpos;	// x of pos2 is changed to x of pos1
	ptr1 -> ypos = ptr2 -> ypos;	// y of pos2 is changed to y of pos1
	ptr2 -> xpos = temp.xpos;
	ptr2 -> ypos = temp.ypos;
}


int main(void)
{
	Point pos1 = {2, 4};
	Point pos2 = {5, 7};
	
	printf("x of pos1 is %d, y of pos1 is %d\n", pos1.xpos, pos1.ypos);
	printf("x of pos2 is %d, y of pos2 is %d\n\n", pos2.xpos, pos2.ypos);
	
	SwapPoint(&pos1, &pos2);
	
	printf("When Swapped\n");
	printf("x of pos1 is %d, y of pos1 is %d\n", pos1.xpos, pos1.ypos);
	printf("x of pos2 is %d, y of pos2 is %d\n\n", pos2.xpos, pos2.ypos);
	
	return 0;
}
