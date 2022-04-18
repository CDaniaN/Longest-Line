/*
Dania Naseresddin
2-24-2021
Lab 5 is a program that contains a function that copys one array into another.
The program as a whole reads 3 lines of input from the user, and prints the longest line.
*/
#include <stdio.h>

void copyString(char originalString[], char longestString[]) //copys the longest string into another array
{
  int i = 0;
  int size = 50;

  for(i = 0; i < size; i++)
  {
    longestString[i] = originalString[i];
  }
  printf("The longest line is: %s \n", longestString); //prints longest array
}

int main()
{
  char firstString[50], secondString[50], thirdString[50], longestString[50];
  char *string1 = firstString;
  char *string2 = secondString;
  char *string3 = thirdString;
  size_t stringSize = 50;
  size_t array1, array2, array3 = 0;

  printf("Please enter your first line: "); //user inputs
  array1 = getline(&string1, &stringSize, stdin);

  printf("Please enter your second line: ");
  array2 = getline(&string2, &stringSize, stdin);

  printf("Please enter your third line: ");
  array3 = getline(&string3, &stringSize, stdin);

  if(array1 > array2 && array1 > array3) //comparing the sizes
  {
    copyString(firstString, longestString); //calls function
  }
  else if(array2 > array1 && array2 > array3)
  {
    copyString(secondString, longestString);
  }
  else if(array3 > array2 && array3 > array1)
  {
    copyString(thirdString, longestString);
  }

  return 0;
}
