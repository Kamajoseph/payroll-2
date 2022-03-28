/*
payroll system
create Joseph kamau
on march 8 2022
MIT license
c99
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
//   variable declaration
     char name[100] , kra[20];
     int hours, over time, gross, taxe, net;
     printf("Gitonga\'s Factory payroll\n");
     // capture input
     printf("Enter name:");
     get (name);
     printf("Enter KRA PIN");
     gets(kra);
     printf("Hours worked:");
     scanf("%d", &hours);
     //consumption
      if(hours > 40) {
               over time = (hours - 40) * 1.5 * 1000;
                gross = overtime+ (40 * 1000);
      }
      else {
          over time = 0;
    
      }
    
      tax =0.3 * gross;
      net = gross - tax;
      // output
      printf("Employment name: % s \n", name);
      printf("Gross Include: %d\n" , gross);
      printf("Tax paid: %d\n", tax);
      printf("Net Income: %d\n" ,net);
      return 0;
    
    
    
    
    
    
    
    
    
    
    
    
}