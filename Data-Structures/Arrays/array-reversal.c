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

  int i, size, arr[MAX];
  int *ptr;

  /* Scan standard input for size of array */
  scanf("%d", size);

  int *arr = (int *)malloc(sizeof(int) * size + 1);
  ptr = &arr[0];

  for(i = 0; i < size; i++) {
      scanf("%d", ptr);
      ptr++;
  }

  /* Set pointer to address of last array element */
  ptr = &arr[size - 1];

  for(i = size - 1; i >= 0; i--) {
      printf("%d", *ptr);
      printf(" ");
      ptr--;
  }

  return 0;

}