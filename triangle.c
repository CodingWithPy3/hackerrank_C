#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void sort_by_area(triangle* tr, int n) 
{
	int i,j,a1,b1,c1,a2,b2,c2,temp;
	
	float p1,s1,p2,c=0,s2;
	
	for (j=0;j<n;j++){
		for (i = 0; i < n-1; i++) {
			a1 = tr[i].a;
			b1 = tr[i].b;
			c1 = tr[i].c; 
			p1 = (a1+b1+c1)/2.0;
			s1 = sqrt(p1*(p1-a1)*(p1-b1)*(p1-c1));
			//printf("%f\t",s1);
			a2 = tr[i+1].a;
			b2 = tr[i+1].b;
			c2 = tr[i+1].c; 
			p2 = (a2+b2+c2)/2.0;
			s2 = sqrt(p2*(p2-a2)*(p2-b2)*(p2-c2));
//			printf("%f\n",s2);
//			c++;
			if(s1>s2)
			{
				temp = 	tr[i].a;
				tr[i].a = tr[i+1].a;
				tr[i+1].a = temp;
				
				temp = 	tr[i].b;
				tr[i].b = tr[i+1].b;
				tr[i+1].b = temp;
				
				temp = 	tr[i].c;
				tr[i].c = tr[i+1].c;
				tr[i+1].c = temp;
			}											
		}
//		printf("\n%d-->\n",j);
//		for (i = 0; i < n; i++) {
//		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
//	printf("%d",c);
}


int main()
{
	int n,i;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (i = 0; i < n; i++) 
	{
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	printf("\n\n");
	sort_by_area(tr, n);
	printf("\n\n");
	for (i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
