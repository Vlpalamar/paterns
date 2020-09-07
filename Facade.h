#pragma once
#include<iostream>
#include<string>
using namespace std;

class WashmashinDrum
{
	
public:
	
	void toFillW(int temp);
	void toEmpty();
};


class Engine
{

public:
	void stat(int time);
	void finish();
};

class Door
{

	
public:
	 void lockedTheDoor();
	 void openTheDoor();
};


class Dryer
{
public:
	void toDry();
};

void Dryer::toDry()
{
	cout << "вещи высушены\n";
}
inline void Door::openTheDoor()
{
	cout << "дверь можно открыть без особых усилий\n";
}

void Door::lockedTheDoor()
{
	cout << "запереть дверь\n";
}

inline void Engine::finish()
{
	cout<<"барабан закончил вращаться\n";
}
void Engine::stat(int time)
{
	cout << "барабан крутится в течении" << time << " минут\n";
	finish();
}




void WashmashinDrum::toFillW(int temp)
{
	cout << "барабан наполнен водой с температурой" << temp << "\n";
}


void WashmashinDrum::toEmpty()
{
	cout << "барабан опустошен от воды" << "\n";
}

class WashingMashing
{
	WashmashinDrum* drum;
	Dryer* dryer;
	Door* door;
	Engine* engin;
public:
	WashingMashing()
	{
		drum = new WashmashinDrum;
		dryer = new Dryer;
		door = new Door;
		engin = new  Engine;
	}
	void washCotton();
	void washWool();
};

void WashingMashing::washCotton()
{
	cout << "стираем вещи из хлопка\n\n";
	door->lockedTheDoor();
	drum->toFillW(30);
	engin->stat(40);
	drum->toEmpty();
	dryer->toDry();
	door->openTheDoor();
}
void WashingMashing::washWool()
{
	cout << "стираем вещи из шерсти \n\n";
	door->lockedTheDoor();
	drum->toFillW(60);
	engin->stat(20);
	drum->toEmpty();
	dryer->toDry();
	door->openTheDoor();
}