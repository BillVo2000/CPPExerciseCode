#include <fstream>
#include <iostream>
using namespace std;

int main () {
   char data[100];

   // open a file in write mode.
   fstream outfile;
   // fstream is a type of data; outfile is a variable; afile.dat is the name of file. when you announce like this, you just create a file for writing in.
   outfile.open("afile.txt", ios::out);

   cout << "Writing to the file" << endl;
   cout << "Enter your name: ";
   cin.getline(data, 100);

   // when you want to do anything with the file, use the variable to call the file out, not use the file  name.

   // write inputted data into the file.
   outfile << data << endl;

   cout << "Enter your age: ";
   cin >> data;
   cin.ignore(); // ignore the type of data input from keyboard because it may conflicts with the announced data

   // again write inputted data into the file.
   outfile << data << endl;

   // close the opened file.
   outfile.close();

   // open a file in read mode.
   ifstream infile;
   infile.open("afile.txt");

  cout << "Reading from the file" << endl;
   infile >> data; // extract data from the file

   // write the data at the screen.
   cout << data << endl;

   // again read the data from the file and display it.
   infile >> data;
   cout << data << endl;

   // close the opened file.
   infile.close();

   return 0;
}
