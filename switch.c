#include <stdio.h>

int main()
{

    int x;

    printf("Press 1 for salam.\nPress 2 for Aadab.\nPress 3 for hello.\n");
    scanf("%d",&x);

    switch(x)
    {
    case 1:
    printf("Salam");
    break;

    case 2:
    printf("Aadab");
    break;

    case 3:
    printf("hello");
    break;

    default:
    printf("Incorrect Option");
    break;
    }

    return 0;

}