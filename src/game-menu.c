#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "../includes/game-config.h"
#include "../includes/game-menu.h"
#include "../includes/games.h"

void setGame (const GameRules *ALL_GAMES[NUM_GAMES], GameIndex gameSelected) {
  bool gamePlayed = false;

  int choice = GAME_UNSELECTED;
  if(gameSelected == GAME_UNSELECTED) {
    for(int i = 0; i < NUM_GAMES + 1; i++) {
      if(i < NUM_GAMES) {
        printf("%d - %s\n", i + 1, ALL_GAMES[i]->name);
      } else {
        printf("%d - SAIR\n", i + 1);
      }
    } 
  } 

  while (true) {
    if(choice == GAME_UNSELECTED) {
      printf("Digite o jogo que deseja jogar:");
      if(scanf("%d", &choice) != 1) {
        while(getchar() != '\n');

        printf("\n Opcao invalida. Digite um número.\n");
        choice = 0;
        continue;
      }
    }
    switch(choice) {
      case GAME_MEGASENA:
        megaSena();
        gamePlayed = true;
        break;
      case GAME_LOTOFACIL:
        lotoFacil();
        gamePlayed = true;
        break;
      case GAME_QUINA:
        quina();
        gamePlayed = true;
        break;
      case GAME_LOTOMANIA:
        lotoMania();
        gamePlayed = true;
        break;
      case GAME_DUPLASENA:
        duplaSena();
        gamePlayed = true;
        break;
      case GAME_TIMEMANIA:
        timeMania();
        gamePlayed = true;
        break;
      case EXIT:
        printf("\nEncerrando o programa...\n");
        return;
      default:
        printf("\nOpcao invalida, tente novamente\n");
        choice = GAME_UNSELECTED;
    }  

    if(gamePlayed) {
      endGame(ALL_GAMES, choice);
      return;
    }
  }
}

void endGame(const GameRules *ALL_GAMES[NUM_GAMES], GameIndex gameSelected) {
  bool running = true;
  int choice = 0;

  const char *OPTIONS[] = {
    "JOGAR NOVAMENTE", 
    "IR PARA O MENU", 
    "SAIR"
  };
  size_t OPTIONS_LENGTH = sizeof(OPTIONS) / sizeof(OPTIONS[0]);

  while(running) {
    for(int i = 0; i < OPTIONS_LENGTH; i++) {
      printf("%d - %s\n", i + 1, OPTIONS[i]);
    }
    printf("Escolha uma opcao: ");
    if (scanf("%d", &choice) != 1) {
        while (getchar() != '\n');
        printf("\nOpcao Invalida. Digite um número.\n");
        continue;
    }

    switch(choice) {
      case 1:
        setGame(ALL_GAMES, gameSelected);
        break;
      case 2:
        setGame(ALL_GAMES, GAME_UNSELECTED);
        break;
      case 3:
        printf("\nEncerrando o programa...\n");
        running = false;
        break;
      default:
        printf("\nOpcao Invalida.\n");
    }
  }

}