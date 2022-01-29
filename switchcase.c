#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int check_vowel(char);
 
main()
{
   char string[100], *temp, *p, ch, *start;
 
   printf("Enter a string\n");
   gets(string);
 
   temp = string;
   p = (char*)malloc(100);
 
  if( p == NULL )
   {
      printf("Unable to allocate memory.\n");
      exit(EXIT_FAILURE);
   }
   start = p;
 
   while(*temp)
   {
      ch = *temp;
 
      if ( !check_vowel(ch) )
      {
         *p = ch;
         p++;
      }
      temp++;
   }
   *p = '\0';
 
   p = start;
   strcpy(string, pointer); /* If you wish to convert original string */
   free(p);
 
   printf("String after removing vowel(s): \"%s\"\n", string);
 
   return 0;
}
 
int check_vowel(char a)
{
  if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    return 1;
  else if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    return 1;
  else
    return 0;
}