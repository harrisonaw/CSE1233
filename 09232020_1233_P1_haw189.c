// Name: Harrison Williams   Date Assigned: 09182020
//
// Course: CSE 1233         Due Date: 09232020
//
// File Name: 09232020_1233_P1_haw189.c
//
/* Program Description: Quidditch Statistics - The program asks user
questions about the quidditch game. The program stores the values the
user inputs, computes, and outputs statistics. 
*/

#include <stdio.h>

int main()
{
    char teamA[0]; // team who catches the Golden Snitch
    double teamAScore;
    
    char teamB[0]; // opposing team
    double teamBScore;
    
    double gPMA; // Goals Per Minute (teamA and teamB)
    double gPMB;
    double timeV; // time variable

    
    printf("        Quidditch Statistics Calculator\n\n");
    
    printf("Enter the teams, scores, and time to make it work. It's like magic!\n\n");
    
    printf("What is the initial of the team that caught the snitch?\n");
    scanf("%s", teamA);
    printf("What is the initial of the other team?\n");
    scanf("%s", teamB);
    printf("\n");

    printf("What is the final score of the team who caught the snitch?\n");
    scanf("%lf", &teamAScore);
    printf("What is the final score of the other team?\n");
    scanf("%lf", &teamBScore);
    printf("\n");

    teamAScore = (teamAScore - 150) / 10; // (- 150) from teamA because the GS is worth 150 points
    teamBScore = teamBScore / 10; // (/ 10) from both teams because each goal is worth 10 points
    
    printf("How long did the game last?\n");
    scanf("%lf", &timeV);
    printf("\n");
    
    gPMA = teamAScore / timeV; // The teams score divided by time of game
    gPMB = teamBScore / timeV; // gives us goals per minute
    
    printf("%s Team Statistics\n", teamA); 
    printf("Goals: %.0lf\n", teamAScore);
    printf("Snitch: 1\n");
    printf("Goals per Minute: %.2lf\n\n", gPMA);

    printf("%s Team Statistics\n", teamB);
    printf("Goals: %.0lf\n", teamBScore);
    printf("Snitch: 0\n");
    printf("Goals per Minute: %.2lf\n", gPMB);
    
    return 0;
}
