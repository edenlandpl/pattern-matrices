#include <cstdlib>
#include <iostream>

using namespace std;
int i=0,j=0,n;

int main(int argc, char *argv[])
{
    cout << "Podaj rozmiar tablicy - " << endl;
    cin >> n;
    n--;
    int t[n][n];
    // po przek¹tnej
    while(j<=n)
    {
        if(j<=i)
             t[i][j]=1;
        else
        {
            t[i][j]=0;
        }
    cout<<t[i][j];
    i++;
    if(i>n)
            {
            i=0;j++;cout << endl;
    }
    }
    // po prawej
    i=0,j=0; cout << endl;
    while(j<=n)
    {
        if(i>n/2)
             t[i][j]=1;
        else
        {
            t[i][j]=0;
        }
    cout<<t[i][j];
    i++;
    if(i>n)
            {
            i=0;j++;cout << endl;
            }
    }
// po lewej
    i=0,j=0; cout << endl;
    while(j<=n)
    {
        if(i<=n/2)
             t[i][j]=1;
        else
        {
            t[i][j]=0;
        }
    cout<<t[i][j];
    i++;
    if(i>n)
            {
            i=0;j++;cout << endl;
            }
    }
// flaga
    i=0,j=0; cout << endl;
    while(j<=n)
    {
        if(j>n/2)
             t[i][j]=1;
        else
        {
            t[i][j]=0;
        }
    cout<<t[i][j];
    i++;
    if(i>n)
            {
            i=0;j++;cout << endl;
            }
    }

// co drugi
    i=0,j=0; cout << endl;
    while(j<=n)
    {
        if(i%2)
             t[i][j]=1;
        else
        {
            t[i][j]=0;
        }
    cout<<t[i][j];
    i++;
    if(i>n)
            {
            i=0;j++;cout << endl;
            }
    }
// co drugi wiersz
    i=0,j=0; cout << endl;
    while(j<=n)
    {
        if(j%2)
             t[i][j]=1;
        else
        {
            t[i][j]=0;
        }
    cout<<t[i][j];
    i++;
    if(i>n)
            {
            i=0;j++;cout << endl;
            }
    }

// na krawedziach
    i=0,j=0; cout << endl;
    while(j<=n)
    {
        if(i==0||j==0||i==n||j==n)
             t[i][j]=1;
        else
        {
            t[i][j]=0;
        }
    cout<<t[i][j];
    i++;
    if(i>n)
            {
            i=0;j++;cout << endl;
            }
    }
// Po krzyzu
    i=0,j=0; cout << endl;
    while(j<=n)
    {
        if(i==j||n==j+i)
             t[i][j]=1;
        else
        {
            t[i][j]=0;
        }
    cout<<t[i][j];
    i++;
    if(i>n)
            {
            i=0;j++;cout << endl;
            }
    }
    // rombiki
    i=0,j=0; cout << endl;
    while(j<=n)
    {
        if((i+j)%2)
             t[i][j]=1;
        else
        {
            t[i][j]=0;
        }
    cout<<t[i][j];
    i++;
    if(i>n)
            {
            i=0;j++;cout << endl;
            }
    }


    system("PAUSE");
    return EXIT_SUCCESS;
}
