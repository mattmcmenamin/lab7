

//Matt McMenamin

#include "winTimer.h"
#include "mmcmenam.h"
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector> 

using namespace std;

int main()
{
	
	double stdtime = 0;
	double bubbletime = 0;
	double insertiontime = 0;
	double selectiontime = 0;
	double mergetime = 0;
	double quicktime = 0;

	int size= 8400000;

	//retest the standard function 

	vector <double> standardvector = getNums(size, 1, 500);
	vector <double> bubblevector = getNums(size,1,500);
	vector <double> insertionvector = getNums(size, 1, 500);
	vector <double> selectionvector = getNums(size, 1, 500);
	vector <double> mergevector = getNums(size, 1, 500);
	vector <double> quickvector = getNums(size, 1, 500);

	Timer smalltime;
//---------------------------------------------------------------------------------------



	//standard
	smalltime.start();


	//call the sorting function
	sort(standardvector.begin(), standardvector.end());

	
	stdtime = smalltime.operator()();
	smalltime.stop();
	cout << "HERE IS THE standard TIME:                " << stdtime << "                   \n";
	
	/*
//---------------------------------------------------------------------------------------

	//bubble
	smalltime.start();       

	//call the sorting function
	bubbleSort(bubblevector, size);


	bubbletime = smalltime.operator()();
	smalltime.stop();

	cout << "HERE IS THE bubble TIME:                " <<bubbletime<< "                   \n";





	
	
//---------------------------------------------------------------------------------------
	//insertion
	
	smalltime.start();

	//call the sorting function
	bubbleSort(bubblevector, size);


	insertiontime = smalltime.operator()();
	smalltime.stop();


	cout << "HERE IS THE insertion TIME:                " <<insertiontime<< "                   \n";


	
	
	
//---------------------------------------------------------------------------------------
	
	//selection
	smalltime.start();

	//call the sorting function
	selectionSort(selectionvector, size);


	selectiontime = smalltime.operator()();
	smalltime.stop();




	cout << "HERE IS THE selection TIME:                " << selectiontime << "                   \n";

	
	
//---------------------------------------------------------------------------------------
	
	//merge
	smalltime.start();

	//call the sorting function
	mergeSort(mergevector, 5, 700);


	mergetime = smalltime.operator()();
	smalltime.stop();




	cout << "HERE IS THE merge TIME:                " << mergetime << "                   \n";


	
	
//---------------------------------------------------------------------------------------
*/
	//quick sort
	smalltime.start();



	//call the sorting function
	quickSort(quickvector, 0, 500);


	quicktime = smalltime.operator()();
	smalltime.stop();


	cout << "HERE IS THE quick TIME:                " << quicktime << "                   \n";


	
//---------------------------------------------------------------------------------------

	system("pause");
	return 0;
	
}