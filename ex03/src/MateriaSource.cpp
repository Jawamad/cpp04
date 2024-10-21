#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_stock[i] = NULL;
	_onFloor = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& obj)
{
	for (int i = 0; i < 4; i++)
	{
		_stock[i] = NULL;
		if (obj._stock[i])
			_stock[i] = obj._stock[i]->clone();
	}
	_onFloor = NULL;
	if (obj._onFloor != NULL)
		_onFloor =obj._onFloor;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			delete(_stock[i]);
			_stock[i] = NULL;
			if (obj._stock[i])
				_stock[i] = obj._stock[i]->clone();
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

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_stock[i] != NULL)
			delete(_stock[i]);
	}
	if (_onFloor != NULL)
		delete(_onFloor);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return;
	for (int i = 0; i < 4 ; i++)
	{
		if (_stock[i] == NULL)
		{
			_stock[i] = m;
			return;
		}
	}
	if (_onFloor != NULL)
		delete(_onFloor);
	_onFloor = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (type == _stock[i]->getType())
			return _stock[i]->clone();
	}
	return 0;
}
