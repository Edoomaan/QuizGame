#include <stdio.h>
#include <time.h>
#include <stdbool.h>
int main() {
    time_t start_time, end_time;
    double elapsed_seconds;
    char answer;
    int score;
    int totalScore = 0;
    int timeLimit;

    printf("Choose the difficulty level:\n");
    printf("1) Hard(You have 5 second to answer the questions)\n");
    printf("2) Easy(You have 10 second to answer the questions)\n");

    int difficultyLevel;
    scanf("%d", &difficultyLevel);

    if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    } else {
        printf("Invalid choice. Exiting the program.\n");
        return 0;
    }
    // Question 1
     if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
    printf("Which colour is a tennis ball?\n");
    printf("A) Bright yellow\n");
    printf("B) Red\n");
    printf("C) Purple\n");
    printf("D) Pink\n");

    start_time = time(NULL);

    scanf(" %c", &answer);

    end_time = time(NULL); 

    elapsed_seconds = difftime(end_time, start_time);
    
    if (answer == 'A' || answer == 'a') {
        if (elapsed_seconds >= 1.0) {
            score--;  
        }
        if (elapsed_seconds >= 2.0) {
            score--; 
        }
        if (elapsed_seconds >= 3.0) {
            score--;  
        }
        if (elapsed_seconds >= 4.0) {
            score--;  
        }
        if (elapsed_seconds >= 5.0) {
            score--;  
        }
      if (score == 0) {
   printf("Your time is finished! The correct answer is: A) Bright yellow\n");
}
    } else {
        score = 0;
        printf("Incorrect! The correct answer is: A) Bright yellow\n");
    }

    totalScore += score;

    printf("Your Score: %d\n", score);

    printf("\n");

    // Question 2
      if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
    printf("Which sport does Cristiano Ronaldo play?\n");
    printf("A) Basketball\n");
    printf("B) Baseball\n");
    printf("C) Football\n");
    printf("D) Cricket\n");

    start_time = time(NULL);

    scanf(" %c", &answer);

    end_time = time(NULL); 

    elapsed_seconds = difftime(end_time, start_time);

    if (answer == 'C' || answer == 'c') {
        if (elapsed_seconds >= 1.0) {
            score--;  
        }
        if (elapsed_seconds >= 2.0) {
            score--; 
        }
        if (elapsed_seconds >= 3.0) {
            score--;  
        }
        if (elapsed_seconds >= 4.0) {
            score--;  
        }
        if (elapsed_seconds >= 5.0) {
            score--;  
        }
           if (score == 0) {
            printf("Your time is finished!The correct answer is: C) Football\n");
        }
    } else {
        score = 0;
         printf("Incorrect! The correct answer is: C) Football\n");
    }
    totalScore += score;

    printf("Your Score: %d\n", score);

    printf("\n");

    // Question 3
      if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
    printf("How many players are there in a football team?\n");
    printf("A) 7\n");
    printf("B) 9\n");
    printf("C) 11\n");
    printf("D) 13\n");

    start_time = time(NULL);

    scanf(" %c", &answer);

    end_time = time(NULL);

    elapsed_seconds = difftime(end_time, start_time);

    if (answer == 'C' || answer == 'c') {
        if (elapsed_seconds >= 1.0) {
            score--;
        }
        if (elapsed_seconds >= 2.0) {
            score--;
        }
        if (elapsed_seconds >= 3.0) {
            score--;
        }
        if (elapsed_seconds >= 4.0) {
            score--;
        }
        if (elapsed_seconds >= 5.0) {
            score--;
        }
            if (score == 0){
            printf("Your time is finished!The correct answer is: C) 11\n");
        }
    } else {
        score = 0;
         printf("Incorrect! The correct answer is: C) 11\n");
    }
    totalScore += score;

    printf("Your Score: %d\n", score);

    printf("\n");

    // Question 4
     if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
    printf("Which sport is not played with a ball?\n");
    printf("A) Baseball\n");
    printf("B) Football\n");
    printf("C) Basketball\n");
    printf("D) Ice Hockey\n");

    start_time = time(NULL);

    scanf(" %c", &answer);

    end_time = time(NULL);

    elapsed_seconds = difftime(end_time, start_time);

    if (answer == 'D' || answer == 'd') {
        if (elapsed_seconds >= 1.0) {
            score--;
        }
        if (elapsed_seconds >= 2.0) {
            score--;
        }
        if (elapsed_seconds >= 3.0) {
            score--;
        }
        if (elapsed_seconds >= 4.0) {
            score--;
        }
        if (elapsed_seconds >= 5.0) {
            score--;
        }
            if (score == 0){
            printf("Your time is finished!The correct answer is: D) Ice Hockey\n");
        }
    } else {
        score = 0;
         printf("Incorrect! The correct answer is: D) Ice Hockey\n");
    }
    totalScore += score;

    printf("Your Score: %d\n", score);

    printf("\n");

    // Question 5
   if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
    printf("What does NBA stand for?\n");
    printf("A) National Basketball Association\n");
    printf("B) National Baseball Association\n");
    printf("C) National Bowling Association\n");
    printf("D) National Boxing Association\n");

    start_time = time(NULL);

    scanf(" %c", &answer);

    end_time = time(NULL);

    elapsed_seconds = difftime(end_time, start_time);

    if (answer == 'A' || answer == 'a') {
        if (elapsed_seconds >= 1.0) {
            score--;
        }
        if (elapsed_seconds >= 2.0) {
            score--;
        }
        if (elapsed_seconds >= 3.0) {
            score--;
        }
        if (elapsed_seconds >= 4.0) {
            score--;
        }
        if (elapsed_seconds >= 5.0) {
            score--;
        }
           if (score == 0){
		   
            printf("Your time is finished!The correct answer is: A) National Ba Association\n");
        }
    } else {
        score = 0;
         printf("Incorrect! The correct answer is: A) National Ba Association\n");
    }
    totalScore += score;

    printf("Your Score: %d\n", score);

    printf("\n");

    // Question 6
      if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
    printf("With which team did Michael Jordan win 6 titles?\n");
    printf("A) Los Angeles Lakers\n");
    printf("B) Boston Celtics\n");
    printf("C) Chicago Bulls\n");
    printf("D) Houston Rockets\n");

    start_time = time(NULL);

    scanf(" %c", &answer);

    end_time = time(NULL);

    elapsed_seconds = difftime(end_time, start_time);

    if (answer == 'C' || answer == 'c') {
        if (elapsed_seconds >= 1.0) {
            score--;
        }
        if (elapsed_seconds >= 2.0) {
            score--;
        }
        if (elapsed_seconds >= 3.0) {
            score--;
        }
        if (elapsed_seconds >= 4.0) {
            score--;
        }
        if (elapsed_seconds >= 5.0) {
            score--;
        }
            if (score == 0){
            printf("Your time is finished!The correct answer is: C) Chicago Bulls\n");
        }
    } else {
        score = 0;
         printf("Incorrect! The correct answer is: C) Chicago Bulls\n");
    }
    totalScore += score;

    printf("Your Score: %d\n", score);

    printf("\n");

    // Question 7
     if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
    printf("Which country is Neymar from?\n");
    printf("A) Spain\n");
    printf("B) Brazil\n");
    printf("C) Turkey\n");
    printf("D) Spain\n");

    start_time = time(NULL);

    scanf(" %c", &answer);

    end_time = time(NULL);

    elapsed_seconds = difftime(end_time, start_time);

    if (answer == 'B' || answer == 'b') {
        if (elapsed_seconds >= 1.0) {
            score--;
        }
        if (elapsed_seconds >= 2.0) {
            score--;
        }
        if (elapsed_seconds >= 3.0) {
            score--;
        }
        if (elapsed_seconds >= 4.0) {
            score--;
        }
        if (elapsed_seconds >= 5.0) {
            score--;
        }
           if (score == 0){
            printf("Your time is finished!The correct answer is: B) Brazil\n");
        }
    } else {
        score = 0;
         printf("Incorrect! The correct answer is: B) Brazil\n");
    }
    totalScore += score;

    printf("Your Score: %d\n", score);

    printf("\n");

    // Question 8
     if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
    printf("Which country is Maria Sharapova from?\n");
    printf("A) Russia\n");
    printf("B) United States\n");
    printf("C) Germany\n");
    printf("D) France\n");

    start_time = time(NULL);

    scanf(" %c", &answer);

    end_time = time(NULL);

    elapsed_seconds = difftime(end_time, start_time);

    if (answer == 'A' || answer == 'a') {
        if (elapsed_seconds >= 1.0) {
            score--;
        }
        if (elapsed_seconds >= 2.0) {
            score--;
        }
        if (elapsed_seconds >= 3.0) {
            score--;
        }
        if (elapsed_seconds >= 4.0) {
            score--;
        }
        if (elapsed_seconds >= 5.0) {
            score--;
        }
           if (score == 0){
            printf("Your time is finished!The correct answer is: A) Russia\n");
        }
    } else {
        score = 0;
         printf("Incorrect! The correct answer is: A) Russia\n");
    }
    totalScore += score;

    printf("Your Score: %d\n", score);

// Question 9
  if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
printf("After how many years is the FIFA World Cup held?\n");
printf("A) 2 years\n");
printf("B) 3 years\n");
printf("C) 4 years\n");
printf("D) Every year\n");

start_time = time(NULL);

scanf(" %c", &answer);

end_time = time(NULL);

elapsed_seconds = difftime(end_time, start_time);

if (answer == 'C' || answer == 'c') {
    if (elapsed_seconds >= 1.0) {
        score--;
    }
    if (elapsed_seconds >= 2.0) {
        score--;
    }
    if (elapsed_seconds >= 3.0) {
        score--;
    }
    if (elapsed_seconds >= 4.0) {
        score--;
    }
    if (elapsed_seconds >= 5.0) {
        score--;
    }
       if (score == 0){
        printf("Your time is finished!The correct answer is: C) 4 years\n");
    }
} else {
    score = 0;
     printf("Incorrect! The correct answer is: C) 4 years\n");
    }
totalScore += score;

printf("Your Score: %d\n", score);

printf("\n");

// Question 10
  if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
printf("Which sport is performed by the legend 'Muhammad Ali'?\n");
printf("A) Weightlifting\n");
printf("B) Swimming\n");
printf("C) Boxing\n");
printf("D) Shooting\n");

start_time = time(NULL);

scanf(" %c", &answer);

end_time = time(NULL);

elapsed_seconds = difftime(end_time, start_time);

if (answer == 'C' || answer == 'c') {
    if (elapsed_seconds >= 1.0) {
        score--;
    }
    if (elapsed_seconds >= 2.0) {
        score--;
    }
    if (elapsed_seconds >= 3.0) {
        score--;
    }
    if (elapsed_seconds >= 4.0) {
        score--;
    }
    if (elapsed_seconds >= 5.0) {
        score--;
    }
       if (score == 0){
        printf("Your time is finished!The correct answer is: C) Boxing\n");
    }
} else {
    score = 0;
     printf("Incorrect! The correct answer is: C) Boxing\n");
    }
totalScore += score;

printf("Your Score: %d\n", score);

// Question 11
  if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
printf("Which sport is Ronnie O’Sullivan famous for?\n");
printf("A) Poker\n");
printf("B) Snooker\n");
printf("C) Tennis\n");
printf("D) Chess\n");

start_time = time(NULL);

scanf(" %c", &answer);

end_time = time(NULL);

elapsed_seconds = difftime(end_time, start_time);

if (answer == 'B' || answer == 'b') {
    if (elapsed_seconds >= 1.0) {
        score--;
    }
    if (elapsed_seconds >= 2.0) {
        score--;
    }
    if (elapsed_seconds >= 3.0) {
        score--;
    }
    if (elapsed_seconds >= 4.0) {
        score--;
    }
    if (elapsed_seconds >= 5.0) {
        score--;
    }
       if (score == 0){
        printf("Your time is finished!The correct answer is: B) Snooker\n");
    }
} else {
    score = 0;
     printf("Incorrect! The correct answer is: B) Snooker\n");
    }
totalScore += score;

printf("Your Score: %d\n", score);

printf("\n");

// Question 12
  if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
printf("Which sport does Roger Federer play?\n");
printf("A) Volleyball\n");
printf("B) Tennis\n");
printf("C) Table Tennis\n");
printf("D) Badminton\n");

start_time = time(NULL);

scanf(" %c", &answer);

end_time = time(NULL);

elapsed_seconds = difftime(end_time, start_time);

if (answer == 'B' || answer == 'b') {
    if (elapsed_seconds >= 1.0) {
        score--;
    }
    if (elapsed_seconds >= 2.0) {
        score--;
    }
    if (elapsed_seconds >= 3.0) {
        score--;
    }
    if (elapsed_seconds >= 4.0) {
        score--;
    }
    if (elapsed_seconds >= 5.0) {
        score--;
    }
       if (score == 0){
        printf("Your time is finished!The correct answer is: B) Tennis\n");
    }
} else {
    score = 0;
     printf("Incorrect! The correct answer is: B) Tennis\n");
    }
totalScore += score;

printf("Your Score: %d\n", score);

printf("\n");


// Question 13
  if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
printf("Which team did Kobe Bryant play for?\n");
printf("A) Chicago Bulls\n");
printf("B) Golden State Warriors\n");
printf("C) Los Angeles Lakers\n");
printf("D) Miami Heat\n");

start_time = time(NULL);

scanf(" %c", &answer);

end_time = time(NULL);

elapsed_seconds = difftime(end_time, start_time);

if (answer == 'C' || answer == 'c') {
    if (elapsed_seconds >= 1.0) {
        score--;
    }
    if (elapsed_seconds >= 2.0) {
        score--;
    }
    if (elapsed_seconds >= 3.0) {
        score--;
    }
    if (elapsed_seconds >= 4.0) {
        score--;
    }
    if (elapsed_seconds >= 5.0) {
        score--;
    }
       if (score == 0){
        printf("Your time is finished!The correct answer is: C) Los Angeles Lakers\n");
    }
} else {
    score = 0;
     printf("Incorrect! The correct answer is: C) Los Angeles Lakers\n");
    }
totalScore += score;

printf("Your Score: %d\n", score);

printf("\n");

// Question 14
  if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
printf("Who won the most Ballon d'Or Award?\n");
printf("A) Marco van Basten\n");
printf("B) Cristiano Ronaldo\n");
printf("C) Lionel Messi\n");
printf("D) Michel Platini\n");

start_time = time(NULL);

scanf(" %c", &answer);

end_time = time(NULL);

elapsed_seconds = difftime(end_time, start_time);

if (answer == 'C' || answer == 'c') {
    if (elapsed_seconds >= 1.0) {
        score--;
    }
    if (elapsed_seconds >= 2.0) {
        score--;
    }
    if (elapsed_seconds >= 3.0) {
        score--;
    }
    if (elapsed_seconds >= 4.0) {
        score--;
    }
    if (elapsed_seconds >= 5.0) {
        score--;
    }
       if (score == 0){
        printf("Your time is finished!The correct answer is: C) Lionel Messi\n");
    }
} else {
    score = 0;
     printf("Incorrect! The correct answer is: C) Lionel Messi\n");
    }
totalScore += score;

printf("Your Score: %d\n", score);

printf("\n");

// Question 15
  if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
printf("Which country calls football soccer?\n");
printf("A) USA\n");
printf("B) India\n");
printf("C) China\n");
printf("D) UK\n");

start_time = time(NULL);

scanf(" %c", &answer);

end_time = time(NULL);

elapsed_seconds = difftime(end_time, start_time);

if (answer == 'A' || answer == 'a') {
    if (elapsed_seconds >= 1.0) {
        score--;
    }
    if (elapsed_seconds >= 2.0) {
        score--;
    }
    if (elapsed_seconds >= 3.0) {
        score--;
    }
    if (elapsed_seconds >= 4.0) {
        score--;
    }
    if (elapsed_seconds >= 5.0) {
        score--;
    }
       if (score == 0){
        printf("Your time is finished!The correct answer is: A) USA\n");
    }
} else {
    score = 0;
     printf("Incorrect! The correct answer is: A) USA\n");
    }
totalScore += score;

printf("Your Score: %d\n", score);

printf("\n");

// Question 16
  if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
printf("Which country does Lionel Messi belong to?\n");
printf("A) PSG\n");
printf("B) Argentina\n");
printf("C) Portugal\n");
printf("D) FC Barcelona\n");

start_time = time(NULL);

scanf(" %c", &answer);

end_time = time(NULL);

elapsed_seconds = difftime(end_time, start_time);

if (answer == 'B' || answer == 'b') {
    if (elapsed_seconds >= 1.0) {
        score--;
    }
    if (elapsed_seconds >= 2.0) {
        score--;
    }
    if (elapsed_seconds >= 3.0) {
        score--;
    }
    if (elapsed_seconds >= 4.0) {
        score--;
    }
    if (elapsed_seconds >= 5.0) {
        score--;
    }
       if (score == 0){
        printf("Your time is finished!The correct answer is: B) Argentina\n");
    }
} else {
    score = 0;
     printf("Incorrect! The correct answer is: B) Argentina\n");
    }
totalScore += score;

printf("Your Score: %d\n", score);

printf("\n");

// Question 17
  if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
printf("Which sport does internet sensation 'Dan Bilzerian' play?\n");
printf("A) Shooting\n");
printf("B) Poker\n");
printf("C) Chess\n");
printf("D) Weight Lifting\n");

start_time = time(NULL);

scanf(" %c", &answer);

end_time = time(NULL);

elapsed_seconds = difftime(end_time, start_time);

if (answer == 'B' || answer == 'b') {
    if (elapsed_seconds >= 1.0) {
        score--;
    }
    if (elapsed_seconds >= 2.0) {
        score--;
    }
    if (elapsed_seconds >= 3.0) {
        score--;
    }
    if (elapsed_seconds >= 4.0) {
        score--;
    }
    if (elapsed_seconds >= 5.0) {
        score--;
    }
       if (score == 0){
        printf("Your time is finished!The correct answer is: B) Poker\n");
    }
} else {
    score = 0;
 printf("Incorrect! The correct answer is: B) Poker\n");
    }
totalScore += score;

printf("Your Score: %d\n", score);

printf("\n");

// Question 18
  if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
printf("Which racing sport does Sebastian Vettel perform?\n");
printf("A) MotoGP\n");
printf("B) Formula One\n");
printf("C) Auto Racing\n");
printf("D) Asphalt\n");

start_time = time(NULL);

scanf(" %c", &answer);

end_time = time(NULL);

elapsed_seconds = difftime(end_time, start_time);

if (answer == 'B' || answer == 'b') {
    if (elapsed_seconds >= 1.0) {
        score--;
    }
    if (elapsed_seconds >= 2.0) {
        score--;
    }
    if (elapsed_seconds >= 3.0) {
        score--;
    }
    if (elapsed_seconds >= 4.0) {
        score--;
    }
    if (elapsed_seconds >= 5.0) {
        score--;
    }
       if (score == 0){
        printf("Your time is finished!The correct answer is: B) Formula One\n");
    }
} else {
    score = 0;
     printf("Incorrect! The correct answer is: B) Formula One\n");
    }
totalScore += score;

printf("Your Score: %d\n", score);

printf("\n");

// Question 19
  if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
printf("What is Magnus Carlsen famous for?\n");
printf("A) Ludo\n");
printf("B) Chess\n");
printf("C) Poker\n");
printf("D) Billiards\n");

start_time = time(NULL);

scanf(" %c", &answer);

end_time = time(NULL);

elapsed_seconds = difftime(end_time, start_time);

if (answer == 'B' || answer == 'b') {
    if (elapsed_seconds >= 1.0) {
        score--;
    }
    if (elapsed_seconds >= 2.0) {
        score--;
    }
    if (elapsed_seconds >= 3.0) {
        score--;
    }
    if (elapsed_seconds >= 4.0) {
        score--;
    }
    if (elapsed_seconds >= 5.0) {
        score--;
    }
       if (score == 0){
        printf("Your time is finished!The correct answer is: B) Chess\n");
    }
} else {
    score = 0;
     printf("Incorrect! The correct answer is: B) Chess\n");
    }
totalScore += score;

printf("Your Score: %d\n", score);

printf("\n");

// Question 20
  if (difficultyLevel == 1) {
        timeLimit = 5;
        score = 5;
    } else if (difficultyLevel == 2) {
        timeLimit = 10;
        score = 10;
    }
printf("After how many Minutes Half Time starts in a Football match?\n");
printf("A) 30 Mins\n");
printf("B) 39 Mins\n");
printf("C) 45 Mins\n");
printf("D) 40 Mins\n");

start_time = time(NULL);

scanf(" %c", &answer);

end_time = time(NULL);

elapsed_seconds = difftime(end_time, start_time);

if (answer == 'C' || answer == 'c') {
    if (elapsed_seconds >= 1.0) {
        score--;
    }
    if (elapsed_seconds >= 2.0) {
        score--;
    }
    if (elapsed_seconds >= 3.0) {
        score--;
    }
    if (elapsed_seconds >= 4.0) {
        score--;
    }
    if (elapsed_seconds >= 5.0) {
        score--;
    }
       if (score == 0){
        printf("Your time is finished!The correct answer is: C) 45 Mins\n");
    }
} else {
    score = 0;
     printf("Incorrect! The correct answer is: C) 45 Mins\n");
    }
totalScore += score;

printf("Your Score: %d\n", score);

printf("Total Score: %d\n", totalScore);

return 0;
}

