#include <stdio.h>
#include <math.h>

#define EPS 0.00001
#define NMAX 20

double f(double x){
 return ( x + cos(x) );
}
double df(double x){
 return ( 1 - sin(x) );
}

int main(){
  double x  , delta ;
  int n = 0;
  fprintf(stderr,"input initial value ->");
  scanf("%lf",&x);
  do {
  delta = -f(x) / df(x);
  x += delta;
  n++; 
  printf("n = %d,x = %f \n", n, x);
  }while( fabs(delta) > EPS && n <=NMAX );

  if( n == NMAX ){
   fprintf( stderr, "error!\n" );
  }else {
  printf("x = %f\n",x);
  }
  
 }
