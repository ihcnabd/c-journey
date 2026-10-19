#include <stdio.h>

int find_min(int array[], int length);

int main(void)
{
    int array1[] = {6, 11, 5, 3};
    int array2[] = {-3, 6, 11, 5, 23, 22, 3};

    int min1 = find_min(array1, 4);
    int min2 = find_min(array2, 7);

    printf("The minimum of the arrays are: min1 = %d, and min2 = %d\n", min1, min2);
    
    return 0;
}

int find_min(int array[], int length){
    int min;

    min = array[0];

    for (int i=1; i<length; i++)
    {
        if (array[i] < min) min = array[i];
    }

    return min;
}