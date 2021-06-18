/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonhlee <yeonhlee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 16:40:44 by yeonhlee          #+#    #+#             */
/*   Updated: 2021/06/18 16:40:45 by yeonhlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Before templates, you put the declarations of methods in the header file and the implementation went to a .cpp file. These files were compiled separately as their own compilation unit.
With templates, this is no longer possible almost all template methods need to be defined in the header. To separated them at least on a logical level, some people put the declarations in the header but move all implementations of template methods to .ipp files (i for "inline") and include the .ipp file at the end of the header.
reference: https://stackoverflow.com/questions/19147208/difference-between-using-ipp-extension-and-cpp-extension-files
*/