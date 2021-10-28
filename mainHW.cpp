#include "HWfunctions.h"

using namespace std;

int main()
{
    int n = 0;

    Point* points = readFile("C:\\Users\\sea23\\Desktop\\институт\\3 курс\\5 семестр\\c++\\forKatya\\list.txt", n);
    Answer res = firstVar(points, n);

    cout << "max left: " << res.left.x << ' ' << res.left.y << '\n' <<
            "max right: " <<  res.right.x << ' ' << res.right.y << endl;

    delete points;


    return 0;
}
