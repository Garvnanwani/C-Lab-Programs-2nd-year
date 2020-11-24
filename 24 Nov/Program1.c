// Write a program in C to input a email address and validate the email.
// Give Appropriate Error message

#include <stdio.h>
#include <string.h>

int isChar(char ch)
{
  return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}
int isNum(char ch)
{
  return (ch >= '0' && ch <= '9');
}

int main()
{
  char email[30];
  printf("Enter Email id : ");
  gets(email);
  int n = strlen(email);
  int isValid = 1, posAt = -1, posDot = -1;

  if (n < 6)
  {
    printf("username is too small\n");
    isValid = 0;
  }
  if (!isChar(email[0]) && !isNum(email[0]))
  {
    printf("email should start with a character or a number");
    isValid = 0;
  }

  for (int i = 0; i < n; i++)
  {
    if (email[i] == '@')
    {
      if (posAt > 0)
      {
        printf("'@' can't be repeated\n");
        isValid = 0;
      }
      posAt = i;
      continue;
    }
    if (email[i] == '.' && email[i + 1] == '.')
    {
      printf(". cant be repeated\n");
      isValid = 0;
      continue;
    }
    if (email[i] == '.')
    {
      posDot = i;
      continue;
    }
    if (!isChar(email[i]))
    {
      if (!isNum(email[i]))
      {
        printf("Special characters are not allowed in a email %c at position %d \n", email[i], i);
        isValid = 0;
      }
    }
  }

  if (posAt < 0)
  {
    printf("'@' is not present in the email\n");
    isValid = 0;
  }

  if (posDot < 0)
  {
    printf("'.' is not present in the email\n");
    isValid = 0;
  }

  if (posAt > posDot && posDot == -1)
  {
    printf("'@' can't be after '.'\n");
    isValid = 0;
  }

  if (posDot == n - 1)
  {
    printf("'.' can't be placed at the end\n");
    isValid = 0;
  }

  if (isValid == 1)
  {
    printf("Valid Email");
  }
}
