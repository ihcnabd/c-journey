#include <stdio.h>

double avg_array(double array[], int length);

int main(void){
    double my_array[] = {2.4, 2, 8.9, 0.33, 34, 12};
    int my_length = 6;

    double my_avg = avg_array(my_array, my_length);

    printf("The average is: %.2f\n", my_avg);

    return 0;
}

double avg_array(double array[], int length){
    double sum = 0;

    for (int i=0; i<length; i++){
        sum += array[i];
    }

    return sum / length;
}
