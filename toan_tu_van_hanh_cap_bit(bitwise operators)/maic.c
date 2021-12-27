/*
 * maic.c
 *
 *  Created on: Dec 27, 2021
 *      Author: HOANG PC
 */

#include <stdio.h>
#include <stdint.h>
void wait_for_user_input(void);
int main(void){

	int32_t num1, num2;

	printf("nhap vao 2 so ( co khoang trang giua 2 so:");
	scanf("%d %d",&num1,&num2);
	printf("Bitwise AND(&):%d\n",(num1 & num2));
	printf("Bitwise OR(|):%d\n",(num1 | num2));
	printf("Bitwise XOR(^):%d\n",(num1 ^ num2));
	printf("Bitwise NOT(~):%d\n",(~num1));


	wait_for_user_input();


}
void wait_for_user_input(void){
	printf("Press enter key to exit this application");
	while(getchar() !='\n'){

	}
	getchar();
}
