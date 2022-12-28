/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2022-12-27 19:03:24
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-27 21:44:14
 */
#ifndef TABTENN1_H_
#define TABTENN1_H_

#include <string>
using std::string;

class TableTennisPlayer
{
private:
    string first_name;
    string last_name;
    bool hasTable;

public:
    TableTennisPlayer(const string &fn = "none",
                      const string &ln = "none",
                      bool ht = false);
    void Name() const;
    bool HasTable() const { return hasTable; }
    void ResetTable(bool v) { hasTable = v; }
};

class RatedPlayer : public TableTennisPlayer
{
private:
    unsigned int rating;
public:
    RatedPlayer(unsigned int r = 0, const string &fn = "none",
                const string &ln = "none", bool ht = false);

    RatedPlayer(unsigned int r, const TableTennisPlayer &tp);
    unsigned int Rating() const { return rating; }
    void ResetRating(unsigned int r) { rating = r; }
};

#endif