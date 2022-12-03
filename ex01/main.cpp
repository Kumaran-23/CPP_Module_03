/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:45:55 by snair             #+#    #+#             */
/*   Updated: 2022/12/03 14:49:53 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap mob("Mob");
	mob.status();
	mob.attack("Reigen");
	mob.takeDamage(15);
	mob.beRepaired(10);
	mob.guardGate();
	ScavTrap dimple(mob);
	//dimple.set_name("Dimple");
	dimple.status();
	mob.status();
	dimple.attack("Reigen");
	dimple.takeDamage(20);
	dimple.beRepaired(15);
	dimple.guardGate();
	dimple.status();
	ScavTrap bom;
	//ClapTrap vom = ClapTrap("Vom");
	bom = mob;
	//bom.set_name("Bom");
	bom.status();
	mob.status();
	bom.attack("vom");
	//vom.status();
	bom.takeDamage(40);
	bom.beRepaired(20);
	bom.takeDamage(20);
	bom.attack("vom");
	//vom.status();
	bom.takeDamage(100);
	bom.beRepaired(30);
	bom.guardGate();
	mob.status();
	dimple.status();
	bom.status();
	//vom.status();
	return (0);
}