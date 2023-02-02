#include <iostream>
#include <vector>

using namespace std;

int findName (string name, vector<string> studentsName){

        for (int i = 0; i < studentsName.size(); i++){

            if (studentsName[i] == name){

                return i;

            }

        }

        return -1;

}

int main(){

  vector<string> studentsName;

  cout << "[1] Add " << endl;
  cout << "[2] List" << endl;
  cout << "[3] Delete" << endl;
  cout << "[4] Update" << endl;
  cout << "[5] Quit" << endl;

  int option;

  while (option != 5){

    cout << endl << "Select an option: ";
    cin >>  option;

    bool found = false;

    switch(option) {

      case 1: {

        string name;

        cout << "Enter name: ";
        getline(cin >> ws, name);

        studentsName.push_back(name);

        break;
      }

      case 2: {

        for (string s : studentsName){

          cout << "Name: " << s << endl;
        }

        break;
      }

      case 3: {

        string name;

        cout << "Enter the name to be deleted: ";
        getline(cin >> ws, name);

        int index = findName (name, studentsName);

            if (index == -1){

             cout << name << " not found" << endl;

      }

      else {

        studentsName.erase(studentsName.begin() + index);

      }
        break;

    }
    case 4: {

        string name;

        cout << "Enter the name to be updated: ";
        getline(cin >> ws, name);

        int index = findName (name, studentsName);

        if(index == -1){

            cout << name << " not found" << endl;

        break;

      }

        string newName;

            cout << "Enter new name: ";
            getline(cin >> ws, newName);

            studentsName[index] = newName;

        break;

      }
  }
}

 return 0;
}
