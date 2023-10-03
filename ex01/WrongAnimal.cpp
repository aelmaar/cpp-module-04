/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:14:41 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/03 10:35:51 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Implementation of the default constructor
WrongAnimal::WrongAnimal(): type("WrongAnimal") { std::cout << "Default constructor of WrongAnimal called" << std::endl; }

// Implementation of the parameterized constructor
WrongAnimal::WrongAnimal(const std::string &type): type(type) { std::cout << "Parameterized constructor of WrongAnimal called" << std::endl; }

// Implementation of the copy constructor
WrongAnimal::WrongAnimal(WrongAnimal const &old_obj) {
    this->type = old_obj.type;
    std::cout << "Copy constructor of WrongAnimal called" << std::endl;
}

// Implementation of the copy assignment operator
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other) {
    if (this != &other)
        this->type = other.type;
    std::cout << "Copy assignment operator of WrongAnimal called" << std::endl;
    return (*this);
}

// Implementation of the destructor
WrongAnimal::~WrongAnimal() { std::cout << "Destructor of WrongAnimal called" << std::endl; }

// Implemenatation of the getType()
const std::string &WrongAnimal::getType() const { return (type); }

// Implementation of the virtual function makeSound()
void    WrongAnimal::makeSound() const { std::cout << "WrongAnimal make sound" << std::endl; }
