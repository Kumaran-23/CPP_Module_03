/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:45:55 by snair             #+#    #+#             */
/*   Updated: 2022/12/16 14:38:11 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main (void)
{
	DiamondTrap mob("Mob");
	mob.status();
	mob.attack("Reigen");
	mob.takeDamage(15);
	mob.beRepaired(10);
	mob.highFivesGuys();
	mob.guardGate();
	mob.whoAmI();
	mob.status();
	DiamondTrap dimple(mob);
	dimple.set_name("Dimple");
	dimple.status();
	mob.status();
	dimple.attack("Reigen");
	dimple.takeDamage(20);
	dimple.beRepaired(15);
	dimple.highFivesGuys();
	dimple.whoAmI();
	dimple.status();
	DiamondTrap bom;
	bom = dimple;
	bom.set_name("Bom");
	dimple.status();
	bom.status();
	bom.whoAmI();
	bom.attack("vom");
	bom.takeDamage(40);
	bom.beRepaired(20);
	bom.takeDamage(20);
	bom.attack("vom");;
	bom.takeDamage(100);
	bom.beRepaired(30);
	bom.guardGate();
	bom.whoAmI();
	mob.status();
	dimple.status();
	bom.status();
	return (0);
}