#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char input[100],key;
    int i=0;
    printf("Enter any String :: ");
    while(1)
    {
        key=getch();
        if(key==13)  // 13 is the ASCII value of the Enter key
        {
            input[i]='\0';
            break;
        }
        if(key==8)   // 8 is the ASCII value of the Backspace key
        {
         if (i > 0) {
                i--;
                printf("\b \b");
            }
            continue;   // Erase the previous character from the console
        }
      if(key>=97 && key<=122)
        {
          key=key-32;    // Convert lowercase to uppercase
        }
        input[i]=key;
        printf("%c",key);
        i++;
    }
    return 0;
}
