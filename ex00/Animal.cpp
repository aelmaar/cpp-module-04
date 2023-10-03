/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:14:41 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/02 13:57:03 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Implementation of the default constructor
Animal::Animal(): type("Animal") { std::cout << "Default constructor of Animal called" << std::endl; }

// Implementation of the parameterized constructor
Animal::Animal(const std::string &type): type(type) { std::cout << "Parameterized constructor of Animal called" << std::endl; }

// Implementation of the copy constructor
Animal::Animal(Animal const &old_obj) {
    this->type = old_obj.type;
    std::cout << "Copy constructor of Animal called" << std::endl;
}

// Implementation of the copy assignment operator
Animal &Animal::operator=(Animal const &other) {
    if (this != &other)
        this->type = other.type;
    std::cout << "Copy assignment operator of Animal called" << std::endl;
    return (*this);
}

// Implementation of the destructor
Animal::~Animal() { std::cout << "Destructor of Animal called" << std::endl; }

// Implemenatation of the getType()
const std::string &Animal::getType() const { return (type); }

// Implementation of the virtual function makeSound()
void    Animal::makeSound() const { std::cout << "Animal make sound" << std::endl; }
