#include <stdio.h>
 int main() {
   int var1 = 19;
   char var2 = 'A'; // ASCII value of 'A' is 65 if it was 'a' it would be 97
   var1= var1 + var2;
   float var3 = var1 + 1.0;
   printf("var1 = %d, var3 = %.2f\n", var1, var3);
 
   return 0;
}