/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snair <snair@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:45:36 by snair             #+#    #+#             */
/*   Updated: 2022/12/01 19:45:39 by snair            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
			ClapTrap();
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap &clap);
			~ClapTrap();
			ClapTrap			&operator=(const ClapTrap &clap);
			void				attack(const std::string &target);
			void				takeDamage(unsigned int value);
			void				beRepaired(unsigned int value);
			const std::string	&getName(void) const;
			void 				set_name(std::string const name);
			int					getHp(void) const;
			int					getEp(void) const;
			int					getAd(void) const;
			void 				status(void) const;
	private:
			std::string	_name;
			int			_hp;
			int			_ep;
			int			_ad;
};

#endif
