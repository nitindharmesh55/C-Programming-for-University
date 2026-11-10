#include<stdio.h>
#include<ctype.h>
int main(void)
{
   char questions[][150] = {
    "What is the largest planet in the solar system?",
    "Which language is known as the language of the web?",
    "Who developed the C programming language?",
    "What is the capital of Japan?",
    "How many bits are in one byte?",
    "Which planet is known as the Red Planet?",
    "What does CPU stand for?",
    "Which is the largest ocean on Earth?",
    "Who invented the telephone?",
    "What is the chemical symbol for gold?"
};

char options[][150] = {
    "A. Earth\nB. Jupiter\nC. Saturn\nD. Neptune",
    "A. Python\nB. Java\nC. JavaScript\nD. C",
    "A. Dennis Ritchie\nB. James Gosling\nC. Bjarne Stroustrup\nD. Guido van Rossum",
    "A. Beijing\nB. Seoul\nC. Tokyo\nD. Bangkok",
    "A. 4\nB. 8\nC. 16\nD. 32",
    "A. Venus\nB. Mars\nC. Mercury\nD. Jupiter",
    "A. Central Processing Unit\nB. Computer Personal Unit\nC. Central Program Utility\nD. Control Processing User",
    "A. Atlantic\nB. Indian\nC. Arctic\nD. Pacific",
    "A. Isaac Newton\nB. Alexander Graham Bell\nC. Thomas Edison\nD. Nikola Tesla",
    "A. Ag\nB. Fe\nC. Au\nD. Go"
};

char answerKey[] = {
    'B', 'C', 'A', 'C', 'B',
    'B', 'A', 'D', 'B', 'C'
};

int questionCount  = sizeof(questions) /  sizeof(questions[0]);

char guess ='\0';
int score = 0;

printf("**** QUIZ GAME *** \n");

for(int i  = 0;  i < questionCount; i++)
{
      printf("\n%s\n", questions[i]);
      
      printf("%s\n", options[i]);
      printf("\nEnter your Choice: ");
      scanf(" %c", &guess);

      guess =  toupper(guess);



      if(guess == answerKey[i])
      {
        printf("CORRECT\n");
        score++;
      }
      else
      {
        printf("Wrong\n");
      }
      
    
}
printf("Your Score: %d\n", score);

return 0; 
}