#include <stdio.h>

void reverse_arr(int array[], int length);

int main(void){
    int my_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int my_length = 10;

    reverse_arr(my_array, my_length);

    for (int i = 0; i < my_length; i++)
        printf("my_array[%d] = %d\n", i, my_array[i]);

    return 0;
}

void reverse_arr(int array[], int length)
{
    int temp = 0;

    for (int i=0; i<(length / 2); i++){
        temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }
}