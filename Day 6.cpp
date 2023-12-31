// DAY 6 //
// print middle elements from linklist/ Array //

#include <iostream> 
 using namespace std; 
  
 int main() { 
     int size; 
  
     cout << "Enter the size of the array: "; 
     cin >> size; 
  
     if (size <= 0) { 
         cout << "Invalid size. Please enter a positive integer." << endl; 
         return 1; 
     } 
  
     int arr[size]; 
  
     cout << "Enter " << size << " elements of the array: "; 
     for (int i = 0; i < size; i++) { 
         cin >> arr[i]; 
     } 
     int middleIndex = size / 2; 
     if (size % 2 == 0) { 
         cout << "Middle elements of the array: " << arr[middleIndex - 1] << " and " << arr[middleIndex] << endl; 
     } else { 
         cout << "Middle element of the array: " << arr[middleIndex] << endl; 
     } 
     return 0; 
}
