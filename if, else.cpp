 #include <stdio.h>

 int main()
 {
     double n;
     scanf("%lf",&n);

     if(n <=0) {
         printf("The number is negative\n");
     }
     else {
         printf("The number is positive\n");
     }
     return 0;
 }
