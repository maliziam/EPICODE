#include <stdio.h>

int main()
{
    int scelta;

    do
    {
        printf("Menu':\n1 per parlare\n2 per abbaiare\n3 per cinguettare\nScelta:");
        scanf("%d", &scelta);

        switch (scelta)
        {
        case 1:
            printf("\nSecondo te posso parlare?\n");
        case 2:
            printf("\nTi sembro un cane?\n");
            break;
        case 3:
            printf("\nNon centra nulla, ma lo sapevi che Titti e' maschio?");
            break;
        default:
            printf("\nnon ho capito\n");
            scelta = 0;
        }

    } while (scelta == 0);
    return 0;
}