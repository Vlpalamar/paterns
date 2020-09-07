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
	virtual void create(int age) = 0; //�������� ����� �� ��������� ����� ��������� �� ���������� ��������
};

class Spider:public NPC
{
public:
	Spider(){ lvl = 1, dmg = 20, hp = 100;   };
	void create(int age) override
	{
		cout << "������ ���� ��������� �  " << age << " ���\n";
	}
};


class woolf :public NPC
{
public:
	woolf() { lvl = 3, dmg = 35, hp = 130; };
	void create(int age) override
	{
		cout << "������ ���� ��������� �  " << age << " ���\n";
	}
};


class NPC_creator
{
	map<string, NPC*>npc;
public:
	NPC_creator()
	{
		npc["����"] = new Spider;
		npc["����"] = new Spider;
	}
	NPC* getNpc(string key)
	{
		if (npc.count(key))
			return npc[key];
		else
			return nullptr;
	}
};