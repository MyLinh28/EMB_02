/*********************************************************
Decription: sorted array ascending, descending
**********************************************************/
#include <stdio.h>

void up(int *a, int n)
{
	   int i, j;
	   for(i=0; i<n; i++)
	   {
	   	    for(j=i+1; j<n; j++)
	   	    {
	   	    	    if(*(a+i) > *(a+j))
	   	    	    {
	   	    	    	    int temp = *(a+i);
	   	    	    	    *(a+i) = *(a+j);
	   	    	    	    *(a+j) = temp;
														}
									}
				}
}

void down(int *a, int n)
{
	   int i, j;
	   for(i=0; i<n; i++)
	   {
	   	    for(j=i+1; j<n; j++)
	   	    {
	   	    	    if(*(a+i) < *(a+j))
	   	    	    {
	   	    	    	    int temp = *(a+i);
	   	    	    	    *(a+i) = *(a+j);
	   	    	    	    *(a+j) = temp;
														}
									}
				}
}

void out(int *a, int n)
{
	   int i;
	   for(i=0; i<n; i++)
	   {
	   	    printf("%d ", *(a+i));
				}
				printf("\n");
}

int main()
{
	   int a[10] = {1, 34, 47, 5, 23, 12, 8, 4, 32, 9};
	   /*number 1*/
	   printf("Number 1 entered: ");
	   out(a, 10);
	   up(a, 10);
	   out(a, 10);
	   down(a, 10);
	   out(a, 10);
	   return 0;
}
