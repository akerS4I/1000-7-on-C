#include <stdio.h>
#include <string.h>

int main()
{
  char answer[50]; // increase the buffer size to accommodate longer strings

  // Array of possible "yes" options
  char *yesOptions[] = {
      "yes", "ya", "yeah", "yup", "yep", "sure", "absolutely",
      "affirmative", "aye", "certainly", "definitely", "of course",
      "okay", "ok", "alright", "right", "roger", "uh-huh",
      "indeed", "totally", "for sure", "you bet", "sure thing",
      "fine", "true", "obviously", "I agree", "I guess", "why not",
      "sounds good", "agreed", "okay-dokey", "okey-dokey",
      "exactly", "very well", "gladly", "naturally", "by all means",
      "undoubtedly", "without a doubt", "just so", "certainly so", "y", "im gay"};

  int yesCount = sizeof(yesOptions) / sizeof(yesOptions[0]); // number of elements in the array
  int isYes = 0;                                             // flag to check if the answer is a "yes"

  printf("Are you dead inside?\n");
  fgets(answer, sizeof(answer), stdin); // use fgets instead of scanf

  // Remove the newline character added by fgets
  answer[strcspn(answer, "\n")] = 0;

  // Loop through the array and check if the input matches any of the options
  for (int i = 0; i < yesCount; i++)
  {
    if (strcmp(answer, yesOptions[i]) == 0)
    {
      isYes = 1; // set flag if a match is found
      break;
    }
  }

  if (isYes) // if the answer was "yes"
  {
    int count = 1000;
    while (count > 0)
    {
      printf("%d - 7 = %d\n", count, count - 7);
      count -= 7;
    }
  }
  else
  {
    printf("GTFO\n");
  }

  return 0;
}