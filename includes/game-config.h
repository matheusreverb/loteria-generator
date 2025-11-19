#ifndef GAME_CONFIG_H
#define GAME_CONFIG_H

typedef struct {
  const char *name;
  int min_number;
  int max_number;
  int generated_count;
  int min_select;
  int max_select;
} GameRules;

typedef enum {
  GAME_UNSELECTED = 0,

  GAME_MEGASENA,
  GAME_LOTOFACIL,
  GAME_QUINA,
  GAME_LOTOMANIA,
  GAME_DUPLASENA,
  GAME_TIMEMANIA,

  GAMES,

  GAME_EXIT,
} GameIndex;

#define NUM_GAMES (GAMES - 1)
#define EXIT (GAME_EXIT - 1)

extern const GameRules MEGASENA_RULES;
extern const GameRules LOTOFACIL_RULES;
extern const GameRules QUINA_RULES;
extern const GameRules LOTOMANIA_RULES;
extern const GameRules DUPLASENA_RULES;
extern const GameRules TIMEMANIA_RULES;

extern const GameRules *ALL_GAMES[];
#endif