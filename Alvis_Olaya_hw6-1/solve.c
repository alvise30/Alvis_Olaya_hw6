#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h"
#include "runge-kutta.h"
#include <string.h>

int dsolve (int number,double x_0, double y_0)
{
	char num[2];
	sprintf(num, "%d", number);
	FILE *export;
	export = fopen(strcat(num,".dat"), "w");
	double h;
	int n_points;
	h = 0.001;
	n_points = (int) ((10.0+h)/h);
	
	double *t;
	double *x;
	double *y;
	
	x = malloc(n_points*sizeof(double));
	y = malloc(n_points*sizeof(double));
	t = malloc(n_points*sizeof(double));

	x[0] = x_0;
	y[0] = y_0;
	t[0] = 0.0;
	fprintf(export,"%f %f %f \n", t[0],x[0],y[0]);
	
	int i;
	
	for (i = 1; i < n_points; i ++)
	{
	  rungekutta_step(i,x,y,t,h);
	  fprintf(export,"%f %f %f \n", t[i],x[i],y[i]);
	}

	return 0;
}
