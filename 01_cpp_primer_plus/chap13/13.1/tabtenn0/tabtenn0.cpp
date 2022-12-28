/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2022-12-27 18:04:49
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-27 18:26:20
 */
#include <iostream>
#include "tabtenn0.h"

// 构造函数初始化列表
TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, 
        bool ht) : first_name(fn), last_name(ln), hasTable(ht)
{

}

void TableTennisPlayer::Name() const
{
    std::cout << last_name << " " << first_name;
}