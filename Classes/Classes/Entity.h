#pragma once

#include <string>

class IPrintable
{
public:
	virtual std::string GetClassName() = 0;
};

class Entity : public IPrintable
{
public:
	virtual std::string GetName() { return "Entity"; }
	std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name)
		: m_Name(name) {}

	std::string GetName() override { return m_Name; }
	std::string GetClassName() override { return "Player"; }
};
