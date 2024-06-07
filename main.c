#include <stdio.h>

int div(int, int );
int parite(int);
void print(int);


int main(int argc, char const *argv[])
{
    printf("Travaux Diriges 1 : \n");
    printf("Exercice 1 : Nombre pair\n");
    int n, res;

    printf("Un nombre > 0 : ");
    scanf("%d", &n);
    print(n);
        
    return 0;
}

void print(int x){
    int res = parite(x);

    if (res == 0)
        printf("%d est pair.", x);

    else
        printf("%d est impair", x);
}

int div(int x, int y){
    return !(x % y) ? 0 : 1;
}

int parite(int x){
    return div(x, 2) ? 1 : 0;
}