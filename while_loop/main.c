/*
 * main.c
 *
 *  Created on: Dec 29, 2021
 *      Author: HOANG PC
 */


#include <stdint.h>
#include <stdio.h>
void wait_for_user_input(void);
int main(void){

	uint8_t i=1;
	while(i<=10){
	printf("%d\n" ,i++);


	}

void wait_for_user_input(void){
	printf("Press enter key to exit this application");
	while(getchar() !='\n'){

	}
	getchar();
	}
wait_for_user_input();
}
