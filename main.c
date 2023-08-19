// This program concatenates two strings

#include <stdio.h>

// Declare Functions
void concat (const char[], const char[], char[]);

int main(void) {
  // Define strings
  const char s1[] = { "Test " };
  const char s2[] = { "works." };
  char s3 [20];

  // Concatenate strings
  concat (s1, s2, s3);

  // Print string
  printf ("%s\n", s3);
  
  return 0;
}

// Define Functions
void concat (const char str1[], const char str2[], char str3[]) {
  int i;
  // Copy str1 to str3
  for (i = 0; str1[i] != '\0'; i++) {
    str3 [i] = str1 [i];
  }

  // Copy str2 to str3
  int j;
  for (j = 0; str2[j] != '\0'; j++) {
    str3 [i + j] = str2 [j];
  }

  // Terminate str3 with a null character
  str3 [i + j] = '\0';
}