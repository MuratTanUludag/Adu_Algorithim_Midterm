#include<stdio.h>
int main( void ) 
{
	//Take input from the user, print out the layer using switches, with appropriate text and incase the numer is not valid, notify the user.
	int layer_number=0;
	printf("Enter the layer number:");
	scanf("%d",&layer_number);
	switch(layer_number){
		case 1:
    		printf("%d Physical Layer\nTransmits raw bit stream over the physical medium",layer_number);
    		break;
  		case 2:
    		printf("%d Data Link Layer\nDefines the format of data on the network",layer_number);
    		break;
  		case 3:
    		printf("%d Network Layer\nDecides which physical path the data will take",layer_number);
    		break;
  		case 4:
    		printf("%d Transport Layer\nTransmits data using transmission protocols including TCP and UDP",layer_number);
    		break;
  		case 5:
    		printf("%d Session Layer\nMaintains connevtions and is responsible for controlling ports and sessions",layer_number);
    		break;
  		case 6:
    		printf("%d Presentation Layer\nEnsures that data is in a usable format and is where data encryption occurs",layer_number);
    		break;
  		case 7:
    		printf("%d Application Layer\nHuman-computer interaction layer,where applications can access the network sercives",layer_number);
    		break;
    	default:	
			printf("%d isn't a valid layer number",layer_number);
	}
	
}
