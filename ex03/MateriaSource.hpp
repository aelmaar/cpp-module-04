/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:03:41 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/05 17:07:57 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class IMateriaSource;

class MateriaSource: public IMateriaSource
{
    AMateria *materias[INVENTORY];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &old_obj);
        MateriaSource &operator=(MateriaSource const &other);
        ~MateriaSource();
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
};

#endif
