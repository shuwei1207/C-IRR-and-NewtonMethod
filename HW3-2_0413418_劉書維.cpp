#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double err,x;
    err=0.0001;
	x=0;
	double a=1;
	float f=9702-19700+10000;
	float ff;

    while(fabs(f)>err)
    {
        f=9702+(-19700)/(1+x)+10000/pow((1+x),2);
		ff=-(-19700/pow((1+x),2)+2*10000/pow((1+x),3));
		x=x-f/ff;
    }
    printf("%f\n",x);
    
    f=9702-19700+10000;
	while(fabs(f)>err)
    {
        f=9702+(-19700)/(1+a)+10000/pow((1+a),2);
		ff=-(-19700/pow((1+a),2)+2*10000/pow((1+a),3));
		a=a-f/ff;
    }
    printf("%f",a);
	return 0;
}
