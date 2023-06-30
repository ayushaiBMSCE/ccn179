#include<stdio.h>
#include<stdlib.h>
void main()
{
int i, j, noframes, x, x1, x2;
i=1;
j=1;
printf("Enter number of frames: ");
scanf("%d",&noframes);
while(noframes>0)
{
printf("Sending frame: %d\n",i);
x=rand()%15;
if(x%5==0)
{
for(x2=1;x2<2;x2++)
{
printf("Waiting for %d seconds\n",x2);
}
printf("Sending frames %d\n");
x=rand()%10;
}
printf("Acknowledgment received for frame %d\n", j);
noframes=noframes-1;
i++;
j++;
}
printf("End of Stop and Wait protocol");
}
