/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pr.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:14:29 by mmajdoub          #+#    #+#             */
/*   Updated: 2023/09/29 21:00:06 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pr.hpp"

std::string  open_file(char* str)
{
    std::ifstream file_in;
    std::string h;
    file_in.open(str);
    if(file_in.is_open())
    {
        getline(file_in, h, '\0');
        return h;  
    }
    file_in.close();
    return NULL;
}
void  readAndReplace(std::string &str, std::string s1, std::string s2)
{
    size_t f = 0;
    while(1)
    {
        
         f = str.find(s1, f);
        if (f == std::string::npos)
            break;
        str.erase(f, s1.length());
        str.insert(f, s2);
        f += s2.length();
    }
}

void insert_inFile(std::string s, std::string nf)
{
    std::string h = nf + ".reblace";
    
    std::ofstream file_out;
    file_out.open(h.c_str());
    if (file_out.is_open())
    {
        file_out<<s;
    }
    file_out.close();
}

