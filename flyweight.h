#pragma once
#include<iostream>
#include<string>
#include<map>
using namespace std;

class  NPC
{
protected:
	int lvl;
	int dmg;
	int hp;
public:
	virtual void create(int age) = 0; //возможно какие то параметры будут скейлится от показателя возраста
};

class Spider:public NPC
{
public:
	Spider(){ lvl = 1, dmg = 20, hp = 100;   };
	void create(int age) override
	{
		cout << "создан Паук возрастом в  " << age << " лет\n";
	}
};


class woolf :public NPC
{
public:
	woolf() { lvl = 3, dmg = 35, hp = 130; };
	void create(int age) override
	{
		cout << "создан волк возрастом в  " << age << " лет\n";
	}
};


class NPC_creator
{
	map<string, NPC*>npc;
public:
	NPC_creator()
	{
		npc["паук"] = new Spider;
		npc["волк"] = new Spider;
	}
	NPC* getNpc(string key)
	{
		if (npc.count(key))
			return npc[key];
		else
			return nullptr;
	}
};