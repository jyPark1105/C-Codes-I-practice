#include <stdio.h>

typedef struct point
{
	double xpos;
	double ypos;
} Point;

typedef struct rectangle
{
	Point p;		// xpos, ypos -> 2 values
} Rectangle;

void set_coordinates(int i, Rectangle *pptr)		// Set the coordinates that user want to
{
	printf("Set [x%d, y%d] : ", i, i);
	scanf("%lf %lf", &pptr->p.xpos, &pptr->p.ypos);
	printf("Entered [x%d, y%d] : [%f, %f]\n", i, i, pptr->p.xpos, pptr->p.ypos);
}

double calculate_Area(Rectangle *pptr1, Rectangle *pptr2)		// pptr1 points 'r1', pptr2 points 'r2'
{
	double area = ((pptr2->p.xpos) - (pptr1->p.xpos))*((pptr2->p.ypos) - (pptr1->p.ypos));		// Using two points -> Calculates the area
	if (area == 0)
	{
		printf("[x1, y1] & [x2, y2] are Equal coordinates.\n");
	}
	else return area > 0 ? area : (-1)*area;
}

void printPoint(Rectangle *pptr1, Rectangle *pptr2)				// Print the Coordinates of 4 points that are composed as Rectangle. 
{
	printf("Upper Left : [%f, %f]\n", pptr1->p.xpos, pptr1->p.ypos);	
	printf("Lower Left : [%f, %f]\n", pptr1->p.xpos, pptr2->p.ypos);
	printf("Upper Right : [%f, %f]\n", pptr2->p.xpos, pptr1->p.ypos);
	printf("Lower Right : [%f, %f]\n", pptr2->p.xpos, pptr2->p.ypos);
}

int main(void)
{
	Rectangle r1 = {0.0, 0.0};	// Assume that coordinates x,y of r1 -> Upper Left
	Rectangle r2 = {0.0, 0.0};	// Assume that coordinates x,y of r2 -> Lower Right
								
	set_coordinates(1, &r1);
	set_coordinates(2, &r2);
	
	printf("The Coordinates %d that is set by user : [%f, %f]\n", 1, r1.p.xpos, r1.p.ypos);	
	printf("The Coordinates %d that is set by user : [%f, %f]\n", 2, r2.p.xpos, r2.p.ypos); 
	printPoint(&r1, &r2);
	printf("Rectangle Area is : %f", calculate_Area(&r1, &r2));
	return 0;
}
