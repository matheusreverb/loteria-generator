#include "game-config.h"

#ifndef GAMEMENU_H
#define GAMEMENU_H

void endGame(const GameRules *ALL_GAMES[NUM_GAMES], GameIndex gameSelected);
void setGame(const GameRules *ALL_GAMES[NUM_GAMES], GameIndex gameSelected);

#endif