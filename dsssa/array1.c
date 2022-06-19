#include <stdio.h>
int main()
{
    int n, i, key, pos, arr[50];
    printf("enter the size of array ");
    scanf("%d", &n);
    printf("enter the elements of array : ");
    for (i = 0; i < n; i++)
    {
        
        scanf("%d/n", &arr[i]);
    }
    printf("entr the value and position ");
    scanf("%d %d", &key, &pos);
    for (i = n-1; i >= pos - 1; i--)
        arr[i] = arr[i - 1];
        arr[pos-1] = key;
    n++;

    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}