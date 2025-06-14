#include <iostream>
#include <math.h>
#include "required_core.h"
#include "main_core_utils.h"

using namespace std;

int main()
{
	printf("DAEMON CALCULATOR \n");
	printf("------------------ version 1.0 \n");
	cal:
	string operator_sym;
	float n1,n2;
	
	printf("please enter your numbers/decimals \n");
	cin>>n1>>n2; // number enter shit
	printf("please enter your numeral operator \n");
	cin>>operator_sym;
        if(operator_sym == "+"){ cout<<n1 + n2<<endl; }
	if(operator_sym == "-"){ cout<<n1 - n2<<endl; }
	if(operator_sym == "/"){ cout<<n1 / n2<<endl; }
	if(operator_sym == "*"){ cout<<n1 * n2<<endl; }
	if(operator_sym == "a*"){cout<<sqrt(n1)<<endl;}
	if(operator_sym == "b*"){cout<<sqrt(n2)<<endl;}

	if(operator_sym == "exit"){
		goto exit;	
	}
	
		
	goto cal;
exit:
	return 0;
}
