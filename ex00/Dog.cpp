/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:17:11 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/03 11:26:36 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Implementation of the default constructor
Dog::Dog(): Animal("Dog") { std::cout << "Default constructor of Dog called" << std::endl; }

// Implementation of the parameterized constructor
Dog::Dog(const std::string &type): Animal(type) { std::cout << "Parameterized constructor of Dog called" << std::endl; }

// Implementation of the copy constructor
Dog::Dog(Dog const &old_obj): Animal(old_obj) {
    std::cout << "Copy constructor of Dog called" << std::endl;
}

// Implementation of the copy assignment operator
Dog &Dog::operator=(Dog const &other) {
    if (this != &other)
        Animal::operator=(other);
    std::cout << "Copy assignment operator of Dog called" << std::endl;
    return (*this);
}

// Implementation of the destructor
Dog::~Dog() { std::cout << "Destructor of Dog called" << std::endl; }

// Implemenatation of the getType()
const std::string &Dog::getType() const { return (type); }

// Implementation of the virtual function makeSound()
void    Dog::makeSound() const { std::cout << "Dog make sound" << std::endl; }
