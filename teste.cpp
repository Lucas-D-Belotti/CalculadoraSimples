#include <iostream>
#include <math.h>

using namespace std;


float a, b, c;

int captura()
{
    cout << "\nDigite o Número A: ";
    cin >> a;
    cout << "\nDigite o Número B: ";
    cin >> b;
}

void soma()
{
    captura();
    c = a + b;
    cout << "\nA Soma entre " << a << " e " << b << " = " << c << "\n";
}

void sub()
{
    captura();
    c = a - b;
    cout << "\nA Subtração entre " << a << " e " << b << " = " << c << "\n";
}

void multi()
{
    captura();
    c = a * b;
    cout << "\nA Multiplicação entre " << a << " e " << b << " = " << c << "\n";
}

int divis()
{
    captura();
    if(a == 0 && b == 0)
    {
        cout << "\nImpossivel dividir por zero\n";
    }
    else if(b == 0)
    {
        c = b / a;
        cout << "\nA Divisão entre " << b << " sobre " << a << " = " << c << "\n";
    }
    else
    {
        c = a / b;
        cout << "\nA Divisão entre " << a << " sobre " << b << " = " << c << "\n";
    }
}

int potenc()
{
    captura();
    int esc;

}

int main()
{
    int op;

    do
    {
        cout << "\nDigite [1] para Soma";
        cout << "\nDigite [2] para Subtração";
        cout << "\nDigite [3] para Multiplicação";
        cout << "\nDigite [4] para Divisão";
        cout << "\nDigite [5] para Sair\n";
        cin >> op;

        if(op != 1 && op != 2 && op != 3 && op != 4 && op != 5)
        {
            cout << "Opção Invalida Tente Novamente!!";
        }
        else
        {
            switch(op)
            {
                case 1:
                    soma();
                    break;
                case 2:
                    sub();
                    break;
                case 3:
                    multi();
                    break;
                case 4:
                    divis();
                    break;
            }
        }

        system("pause");

        system("cls");
    }while(op != 5);


    return 0;
}


