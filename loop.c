#include <stdio.h>
#include <unistd.h>
#include <math.h>

int main()
{
	double i = 0;	
	double para = 5.0;
	int j = 0;
	
	while(1){
		
		i = exp(para);
		para = para + 0.1;
	}
	return 0;
}