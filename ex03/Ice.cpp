/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:07:34 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/04 13:37:43 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Implementation of the default constructor
Ice::Ice(): AMateria("ice") {}

// Implementation of the copy constructor
Ice::Ice(Ice const &old_obj) {}

// Implementation of the copy assignment operator
Ice &Ice::operator=(Ice const &other) {}

// Implementation of the destructor
Ice::~Ice() {}

// Implementation of the clone()
AMateria *Ice::clone() const { return (new Ice()); }
