#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_stock[4];
		AMateria *_onFloor;
	public:
		MateriaSource();
		MateriaSource(MateriaSource const& obj);
		MateriaSource& operator=(MateriaSource const& obj);

		~MateriaSource();
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

#endif