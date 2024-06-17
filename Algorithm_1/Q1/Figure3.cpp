#include<stdio.h>
int main( void ) 
{
	int row=9;
	//print a triangle that excludes valid coordinates of x<y and x> total-y-1 starting with row of 9 spaces
//	printf("Enter the length of the starting row:\n");
//	scanf("%d",&row);
	for (int counter_y=0; counter_y != row;counter_y++){
		for(int counter_x=0;counter_x != row;counter_x++){
			if(counter_x<counter_y  || counter_x> row - counter_y -1){
				printf(" ");
			}
				
			else{
				printf("*");
			}
		}
		if(counter_y>row/2){
			break;
		}
			
		printf("\n");
	}
}
