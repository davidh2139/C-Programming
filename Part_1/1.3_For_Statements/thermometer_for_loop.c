#include <stdio.h>
#define START 0
#define END 300
#define STEP 20

int main () {
  float cels;
  int fahr;
  float start, end, step;


  printf("+_++Thermometer Calculator!++_+\n");
  printf("+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+\n");

  for (fahr = START; fahr <= END; fahr = fahr + STEP) {
    cels = 5 * (fahr - 32.0) / 9;
    printf("Fahr: %d\t||\tCels: %.1f\n", fahr, cels);
  }
}
