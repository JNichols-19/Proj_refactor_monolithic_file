#include "constants.h"
#include <string>
#include <vector>

//attempt to open file 'filename' and read in all data
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int load(const std::string filename, std::vector<process> &myProcesses);

//attempt to create or open file 'filename' to write all data to
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int save(const std::string filename, std::vector<process> &myProcesses);