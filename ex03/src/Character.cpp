#include "../inc/Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		_bag[i] = NULL;
	_onFloor = NULL;
}

Character::Character(Character const& obj)
{
	for (int i = 0; i < 4; i++)
	{
		_bag[i] = NULL;
		if (obj._bag[i])
			_bag[i] = obj._bag[i]->clone();
	}
	_onFloor = NULL;
	if (obj._onFloor != NULL)
		_onFloor =obj._onFloor;
}

Character::Character(std::string nm)
{
	for (int i = 0; i < 4; i++)
		_bag[i] = NULL;
	_name = nm;
	_onFloor = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_bag[i] != NULL)
			delete(_bag[i]);
	}
	if (_onFloor != NULL)
		delete(_onFloor);
}

Character& Character::operator=(Character const& obj)
{
	if (this != &obj)
	{
		_name = obj._name;
		for (int i = 0; i < 4; i++)
		{
			delete(_bag[i]);
			_bag[i] = NULL;
			if (obj._bag[i])
				_bag[i] = obj._bag[i]->clone();
		}
	}
	if (obj._onFloor != NULL)
	{
		if (_onFloor != NULL)
			delete(_onFloor);
		_onFloor =obj._onFloor;
	}
	return *this;
}

void Character::setName(std::string nm)
{
	_name = nm;
}

std::string const& Character::getName()const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (_bag[i] == NULL)
		{
			_bag[i] = m;
			return;
		}
	}
	if (_onFloor != NULL)
		delete(_onFloor);
	_onFloor = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && _bag[idx])
	{
		if (_onFloor != NULL)
			delete(_onFloor);
		_onFloor = _bag[idx];
		_bag[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && _bag[idx])
		_bag[idx]->use(target);
}