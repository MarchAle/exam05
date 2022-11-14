/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:45:37 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 11:55:17 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include "Warlock.hpp"
# include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected :
		std::string name;
		std::string effects;
		
	public :
		ASpell();
		ASpell(std::string nameStr, std::string effectsStr);
		virtual ~ASpell();
		ASpell(ASpell const &src);
		ASpell &operator=(ASpell const &src);

		std::string getName() const;
		std::string getEffects() const;

		virtual ASpell *clone() const = 0;

		void	launch(ATarget const &target) const;
};

#endif
