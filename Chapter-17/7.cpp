#include "7.h"

void ShowStr( std::string str )
{
    std::cout << str << std::endl;
}

void Store( std::string str, std::ofstream & fout)
{
    fout << str << std::endl;
}

void Getstrs( std::ifstream & fin, std::vector<std::string> & vostr )
{
    std::string str;
    while( getline( fin, str ) )
    {
        vostr.push_back(str);
    }
}