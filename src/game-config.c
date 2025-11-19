#include "../includes/game-config.h"

const GameRules MEGASENA_RULES = {
  .name = "MEGASENA",
  .min_number = 1,
  .max_number = 60,
  .generated_count = 6,
  .min_select = 6,
  .max_select = 20
};
const GameRules LOTOFACIL_RULES = {
  .name = "LOTOFACIL",
  .min_number = 1,
  .max_number = 25,
  .generated_count = 15,
  .min_select = 15,
  .max_select = 20
};
const GameRules QUINA_RULES = {
  .name = "QUINA",
  .min_number = 1,
  .max_number = 80,
  .generated_count = 5,
  .min_select = 5,
  .max_select = 15
};
const GameRules LOTOMANIA_RULES = {
  .name = "LOTOMANIA",
  .min_number = 0,
  .max_number = 99,
  .generated_count = 20,
  .min_select = 50,
  .max_select = 50
};
const GameRules DUPLASENA_RULES = {
  .name = "DUPLASENA",
  .min_number = 1,
  .max_number = 50,
  .generated_count = 6,
  .min_select = 6,
  .max_select = 15
};
const GameRules TIMEMANIA_RULES = {
  .name = "TIMEMANIA",
  .min_number = 1,
  .max_number = 80,
  .generated_count = 7,
  .min_select = 10,
  .max_select = 10
};