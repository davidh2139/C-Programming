#include <stdio.h>

/*
 * print Fahrenheit-Celsius conversation table in 20 degree increments
 * from 20 to 300
 */

 int main() {
   float fahr, cels;
   int start, end, step;

   start = 0.0;
   end = 300.0;
   step = 20.0;

   int i;

   fahr = start;
   printf("  This is the thermometer conversion  \n");
   printf("======================================\n");
   while (fahr <= end) {
     cels = 5.0 * (fahr - 32.0) / 9.0;
     printf("Fahrenheit:%4.0f\t||\tCelsius:%6.1f\n", fahr, cels);
     fahr = fahr + step;
   }
 }
