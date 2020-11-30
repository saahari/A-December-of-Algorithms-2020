#include<stdio.h>
#include<math.h>
void main()
{ int i,number,square,len,half1=0,half2=0,total;
scanf("%d",&number);
square= number*number;
len=floor(log10(abs(square)))+1;
half1=square/pow(10,len/2);
half2=square-half1*pow(10,len/2);
total=half1+half2;
if((total==number)&&((total%3)==0))
printf("Safe");
else printf("Not Safe");
}
