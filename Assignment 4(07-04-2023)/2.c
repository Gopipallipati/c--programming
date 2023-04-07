#include <stdio.h>
#include <stdlib.h>

#define MAX_PLAYERS 11

struct player {
    char name[50];
    int runs_scored;
};

int main() {
    int i, num_players, total_runs = 0;
    struct player team[MAX_PLAYERS];

    printf("Enter the number of players in the team (maximum %d): ", MAX_PLAYERS);
    scanf("%d", &num_players);

    // Input player details and runs scored
    for (i = 0; i < num_players; i++) {
        printf("Enter details for player %d:\n", i+1);
        printf("Name: ");
        scanf("%s", team[i].name);
        printf("Runs scored: ");
        scanf("%d", &team[i].runs_scored);
        total_runs += team[i].runs_scored;
    }

    // Print team information and total runs
    printf("\nTeam information:\n");
    for (i = 0; i < num_players; i++) {
        printf("%s: %d runs\n", team[i].name, team[i].runs_scored);
    }
    printf("Total runs scored by the team: %d\n", total_runs);

    return 0;
}

