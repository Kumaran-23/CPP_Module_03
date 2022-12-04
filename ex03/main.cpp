/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:45:55 by snair             #+#    #+#             */
/*   Updated: 2022/12/04 12:57:37 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main (void)
{
	DiamondTrap mob("Mob");
	//FragTrap bob("Bob");
	mob.status();
	//bob.status();
	mob.attack("Reigen");
	//bob.attack("Reigen");
	mob.takeDamage(15);
	mob.beRepaired(10);
	//bob.takeDamage(35);
	//bob.beRepaired(20);
	mob.highFivesGuys();
	mob.guardGate();
	mob.whoAmI();
	//bob.highFivesGuys();
	mob.status();
	//bob.status();
	DiamondTrap dimple(mob);
	//ScavTrap fom = ScavTrap("Fom");
	//dimple.set_name("Dimple");
	dimple.status();
	mob.status();
	//fom.status();
	dimple.attack("Reigen");
	dimple.takeDamage(20);
	dimple.beRepaired(15);
	dimple.highFivesGuys();
	dimple.whoAmI();
	dimple.status();
	DiamondTrap bom;
	//ClapTrap dom = ClapTrap("Dom");
	bom = dimple;
	//bom.set_name("Bom");
	dimple.status();
	bom.status();
	//dom.status();
	bom.whoAmI();
	bom.attack("vom");
	//dom.takeDamage(8);
	bom.takeDamage(40);
	bom.beRepaired(20);
	bom.takeDamage(20);
	//dom.beRepaired(4);
	//dom.attack("bazz");
	bom.attack("vom");;
	bom.takeDamage(100);
	bom.beRepaired(30);
	bom.guardGate();
	bom.whoAmI();
	mob.status();
	dimple.status();
	bom.status();
	//dom.status();
	return (0);
}