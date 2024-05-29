/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stream.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:46:55 by bkas              #+#    #+#             */
/*   Updated: 2024/05/28 17:26:21 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAM_HPP
#define STREAM_HPP

#include <fstream>
#include <iostream>

#define string std::string
#define cout std::cout
#define cin std::cin
#define endl std::endl
#define ifstream std::ifstream
#define ofstream std::ofstream
#define getline std::getline
#define cerr std::cerr

void replaceProcess(string& filename, string& s1, string& s2);

#endif