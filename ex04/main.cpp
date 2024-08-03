/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:06:31 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/03 15:14:30 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "<filename> <to replace> <replacer>" << std::endl;
		return (EINVAL);
	}
	std::ifstream	infile;
	std::ofstream	outfile("outfile");
	std::string		tofind = argv[2];
	std::string		replace = argv[3];
	std::string::size_type pos = 0;

	infile.open(argv[1]);
	if (!infile.is_open()) {
		std::cout << "Invalid file" << std::endl;
		return (EINVAL);
	}
	std::string content((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
	while ((pos = content.find(tofind, pos)) != std::string::npos) {
		content.erase(pos, tofind.length());
		content.insert(pos, replace);
		pos += replace.length();
	}
	infile.close();
	outfile << content << std::endl;
	return (0);
}
