#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main()
{
    srand (time(0));
    int a , b ,c , d , e , g;
    double f = 9.49 ;
    char w[] ="abcd";
    char x[] ="aabd";
    char y[] = "ABCD";
    char z[20];
    a = strcmp(w , x);
    b =strcmp(w , y);
    printf("strcmp(w , x) gives %d\n" , a);
    printf("strcmp(w , y) gives %d\n" , b);
    strcpy(z , y);
    puts(z);
    printf("The w string after using string reverse function is %s\n",strrev(w));
    c =strlen(w);
    printf("Length of string w is %d\n" , c);
    printf("Using strupr in x gives %s\n",strupr(x));
    printf("Using strlwr in y gives %s\n",strlwr(y));
    d = pow(c,a);
    printf("pow(c,a) gives %d\n",d);
    printf("sqrt(f) gives %lf\n",sqrt(f));
    e = ceil(f);
    printf("Ceiling integer of f is %d\n",e);
    printf("Floor function for f returns %lf\n",floor(f));
    g = rand() %99 + 1 ;
    printf("Value of g is %d",g);
    return 0;
}
