#include<iostream>
#include<map>
#include<sstream>
#include<cctype>
using namespace std;

string toLower(string str)
 {
    for (char& c : str)
    {
         c = tolower(c);
    }
    return str;
}

int main()
{
    string paragraph;
    cout << "Enter paragraph:"<<endl;
    getline(cin, paragraph);

    map<string, int> freq;
    stringstream ss(paragraph);
    string word;

    while (ss >> word)
    {
        word = toLower(word);
        freq[word]++;
    }

    cout <<endl<< "Word Frequencies:"<<endl;
    for (auto& pair : freq)
        cout << pair.first << ": " << pair.second << endl;
        return 0;
}
