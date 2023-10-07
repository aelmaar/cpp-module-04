/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:43:47 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/06 19:56:34 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

// Implementation of the default constructor
Character::Character() {
    for (int i = 0; i < INVENTORY; i++)
        equipped_materias[i] = NULL;
}

// Implementation of the copy constructor
Character::Character(Character const &old_obj) {
    for (int i = 0; i < INVENTORY; i++)
        this->equipped_materias[i] = old_obj.equipped_materias[i];
    this->name = old_obj.name;
}

// Implementation of the parameterized constructor
Character::Character(const std::string &name): name(name) {
    for (int i = 0; i < INVENTORY; i++)
        equipped_materias[i] = NULL;
}

// Implementation of the copy assignment operator
Character &Character::operator=(Character const &other) {
    if (this != &other)
    {
        for (int i = 0; i < INVENTORY; i++)
        {
            delete equipped_materias[i];
            equipped_materias[i] = other.equipped_materias[i];
        }
    }
    return (*this);
}

// Implementation of the destructor
Character::~Character() {
    for (int i = 0; i < INVENTORY; i++)
        delete equipped_materias[i];
}

// Implementation of the getName()
std::string const & Character::getName() const { return (name); }

// Implementation of the equip()
void Character::equip(AMateria* m) {
    for (int i = 0; i < INVENTORY; i++)
    {
        if (equipped_materias[i] == NULL)
        {
            equipped_materias[i] = m;
            return ;
        }
    }
    std::cerr << "Inventory is full" << std::endl;
}

// Implementation of the unequip()
void Character::unequip(int idx) {
    if (idx < 0 || idx > 3)
    {
        std::cerr << "The slot doesn't exist, please choose from 0 to 3" << std::endl;
        return;
    }
    if (equipped_materias[idx] != NULL)
    {
        materia_trash.append(equipped_materias[idx]);
        equipped_materias[idx] = NULL;
    }
    else
        std::cerr << "Inventory slot is empty" << std::endl;
}

// Implementation of the use()
void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx > 3)
    {
        std::cerr << "The slot doesn't exist, please choose from 0 to 3" << std::endl;
        return;
    }
    if (equipped_materias[idx] != NULL)
        equipped_materias[idx]->use(target);
    else
        std::cerr << "Inventory slot is empty" << std::endl;
}
