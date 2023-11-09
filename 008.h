//
// Created by timo on 11/5/23.
//
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void PrintArray(int array[], int size){
    printf("Array[%d]...\n--------\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Array[%d] = %d\n", i, array[i]);
    }
}

void  FillArray(int array[], int size){
    puts("Enter values\n--------");
    for (int i = 0; i < size; ++i) {
        printf("%s", ">>  ");
        scanf("%d", &array[i]);
    }
}

void /*last var is 0 for asc and 1 for desc*/BubbleSort(int numbers[], int size, int order){
    switch (order) {
        case 0:
            puts("Ascending bubble sort\n--------");
            for (int i = 0; i < size; ++i) {
                for (int j = 0; j < size; ++j) {
                    if (numbers[i] < numbers[j]) { // '<' for ascending and '>' for descending  type of sorting
                        swap(&numbers[i], &numbers[j]);
                    }
                }
            }
            break;
        case 1:
            puts("Descending bubble sort\n--------");
            for (int i = 0; i < size; ++i){
                for (int j = 0; j < size; ++j){
                    if (numbers[i] > numbers[j]) { // '<' for ascending and '>' for descending  type of sorting
                        swap(&numbers[i], &numbers[j]);
                    }
                }
            }
            break;
        default:
            puts("Error in assigning the order\nTry again");
            exit(2);
    }
}
