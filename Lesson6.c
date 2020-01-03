#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b,c;
	int tmp;
	scanf("%d%d%d", &a,&b,&c);
	

	if( a > b ){ // Worst Case: swapping a with b
		tmp  = a;
		a = b;
		b = tmp;
	}
	if( b > c ){// Worst Case: swapping b(old a) with c
		tmp = b;
		b = c;
		c = tmp;
		
		if(a > b){// Worst Case: swapping old C(now b) with a. c finished moving to First Position after A
			tmp = a;
			a = b;
			b = tmp;
		}
	}//Best Case Scenario Jumps If blocks to print values automatically

	printf("%d %d %d\n", a,b,c);
	return 0;
	

}
