/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:52:46 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/23 16:05:19 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
public:
  /**
   * @brief Default constructor.
   */
  explicit FragTrap(const std::string &Name);
  /**
   * @brief Copy constructor.
   * @param other The other FragTrap to copy.
   */
  FragTrap(const FragTrap &other);
  /**
   * @brief Copy assignment operator.
   * @param other The other FragTrap to assign.
   * @return A reference to the assigned FragTrap.
   */
  FragTrap &operator=(const FragTrap &other);
  /**
   * @brief Destructor.
   */
  ~FragTrap();
  /**
   * @brie Positive high fives request on std out.
   */
  void highFivesGuys();
};

#endif // EX02_FRAGTRAP_HPP