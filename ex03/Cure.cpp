/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:07:32 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/04 13:37:33 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Implementation of the default constructor
Cure::Cure(): AMateria("cure") {}

// Implementation of the copy constructor
Cure::Cure(Cure const &old_obj) {}

// Implementation of the copy assignment operator
Cure &Cure::operator=(Cure const &other) {}

// Implementation of the destructor
Cure::~Cure() {}

// Implementation of the clone()
AMateria *Cure::clone() const { return (new Cure()); }
