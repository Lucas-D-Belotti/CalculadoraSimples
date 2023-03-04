#include <iostream>
#include <math.h>

using namespace std;


float a, b, c;

int captura()
{
    cout << "\nDigite o N�mero A: ";
    cin >> a;
    cout << "\nDigite o N�mero B: ";
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
    cout << "\nA Subtra��o entre " << a << " e " << b << " = " << c << "\n";
}

void multi()
{
    captura();
    c = a * b;
    cout << "\nA Multiplica��o entre " << a << " e " << b << " = " << c << "\n";
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
        cout << "\nA Divis�o entre " << b << " sobre " << a << " = " << c << "\n";
    }
    else
    {
        c = a / b;
        cout << "\nA Divis�o entre " << a << " sobre " << b << " = " << c << "\n";
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
        cout << "\nDigite [2] para Subtra��o";
        cout << "\nDigite [3] para Multiplica��o";
        cout << "\nDigite [4] para Divis�o";
        cout << "\nDigite [5] para Sair\n";
        cin >> op;

        if(op != 1 && op != 2 && op != 3 && op != 4 && op != 5)
        {
            cout << "Op��o Invalida Tente Novamente!!";
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


