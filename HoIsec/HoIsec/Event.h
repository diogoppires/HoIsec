#pragma once
#ifndef EVENT_H
#define EVENT_H
#include <string>

class GameData;
class Event
{
private:
	GameData* gD;
public:
	Event(GameData* gD);
	GameData* getGameData() const;
	virtual std::string applyEvent() const = 0;
	virtual std::string toString() const = 0;
	virtual ~Event();
};

#endif // !EVENT_H


