#include <stdio.h>

int main(void)
{
  int n;
  int numbers[] = {5, 15, 10, 30, 20, 25};

  printf("Enter: ");
  scanf("%d", &n);

  for (int i = 0; i < 6; i++)
  {
    if (numbers[i] == n)
    {
      printf("Found\n");
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}
