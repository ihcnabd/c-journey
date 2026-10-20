#include <stdio.h>

int occur_counter(int array[], int length, int target);

int main(void)
{
    int my_array[] = {3, 2, 4, 55, 2, 3, 4, 66, 7, 2, 2, 3};
    int my_target = 2;

    int my_result = occur_counter(my_array, 12, my_target);

    printf("The number %d occurred: %d times.\n", my_target, my_result);
    return 0;
}

int occur_counter(int array[], int length, int target)
{
    int counter = 0;

    for (int i=0; i<length; i++)
        if (array[i] == target) counter++;
    
    return counter;
}
