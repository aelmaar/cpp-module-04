/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaTrash.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:25:45 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/06 18:23:42 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIATRASH_HPP
# define MATERIATRASH_HPP

# include "AMateria.hpp"

typedef struct Materias
{
    AMateria *materia;
    struct Materias *next;
} Materias;

class MateriaTrash
{
    Materias *trash;
    public:
        MateriaTrash();
        MateriaTrash(MateriaTrash const &old_obj);
        MateriaTrash &operator=(MateriaTrash const &other);
        ~MateriaTrash();
        void    append(AMateria *prev_materia);
        
};

#endif
