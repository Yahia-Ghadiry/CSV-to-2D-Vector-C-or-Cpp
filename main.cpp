#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>


using std::cout, std::vector, std::string, std::ifstream;

void tokenize(string &str, const char delim, vector<vector<string>> &out, int i)
{
    std::stringstream ss(str);
    vector<string> temp;
    std::string s;
    while (std::getline(ss, s, delim)) {
        temp.push_back(s);
    }
    out.push_back(temp);
}
 
int main()
{
    
    vector< vector<string> > data;
    vector<string> rows;
    string temp_line, word, temp;
    ifstream csv_f("f.csv");
    while(!csv_f.eof())
    {
        getline(csv_f, temp_line);
        rows.push_back(temp_line);
    }
    const char delim = ',';
    for (int i = 0; i < rows.size(); i++)
    {
        tokenize(rows[i], delim, data, i);
    }

    cout << data[1][1] << '\n';
}
