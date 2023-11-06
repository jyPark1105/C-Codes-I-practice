#include <stdio.h>

struct point {
	int xpos;
	int ypos;
	struct point *ptr;
};

int main(void)
{
	struct point p1 = {1, 2};
	struct point p2 = {3, 4};
	struct point p3 = {5, 7};
	
	p1.ptr = &p2;
	p2.ptr = &p3;
	p3.ptr = &p1;
	
	printf("%d %d\n", &p3.xpos, &p3.ypos);
	printf("%d %d\n", &p1.xpos, &p1.ypos);
	printf("%d %d\n", &p2.xpos, &p2.ypos);
	
	
	printf("\n\n%d %d %d\n\n", &p1, &p2, &p3);
	return 0;
}
