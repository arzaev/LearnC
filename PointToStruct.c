#include <stdio.h>
#include <stdlib.h>


struct SPoint {
	int x;
	int y;
};

typedef struct SPoint TPoint;

void ShowPoint(TPoint point)
{
	printf("x = %d	y = %d\n", point.x, point.y);
}

void SetPoint(TPoint *pointPtr, int xPos, int yPos)
{
	if(pointPtr != NULL)
	{
		(*pointPtr).x = xPos;
		(*pointPtr).y = yPos;
	}
}

int main()
{
	TPoint p;
	TPoint *pPtr = NULL;

	pPtr = &p;
	SetPoint(pPtr, 11, 22);
	ShowPoint(p);
	
	return 0;
}
