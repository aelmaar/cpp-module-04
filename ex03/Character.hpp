/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:43:54 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/06 19:12:09 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "MateriaTrash.hpp"

class Character: public ICharacter
{
    std::string name;
    AMateria *equipped_materias[INVENTORY];
    MateriaTrash materia_trash;
    public:
        Character();
        Character(const std::string &name);
        Character(Character const &old_obj);
        Character &operator=(Character const &other);
        virtual ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif
