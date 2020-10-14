#include <iostream>
#include <cstring>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
char matrice[3][3] = { '1','2','3','4','5','6','7','8','9' };
char jucator ,aux;
int n, k;
bool Check(int a)
{
    if (a == 1)
        if (isdigit(matrice[0][0]))
            return true;
    if (a == 2)
         if (isdigit(matrice[0][1]))
            return true;
    if (a == 3)
          if (isdigit(matrice[0][2]))
             return true;
    if (a == 4)
          if (isdigit(matrice[1][0]))
             return true;
    if (a == 5)
          if (isdigit(matrice[1][1]))
              return true;
    if (a == 6)
          if (isdigit(matrice[1][2]))
              return true;
    if (a == 7)
           if (isdigit(matrice[2][0]))
               return true;
    if (a == 8)
           if (isdigit(matrice[2][1]))
               return true;
    if (a == 9)
            if (isdigit(matrice[2][2]))
               return true;
    return false;
}
void Draw()
{
    system("cls");
    cout << "X si O" << endl;
    for (int l = 0; l < 7; l++)
        cout << "-";
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "|";
        for (int j = 0; j < 3; j++)
        {
            cout << matrice[i][j] << "|";
        }
        cout << endl;
        for (int l = 0; l < 7; l++)
            cout << "-";
        cout << endl;
    }
}
void Input()
{
    srand(time(0));
    int a;
    if (k == 2)
    {
        cout << "Apasa numarul casutei: ";
        cin >> a;
        while (Check(a) == false)
        {
            cout << "Casuta selectata este deja ocupata, alege alta casuta:";
            cin >> a;
        }
        if (a == 1)
            matrice[0][0] = jucator;
        else if (a == 2)
            matrice[0][1] = jucator;
        else if (a == 3)
            matrice[0][2] = jucator;
        else if (a == 4)
            matrice[1][0] = jucator;
        else if (a == 5)
            matrice[1][1] = jucator;
        else if (a == 6)
            matrice[1][2] = jucator;
        else if (a == 7)
            matrice[2][0] = jucator;
        else if (a == 8)
            matrice[2][1] = jucator;
        else if (a == 9)
            matrice[2][2] = jucator;
    }
    if (k == 1)
    {
        if (jucator != aux)
        {
            Sleep(100);
            a = rand() % 9 + 1;
            while (Check(a) == false)
                a = rand() % 9 + 1;
            if (a == 1)
                matrice[0][0] = jucator;
            else if (a == 2)
                matrice[0][1] = jucator;
            else if (a == 3)
                matrice[0][2] = jucator;
            else if (a == 4)
                matrice[1][0] = jucator;
            else if (a == 5)
                matrice[1][1] = jucator;
            else if (a == 6)
                matrice[1][2] = jucator;
            else if (a == 7)
                matrice[2][0] = jucator;
            else if (a == 8)
                matrice[2][1] = jucator;
            else if (a == 9)
                matrice[2][2] = jucator;
        }
        else
        {
            cout << "Apasa numarul casutei: ";
            cin >> a;
            while (Check(a) == false)
            {
                cout << "Casuta selectata este deja ocupata, alege alta casuta:";
                cin >> a;
            }
            if (a == 1)
                matrice[0][0] = jucator;
            else if (a == 2)
                matrice[0][1] = jucator;
            else if (a == 3)
                matrice[0][2] = jucator;
            else if (a == 4)
                matrice[1][0] = jucator;
            else if (a == 5)
                matrice[1][1] = jucator;
            else if (a == 6)
                matrice[1][2] = jucator;
            else if (a == 7)
                matrice[2][0] = jucator;
            else if (a == 8)
                matrice[2][1] = jucator;
            else if (a == 9)
                matrice[2][2] = jucator;
        }
    }
}
void TogglePlayer()
{
    if (jucator == 'X')
        jucator = 'O';
    else
        jucator = 'X';
}
char Win()
{
    //castigator X
    //linii
    if (matrice[0][0] == 'X' && matrice[0][1] == 'X' && matrice[0][2] == 'X')
        return 'X';
    if (matrice[1][0] == 'X' && matrice[1][1] == 'X' && matrice[1][2] == 'X')
        return 'X'; 
    if (matrice[2][0] == 'X' && matrice[2][1] == 'X' && matrice[2][2] == 'X')
        return 'X';
    //coloane
    if (matrice[0][0] == 'X' && matrice[1][0] == 'X' && matrice[2][0] == 'X')
        return 'X';
    if (matrice[0][1] == 'X' && matrice[1][1] == 'X' && matrice[2][1] == 'X')
        return 'X';
    if (matrice[0][2] == 'X' && matrice[1][2] == 'X' && matrice[2][2] == 'X')
        return 'X';
    //diagonale
    if (matrice[0][0] == 'X' && matrice[1][1] == 'X' && matrice[2][2] == 'X')
        return 'X';
    if (matrice[0][2] == 'X' && matrice[1][1] == 'X' && matrice[2][0] == 'X')
        return 'X';

    //castigator O
    //linii
    if (matrice[0][0] == 'O' && matrice[0][1] == 'O' && matrice[0][2] == 'O')
        return 'O';
    if (matrice[1][0] == 'O' && matrice[1][1] == 'O' && matrice[1][2] == 'O')
        return 'O';
    if (matrice[2][0] == 'O' && matrice[2][1] == 'O' && matrice[2][2] == 'O')
        return 'O';
    //coloane
    if (matrice[0][0] == 'O' && matrice[1][0] == 'O' && matrice[2][0] == 'O')
        return 'O';
    if (matrice[0][1] == 'O' && matrice[1][1] == 'O' && matrice[2][1] == 'O')
        return 'O';
    if (matrice[0][2] == 'O' && matrice[1][2] == 'O' && matrice[2][2] == 'O')
        return 'O';
    //diagonale
    if (matrice[0][0] == 'O' && matrice[1][1] == 'O' && matrice[2][2] == 'O')
        return 'O';
    if (matrice[0][2] == 'O' && matrice[1][1] == 'O' && matrice[2][0] == 'O')
        return 'O';

    return '/';
}
void Meniu()
{
    cout << "Alege modul de joc:" << endl;
    cout << "Scrie 1 pentru a juca cu calculatorul" << endl;
    cout << "Scrie 2 pentru a juca un alt jucator" << endl;
    cout << "Alegerea ta: ";
    cin >> k;
    cout << "Alege cu ce joci, X sau O?" << endl;
    cin >> jucator; 
    if (jucator == 'x' || jucator == 'o')
        jucator = toupper(jucator);
    else if (jucator != 'X' && jucator != 'O')
        cin >> jucator;
    aux = jucator;
}
int main()
{   
    n = 0;
    Meniu();
    if (k)
    {
        Draw();
        while (1)
        {
            n++;
            Input();
            Draw();
            if (Win() == 'X')
            {
                cout << "X castigator" << endl;
                break;
            }
            else if (Win() == 'O')
            {
                cout << "O castigator" << endl;
                break;
            }
            else if (Win() == '/' && n == 9)
            {
                cout << "Egalitate" << endl;
                break;
            }
            TogglePlayer();
        }
    }
    return 0;
}