#include "container.h"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class comp_container2
{
 public:
	 bool operator()(pair<int,int> value1, pair<int, int> value2)
	 {
		 if (value1.second < value2.second)
			 return true;
		 else
			 return false;
	 }
};




int main()
{
//CONTAINER 1
string container1_array[]      = { "a", "b", "c" };
size_t container1_array_number = sizeof(container1_array) / sizeof(string);
c_Container<string> myContainer1(container1_array, container1_array_number);
c_Container<string> myContainer1_copy = myContainer1;

//CONTAINER 2
int    container2_array[] = { 4,7,1 };
size_t container2_array_number = sizeof(container2_array) / sizeof(int);
c_Container<int> myContainer2(container2_array, container2_array_number);

//Sort the Container2
std::sort(myContainer2.begin(), myContainer2.end(), comp_container2());

//sort the Container 1 according to the Container2's  objects sorted previously
//the sort is done thanks to the indice position stored into Container2
for (unsigned int i(0); i < myContainer2.size(); i++)
{
	myContainer1[i] = myContainer1_copy[myContainer2.get_position(i)];
}

}//------------- end main---------------------------------------------


