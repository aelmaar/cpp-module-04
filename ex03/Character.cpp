/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:43:47 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/04 17:36:17 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

// Implementation of the default constructor
Character::Character() {}

// Implementation of the copy constructor
Character::Character(Character const &old_obj) {}

// Implementation of the copy assignment operator
Character &Character::operator=(Character const &other) {}

// Implementation of the destructor
Character::~Character() {}

// Implementation of the getName()
std::string const & Character::getName() const {}

// Implementation of the equip()
void Character::equip(AMateria* m) {}

// Implementation of the unequip()
void Character::unequip(int idx) {}

// Implementation of the use()
void Character::use(int idx, ICharacter& target) {}
