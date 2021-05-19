#include <iostream>
#include <cstring>

using namespace std;

char *p, text[300], text1[300], sep[]=" .,;!?", v[20][100], c, vocale[]="aeiou";
int i, k=0;

void afisare()
{
    cout<<"Primul sir: "; cin.getline(tx1, 300);
    cout<<"Al doilea sir: "; cin.getline(tx2, 300);
    cout<<"- Primul sir de caractere este: "<<text;
    cout<<endl<<"- ";
    cout<<"Al doilea sir de caractere este: "<<text1;
    cout<<endl<<"- ";
}

void strLEN()//LUNGIMEA SIRULUI
{
    cout<<"Primul sir: "; cin.getline(tx1, 300);
    cout<<"Al doilea sir: "; cin.getline(tx2, 300);
    cout<<"Lungimea sirului text este de: "<<strlen(text)<<", iar a sirului text1: "<<strlen(text1);
    cout<<endl<<"- ";
}

void strCAT()//CE ESTE IN TEXT1 SE ADAUGA IN TEXT
{
    cout<<"Primul sir: "; cin.getline(tx1, 300);
    cout<<"Al doilea sir: "; cin.getline(tx2, 300);
    cout<<"Text + Text1= "<<strcat(text, text1);
    cout<<endl<<"- ";
}

void strTOK()//IMPARTE PROPOZITIA IN CUVINTE
{
    cout<<"Cititi sirul: "; cin.getline(text, 300);
    p=strtok(text, sep);
    while(p)
    {
        k++;
        strcpy(v[k], p);
        p=strtok(NULL, sep);
    }
    for(i=1; i<=k; i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl<<"- ";
}

void strCHR()//CAUTA C IN SIRUL TEXT
{
    cout<<"Cititi sirul: "; cin.getline(text, 300);
    cout<<"Cititi c: ";
    cin>>c;
    p=strchr(text, c);
    while(p)
    {
        cout<<c<<" se gaseste pe pozitia: "<<p-text<<endl;
        p++;
        p=strchr(p,c);
    }
}

void strSTR()//DACA AL DOILEA SIR ESTE SUBSIR AL PRIMULUI SIR
{
    char tx1[300], tx2[300];
    cout<<"Primul sir: "; cin.getline(tx1, 300);
    cout<<"Al doilea sir: "; cin.getline(tx2, 300);
    cout<<strstr(tx1, tx2);
}

void cauta_vocale()//CAUTA VOCALELE
{
    cout<<"Cititi sirul: "; cin.getline(text, 300);
    cout<<text<<endl;
    for(i=1; i<=strlen(text); i++)
    {
        if(strchr(vocale, text[i]))
            cout<<text[i]<<" ";
    }
}

int main()
{

    return 0;
}

