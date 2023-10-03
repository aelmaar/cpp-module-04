/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:17:11 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/03 11:28:12 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

// Implementation of the default constructor
WrongDog::WrongDog(): WrongAnimal("WrongDog") { std::cout << "Default constructor of WrongDog called" << std::endl; }

// Implementation of the parameterized constructor
WrongDog::WrongDog(const std::string &type): WrongAnimal(type) { std::cout << "Parameterized constructor of WrongDog called" << std::endl; }

// Implementation of the copy constructor
WrongDog::WrongDog(WrongDog const &old_obj): WrongAnimal(old_obj) {
    std::cout << "Copy constructor of WrongDog called" << std::endl;
}

// Implementation of the copy assignment operator
WrongDog &WrongDog::operator=(WrongDog const &other) {
    if (this != &other)
        WrongAnimal::operator=(other);
    std::cout << "Copy assignment operator of WrongDog called" << std::endl;
    return (*this);
}

// Implementation of the destructor
WrongDog::~WrongDog() { std::cout << "Destructor of WrongDog called" << std::endl; }

// Implemenatation of the getType()
const std::string &WrongDog::getType() const { return (type); }

// Implementation of the virtual function makeSound()
void    WrongDog::makeSound() const { std::cout << "WrongDog make sound" << std::endl; }
