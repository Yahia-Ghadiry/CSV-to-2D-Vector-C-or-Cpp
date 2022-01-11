void CSV_To_2D(const string &file, const char delim, vector<vector<string>> &out)
{
    ifstream csv_f(file);
    vector<string> rows;
    string temp_line, word, temp;

    while(!csv_f.eof())
    {
        getline(csv_f, temp_line);
        rows.push_back(temp_line);
    }

    for (int i = 0; i < rows.size(); i++)
    {
        std::stringstream sstemp(rows[i]);
        vector<string> temp;
        std::string stemp;
        while (std::getline(sstemp, stemp, delim)) 
        {
            temp.push_back(stemp);
        }
        out.push_back(temp);
    }
}
