/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:18:19 by snair             #+#    #+#             */
/*   Updated: 2022/12/04 12:58:16 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
			ScavTrap();
			ScavTrap(const std::string &name);
			ScavTrap(const ScavTrap &scav);
			~ScavTrap();
			ScavTrap	&operator=(const ScavTrap &scav);
			void		attack(const std::string &target);
			void		attack(ClapTrap &target);
			void		guardGate();
			void 		status() const;
	protected:
			int			_hp;
			int			_ep;
			int			_ad;
};

#endif