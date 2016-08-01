#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    string animname,type = ".qc";
    ofstream fout;
    unsigned int startframe, endframe,i = 1;
    cout <<"*********************" << endl;
    cout <<"****QuakeC framer****" << endl;
    cout <<"*********************" << endl;
    cout <<"Write your animation name:" << endl;
    cin >> animname;
     fout.open(animname + type);
    cout <<"Write start frame:" << endl;
    cin >> startframe;
    cout <<"Write end frame:" << endl;
    cin >> endframe;
    while(startframe <= endframe)
    {
        fout <<"void()\t" <<animname << i <<"=" << "[";
        fout << startframe << ", " << animname << i + 1 << "]" << "{};" << endl;
        startframe++;
        i++;
    }
    fout.close();
    cout <<"Frames saved in " << animname + type <<endl;
    return 0;
}

