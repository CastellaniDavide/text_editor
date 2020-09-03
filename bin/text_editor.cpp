/**
 * @file text_editor.cpp
 *
 * @version 01.01 2020-9-3
 *
 * @brief https://training.olinfo.it/#/task/ois_editor/statement
 *
 * @ingroup text_editor
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */

#include <bits/stdc++.h>

using namespace std;

int N;
char temp;
vector <bool> i;
vector <bool> bold;
bool actually_i, actually_bold;
int counter_i1, counter_i2, counter_bold1, counter_bold2;

int main()
{
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
//  6 n N I I N n -> 2
//  9 N I I i n n i i N -> 4

    counter_i1 = 0;
    counter_i2 = 0;
    counter_bold1 = 0;
    counter_bold2 = 0;

    cin >> N;

    cin >> temp;

    if(temp == 'i' || temp == 'I')
        actually_i = true;
    else
        actually_i = false;

    if(temp == 'N' || temp == 'I')
        actually_bold = true;
    else
        actually_bold = false;

    for(int i=1; i<N; i++)
    {
        cin >> temp;

        if(temp == 'i' || temp == 'I')
        {
            if(!actually_i)
                counter_i1++;
            actually_i = true;
        }
        else
        {
            if(actually_i)
                counter_i2++;
            actually_i = false;
        }

        if(temp == 'N' || temp == 'I')
        {
            if(!actually_bold)
                counter_bold1++;
            actually_bold = true;
        }
        else
        {
            if(actually_bold)
                counter_bold2++;
            actually_bold = false;
        }
    }

    if(actually_i)
        counter_i2++;
    else
        counter_i1++;

    if(actually_bold)
        counter_bold2++;
    else
        counter_bold1++;


    //cout << counter_i1 << "\t" << counter_i2 << "\t" << counter_bold1 << "\t" << counter_bold2 << endl;

    cout << counter_i2 + counter_bold2;

    return 0;
}
