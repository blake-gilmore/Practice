#include <iostream>
using namespace std;

int main()
{
    int Too;
    int Good;
    int T, O, G, D;

    for (T = 0; T < 10; T++)
    {
        for (O = 0;  O < 10; O++)
        {
            for (G = 0; G < 10; G++)
            {
                
                for (D = 0; D < 10; D++)
                {
                    Too = T * 100 + O * 10 + O;
                    Good = G * 1000 + O * 100 + O * 10 + D;


                    if (((Too * 4) == Good) && (T != O) && (T != G) && (T != D) && (O != G) && (O != D) && (G != D))
                    {
                        cout << "T = " << T << "\tO = " << O << "\tG = " << G << "\tD = " << D << endl;
                    }
                }
            }
        }
    }

    return 0;
}