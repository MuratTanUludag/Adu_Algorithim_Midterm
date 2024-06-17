#include<stdio.h>
int main( void ) 
{
	int row=11;
	//	print a diagonal empty line in a 11x11 grid
	//	for testing purposes the lines below were made
	/*	printf("Enter the length of the starting row:\n");
		scanf("%d",&row);*/
	for (int counter_y=0; counter_y != row;counter_y++){
		for(int counter_x=0;counter_x != row;counter_x++){
			if(counter_x==counter_y){
				printf(" ");
			}
				
			else{
				printf("*");
			}
		}
		printf("\n");
	}
}

