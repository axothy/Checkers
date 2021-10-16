#pragma once
#include "playboard.h"

class Playboard;
enum CheckerColor;
enum CheckerHierarchy;

class Player {
protected:
	Playboard* gameCheckers;
public:
	Player(Playboard* instance) { gameCheckers = instance; }

	virtual bool Turn(int x, int y, CheckerColor b_or_w);
	
};

class BotV1 : public Player {

public:
	BotV1(Playboard* instance) : Player(instance) {}
	bool Turn(int x, int y, CheckerColor b_or_w);
};

class BotV2 : public Player {

public:
	BotV2(Playboard* instance) : Player(instance) {}
	bool Turn(int x, int y, CheckerColor b_or_w);
};