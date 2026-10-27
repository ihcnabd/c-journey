#include <stdio.h>

double celsius_to_fahrenheit(double cels);

int main(void)
{
    double my_cels = 0;
    double my_fahr;

    
    printf("Enter C temp: ");
    scanf("%lf", &my_cels);

    my_fahr = celsius_to_fahrenheit(my_cels);

    printf("The fahrenheit value of %.2f celsius is: %.2f", my_cels, my_fahr);

    return 0;
}

double celsius_to_fahrenheit(double cels){
    double fahr = cels * 1.8 + 32;

    return fahr;
}