#include<stdio.h>
int main( void ) 
{
	//take ten inputs and print out the second highest input. 
	int result;
	//example array to test out
	int number_array[10]={9,4,5,3,2,6,7,7,10,5};
	printf("Enter a new number:\n");
	//takes input and stores it in an array
	for( int counter =0; counter <10; counter++){
		scanf("%d",&number_array[counter]);
	}
	int counter = 0;
	int temp_num= -1;
	//orders the array from lowest to highest
	while(counter <10){
		if(number_array[counter]>number_array[counter+1]){
				temp_num =	number_array[counter+1];
				number_array[counter+1]	=	number_array[counter];
				number_array[counter]	=	temp_num;
				counter=0;
				continue;
			}
		counter++;
	}
	//for checking the array
/*	for( int counter =0; counter <10; counter++){
		printf("%d ",number_array[counter]);
	}*/
	//checks for 8(9-1) which is the second highest.
	result=number_array[8];
	printf("2nd highest number is: %d ",result);
}


