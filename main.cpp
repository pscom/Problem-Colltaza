#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int t;
    int n;

    cin >> t;

    int sy[t];
    int ny[t];

    for(int i = 0; i < t; i++)
        cin >> sy[i];

    for(int i = 0; i < t; i++)
    {
        n = 0;

        while(sy[i] != 1)
        {
            if(sy[i] % 2 == 0)
            {
                sy[i] = sy[i] / 2;
            }
            else
            {
                sy[i] = 3 * sy[i] + 1;
            }

            n++;
        }

        ny[i] = n;
    }


    for(int i = 0; i < t; i++)
        cout << ny[i] << endl;

    getch();
    return 0;
}
