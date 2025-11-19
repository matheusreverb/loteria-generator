#include <stdlib.h>

#include "../includes/game-menu.h"
#include "../includes/game-config.h"

const GameRules *ALL_GAMES[NUM_GAMES] = {
  &MEGASENA_RULES,
  &LOTOFACIL_RULES,
  &QUINA_RULES,
  &LOTOMANIA_RULES,
  &DUPLASENA_RULES,
  &TIMEMANIA_RULES
};

int main() {
  setGame(ALL_GAMES, GAME_UNSELECTED);
}