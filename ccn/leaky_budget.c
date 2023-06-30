#include<stdio.h>
#include<stdlib.h>
#define MIN(x,y)(x>y)?y:x
int main()
{
int orate, drop=0, cap, x, count=0, inp[10]={0}, i=0, nsec, ch;
printf("Enter the bucket size: ");
scanf("%d", &cap);
printf("Enter Output rate: ");
scanf("%d", &orate);
printf("Enter the number of inputs: ");
scanf("%d", &ch);
nsec=ch;
do
{
printf("Enter the number of incoming packets for input [%d]: ",i+1);
scanf("%d", &inp[i]);
i++;
ch--;
}
while(ch);
nsec=i;
printf("Input\tReceived\tSent\tDropped\tRemained\n");
for(i=0;count||i<nsec;i++)
{
printf("%d",i+1);
printf("\t%d\t",inp[i]);
printf("\t%d",MIN((inp[i]+count),orate));
if((x=inp[i]+count-orate)>0)
{
if(x>cap)
{
count=cap;
drop=x-cap;
}
else
{
count=x;
drop=0;
}
}
else
drop=0;
count=0;
printf("\t%d\t\t%d\n", drop, count);
}
return 0;
}
 