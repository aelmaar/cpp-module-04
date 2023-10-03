/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:17:07 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/03 11:27:36 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Implementation of the default constructor
WrongCat::WrongCat(): WrongAnimal("WrongCat") { std::cout << "Default constructor of WrongCat called" << std::endl; }

// Implementation of the parameterized constructor
WrongCat::WrongCat(const std::string &type): WrongAnimal(type) { std::cout << "Parameterized constructor of WrongCat called" << std::endl; }

// Implementation of the copy constructor
WrongCat::WrongCat(WrongCat const &old_obj): WrongAnimal(old_obj) {
    std::cout << "Copy constructor of WrongCat called" << std::endl;
}

// Implementation of the copy assignment operator
WrongCat &WrongCat::operator=(WrongCat const &other) {
    if (this != &other)
        WrongAnimal::operator=(other);
    std::cout << "Copy assignment operator of WrongCat called" << std::endl;
    return (*this);
}

// Implementation of the destructor
WrongCat::~WrongCat() { std::cout << "Destructor of WrongCat called" << std::endl; }

// Implemenatation of the getType()
const std::string &WrongCat::getType() const { return (type); }

// Implementation of the virtual function makeSound()
void    WrongCat::makeSound() const { std::cout << "WrongCat make sound" << std::endl; }
