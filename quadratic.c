#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Give 3 coefficients (a, b, c):\n");
    scanf("%lf %lf %lf", &a, &b, &c); 

    if (a == 0) {
        printf("This quadratic equation does not exist.\n");
    } else {
        double D = (b * b) - (4 * a * c);

        if (D >= 0) {
            double R1 = (-b + sqrt(D)) / (2 * a); 
            double R2 = (-b - sqrt(D)) / (2 * a); 
            if (R1 == R2) {
                printf("The roots are the same and the value is %.2lf\n", R1);
            } else {
                printf("The roots are different and the values are %.2lf and %.2lf.\n", R1, R2);
            }
        } else {
            double realpart = -b / (2 * a);
            double imgpart = sqrt(-D) / (2 * a); 

            printf("The roots are %.2lf + %.2lfi and %.2lf - %.2lfi.\n", realpart, imgpart, realpart, imgpart);
        }
    }

    return 0;
}