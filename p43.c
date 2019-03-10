#include<stdio.h>
void main()

{

    char str[80], search[10];

    int c1 = 0, c2 = 0, i, j, f;

    gets(str);

    gets(search);

    while (str[c1] !='\0')

        c1++;

    while (search[c2] != '\0')

        c2++;

    for (i = 0; i <= c1 - c2; i++)

    {

        for (j = i; j < i + c2; j++)

        {

            f= 1;

            if (str[j] != search[j - i])

            {

                f = 0;

                break;

            }

        }

        if (f == 1)

            break;

    }

    if (f == 1)

        printf("yes");

    else

        printf("no");

}
