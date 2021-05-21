#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <iterator>
#include <map>

using namespace std;

void runAlgorithm() {
    cout << "result" << endl;
    cout << flush;
}

void communicateWithJava() {
    enum commands{
        ERROR,
        runExample,
    };
    map<string, commands> mapStringToEnum =
            {
                    {"error", ERROR},
                    {"runExample", runExample},
            };
    string line;
    while(true) {
        cout << "test" << endl;
        cout << flush;
    }
    //while(getline(cin, line)) {
    //    istringstream buf(line);
    //    istream_iterator<string> beg(buf), end;
    //    vector<string> lineAsTokens(beg, end);
    //    commands switchType = mapStringToEnum[lineAsTokens[0]];
    //    switch (switchType) {
    //        case ERROR: {
    //            cout << "Could not understand input: "<< line << endl;
    //            cout << flush;
    //            break;
    //        }
    //        case runExample: {
    //            runAlgorithm();
    //            cout << "info " << lineAsTokens[1] << lineAsTokens[2] << endl;
    //            cout << flush;
    //            break;
    //        }
    //    }
    //}
}

int main() {
    communicateWithJava();
    return 0;
}
