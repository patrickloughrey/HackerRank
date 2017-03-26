/*
*
* This is the first HackerRank data structures problem:
* Reverse the integers in an array of size N 
*
*
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {

  int i, temp;
  int num = 0;
  scanf("%d\n", &num);

  /* Dynamically allocate space for array of unknown length at compile time */
  int *arr = (int *)malloc(sizeof(int) * num);

  /* Read in the elements of the array */
  for(i = 0; i < num; i++) {
      scanf("%d ", &arr[i]);
  }

  length i - 1;
  i = 0;

  /* Swap values of array */
  while(i < length) {
      temp = arr[i];
      arr[i] = arr[length];
      arr[length] = temp;
      i++;
      length--;
  }

  for(i = 0; i < num; i++) {
      printf("%d ", arr[i]);
  }

  return 0;

}