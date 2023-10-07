/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaTrash.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:25:35 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/07 15:14:24 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaTrash.hpp"

// Implementation of the default constructor
MateriaTrash::MateriaTrash() {
    trash = NULL;
}

// Implementation of the copy constructor
MateriaTrash::MateriaTrash(MateriaTrash const &old_obj) {
    Materias *tmp_trash = old_obj.trash;
    Materias *new_trash = NULL;
    
    this->trash = NULL;
    while (tmp_trash)
    {
        new_trash = new Materias;
        new_trash->materia = tmp_trash->materia->clone();
        new_trash->next = NULL;
        if (this->trash == NULL)
            this->trash = new_trash;
        tmp_trash = tmp_trash->next;
        new_trash = new_trash->next;
    }
}

// Implementation of the copy assignment operator
MateriaTrash &MateriaTrash::operator=(MateriaTrash const &other) {
    Materias *tmp_trash;

    if (this != &other)
    {
        // delete the old ones
        while (this->trash)
        {
            tmp_trash = this->trash;
            delete tmp_trash->materia;
            this->trash = this->trash->next;
            delete tmp_trash;
        }
        // assign the other materias to this materias
        tmp_trash = other.trash;
        while (tmp_trash)
        {
            this->append(tmp_trash->materia->clone());
            tmp_trash = tmp_trash->next;
        }
    }
    return (*this);
}

// Implementation of the destructor
MateriaTrash::~MateriaTrash() {
    Materias *tmp_trash;

    while (this->trash)
    {
        tmp_trash = this->trash;
        delete tmp_trash->materia;
        this->trash = this->trash->next;
        delete tmp_trash;
    }
}

// Implementation of the append()
void MateriaTrash::append(AMateria *prev_materia) {
    Materias *tmp_trash = this->trash;
    Materias *new_trash = new Materias;

    new_trash->materia = prev_materia;
    new_trash->next = NULL;
    while (tmp_trash && tmp_trash->next)
        tmp_trash = tmp_trash->next;
    if (tmp_trash)
        tmp_trash->next = new_trash;
    else
        this->trash = new_trash;
}
