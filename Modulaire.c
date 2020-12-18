#include <stdio.h>
#include "player.h"

int main(void)
{
    bonjour();
    int level = 15;
    printf("Niveau actuel : %d\n",level);

    level = reset_niveau();
    printf("Niveau après reset : %d\n",level);

    level = augmente_niveau();
    printf("Le Niveau est égal à : %d\n",level);

    level = augmente_niveau();
    printf("Le Niveau est égal à : %d\n",level);

    level = augmente_niveau();
    printf("Le Niveau est égal à : %d\n",level);

    level = reset_niveau();
    printf("Niveau après reset : %d\n",level);

    level = augmente_niveau();
    printf("Le Niveau est égal à : %d\n",level);

    return 0;
}