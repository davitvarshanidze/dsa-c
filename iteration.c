#include <stdio.h>
#include <stdlib.h>

void draw(int n);

int main(void)
{
    char input[100];
    printf("Enter: ");
    scanf("%s", input);
    int num = atoi(input);
    draw(num);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}