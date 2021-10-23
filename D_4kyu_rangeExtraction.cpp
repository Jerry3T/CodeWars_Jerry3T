//https://www.codewars.com/kata/51ba717bb08c1cd60f00002f

#include <string>
#include <vector>

using namespace std;

std::string range_extraction(std::vector<int> args) {
  
  vector<int> copy = args;
  copy.push_back(32405342);
  int length = copy.size();
  string endResult = "";
  int termination = 0;
  int lengthCount = 1;
  
  while (length > 0) {
    
    int start = 0;
    lengthCount = 1;

    for (int z = 0; z < length - 1; z++) {
      
      cout << z;
      cout << ", ";
      
      if (copy.at(z)+1==copy.at(z+1)) {

        lengthCount+=1;
        termination = z+1;

      } else {
        
        termination = z+1;

        break;
      }
    }

    if (lengthCount >= 3) { 
      
      endResult+=to_string(copy.at(start)) + "-" + to_string(copy.at(termination-1)) + ",";

      
    } else if (lengthCount == 2) {
      
      endResult+=to_string(copy.at(start)) + "," + to_string(copy.at(termination-1)) + ",";
      
    } else {
      
      endResult+=to_string(copy.at(start)) + ",";    
    
    }

    if (length - termination == 1) {
      
      copy.erase(copy.begin() + 0, copy.begin() + termination+1);
      
    } else copy.erase(copy.begin() + 0, copy.begin() + termination);
    
    length = copy.size();
    termination = 0;
    
    for (int s : copy) {

      cout << s;
      cout << ", ";

    }
    
    cout << "\n";

  }
  
  endResult.pop_back();
  return endResult;
  
}
