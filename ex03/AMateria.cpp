/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:46:42 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/05 16:44:52 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Implementation of the default constructor
AMateria::AMateria() {}

// Implementation of the copy constructor
AMateria::AMateria(AMateria const &old_obj) {
    this->type = old_obj.type;
}

// Implementation of the paramterize constructor
AMateria::AMateria(std::string const & type): type(type) {}

// Implementation of the copy assignment operator
AMateria &AMateria::operator=(AMateria const &other) {
    if (this != &other)
        this->type = other.type;
    return (*this);
}

// Implementation of the destructor
AMateria::~AMateria() {}

// Implementation of the getType()
const std::string &AMateria::getType() const { return (type); }

// Implementation of the use()
void AMateria::use(ICharacter& target) { (void)target; }
