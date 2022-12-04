/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:44:54 by snair             #+#    #+#             */
/*   Updated: 2022/12/04 16:44:56 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

	public :
		DiamondTrap();
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &diamond);
		~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &diamond);
        using ScavTrap::attack;
		void	whoAmI(void);
        void    status(void) const;

	private:
		std::string _name;
		int			_hp;
		int			_ep;
		int			_ad;
};

#endif  