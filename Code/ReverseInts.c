#include <stdio.h>

int* arrayReverse(int arr[9])
{
for (int i=0;i<=9;i++)
{
printf("enter the number: ");
scanf("%d", &arr[i]);
}

for (int i=9;i>=0;i--)
{
printf("%d ", arr[i]);
}
return 0;
}

int main()
{
int arr[9];
arrayReverse(arr);
return 0;
}
