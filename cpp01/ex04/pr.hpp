/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:08:25 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/09/29 20:54:22 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PR_HPP
#define PR_HPP

#include <iostream>
#include <fstream>

std::string open_file(char* str);
void readAndReplace(std::string &str, std::string s1, std::string s2);
void insert_inFile(std::string s, std::string nf);


#endif