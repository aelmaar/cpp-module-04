/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:32:37 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/05 17:21:07 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Implementation of the default constructor
MateriaSource::MateriaSource() {
    for (int i = 0; i < INVENTORY; i++)
        materias[i] = NULL;
}

// Implementation of the copy constructor
MateriaSource::MateriaSource(MateriaSource const &old_obj) {
    for (int i = 0; i < INVENTORY; i++)
        this->materias[i] = old_obj.materias[i];
}

// Implementation of the copy assignment operator
MateriaSource &MateriaSource::operator=(MateriaSource const &other) {
    if (this != &other)
    {
        for (int i = 0; i < INVENTORY; i++)
        {
            delete materias[i];
            materias[i] = other.materias[i];
        }
    }
    return (*this);
}

// Implementation of the destructor
MateriaSource::~MateriaSource() {
    for (int i = 0; i < INVENTORY; i++)
        delete materias[i];
}

// Implementation of the learnMateria()
void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < INVENTORY; i++)
    {
        if (materias[i] == NULL)
        {
            materias[i] = m;
            return ;
        }
    }
}

// Implementation of the createMateria()
AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < INVENTORY; i++)
    {
        if (materias[i] != NULL && materias[i]->getType() == type)
            return (materias[i]->clone());
    }
    return (NULL);
}
