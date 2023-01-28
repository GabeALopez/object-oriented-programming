#include <iostream>
#include <string> 

using namespace std;

template <typename T>
bool isGreater(const T list1[], const T list2[], int size1, int size2)
{

    
    //check if number is less than or equal
    for(int i = 0; i < size1; i++)
    {
        for(int j = 0; j < size2; j++)
        {
            if(list2[j] >= list1[i])
            {

                return false;

            }
        }
    }

    return true;



}

int main()
{

    //initialize int array
    int arr1[] = {9, 10, 11, 23};
    int arr2[] = {5, 3, 2, 7};

    //initialize double array
    double arr3[] = {9.4, 10.3, 11.2, 2.3};
    double arr4[] = {5.1, 3.2, 2.3, 7.4}; 

    //initialize string array
    string arr5[] = {"Miami", "Lakeland", "Tampa", "Orlando"};
    string arr6[] = {"Dallas", "Austin", "Antonia"};

    //checking arrays 
    cout << "Are all elements in the left array larger than the elements in the right array?" << endl;    
    cout << "{9, 10, 11, 23} > {5, 3, 2, 7}? " << isGreater(arr1, arr2, 4, 4) << endl;
    cout << "{9.4, 10.3, 11.2, 2.3} > {5.1, 3.2, 2.3, 7.4}? " << isGreater(arr3, arr4, 4, 4) << endl;
    cout << "{\"Miami\", \"Lakeland\", \"Tampa\", \"Orlando\"} > {\"Dallas\", \"Austin\", \"Antonia\"} " << isGreater(arr5, arr6, 4, 3) << endl;


    return 0;

}