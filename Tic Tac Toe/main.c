#include <stdio.h>
#include <stdlib.h>


char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
int choice,player ;

int checkforwin();
void displayboard();
void markboard(char mark);

int main()
{
  int game_status  ;
  player = 1;
  char mark;
  do
  {
   //display board
   displayboard();
   // change player
   player = (player%2)?1:2;
   //get input
   printf("Player %d, enter a number: ", player);
      scanf("%d", &choice);
   // setting X or O for players
    mark = (player == 1)? 'X':'O';
    //marking on Board
    markboard(mark);
    // game_status check
    game_status = checkforwin();

    player++;

  } while (game_status == -1);

  if(game_status==0)
   { printf("the game is a Draw\n");
    printf("No Player has won the game");
    }
  else
   {printf("The Player %d has won the game",--player);
   }

   return 0 ;
}
/***
GAME RETURNS
1 FOR WIN
-1 FOR GAME IN PROGRESS
0 FOR DRAW
***/
int checkforwin()
{
  int q =0;

if(square[1]==square[2] && square[2]==square[3])
   q=1;
else if (square[1]==square[4] && square[4]==square[7])
   q=1;
else if (square[1]==square[5] && square[5]==square[9])
   q=1;
else if (square[3]==square[6] && square[6]==square[9])
   q=1;
else if (square[7]==square[8] && square[8]==square[9])
   q=1;
else if (square[7]==square[5] && square[5]==square[3])
   q=1;
else if (square[2]==square[5] && square[5]==square[8])
   q=1;
else if (square[4]==square[5] && square[5]==square[6])
   q=1;
else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]!= '7' && square[8] != '8' && square[9] != '9')
   q=0;
else
   q=-1;

 return q;
   }

//TO DRAW THE LAYOUT OF THE BOARD FOR THE GAME

void displayboard()
{

    printf("Welcome to the Tic Tac Toe\n");

    printf("PLAYER 1 - X and PLAYER 2 - 0\n");

    printf("      |    |    \n");
    printf("   %c  | %c  | %c \n",square[1],square[2],square[3]);
    printf("  ____|____|___ \n");
    printf("      |    |    \n");
    printf("   %c  | %c  | %c \n",square[4],square[5],square[6]);
    printf("  ____|____|___ \n");
    printf("      |    |    \n");
    printf("   %c  | %c  | %c \n",square[7],square[8],square[9]);
    printf("      |    |    \n");
}

// to set the X or O in the marked place
void markboard(char mark)
{
    if (choice == 1 && square[1] == '1')
        square[1] = mark;

    else if (choice == 2 && square[2] == '2')
        square[2] = mark;

    else if (choice == 3 && square[3] == '3')
        square[3] = mark;

    else if (choice == 4 && square[4] == '4')
        square[4] = mark;

    else if (choice == 5 && square[5] == '5')
        square[5] = mark;

    else if (choice == 6 && square[6] == '6')
        square[6] = mark;

    else if (choice == 7 && square[7] == '7')
        square[7] = mark;

    else if (choice == 8 && square[8] == '8')
        square[8] = mark;

    else if (choice == 9 && square[9] == '9')
        square[9] = mark;
    else
      {
        printf("Invalid move ");

        player--;

      }

}
