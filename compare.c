#include <stdio.h>
 int main(){
 float x,y;
 printf("enter two numbers:");
 scanf("%f %f", &x, &y);
 if(x==y){
    printf("both numbers are same ");
 }
 else if(x>y)
{
    printf("%f is greater than %f",x,y);
} else {printf("%f is greater than %f",y,x);
}
return 0;
}