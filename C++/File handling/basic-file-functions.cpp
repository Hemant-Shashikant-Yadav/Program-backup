

// void open(const char* file_name,ios::openmode mode);

/*
Modes	                        Description
in                              Opens the file to read(default for ifstream)

out                             Opens the file to write(default for ofstream)

app                             Opens the file and appends all the outputs at the end

ate                             Opens the file and moves the control to the end of the file

trunc                           Removes the data in the existing file

*/

/*
Example

fstream new_file;
new_file.open(“newfile.txt”, ios::out);
new_file.fclose()
*/

  
// Default Open Modes :

// ifstream ios::in
// ofstream ios::out
// fstream ios::in | ios::out

// fstream new_file;
// new_file.open(“newfile.txt”, ios::out);



