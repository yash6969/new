#include <stdio.h>
  #define FEETTOMETER 0.3048
  int main() {
        float weight, height, bmi;

        /* get the input weight from the user */
        printf("Enter your weight(in kgs):");
        scanf("%f", &weight);

        /* get the input height from the user */
        printf("Enter your height(in feet):");
        scanf("%f", &height);

        /* height in meters */
        height = height * FEETTOMETER;

        /* bmi calculation */
        bmi = (weight)/(height * height);

        /* print the result */
        printf("Your Body Mass Index: %f\n", bmi);
        return 0;
  }
