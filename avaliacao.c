#include <stdio.h>

void limpar_buffer()
{
    getchar();
}

int main()
{
    char sn;
    int pessoas, homem, mulher, vegetariano, vm, vh;
    float carne, linguica, cerveja, guarana, berinjela, cebola, queijo;

    printf("\nQuantos homens irão participar do evento?\n");
    scanf("%d", &homem);
    limpar_buffer();
    printf("\nQuantas mulheres irão participar do evento?\n");
    scanf("%d", &mulher);
    limpar_buffer();

    if ((homem + mulher) < 8)
    {
        printf("\nQuantidade mínima não atiginda, vá fazer mais amigos\n");
    }

    else if ((homem + mulher) > 20)
    {
        printf("Q\nuantidade máxima ultrapassada(20). Será que todos merecem ir mesmo?\n");
    }

    else
    {
        printf("\nAlguém é vegetariano?(S/N)\n");
        scanf("%c", &sn);
        limpar_buffer();

        if (65 + sn % 65 % 32 == 'S')
        {
            printf("\nQuantos vegetarianos homens irão ter?\n");
            scanf("%d", &vh);
            limpar_buffer();

            printf("\nQuantos vegetarianos mulheres irão ter?\n");
            scanf("%d", &vm);
            limpar_buffer();

            cebola = 2 * (vm + vh);
            berinjela = 2 * (vm + vh);

            carne = (0.5 * (homem - vh)) + (0.4 * (mulher - vm));
            linguica = (0.1 * (homem - vh)) + (0.1 * (mulher - vm));
            cerveja = (4 * homem) + (2 * mulher);
            queijo = (0.1 * homem) + (0.2 * mulher);
            guarana = 0.3 * (homem + mulher);

            printf("\nA quantidade de carne a ser levada para o evento será de %6.2f kg", carne);
            printf("\nA quantidade de linguiça a ser levada para o evento será de %6.2f kg", linguica);
            printf("\nA quantidade de cerveja a ser levada para o evento será de %6.2f garrafas", cerveja);
            printf("\nA quantidade de queijo a ser levado para o evento será de %6.2f kg", queijo);
            printf("\nA quantidade de guaraná a ser levada para o evento será de %6.2f litros", guarana);
            printf("\nA quantidade de berinjela a ser levada para o evento será de %6.2f kg", berinjela);
            printf("\nA quantidade de carne a ser levada para o evento será de %6.2f kg", cebola);
        }

        else
        {

            carne = (0.5 * homem) + (0.4 * mulher);
            linguica = (0.1 * homem) + (0.1 * mulher);
            cerveja = (4 * homem) + (2 * mulher);
            queijo = (0.1 * homem) + (0.2 * mulher);
            guarana = 0.3 * (homem + mulher);

            printf("\nA quantidade de carne a ser levada para o evento será de %6.2f kg", carne);
            printf("\nA quantidade de linguiça a ser levada para o evento será de %6.2f kg", linguica);
            printf("\nA quantidade de cerveja a ser levada para o evento será de %6.2f garrafas", cerveja);
            printf("\nA quantidade de queijo a ser levado para o evento será de %6.2f kg", queijo);
            printf("\nA quantidade de guaraná a ser levada para o evento será de %6.2f litros", guarana);
        }
    }
    return 0;
}