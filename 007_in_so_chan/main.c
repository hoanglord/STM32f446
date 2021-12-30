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
	int32_t i=1;
	uint32_t dem_so_chan=0;

	while(i<=100){
		if(i%2==0){
			printf("%2d\n" ,i);// in ra so cach 2 khoang trang
			dem_so_chan++;

		}
		i++;

	}
	printf("tong so chan la: %u\n",dem_so_chan);
void wait_for_user_input(void){
	printf("Press enter key to exit this application");
	while(getchar() !='\n'){

		}
		getchar();
		}
wait_for_user_input();
}

