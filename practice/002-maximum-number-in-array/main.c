#include <stdio.h>

int find_max(int array[], int length);

int main(void){
    int array1[] = {2, 4, 0, 22, 67};
    int array2[] = {2, 4, 0, 22, 67, 533, 0};

    int max1 = find_max(array1, 5);
    int max2 = find_max(array2, 7);
    
    printf("The maximum of the arrays are: max1 = %d, and max2 = %d\n", max1, max2);
    
    return 0;
}

int find_max(int array[], int length)
{
    int max;
    max = array [0];

    for (int i=1; i<length; i++) {
        if (array[i] > max) max = array[i];
    }
    
    return max;
}