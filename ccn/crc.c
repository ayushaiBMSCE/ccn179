#include<stdio.h>
int a[100], b[100], i, j, len, k, count=0;
int gp[]={1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,};
int main()
{
 void div();
 printf("Enter the length of the data frame: ");
 scanf("%d",&len);
 printf("Enter the Message: ");
 for(i=0;i<len;i++)
 scanf("%d",&a[i]);
 for(i=0;i<16;i++)
 a[len++]=0;
 for(i=0;i<16;i++)
 b[i]=a[i];
 k=len-16;
 div();
 for(i=0;i<len;i++)
 b[i]=b[i]^a[i];
 printf("Data to be transmitted: ");
 for(i=0;i<len;i++)
 printf("%2d",b[i]);
 printf("\nEnter the Received Data: ");
 for(i=0;i<len;i++)
 scanf("%d",&a[i]);
 div();
 for(i=0;i<len;i++)
 if(a[i]!=0)
 {
 printf("\nError in Received data");
 return 0;
 }
 printf("\nData Received is Error Free.");
 return 0;
}
void div()
{
 for(i=0;i<k;i++)
 {
 if(a[i]==gp[0])
 {
 for(j=i;j<17+i;j++)
 a[j]=a[j]^gp[count++];
 }
 count=0;
 }
}
