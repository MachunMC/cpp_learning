/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2022-12-27 21:24:50
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-27 21:45:52
 */
#include "tabtenn1.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, 
        bool ht) : first_name(fn), last_name(ln), hasTable(ht)
{
    std::cout << "father TableTennisPlayer called" << std::endl;
}

void TableTennisPlayer::Name() const
{
    std::cout << last_name << ", " << first_name;
}

// 子类的构造函数，要把参数传递给父类的构造函数
// 执行的时候，先调用父类的构造函数
RatedPlayer::RatedPlayer(unsigned int r, const string &fn, const string &ln,
            bool ht) : TableTennisPlayer(fn, ln, ht)
{
    rating = r;
    std::cout << "son RatedPlayer called" << std::endl;
}

// TODO: 不清楚为什么这里可以用 TableTennisPlayer(tp)
RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer &tp)
            : TableTennisPlayer(tp), rating(r)
{

}