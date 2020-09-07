#pragma once
#include<iostream>
#include<string>
#include<map>
using namespace std;

class Soul;


class SoulState
{
public:
	virtual void sin(Soul* soul) = 0;
	virtual void confess(Soul* soul) = 0;
};

class Soul
{
	SoulState* state;
public:
	Soul(SoulState* ss) :state(ss) {}
	void setState(SoulState* ss) { state = ss; }
	void sin()
	{
		state->sin(this);
	}
	void confess()
	{
		state->confess(this);
	}
};

class Heaven :public SoulState
{
public:
	void confess(Soul* soul)
	{
		cout << "���� ��������� � ��� ������\n";
	}
	void sin(Soul* soul);


};
class Purgatory :public SoulState
{
public:
	void confess(Soul* soul)
	{
		cout << "�� ���������� ��������� � ���� ���� �������� � ���\n";
		soul->setState(new Heaven);
	}
	void sin(Soul* soul);
};

class Hell :public SoulState
{
public:
	void confess(Soul* soul)
	{
		cout << "�� ���������� ��������� � ���� ���� �������� � ���������\n";
		soul->setState(new Purgatory);
	}
	void sin(Soul* soul)
	{
		cout << "�� ����������� �������, �������� ������� ��� ������ �������� ������\n";
	}
	
};

void Heaven::sin(Soul* soul)
{
	cout << "�� ��������� � ���� �������� � ���������\n";
	soul->setState(new Purgatory);
}

void Purgatory::sin(Soul* soul)
{
	cout << "�� ��������� � ���� ������������ � ���, ��� ��������� �� � ��� ��� �� ���������?\n";
	soul->setState(new Hell);
}
