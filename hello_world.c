#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,k=0;
    char a[20];
    char b[20]={'h','e','l','l','o',' ','w','o','r','l','d'};
    while(b[i]!='\0')
    {
        while(a[i]!=b[i])
        {
          
            for(j=0;j<i;j++)
            {
                printf("%c",a[j]);
            }

            if(b[i]==' ')
            {
                a[i]=' ';
            }

            else
            {
                a[i]=97+k;
            }

            printf("%c\n",a[i]);
            k++;
        }
        
        k=0;
        i++;
    }

    return 0;
}