#include <stdio.h>
#include <stdlib.h>

void draw(int n);

int main()
{
    char input[100];
    printf("Enter: ");
    scanf("%s", input);
    int num = atoi(input);
    draw(num);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }

    draw(n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}