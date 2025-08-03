#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};

    int target;
    int n = sizeof(numbers) / sizeof(numbers[0]);

    int left = 0;
    int right = n - 1;

    printf("Enter: ");
    scanf("%d", &target);

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (numbers[mid] == target)
        {
            printf("Found at index: %d\n", mid);
            return 0;
        }
        else if (numbers[mid] < target)
        {
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }
    }
    printf("Not found\n");
    return 0;
}
