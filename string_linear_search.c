#include <stdio.h>
#include <string.h>

int main()
{
  char *strings[] = {"audi", "porsche", "bmw", "ferrari", "lambo"};
  char n[100];

  printf("Enter: ");
  scanf("%s", &n);

  for (int i = 0; i < 5; i++)
  {
    if (strcmp(strings[i], n) == 0)
    {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}
