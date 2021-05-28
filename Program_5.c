//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int arr[10], n, i,j, large, small;
    printf("Enter the number of element in array ");
    scanf("%d", &n);
    printf("Enter the array elements\n");
    for(i=0; i<n; i++)
    {
      scanf("%d", &arr[i]);
    }
    large=small=arr[0];
    for(i=0;i<n;i++)
    {
      if(arr[i]>large)
      large=arr[i];
      else if(arr[i]<small)
      small=arr[i];
    }
    printf("Largest number=%d",large);
    printf("Smallest number=%d", small) ;

    //Write your code here
  
    return 0;
}
