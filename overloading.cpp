#include <iostream>

class miClase
{
public:
    void funcionX(int a)
    {
        std::cout << "Esta variable es un entero." << std::endl;
    }
    void funcionX(float a)
    {
        std::cout << "Esta variable es un decimal." << std::endl;
    }
};

int main()
{
    float num = 1.1;
    int num2 = 2;

    miClase obj;

    obj.funcionX(num);
    obj.funcionX(num2);

    return 0;
}
