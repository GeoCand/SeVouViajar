#include <stdio.h>

int main () {
    char priC, segC, terC, quarC, quiC;
    
    printf("Tenho compromisso hoje [S ou N]? ");
    scanf("%s", &priC);
    printf("Vou estar da cidade? [S ou N] ");
    scanf("%s", &segC);
    printf("Tenho dinhero? [S ou N] ");
    scanf("%s", &terC);
    printf("esta chovendo? [S ou N] ");
    scanf("%s", &quarC);
    printf("E perto? [S ou N] ");
    scanf("%s", &quiC);

    if (((priC=='N' && segC =='S') && terC == 'S' && quarC == 'N') || terC=='N' && quiC== 'S')
        printf("Eu vou!!");
    else 
        printf("Eu nao vou!!");

    return 0;
}