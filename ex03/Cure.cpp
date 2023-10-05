/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:07:32 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/05 17:33:51 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Implementation of the default constructor
Cure::Cure(): AMateria("cure") {}

// Implementation of the copy constructor
Cure::Cure(Cure const &old_obj): AMateria(old_obj) {}

// Implementation of the copy assignment operator
Cure &Cure::operator=(Cure const &other) {
    if (this != &other)
        AMateria::operator=(other);
    return (*this);
}

// Implementation of the destructor
Cure::~Cure() {}

// Implementation of the clone()
AMateria *Cure::clone() const { return (new Cure()); }

// Implementation of the use(ICharacter &)
void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
