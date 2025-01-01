#include <iostream>
using namespace std;

void intersectionOfTwoAeeays(int *input1, int *input2, int size1, int size2)

{
    for (int i = 0; i < size1; i++)
    {
        int element = input1[i];
        for (int j = 0; j < size2; j++)
        {
            if (element == input2[j])
            {
                cout << element << " ";
                input2[j] = -26568;
                break;
            }
        }
    }
}

int main()
{

    return 0;
}