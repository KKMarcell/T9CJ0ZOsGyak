#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 20

int main()
{


        printf("\t ///// Hello üdvözöllek a SHELL programomban /////\n");
        char ch,command[LENGTH];
        int i;
        do{
            memset(command, 0, 15);
            printf("Kérek egy parancsot:\n");
            i=0;
            while(i< LENGTH-1 && (ch=getchar()) != '\n'){
                command[i++]= ch;
            }
            command[i]= '\0';
            system(command);

        }while(1);

        return 0;

}
