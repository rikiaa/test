#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int r[] = { 1, 2, 3, 4, 5, 6,};
    int i, n;
    int max = 6;

    srand(time(NULL));
    for(i = 0; i < 4; i++){
        n = rand() % max;
        switch (n)
        {
        case 0:
            {
            char str[i] ="R";
            printf("%s",str);
            }
        break;
        case 1:
             {
             char str[] ="G";
             printf("%s",str);
             }
        break;
        case 2:
             {
             char str[] ="B";
             printf("%s",str);
            }
        break;
        case 3:
            {
            char str[] ="P";
            printf("%s",str);
            }
        break;
        case 4:
            {
            char str[] ="W";
            printf("%s",str);
            }
        break;
        case 5:
            {
            char str[] ="G";
            printf("%s",str);
            }
        break;
        }
    }
    printf("\n"); 
    return 0;
}