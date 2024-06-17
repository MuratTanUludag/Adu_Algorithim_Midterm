#include<stdio.h>
int main( void ) 
{
	/*Take a positive integer input then print out the integer with no other character in between,
	 take the first integer of the line and print it such that it appears at the end of the line,
	 repeat it until the entire row has been reversed in order.*/
	// I used 3 counters, first for column number, second as row number and finally third as printing out other numbers.
	// printing the counter_x that begins with counter_y till it prints the input and then prints from 1 to counter_y, except when counter_y is 1.
	int row=10;
	printf("Enter a positive number:\n");
	scanf("%d",&row);
	for (int counter_y=1; counter_y != row + 1;counter_y++){
		for(int counter_x=counter_y;counter_x != row + 1;counter_x++){
			printf("%d",counter_x);
		}
		if(counter_y!=1){
			for(int counter_left=1;counter_left<counter_y;counter_left++){
			printf("%d",counter_left);
			}
		}
		printf("\n");
	}
}
