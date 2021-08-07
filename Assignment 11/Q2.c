//Q2. Define a structure called “cricket” that will describe the 
//following information -
//Player name, Team name, Batting average.
//using “cricket” declare an array “player” with 50 elements and
//write a program to read the information about all the 50 players
// and print a team wise list containing names of players with their
// batting average.

#include<stdio.h>
 
int main(){
      int i,Team;
struct cricket{
      char player_name[20];
      char team_name[2];
      float batting_avg;
}player[50];

for(i=0; i<50; i++){
      printf("\nEnter player %d name: ", i+1);
      scanf("%s", player[i].player_name);
      printf("\nEnter player %d team(A/B): ", i+1);
      scanf("%s", player[i].team_name);
      printf("\nEnter player %d batting average: ", i+1);
      scanf("%f", &player[i].batting_avg);
}

printf("\nTeam A player's info:\n");
      printf("||     Name    ||    Batting Average   ||");
      printf("\n__________________________________________\n");
for(i=0; i<50; i++){
      if(*player[i].team_name=='A'){
          printf("||%9s    ||       %.2f          ||\n", player[i].player_name, player[i].batting_avg);
      }
}
printf("\n__________________________________________\n");

printf("\n\nTeam B player's info:\n");
      printf("||     Name    ||    Batting Average   ||");
      printf("\n__________________________________________\n");
for(i=0; i<50; i++){
      if(*player[i].team_name=='B'){
          printf("||%9s    ||       %.2f          ||\n", player[i].player_name, player[i].batting_avg);
      }
}
printf("\n__________________________________________\n");
 
return 0;
}
