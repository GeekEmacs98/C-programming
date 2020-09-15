#include <stdio.h>
int main()
{
      float fahrenheit, celsius;
      int low, high, interval;

      low = 0;
      high = 20;
      interval = 1;
      printf("   c \t f\n\n");
      celsius = low;
      while(celsius <= high)
             {
            fahrenheit = ((9 / 5)*celsius + 32);
            printf("%3.0f \t %3.1f\n", celsius, fahrenheit);
            celsius = celsius + interval;
             }

                  return 0;
}
