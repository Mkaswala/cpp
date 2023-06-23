#include <iostream>

int s()
{
    for(int i=11; i<=51; i+=5)  // row
    {
        for(int j=11; j<=51; j+=10, i+=1)    // col
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    s();
}
