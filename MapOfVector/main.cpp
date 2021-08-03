#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    map<int , vector<int> > mapOfVector;

    mapOfVector[0].push_back(5);
    mapOfVector[0].push_back(10);
    mapOfVector[0].push_back(15);
    mapOfVector[0].push_back(20);

    cout << mapOfVector.at(0).at(0) << endl;
    cout << mapOfVector.at(0).size();

    return 0;
}
