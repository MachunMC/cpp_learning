/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2022-12-27 18:19:09
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-27 18:31:47
 */
#include <iostream>
#include "tabtenn0.h"

int main(void)
{
    using std::cout;

    TableTennisPlayer player1("Chunk", "Blizzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);

    player1.Name();
    if (player1.HasTable())
    {
        cout << ": has a table.\n";
    }
    else
    {
        cout << ": hasn't a table\n";
    }

    player2.Name();
    if (player2.HasTable())
    {
        cout << ": has a table\n";
    }
    else
    {
        cout << ": hasn't a table\n";
    }

    return 0;
}