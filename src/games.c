#include <stdio.h>

#include "../includes/start-game.h"
#include "../includes/game-config.h"

void executeGame(const GameRules *rules) {
  printf("\n**%s**\n", rules->name);
  startGame(
    rules->min_number, 
    rules->max_number, 
    rules->generated_count,
    rules->min_select,
    rules->max_select
  );
}
void megaSena() {
  executeGame(&MEGASENA_RULES);
}
void lotoFacil() {
  executeGame(&LOTOFACIL_RULES);
}
void quina() {
  executeGame(&QUINA_RULES);
}
void lotoMania() {
  executeGame(&LOTOMANIA_RULES);
}
void duplaSena() {
  executeGame(&DUPLASENA_RULES);
}
void timeMania() {
  executeGame(&TIMEMANIA_RULES);
}