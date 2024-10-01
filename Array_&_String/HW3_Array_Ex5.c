#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  int x, num, low, high, mid, a[50];

  printf("Enter No. of elements\n");
  scanf("%d", &num);

  for (int i = 0; i < num; i++)
  {
    a[i] = (i + 1) * 11;
    printf("%d ", a[i]);
  }

  high = num - 1;
  low = 0;
  mid = (low + high) / 2;

  printf("\nEntered the elements to be searched \n");
  scanf("%d", &x);

  while (low <= high)
  {

    if (a[mid] == x)
    {
      printf(" Number is found at location  = %d \n", mid + 1);
      break;
    }
    else if (a[mid] < x)
      low = mid + 1;
    else
      high = mid - 1;

    mid = (low + high) / 2;
  }
  return 0;
}