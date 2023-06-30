#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of characters: ");
    scanf("%d", &n); //n-total no characters in given data stream
    char data[n]; //to store data characters
    char result[n*2]; //to store byte stuffed data
    char fin_res[n]; //to store byte destuffed data
    //Byte stuffing
    int j=0;
    printf("Enter the character sequence: ");
    for(int i=0; i<=n; i++)
    {
        scanf("%c", &data[i]); //each input character is stored in data array
        if(data[i] == '~' || data[i]=='}') //if the character is same as flag or ESC character,
            result[j++]='}'; //then ESC character is added to the byte stuffed (resultant)
        result[j++]=data[i];
    }
    printf("After Byte Stuffing: ");
    for(int k=0; k<j; k++)
    printf("%c", result[k]); //Prints character sequence after byte stuffing

//Byte Destuffing
    int y=0;
    int z=0;
    while(z<j)
    {
        if(result[z]=='}')
        { /* if current character is '}' and next character
        is '}' or '~', then only next character is appended*/

            fin_res[y]=result[z+1];
            z=z+1;
        }
        else //otherwise, the current character is appended
        {
            fin_res[y++]=result[z];
        }
        z++;
    }
    printf("\n");
    printf("After Destuffing: ");
    for(int a=0;a<y;a++)
        printf("%c",fin_res[a]); //Prints character sequence after byte destuffing
    return 0;
}
