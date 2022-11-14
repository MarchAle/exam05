/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:59:44 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 14:14:16 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include "Warlock.hpp"
# include "ATarget.hpp"

class TargetGenerator
{
	private :
		TargetGenerator(TargetGenerator const &src);
		TargetGenerator &operator=(TargetGenerator const &src);
		std::vector<ATarget *> targets;

	public :
		TargetGenerator();
		~TargetGenerator();

		void	learnTargetType(ATarget *target);
		void	forgetTargetType(std::string const &type);
		ATarget	*createTarget(std::string const &type);
};

#endif
