#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void showNumbers(char *title, int *numbers, int LIMIT) {
  printf("%s: ", title);
  for(int i = 0; i < LIMIT; i++) { 
    printf("%d", numbers[i]);
    if(i == (LIMIT - 1)) {
      printf(";\n");
    } else {
      printf(", ");
    }
  }
}

bool hasSameNumber(int newNumber, int *numbers, int LIMIT) {
  for(int i = 0; i < LIMIT; i++) {
    if(newNumber == numbers[i]) {
      return true;    
    }
  }
  return false;
}

int *generateNumbers(int LIMIT, int MAX) {
  int *numbers = calloc(LIMIT, sizeof(int));
  if(numbers == NULL) return NULL;

  int counter = 0;

  while(counter < LIMIT) {
    const int newNumber = (rand() % MAX) + 1;
    if (!hasSameNumber(newNumber, numbers, counter)) {
      numbers[counter] = newNumber;
      counter++;
    }
  }
  return numbers;
}

