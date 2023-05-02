
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    string fact{"Proxima Centauri is the closest star to the Sun."};
    string searchStar{"Sun"}, search{"est"};
    size_t foundAtIndex = 0;

    cout << fact << '\n';
    cout << searchStar << " found at index " << fact.find(searchStar) << '\n';
    cout << search << " found at index " << fact.find(search) << '\n';

    /* // Find something which isn't there
    search.clear();
    search = "Moon";
    cout << search << " found at index " << fact.find(search) << '\n'; // Give a huge number */

    // std::string::npos : The huge number
    cout << "string::npos " << string::npos << '\n';

    // Use std::string::npos to find something
    search.clear();
    search = "Moon";
    foundAtIndex = fact.find(search);
    (foundAtIndex == string::npos) ? cout << search << " not found\n" : cout << search << " found at index " << foundAtIndex << '\n';

    searchStar.clear();
    foundAtIndex = fact.find(searchStar = "Proxima Centauri", 0);
    (foundAtIndex == string::npos) ? cout << searchStar << " not found\n" : cout << searchStar << " found at index " << foundAtIndex << '\n';

    // Specify the search starting index
    search.clear();
    foundAtIndex = fact.find(search = "star", 22);
    (foundAtIndex == string::npos) ? cout << search << " not found\n" : cout << search << " found at index " << foundAtIndex << '\n';

    // Searching for the equivalent of a C-String
    const char *searchFor = "Pro";
    foundAtIndex = fact.find(searchFor);
    (foundAtIndex == string::npos) ? cout << searchFor << " not found\n" : cout << searchFor << " found at index " << foundAtIndex << '\n';

    getch();
    return 0;
}