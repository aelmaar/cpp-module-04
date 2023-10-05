/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:07:30 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/05 13:24:56 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        Cure(Cure const &old_obj);
        Cure &operator=(Cure const &other);
        ~Cure();
        AMateria *clone() const;
        void use(ICharacter& target);
};

#endif
