#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

  void addBusiness(vector<string>& businessNames);
  void displayBusiness(const vector<string>& businessNames);
  void sortBusiness(vector<string>& businessNames);
  bool getYesOrNo(const string& prompt);


  void addBusiness(vector<string>& businessNames) {
     string business;
     cout << "Enter the name of a business: " << endl;
     cin.ignore();
     getline(cin, business);
     businessNames.push_back(business);
  }
  

  void displayBusiness(const vector<string>& businessNames) {
     cout << "Your businesses are: " << endl;
      for (const auto& business: businessNames) {
        cout << business << endl;
     }
  }

  void sortBusiness(vector <string>& businessNames) {
     sort(businessNames.begin(),businessNames.end());

  }
  
  bool getYesOrNo(const string& prompt) {
    string input;
    cout << prompt;
    cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    return input == "y" || input == "yes";

  }



int main () {

  vector<string> businessNames;

  cout << "Welcome to the business sorting program! " << endl;

  while (true) {
   
    addBusiness(businessNames);
    sortBusiness(businessNames);
    displayBusiness(businessNames);
  
    if (!getYesOrNo("Do you want to add another business? ")) {
       break;
   }
  }

  cout << "Thank you for using the business sorting program! " << endl;

  return 0;
}
