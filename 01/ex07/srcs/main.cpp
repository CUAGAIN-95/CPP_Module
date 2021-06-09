/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 22:01:43 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/10 00:45:52 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>



int		main(int argc, char **argv)
{
	std::string		filename;
	std::string		s1, s2;

	// input data 관리하기
	if (argc != 4)
	{
		std::cout << "\tNum of Arguments Error!!" << std::endl;
		return (0);
	}
	
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cout << "\tInput Data Error!!" << std::endl;
		return (0);
	}

	std::cout << "filename\t: " << filename << std::endl;
	std::cout << "s1\t\t: " << s1 << std::endl;
	std::cout << "s2\t\t: " << s2 << std::endl;

	// 파일 열기
	std::ifstream	ifs(filename);

	if (!ifs.is_open())
	{
		std::cout << "\tInput File Open Error!!" << std::endl;
		return (0);
	}

	// 파일 내용 문자열로 옮기기
	std::stringstream	ss;
	ss << ifs.rdbuf();
	
	std::cout << std::endl;
	std::cout << "\t기본 data" << std::endl;
	std::cout << ss.str() << std::endl;
	std::cout << std::endl;
	
	// 문자열 s1을 찾고 s2로 교체하기
	std::string		temp_str = ss.str();
	size_t	start_pos = 0;
	while (std::string::npos != (start_pos = temp_str.find(s1, start_pos)))
	{
		temp_str.replace(start_pos, s1.size(), s2);
		start_pos += s2.length();
	}
	
	std::cout << "\t바뀐 data" << std::endl;
	std::cout << temp_str << std::endl;
	
	// 파일 만들어서 저장하기
	std::ofstream	ofs(filename + ".replace");

	if (!ofs.is_open())
	{
		std::cout << "\tOutput File Open Error!!" << std::endl;
		return (0);
	}
	ofs << temp_str;

	return (0);
}