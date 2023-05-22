#pragma once
#include "RewardObject.h"
#include "Enemy.h"

class RewardObject;
enum class TypeOfRoom 
{
	CLASSROOM,
	HALL,
	CAFE,
	COUNT
};

void printTypeOfRoom(TypeOfRoom typeRoom); 

class Room
{
private:
	// ATTRIBUTES
	TypeOfRoom m_typeRoom;

	int m_prevDoor;
	int m_nextDoor;

	int m_width;
	int m_height;

	
	//std::vector<WildPig> m_wildPigs;
	//Ganon ganon;

public:	
	std::vector<RewardObject> m_pots;
	// CONSTRUCTOR 
	Room(TypeOfRoom typeofRoom, int width, int heigth);

	// GETTERS 
	int GetWidth()const;
	int GetHeight()const;

	int GetPrevDoor()const;
	int GetNextDoor()const;

	// METHODS 
	char** CreateRoom(const int& width, const int& height);
	void PrintRoom(char** myRoom) const;
	void CreatePots(const int& width, const int& height);

};

void deleteDynamicArray(char** myRoom, std::list<Room>::iterator it);

