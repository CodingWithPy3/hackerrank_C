#include <stdio.h>

int update(int *a,int *b)
{
	printf("%d",a);
	
    int sum,diff;
    *a = (*a) + (*b);
    
    if(*a<*b)
    {
		*b=(*b) - (*a);
	}
    
	else if (*a>*b)
    {
		*b=(*a) - (*b);
	}	
	
	else
	{
		&b=0;
	}
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
	int *pa = &a, *pb = &b;
	
	update(pa, pb);
    
	//printf("%d\n%d", a, b);

    return 0;
}

