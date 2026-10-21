#include <stdio.h>

int sum_array(int array[], int length);

int main(void){
    int my_array[] = {2, 4, 1, 5, 6, 8, 3, 0};
    int my_length = 8;

    int my_sum = sum_array(my_array, my_length);

    printf("The sum of the array is: %d\n", my_sum);

    return 0;
}

int sum_array(int array[], int length)
{
    int sum = 0;

    for (int i=0; i<length; i++)
    {
        sum += array[i];
    }

    return sum;
}