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
	cout << "���� ��������\n";
}
inline void Door::openTheDoor()
{
	cout << "����� ����� ������� ��� ������ ������\n";
}

void Door::lockedTheDoor()
{
	cout << "�������� �����\n";
}

inline void Engine::finish()
{
	cout<<"������� �������� ���������\n";
}
void Engine::stat(int time)
{
	cout << "������� �������� � �������" << time << " �����\n";
	finish();
}




void WashmashinDrum::toFillW(int temp)
{
	cout << "������� �������� ����� � ������������" << temp << "\n";
}


void WashmashinDrum::toEmpty()
{
	cout << "������� ��������� �� ����" << "\n";
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
	cout << "������� ���� �� ������\n\n";
	door->lockedTheDoor();
	drum->toFillW(30);
	engin->stat(40);
	drum->toEmpty();
	dryer->toDry();
	door->openTheDoor();
}
void WashingMashing::washWool()
{
	cout << "������� ���� �� ������ \n\n";
	door->lockedTheDoor();
	drum->toFillW(60);
	engin->stat(20);
	drum->toEmpty();
	dryer->toDry();
	door->openTheDoor();
}