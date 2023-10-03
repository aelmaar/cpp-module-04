/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:03:50 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/03 11:17:22 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Implemenatation of the default constructor
Brain::Brain() { std::cout << "Default constructor of Brain called" << std::endl; }

// Implemenatation of the copy constructor
Brain::Brain(Brain const &old_obj) {
    for (int i = 0; i < 100; i++)
        this->ideas[i] = old_obj.ideas[i];
    std::cout << "Copy constructor of Brain called" << std::endl;
}

// Implemenatation of the copy assignment operator
Brain &Brain::operator=(Brain const &other) {
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];    
    }
    std::cout << "Copy assignment operator of Brain called" << std::endl;
    return (*this);
}

// Implementation of the destructor
Brain::~Brain() { std::cout << "Destructor of Brain called" << std::endl; }
