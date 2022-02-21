/*
 * main.c
 *
 *  Created on: Jan 15, 2022
 *      Author: HOANG PC
 */


#include <stdio.h>
#include<stdint.h>


void displayArray(uint32_t *pArray, uint32_t t1);
void swapArray(uint32_t *array1, uint32_t *array2, uint32_t t1, uint32_t t2);

int main(void){
	uint32_t t1,t2;

	printf("Nhap vao so phan tu cua mang 1 va 2 :");
	scanf("%d %d",&t1,&t2);
	uint32_t array1[t1];
	uint32_t array2[t2];
	for(uint8_t i=0; i<t1; i++){

		printf("Nhap vao phan tu thứ %d cua mang A:", i);
		scanf("%d", &array1[i]);

	}
	for(uint8_t j=0; j<t2; j++){

			printf("Nhap vao phan tu thứ %d cua mang B:",j);
			scanf("%d", &array2[j]);

	}
	printf("Array before swap:\n");

	displayArray(array1,t1);
	printf("\n");

	displayArray(array2,t2);

	printf("\n");

	printf("Array after swap:\n");
	swapArray(array1,array2,t1,t2);
	displayArray(array1,t1);
	printf("\n");

	displayArray(array2,t2);

	printf("\n");
	getchar();
	getchar();

}



void displayArray(uint32_t *pArray1, uint32_t T){

	for(uint8_t i=0; i<T; i++){
		printf("%d  ", pArray1[i]);
	}
}
void swapArray(uint32_t *array1, uint32_t *array2, uint32_t T1, uint32_t T2)
{
	uint32_t len= T1<T2 ? T1:T2;
	for(uint8_t i=0; i<len;i++){
		uint32_t temp=array1[i];
		array1[i]=array2[i];

		array2[i]= temp;
	}





}


