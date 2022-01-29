//Question No 4
#include <stdio.h>
int main()
{
  int c = 0, count = 0;
  char s[1000]; //To Store the name of the user in s[]

  printf("Enter your name\n"); //user input of name
  gets(s);

  while (s[c] != '\0')
   { //Condition to check the number of vowels present in your name
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      count++;
    c++;
  }

  printf("NUMBER of vowels present in your name: %d", count);

  return 0;
}