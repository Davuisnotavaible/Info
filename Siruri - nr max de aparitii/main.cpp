/*sa se afiseze litera mica cel mai des citita in sir. daca exista mai multe litere cu numar maxim de apartitii,
programul o va afisa pe prima in ordine alfabetica. daca sirul nu contine litere mici, atunci se va afisa mesajul "nu"*/
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char s[50], lit;
    int f[130], maxx=0;
    cin.getline(s,255);
    for(char i='a'; i<='z'; i++)
        f[i]=0;
    for(int j=0; j<strlen(s); j++)
        if(s[j]>='a' && s[j]<='z')
            f[s[j]]++;
    for(char i='a'; i<='z'; i++)
        if(f[i]>maxx)
        {
            maxx=f[i];
            lit=i;
        }
    cout<<lit;
    return 0;
}
