/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:32:37 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/04 17:37:59 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Implementation of the default constructor
MateriaSource::MateriaSource() {}

// Implementation of the copy constructor
MateriaSource::MateriaSource(MateriaSource const &old_obj) {}

// Implementation of the copy assignment operator
MateriaSource &MateriaSource::operator=(MateriaSource const &other) {}

// Implementation of the destructor
MateriaSource::~MateriaSource() {}

// Implementation of the learnMateria()
void MateriaSource::learnMateria(AMateria*) {}

// Implementation of the createMateria()
AMateria* MateriaSource::createMateria(std::string const & type) {}
