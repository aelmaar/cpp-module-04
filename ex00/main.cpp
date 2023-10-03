/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:11:18 by ael-maar          #+#    #+#             */
/*   Updated: 2023/10/03 10:45:15 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    dog->makeSound(); //will output the cat sound!
    cat->makeSound();
    meta->makeSound();
    
    delete meta;
    delete dog;
    delete cat;

    std::cout << "-----------------------------------" << std::endl;

    const WrongAnimal* Wrongmeta = new WrongAnimal();
    const WrongAnimal* Wrongdog = new WrongDog();
    const WrongAnimal* Wrongcat = new WrongCat();

    std::cout << Wrongdog->getType() << " " << std::endl;
    std::cout << Wrongcat->getType() << " " << std::endl;
    Wrongdog->makeSound(); //will output the cat sound!
    Wrongcat->makeSound();
    Wrongmeta->makeSound();
    
    delete Wrongmeta;
    delete Wrongdog;
    delete Wrongcat;

    return (0);
}
