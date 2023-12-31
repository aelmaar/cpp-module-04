/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:07:36 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/05 13:27:42 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice();
        Ice(Ice const &old_obj);
        Ice &operator=(Ice const &other);
        ~Ice();
        AMateria *clone() const;
        void use(ICharacter& target);
};

#endif
