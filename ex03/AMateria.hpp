/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:46:40 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/05 17:13:38 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"
# define INVENTORY 4

class ICharacter;

class AMateria
{
    std::string type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const &old_obj);
        AMateria &operator=(AMateria const &other);
        virtual ~AMateria();
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
