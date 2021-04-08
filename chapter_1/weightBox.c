#include <stdio.h>
#define CONSTANT_FOR_WEIGHT 166

int main(void)
{
    //v1
    /*int height,width,length;
    int constantVal;
    int volume;
    int weight;

    height = 12;
    width = 10;
    length = 8;

    volume = height * width * length;

    constantVal = 166;

    weight = (volume + 165)/constantVal;

    printf("Dimensions: %dx%dx%d \n",height,width,length);
    printf("Volume (cubic inches) : %d \n", volume);
    printf("Dimensional weight (pounds): %d \n", weight);
    */
   
   //v2
   int height,width,length,volume,dimensionweight;

   printf("Enter height: ");
   scanf("%d", &height);

   printf("Enter width: ");
   scanf("%d", &width);
   
   printf("Enter length: ");
   scanf("%d", &length);

   volume = height*width*length;

   dimensionweight = (volume+165)/CONSTANT_FOR_WEIGHT;

   printf("Dimensions: %dx%dx%d \n",height,width,length);
   printf("Volume (cubic inches) : %d \n", volume);
   printf("Dimensional weight (pounds): %d \n", dimensionweight);
   
   return 0;
}