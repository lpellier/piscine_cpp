#include "MateriaSource.hpp"

//                                 _             _        ___                         _                   //
//                                (_)           | |      / __)                    _  (_)                  //
//    ____ _____ ____   ___  ____  _  ____ _____| |    _| |__ _   _ ____   ____ _| |_ _  ___  ____   ___  //
//   / ___|____ |  _ \ / _ \|  _ \| |/ ___|____ | |   (_   __) | | |  _ \ / ___|_   _) |/ _ \|  _ \ /___) //
//  ( (___/ ___ | | | | |_| | | | | ( (___/ ___ | |     | |  | |_| | | | ( (___  | |_| | |_| | | | |___ | //
//   \____)_____|_| |_|\___/|_| |_|_|\____)_____|\_)    |_|  |____/|_| |_|\____)  \__)_|\___/|_| |_(___/  //

MateriaSource::MateriaSource(void) {
	std::cout << "MateriaSource : Default constructor called" << std::endl;
	this->_materiaKnowledge = new AMateria *[4];
	for (int i = 0; i < 4; i++)
		this->_materiaKnowledge[i] = NULL;
}

MateriaSource::~MateriaSource(void) {
	std::cout << "MateriaSource : Destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_materiaKnowledge[i]) {
			delete this->_materiaKnowledge[i];
			this->_materiaKnowledge[i] = NULL;
		}
	}
	delete [] this->_materiaKnowledge;
	this->_materiaKnowledge = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	std::cout << "MateriaSource : Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_materiaKnowledge[i]) {
			delete this->_materiaKnowledge[i];
			this->_materiaKnowledge[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
		this->_materiaKnowledge[i] = src.getMateriaKnowledge()[i]->clone();
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src) {
	std::cout << "MateriaSource : Assignment operator called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_materiaKnowledge[i]) {
			delete this->_materiaKnowledge[i];
			this->_materiaKnowledge[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
		this->_materiaKnowledge[i] = src.getMateriaKnowledge()[i]->clone();
	return *this;
}

//   _____  ____ ____ _____  ___  ___  ___   ____ ___  //
//  (____ |/ ___) ___) ___ |/___)/___)/ _ \ / ___)___) //
//  / ___ ( (__( (___| ____|___ |___ | |_| | |  |___ | //
//  \_____|\____)____)_____|___/(___/ \___/|_|  (___/  //

AMateria **	MateriaSource::getMateriaKnowledge(void) const {
	return this->_materiaKnowledge;
}

//                 _           _                   //
//   ____  _   _ _| |_ _____ _| |_ ___   ____ ___  //
//  |    \| | | (_   _|____ (_   _) _ \ / ___)___) //
//  | | | | |_| | | |_/ ___ | | || |_| | |  |___ | //
//  |_|_|_|____/   \__)_____|  \__)___/|_|  (___/  //

//                     _               _       //
//                 _  | |             | |      //
//   ____  _____ _| |_| |__   ___   __| | ___  //
//  |    \| ___ (_   _)  _ \ / _ \ / _  |/___) //
//  | | | | ____| | |_| | | | |_| ( (_| |___ | //
//  |_|_|_|_____)  \__)_| |_|\___/ \____(___/  //

void		MateriaSource::learnMateria(AMateria * src) {
	for (int idx = 0; idx < 4; idx++) {
		if (!this->_materiaKnowledge[idx]) {
			this->_materiaKnowledge[idx] = src;
			std::cout << "Materia source " << src->getType() << " learned" << std::endl;
			break;
		}
	}
}

AMateria *	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->_materiaKnowledge[i]->getType() == type) {
			return (this->_materiaKnowledge[i]->clone());
		}
	}
	return (0);
}
