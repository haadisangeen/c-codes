#include  <stdio.h>
int main (){
    int x,y,z;
    printf("enter the two numbers to swap:\n");
    scanf("%d %d", &x,&y);

    z=x;
    x=y;
    y=z;

    printf("the numbers swappd are %d,%d\n",x,y);
    return 0;
}