#include <stdio.h>
#include <string.h>

int main()
{
    char *names[] = {"Megi", "Dato", "Nino"};
    char *numbers[] = {"555-398-909", "593-422-333", "595-756-565"};
    char n[100];

    printf("Enter: ");
    scanf("%s", n);

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], n) == 0)
        {
            printf("Found: %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}