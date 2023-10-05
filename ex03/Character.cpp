/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:43:47 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/05 17:35:45 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

// Implementation of the default constructor
Character::Character() {
    for (int i = 0; i < INVENTORY; i++)
        materias[i] = NULL;
}

// Implementation of the copy constructor
Character::Character(Character const &old_obj) {
    for (int i = 0; i < INVENTORY; i++)
        this->materias[i] = old_obj.materias[i];
    this->name = old_obj.name;
}

// Implementation of the parameterized constructor
Character::Character(const std::string &name): name(name) {
    for (int i = 0; i < INVENTORY; i++)
        materias[i] = NULL;
}

// Implementation of the copy assignment operator
Character &Character::operator=(Character const &other) {
    if (this != &other)
    {
        for (int i = 0; i < INVENTORY; i++)
        {
            delete materias[i];
            materias[i] = other.materias[i];
        }
    }
    return (*this);
}

// Implementation of the destructor
Character::~Character() {
    for (int i = 0; i < INVENTORY; i++)
        delete materias[i];
}

// Implementation of the getName()
std::string const & Character::getName() const { return (name); }

// Implementation of the equip()
void Character::equip(AMateria* m) {
    if (m == NULL)
        exit(EXIT_FAILURE);
    for (int i = 0; i < INVENTORY; i++)
    {
        if (materias[i] == NULL)
        {
            materias[i] = m;
            return ;
        }
    }
}

// Implementation of the unequip()
void Character::unequip(int idx) {(void)idx;}

// Implementation of the use()
void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx > 4)
    {
        std::cerr << "The index is out of range" << std::endl;
        exit(EXIT_FAILURE);
    }
    materias[idx]->use(target);
}
