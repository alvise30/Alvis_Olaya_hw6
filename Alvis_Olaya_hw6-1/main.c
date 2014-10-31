#include <stdio.h>
#include <stdlib.h>
#include "solve.h"
	 

int main ()
{	
	int i;
	double y = 20;
		 
	for (i = 1; i < 31; i ++)
	{
	  double x = 31 - i;
	  printf(" Las condiciones iniciales son: %f, %f. \n",x,y);
	  dsolve(i,x,y);
	}
	return 0;
}

