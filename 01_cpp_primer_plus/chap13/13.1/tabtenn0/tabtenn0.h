/*
 * @Descripttion: 
 * @version: 
 * @Author: machun Michael
 * @Date: 2022-12-27 17:58:38
 * @LastEditors: machun Michael
 * @LastEditTime: 2022-12-27 18:07:47
 */
#ifndef TABTENN0_H_
#define TABTENN0_H_

#include <string>
using std::string;

// simple base class
class TableTennisPlayer
{
private:
    string first_name;
    string last_name;
    bool hasTable;      // 是否有球桌

public:
    TableTennisPlayer(const string &fn = "none",
                      const string &ln = "none",
                      bool ht = false);
    void Name() const;
    bool HasTable() const { return hasTable; };
    void ResetTable(bool v) { hasTable = v; };
};

#endif