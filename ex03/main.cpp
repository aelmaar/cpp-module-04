/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:37:53 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/07 15:13:05 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main(void)
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice"); // Inventory is full
    me->equip(tmp);
    tmp = src->createMateria("Cure"); // Materia type doesn't match
    if (tmp)
        me->equip(tmp);

    me->unequip(3);
    me->unequip(3); // Empty slot to unequip
    me->unequip(4); // Slot doesn't exist

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    me->use(4, *bob); // Slot doesn't exist

    bob->use(2, *bob); // Empty slots
    bob->use(3, *bob); // Empty slots

    delete bob;
    delete me;
    delete src;

    while (1);
    return 0;
}
