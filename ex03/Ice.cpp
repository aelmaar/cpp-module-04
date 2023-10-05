/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:07:34 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/05 17:33:47 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Implementation of the default constructor
Ice::Ice(): AMateria("ice") {}

// Implementation of the copy constructor
Ice::Ice(Ice const &old_obj): AMateria(old_obj) {}

// Implementation of the copy assignment operator
Ice &Ice::operator=(Ice const &other) {
    if (this != &other)
        AMateria::operator=(other);
    return (*this);
}

// Implementation of the destructor
Ice::~Ice() {}

// Implementation of the clone()
AMateria *Ice::clone() const { return (new Ice()); }

// Implementation of the use(ICharacter &)
void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<  std::endl;
}
