#include<stdio.h>
int main( void ) {
	//	take two inputs first input as S float, second input as P float then use amdahl formula and print the result.
	float Amdahl_num;
	float s_num=-1.0f;
	float p_num= -1.0f;
	while (s_num<0.0f){
	printf("Enter positive float S varible:");
	scanf("%f",&s_num);
	printf("S variable:%f1\n",s_num);
	if(s_num<0.0f){
		printf("Invalid Number");
		}
	}
	while (p_num<0.0f){
	printf("Enter positive float P varible:");
	scanf("%f",&p_num);
	printf("P variable:%f1\n",p_num);
	if(s_num<0.0f){
		printf("Invalid Number");
		}
	}
	
	Amdahl_num=p_num/s_num;
	Amdahl_num=Amdahl_num+ 1 - p_num;
	Amdahl_num=1.0f/Amdahl_num;
	
	printf("The result of Amdahl's Law is %f",Amdahl_num);
}
