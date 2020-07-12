// same as normals map
//faster search
// maps have self balancing bsts
// maps search time ->O(logn)
//unordered maps O(1) linear search time
#include <iostream> 
#include <unordered_map> 
using namespace std; 
  
int main() 
{ 
    // Declaring umap to be of <string, int> type 
    // key will be of string type and mapped value will 
    // be of double type 
    unordered_map<string, int> umap; 
  
    // inserting values by using [] operator 
    umap["GeeksforGeeks"] = 10; 
    umap["Practice"] = 20; 
    umap["Contribute"] = 30; 
  
    // Traversing an unordered map 
    for (auto x : umap) 
      cout << x.first << " " << x.second << endl; 
  
} 