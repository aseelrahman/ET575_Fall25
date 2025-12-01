/**
 *  Aseel Rahman
 *  Nov 24, 2025
 *  lab 19, files and console input
 */
#include<iostream>
#include<fstream>

using namespace std;

// example 1: console input failure
// function to check if num values is the proper data type
void checknumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(cin.fail())
        {cout<<"Error! input distmatched data type!"<<endl;
         num = -1;
        }
    else
        {cout<<"Entered number = "<<num<<endl;}

    // clear the cin state
    cin.clear();
    cin.ignore(10000, '\n');

    cout<<"END OF FUNCTION. Number = "<<num<<endl;

}

// example 2: console input to validate an input data type
float validatenumber(){
    float n;
    bool isNotValid = false;

    do{
        cout<<"Enter a number: ";
        cin>>n;
        isNotValid = cin.fail();
        cin.clear();
        cin.ignore(10000, '\n');
    }while(isNotValid);

    return n;
}

// example 3: set object for input and output files
ifstream fin;
ofstream fout;

void readfile(string filename){
    fin.open(filename);

    // variable 'line' is used to store each line of samplefile.txt
    string line;

    // loop through each line in samplefile.txt
    int linecounter = 1;
    while(getline(fin,line)){
        cout<<"Line "<<linecounter<<"\t"<<line<<endl;
        linecounter ++;
    }

    // close file
    fin.close();
}

// example 4: writting a file
// fout will write in a new or existing file. fout overwrite all the content of an existing file
void writefile(string filename){
    fout.open(filename);

    // write some content
    for(int n = 1; n<=3; n++){
        fout<<"Good morning "<<n<<endl;
    }

    // close the file
    fout.close();
    
}

// example 5: append data into a file
void appendfile(string filename){
    fout.open(filename, ios::app);

    // append
    fout<<"\n------ APPEND -----"<<endl;
    for(int n = 3; n>0; n--){
        fout<<n<<endl;
    }
    // write a single line
    fout<<"GAME OVER!"<<endl;

    // close file
    fout.close();
}

// EXERCISE

void create_user_file(){
    ofstream fout;
    fout.open("data_user.txt");

    fout<<"This is my output file - Aseel Rahman.\n";

    fout.close();
}


void append_user_message(string message){
    ofstream fout;
    fout.open("data_user.txt", ios::app);

    fout<<message<<endl;

    fout.close();
}


void read_user_file(string filename){
    ifstream fin;
    fin.open(filename);

    string line;
    int counter = 1;

    while(getline(fin, line)){
        cout<<"Line "<<counter<<"\t"<<line<<endl;
        counter++;
    }

    fin.close();
}
