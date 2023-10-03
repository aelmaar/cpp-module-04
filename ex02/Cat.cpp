/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:17:07 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/03 11:49:34 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Implementation of the default constructor
Cat::Cat(): Animal("Cat") {
    std::cout << "Default constructor of Cat called" << std::endl; 
    this->brain = new Brain();
}

// Implementation of the parameterized constructor
Cat::Cat(const std::string &type): Animal(type) {
    std::cout << "Parameterized constructor of Cat called" << std::endl; 
    this->brain = new Brain();
}

// Implementation of the copy constructor
Cat::Cat(Cat const &old_obj): Animal(old_obj) {
    std::cout << "Copy constructor of Cat called" << std::endl;
    this->brain = old_obj.brain;
}

// Implementation of the copy assignment operator
Cat &Cat::operator=(Cat const &other) {
    if (this != &other)
    {
        Animal::operator=(other);
        delete brain;
        this->brain = other.brain;
    }
    std::cout << "Copy assignment operator of Cat called" << std::endl;
    return (*this);
}

// Implementation of the destructor
Cat::~Cat() {
    delete brain;
    std::cout << "Destructor of Cat called" << std::endl; 
}

// Implemenatation of the getType()
const std::string &Cat::getType() const { return (type); }

// Implementation of the virtual function makeSound()
void    Cat::makeSound() const { std::cout << "Cat make sound" << std::endl; }
