//============================================================================
// Name        : proj_refactor_file
// Author      : Julia Nichols
// Version     : 9/17/21
// Copyright   : Steal this code!
// Description : learn how to refactor files into a sensible directory structure
//============================================================================
#include <iostream>
#include <string>
#include <vector>
#include "../includes/constants.h"
#include "../includes/fileio.h"
#include "../includes/utils.h"


//sorts vector inplace based on mySortOrder (inplace means the vector is modified)
//returns nothing
void sort(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses){

}

//gets the next process from the vector, then removes it from the vector
//returns removed process
process getNext(std::vector<process> &myProcesses){
	process p;
	return p;
}

//returns the number of entries in the vector
int getSize(std::vector<process> &myProcesses){
	return UNIMPLEMENTED;
}

//attempt to correct missing data
//if cannot correct, then drop row
//return number of rows in myProcesses
int handleMissingData(std::vector<process> &myProcesses){
	return NO_DATA_TO_WORK_ON;
}

int main() {
	std::vector<process> myProcesses;

	//assumme failure
	int iRet = FAIL;

	//get raw data
	iRet = load(SOURCE_FILE, myProcesses);
	if (iRet != SUCCESS)
		return iRet;

	int orig_size = getSize(myProcesses);
	int new_size = handleMissingData(myProcesses);
	if (orig_size != new_size)
		std::cout<<"Dropped "<<(orig_size-new_size)<<" rows with missing data"<<std::endl;

	//sort the data
	sort(SORT_ORDER::START_TIME,myProcesses);

	//how many entries in vector
	iRet = getSize(myProcesses);
	if (iRet < EMPTY)
		return iRet;

	process p = getNext(myProcesses);
	if (p.cpu_time == UNINITIALIZED)
		return

	//save processed data
	iRet = save(RESULTS_FILE, myProcesses);
	return iRet;
}
