//By gandalf789
//testing git push
#include <stdio.h>
#include "008.h"
#define MAX_SIZE 4000
int main()
{
    int numbers[MAX_SIZE] = {0}, sizeofArray;

    puts("Size of array\n--------");
    printf("%s", ">> [n] = "); //getting the size of array
    scanf("%d", &sizeofArray);

    FillArray(numbers, sizeofArray); //Fills the array up until the specified index
    BubbleSort(numbers, sizeofArray, 0); //Bubble sorts the array
    PrintArray(numbers, sizeofArray);

    return 0;
}
