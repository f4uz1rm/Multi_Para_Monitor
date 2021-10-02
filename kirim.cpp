#include "kirim.h"
#include "stdafx.h"

string kirimFloat(float value, string namefile) {
	ofstream myfile;
	myfile.open("txt/" + namefile);
	myfile << value;
	myfile.close();
	return value, namefile;
}

string kirimString(string value , string namefile) {
	ofstream myfile;
	myfile.open("txt/" + namefile);
	myfile << value.c_str() <<endl;
	myfile.close();
	return value, namefile;
}
