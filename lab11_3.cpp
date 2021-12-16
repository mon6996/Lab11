#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int count = 0;
    float sum = 0, sum2 = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source, textline))
    {
        sum += atof(textline.c_str());
        sum2 += pow(atof(textline.c_str()), 2);
        count++;
    }
    source.close();
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/count << "\n";
    cout << "Standard deviation = " << sqrt(sum2/count - pow(sum/count, 2)) << "\n";
    return 0;
}
