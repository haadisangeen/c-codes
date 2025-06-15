#include <stdio.h>
#include <math.h>
#include <stdlib.h> // Include this for compatibility

int main()
{
    // Sqrt
    double A;
    A = sqrt(9);
    printf("The square root of 9 is %lf\n", A);

    // pow
    double B;
    B = pow(2, 3);
    printf("The power of 2 to 3 is %lf\n", B);

    // round
    double C;
    C = round(3.33); // Round to up/low
    printf("The round off (low/up) of 3.33 is %lf\n", C);

    // ceil
    C = ceil(3.44); // Round to up
    printf("The round off (up) of 3.44 is %lf\n", C);

    // floor
    C = floor(2.99); // Round to low
    printf("The round off (down) of 2.99 is %lf\n", C);

    // fabs
    double D;
    D = fabs(-100); // Modulus
    printf("The modulus of -100 is %lf\n", D);

    // log
    double E;
    E = log(10);
    printf("The log of 10 is %lf\n", E);

    // sin
    double F;
    F = sin(45 * (M_PI / 180.0)); // Convert degrees to radians
    printf("The sine of 45 degrees is %lf\n", F);

    return 0;           
}