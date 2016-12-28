#include <stdio.h>

char state[] = "HZL";

int main(void) {
 
 int leds[6];
 int i, j, k, x, y;
  
 printf("        one led on            |        two leds on       \n");

 for (x = 0; x < 6; x++)  leds[x] = 0;
 
 for ( i = 0; i < 3; i++)
   for ( j = 0; j < 3; j++) 
     for (k = 0; k < 3; k++) {
     
     

       if ((i == 0) && (j == 2)) leds[0] = 1; else leds[0] = 0;
       if ((i == 2) && (j == 0)) leds[1] = 1; else leds[1] = 0;
       if ((i == 0) && (k == 2)) leds[2] = 1; else leds[2] = 0;
       if ((i == 2) && (k == 0)) leds[3] = 1; else leds[3] = 0;   
       if ((k == 0) && (j == 2)) leds[4] = 1; else leds[4] = 0;
       if ((k == 2) && (j == 0)) leds[5] = 1; else leds[5] = 0;  
     
       y= 0;
       for (x = 0; x < 6; x++) y += leds[x];
     
       if (y > 1)  
         printf("                               ");
       if (y > 0)
         printf("%c %c %c -> %d %d %d %d %d %d\n", state[i], state[j], state[k], leds[0], leds[1], leds[2], leds[3], leds[4], leds[5]);
     
     }


  return 0;
}
