/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:45:55 by snair             #+#    #+#             */
/*   Updated: 2022/12/01 19:45:56 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap mob = ClapTrap("Mob");
	mob.status();
	mob.attack("Reigen");
	mob.takeDamage(4);
	mob.beRepaired(3);
	mob.status();
	ClapTrap dimple(mob);
	//dimple.set_name("Dimple");
	dimple.status();
	mob.status();
	dimple.attack("Reigen");
	dimple.takeDamage(4);
	dimple.beRepaired(3);
	dimple.status();
	ClapTrap bom;
	bom = mob;
	//bom.set_name("Bom");
	bom.status();
	mob.status();
	bom.attack("Reigen");
	bom.takeDamage(4);
	bom.beRepaired(10);
	bom.takeDamage(20);
	bom.attack("Ghost");
	bom.takeDamage(10);
	bom.beRepaired(3);
	mob.status();
	dimple.status();
	bom.status();
	return (0);
}