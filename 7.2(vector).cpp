#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
using namespace std;
 int main()
 {
     ifstream file("f7.2.txt");
     if(!file)
     {
         cout<<"error"<<endl;

     }
     vector<string>lines;
     string line;
     int linecount=0,wordcount=0,charcount=0;
     while(getline(file,line))
     {
         lines.push_back(line);
         linecount++;
         charcount+=line.length();
         stringstream ss(line);
         string word;
         while(ss>>word)
         {
             wordcou
             nt++;
         }
     }
     file.close();
     cout<<"total line:"<<linecount;
     cout<<"total word:"<<wordcount;
     cout<<"total char:"<<charcount;
 }
