/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:27:26 by snair             #+#    #+#             */
/*   Updated: 2022/12/16 15:26:12 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
			FragTrap();
			FragTrap(const std::string &name);
			FragTrap(const FragTrap &frag);
			~FragTrap();
			FragTrap	&operator=(const FragTrap &frag);
			void		attack(const std::string &target);
			void		attack(ClapTrap &target);
			void        highFivesGuys(void);
			void 		status() const;
			
	protected:
			int			_hp;
			int			_ep;
			int			_ad;
};

#endif