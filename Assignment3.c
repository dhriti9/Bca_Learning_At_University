//Can you help your digital design faculty in correcting the assignment on number conversions by writing a program to convert a decimal number to its binary equivalent using a while loop.
//Example, lets say input is 7, output should be 111

int main()
{
  int a[100],n,i;    
printf("Enter the number to convert: ");    
scanf("%d",&n);   
i=0;
while(n>0)    
{    
a[i]=n%2;    
n=n/2;  
i++;
}    
printf("\nBinary of Given Number is=");    
i=i-1;
while(i>=0)    
{    
printf("%d",a[i]);  
i--;
}
  return 0;
}
