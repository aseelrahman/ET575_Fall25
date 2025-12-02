/*
Aseel Rahman
homework 10, word counts
 */
#include<iostream>
#include<fstream>

using namespace std;

void displayfile(string filename){
    ifstream fin;
    fin.open(filename);

    string line;
    while(getline(fin, line)){
        cout<<line<<endl;
    }

    fin.close();
}

void countwords(string filename){
    ifstream fin;
    fin.open(filename);

    string word;
    int totalwords = 0;

    while(fin >> word){
        totalwords++;
    }

    fin.close();

    ofstream fout;
    fout.open("wordcounts.txt");

    fout<<"Aseel Rahman"<<endl;
    fout<<"Total number of words: "<<totalwords<<endl;

    fout.close();
}

void countearth(string filename){
    ifstream fin;
    fin.open(filename);

    string word;
    int earthcount = 0;

    while(fin >> word){
        if(word.find("Earth") != string::npos){
            earthcount++;
        }
    }

    fin.close();

    ofstream fout;
    fout.open("wordcounts.txt", ios::app);

    fout<<"The word 'Earth' appears "<<earthcount<<" times in the document."<<endl;

    fout.close();
}
