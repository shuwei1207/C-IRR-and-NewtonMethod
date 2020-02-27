#include <stdio.h>
#include <stdlib.h>

int main() {
	float c[3],x,Discount;
	float Low1=0,High1=0.02;
	float Value;
	int n=2;
	c[0]=9702;
	c[1]=-19700;
	c[2]=10000;
	float Middle1;
	
	while(High1-Low1>=0.00001)
	{
		Middle1 = (High1+Low1)/2;
		Value = 0;
		int i,j,k,q;
		for(i=0;i<=n;i++)
		{              
			Discount = 1;
			for(j=1;j<=i;j++)
			{           
				Discount = Discount/(1+Middle1);
			}
			Value = Value + Discount*c[i];
		}
		
		if(Value>0)
		{
			Low1 = Middle1;
		}
		else 
		{
			High1 = Middle1;
		}
    }
    printf("%f\n",High1);
 
    float Low2=0.02,High2=2;
    float Middle2; 
    int i,j,k,q;
    while(High2-Low2>=0.00001)
	{
		Middle2 = (High2+Low2)/2;
		Value = 0;
		for(i=0;i<=n;i++)
		{              
			Discount = 1;
			for(j=1;j<=i;j++)
			{           
				Discount = Discount/(1+Middle2);
			}
			Value = Value + Discount*c[i];
		}
		if(Value>0)
		{
			High2 = Middle2;
		}
		else 
		{
			Low2 = Middle2;
		}
    }
    printf("%f",High2);
    return 0;
}

