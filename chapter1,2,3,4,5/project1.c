#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// base to storeing player stats

typedef struct
{
    char name[50];
    int totalScore;
    int gamesPlayed;
    int gamesWon;
    int bestScore;
    char bestLevel[10];
} Player;

// diffrent functions used in game
void displayWelcome();
void displayMenu();
int playGame(int level, Player *player);
void displayScore(int score, int level);
void displayStats(Player *player);
int validateInput(int min, int max);
void clearScreen();

int main()
{
    int choice, score = 0;
    Player player = {0}; // initailise the data set we made in the begging to complete zero so everytime someone plays the game he starts with a clean slate
    srand(time(NULL));
    clearScreen();
    displayWelcome();

    printf("enter your name \n");
    fgets(player.name, sizeof(player.name), stdin);
    player.name[strcspn(player.name, "\n")] = 0;
    printf("\nWelcome, %s\n ", player.name);
    while (1)
    {
        displayMenu();
        printf("Enter your choice:");
        choice = validateInput(1, 5);
        switch (choice)
        {
        case 1:
            printf("easy level\n");
            printf("guess the number between 1 and 50 \n");
            printf("you have 10 attempts\n");
            score = playGame(1, &player);
            displayScore(score, 1);
            break;
        case 2:
            printf("medium level\n");
            printf("guess the number between 1 and 100");
            printf("you have only 8 attempts\n");
            score = playGame(2, &player);
            displayScore(score, 2);
            break;
        case 3:
            printf("hard level\n");
            printf("guess the number between 1 to 200\n");
            printf("you have only 6 attempts\n");
            score = playGame(3, &player);
            displayScore(score, 3);
            break;
        case 4:
            displayStats(&player);
            break;
        case 5:
            printf("\nthanks for playing the game ,%s\n", player.name);
            printf("final stats - games: %d | won: %d | best score : %d\n", player.gamesPlayed, player.gamesWon, player.bestScore);
            printf("see you nect time\n");
            return 0;
        default:
            printf("\n invalid choice pls try again \n");
        }
    }
    return 0;
}
void displayWelcome()
{
    printf("╔══════════════════════════════════════════════╗\n");
    printf("║        🎮 NUMBER GUESSING GAME 🎮            ║\n");
    printf("║              Enhanced Edition                ║\n");
    printf("╠══════════════════════════════════════════════╣\n");
    printf("║  🎯 Test your guessing skills!               ║\n");
    printf("║  🏆 Earn points and beat your high score!   ║\n");
    printf("║  📊 Track your progress and statistics!     ║\n");
    printf("╚══════════════════════════════════════════════╝\n\n");
}
void displayMenu()
{
    printf("┌─────────── 🎮 GAME MENU 🎮 ───────────┐\n");
    printf("│  1. 🟢 Easy Level (1-50) - 10 tries   │\n");
    printf("│  2. 🟡 Medium Level (1-100) - 8 tries │\n");
    printf("│  3. 🔴 Hard Level (1-200) - 6 tries   │\n");
    printf("│  4. 📊 Show Statistics                │\n");
    printf("│  5. 🚪 Exit Game                      │\n");
    printf("└────────────────────────────────────────┘\n");
}
int playGame(int level, Player *player)
{
    int targetNumber, guess, attempts, maxAttempts, range;
    int basePoints, score = 0;
    int min = 1, max;
    // set game parameters based on levels
    switch (level)
    {
    case 1:score = basePoints - ((attempts - 1) * basePoints / (maxAttempts + 2));
if (attempts == 1)
    score += 50;
// DELETED THE LINE THAT WAS HERE
if (score < 10)
    score = 10;
player->gamesWon++;
player->totalScore += score; // Now it only gets added once
        range = 50;
        max = 50;
        maxAttempts = 10;
        basePoints = 100;
        break;
    case 2:
        range = 100;
        max = 100;
        maxAttempts = 8;score = basePoints - ((attempts - 1) * basePoints / (maxAttempts + 2));
if (attempts == 1)
    score += 50;
// DELETED THE LINE THAT WAS HERE
if (score < 10)
    score = 10;
player->gamesWon++;
player->totalScore += score; // Now it only gets added once
        basePoints = 200;
        break;
    case 3:score = basePoints - ((attempts - 1) * basePoints / (maxAttempts + 2));
if (attempts == 1)
    score += 50;
// DELETED THE LINE THAT WAS HERE
if (score < 10)
    score = 10;
player->gamesWon++;
player->totalScore += score; // Now it only gets added once
        range = 200;
        max = 200;
        maxAttempts = 6;
        basePoints = 500;
        break;
    }

    // generating random number
    targetNumber = (rand() % range) + 1;
    printf("number generated start guessing\n");
    printf("base points: %d| points decrease with wrong guesses\n", basePoints);
    player->gamesPlayed++;
    for (attempts = 1; attempts <= maxAttempts; attempts++)
    {
        printf("attempts %d/%d\n", attempts, maxAttempts);
        printf("range: %d - %d\n", min, max);
        printf("enter your guess:");
        guess = validateInput(1, range);
        if (guess == targetNumber)
        {
            printf("conratulation you win\n");
            printf("the secret number was : %d\n", targetNumber);
            printf("guessed in %d attempts\n", attempts);
            // calculating score with bonus for quick guessing
            score = basePoints - ((attempts - 1) * basePoints / (maxAttempts + 2));
            if (attempts == 1)
                score += 50;
            // DELETED THE LINE THAT WAS HERE
            if (score < 10)
                score = 10;
            player->gamesWon++;
            player->totalScore += score; // Now it only gets added once

            // updating the best score
            if (score > player->bestScore)
            {
                player->bestScore = score;
                sprintf(player->bestLevel, "level %d", level);
            }
            return score;
        }
        else if (guess < targetNumber)
        {
            printf("too low the number is higher then %d\n", guess);
            if (guess >= min)
                min = guess + 1; // updates the range
        }
        else
        {
            printf("too high the number is lower then %d\n", guess);
            if (guess <= max)
                max = guess - 1; // updates th upper range
        }
        printf("attempts remaining %d\n", maxAttempts - attempts);
    }
    // if all attempts are used
    printf("GAME OVER");
    printf("THE SECRET NUMBER WAS %d\n", targetNumber);
    printf("dont give up try again to improve you skills\n");
    return 0;
}
void displayScore(int score, int level)
{
    printf("\n╔═══════════════════════════════════╗\n");
    printf("║         🏆 LEVEL COMPLETE 🏆       ║\n");
    printf("╚═══════════════════════════════════╝\n");
    if (score > 0)
    {
        printf("points earner %d\n", score);
        // performace feedback besed on score and level
        switch (level)
        {
        case 1:
            if (score >= 80)
                printf("⭐⭐⭐ PERFECT! You're a natural!\n");
            else if (score >= 60)
                printf("⭐⭐ Excellent work!\n");
            else if (score >= 40)
                printf("⭐ Good job!\n");
            else
                printf("👌 Keep practicing - you're improving!\n");
            break;
        case 2:
            if (score >= 160)
                printf("⭐⭐⭐ OUTSTANDING! Master level!\n");
            else if (score >= 120)
                printf("⭐⭐ Fantastic skills!\n");
            else if (score >= 80)
                printf("⭐ Well done!\n");
            else
                printf("👌 Good effort - try the strategic approach!\n");
            break;
        case 3:
            if (score >= 400)
                printf("⭐⭐⭐ LEGENDARY! You're unstoppable!\n");
            else if (score >= 300)
                printf("⭐⭐ Incredible mastery!\n");
            else if (score >= 200)
                printf("⭐ Impressive skills!\n");
            else
                printf("👌 Great attempt! Hard level is tough!\n");
            break;
        }
    }
    else
    {
        printf("💡 No points this time, but every attempt makes you better!\n");
        printf("🎯 Tip: Use binary search - guess the middle number first!\n");
        printf("📊 Example: For 1-100, start with 50, then 25 or 75, etc.\n");
    }
}

void displayStats(Player *player)
{
    printf("\n╔═══════════════════════════════════╗\n");
    printf("║      📊 PLAYER STATISTICS 📊       ║\n");
    printf("╚═══════════════════════════════════╝\n");
    printf("player: %s\n", player->name);
    printf(" games played %d\n", player->gamesPlayed);
    printf(" games won %d\n", player->gamesWon);
    printf("total score %d points\n", player->totalScore);
    printf("best single score %d (%s)\n", player->bestScore, player->bestLevel);
    if (player->gamesPlayed > 0)
    {
        double winRate = (double)player->gamesWon / player->gamesPlayed * 100;
        printf("win rate: is %.1f%%\n", winRate);
    }
}
int validateInput(int min, int max)
{
    int input;
    char buffer[100];
    while (1)
    {
        if (fgets(buffer, sizeof(buffer), stdin) != NULL)
        {
            if (sscanf(buffer, "%d", &input) == 1)
            {
                if (input >= min && input <= max)
                {
                    return input;
                }
            }
        }
        printf("invalid input pls enter between %d and %d", min, max);
    }
}
void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
