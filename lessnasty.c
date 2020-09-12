#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * lessnasty.c
 Code Refactoring - Assignment 1 APC 524 FALL 2020.
 */

int main()
{
  int i, j, k, m, p, q;
  double t;     /*double precision, 64-bit floating point*/
  double dt;    /*double precision, 64-bit floating point*/
  double x;     /*double precision, 64-bit floating point*/
  double dx;    /*double precision, 64-bit floating point*/

/*Variable Definitions*/
  t = 0.0;                                      /*Initial Condition*/
  x = 0.0;                                      /*Initial Condition*/
  dx = 0.0;                                     /*Initial Condition*/
  printf("%15.8f %15.8f %15.8f\n", t, x, dx);
  dt = 6*M_PI / 10;
  for (i=0; i < 10; ++i)                        /*Step Increment from 0 to 9*/
  {
    double xold = x;
    double dxold = dx;

    x += dt * dxold;
    dx += dt * (cos(0.5*t) - xold - 0.5*dxold);
    t += dt;
    printf("%15.8f %15.8f %15.8f\n", t, x, dx);
  }
  printf("\n");

  dt = 6*M_PI / 20;
  for (j=0; j < 20; ++j)                       /*Step Increment from 0 to 20*/
  {
    x += dt * dxold;
    dx += dt * (cos(0.5*t) - xold - 0.5*dxold);
    t += dt;
    printf("%15.8f %15.8f %15.8f\n", t, x, dx);
  }
  printf("\n");

  dt = 6*M_PI / 40;
  for (k=0; k < 40; ++k)                        /*Step Increment from 0 to 40*/
  {
    x += dt * dxold;
    dx += dt * (cos(0.5*t) - xold - 0.5*dxold);
    t += dt;
    printf("%15.8f %15.8f %15.8f\n", t, x, dx);
  }
  printf("\n");

  dt = 6*M_PI / 10;
  for (m=0; m < 10; ++m)                        /*Step Increment from 0 to 10*/
  {
     x += dt * dxold;
    dx += dt * (cos(2.0*t) - xold - 0.5*dxold);
    t += dt;
    printf("%15.8f %15.8f %15.8f\n", t, x, dx);
  }
  printf("\n");

  dt = 6*M_PI / 20;
  for (p=0; p < 20; ++p)                        /*Step Increment from 0 to 20*/
  {
     x += dt * dxold;
    dx += dt * (cos(2.0*t) - xold - 0.5*dxold);
    t += dt;
    printf("%15.8f %15.8f %15.8f\n", t, x, dx);
  }
  printf("\n");

  dt = 6*M_PI / 40;
  for (q=0; q < 40; ++q)                        /*Step Increment from 0 to 40*/
  {
     x += dt * dxold;
    dx += dt * (cos(2.0*t) - xold - 0.5*dxold);
    t += dt;
    printf("%15.8f %15.8f %15.8f\n", t, x, dx);
  }
  printf("\n");
