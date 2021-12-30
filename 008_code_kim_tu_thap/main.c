  /*
 * main.c
 *
 *  Created on: Dec 30, 2021
 *      Author: HOANG PC
 */
#include <stdio.h>
#include <stdint.h>


void wait_for_user_input(void);
int main(void){
	int32_t chieu_cao;
	do{
	 printf("Nhap vao chieu cao cua kim tu thap:");
	 scanf("%d", &chieu_cao);

	}while(chieu_cao<=0);



	for(int32_t i =0; i<=chieu_cao; i++){

		for(int32_t j = i;j>0; j--){
			printf("%d\t", j);

		}
		printf("\n");
	}


 wait_for_user_input();
}
void wait_for_user_input(void){
printf("Press enter key to exit this application");
	while(getchar() !='\n'){

		}
getchar();
}


