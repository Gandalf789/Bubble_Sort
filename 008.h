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
    printf("Array[%d]\n--------\n", size);
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

void BubbleSort(int numbers[], int size){
    int order;
    puts("Bubble sorting\n--------");
    printf("%s", ">> [a]sc/[d]esc = ");
    order = getchar();  //getting the order in which to order the array
    switch (order) {
        case 97:
            order = 0; // order = 0 = '<'
            break;
        case 100:
            order = 1; // order = 1 = '>'
            break;
        default:
            puts("Error\nno valid input given\nTry again\n");
            exit(261);
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if(order == 0) {
                if(i == 0 && j == 0) {
                    puts("Ascending bubble sort\n--------");
                }
                if (numbers[i] < numbers[j]) { // '<' for ascending and '>' for descending  type of sorting
                    swap(&numbers[i], &numbers[j]);
                }
            }
            else {
                if(i == 0 && j == 0) {
                    puts("Descending bubble sort\n--------");
                }
                if (numbers[i] > numbers[j]) { // '<' for ascending and '>' for descending  type of sorting
                    swap(&numbers[i], &numbers[j]);
                }
            }

        }
    }
    PrintArray(numbers, size);
}
