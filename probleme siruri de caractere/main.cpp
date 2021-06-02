/*Se citesc de la tastatură două cuvinte. Să se afișeze literele comune celor două cuvinte.
Dacă o literă apare de mai multe ori, atunci se va afișa o singură dată.*/
/*#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char cuv1[100], cuv2[100], c;
    int gasit1, gasit2, i;
    cin.getline(cuv1, 100);
    cin.get(cuv2, 100);
    for(c='a'; c<='z'; c++)
    {
        gasit1=0;
        gasit2=0;
        for(i=0; i<strlen(cuv1); i++)
            if(cuv1[i]==c)
                gasit1=1;
        for(i=0; i<strlen(cuv2); i++)
            if(cuv2[i]==c)
                gasit2=1;
        if(gasit1 && gasit2)
            cout<<c<<'\n';
    }
    return 0;
}*/

/*Scrieţi un program C/C++ care citeşte de la tastatură două şiruri de caractere formate din maximum 100 litere mici
ale alfabetului englez şi afişează pe ecran cel mai lung sufix comun al celor două şiruri de caractere.
Dacă cele două şiruri nu au niciun sufix comun, atunci programul va afişa pe ecran mesajul NU EXISTA.
Exemplu: pentru şirurile marina şi elena se va afişa na*/
/*#include <iostream>
#include <cstring>

using namespace std;

int main()

{
    char sir1[100], sir2[100];
    int p, k, i, sufix=0;
    cout<<"Cititi sirul 1:"; cin.get(sir1,100);
    cin.get();
    cout<<"Cititi sirul 2:"; cin.get(sir2,100);
    p=strlen(sir1);
    k=strlen(sir2);
    while(sir1[p-1]==sir2[k-1])
    {
        sufix=1;
        p--;
        k--;
    }
    if(sufix)
        for(i=p; i<strlen(sir1); i++)
        cout<<sir1[i];
    else
        cout<<"Nu exista";
    return 0;
}*/

/*Şirul de caractere s2 este “clona” şirului de caractere s1 dacă se poate obţine din s1 prin eliminarea
tuturor apariţiilor unei singure vocale. Se consideră vocală orice literă din mulţimea {a,e,i,o,u}.
Scrieţi programul C/C++ care citeşte de la tastatură un cuvânt format din cel mult 20 litere mici ale alfabetului englez
şi afişează pe ecran (dacă există), toate “clonele” acestui cuvânt, fiecare pe câte o linie a ecranului.
Exemplu: pentru cuvântul informatica se afişează, nu neapărat în această ordine, “clonele” scrise alăturat.
nformatca
infrmatica
informtic*/
/*#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[100],s2[100];
    char vocale[10]="aeiou";
    cin>>s1;
    int i;
    for(i=0; i<strlen(vocale); i++)
    {
        strcpy(s2,s1);
        int j=0;
        while(j<strlen(s2))
            if(s2[j]==vocale[i])
                strcpy(s2+j,s2+j+1);
            else
                j++;
        if(strlen(s1)!=strlen(s2))
            cout<<vocale[i]<<": "<<s2<<endl;
    }
    return 0;
}*/

/*Un şir cu maximum 255 de caractere conţine cuvinte separate prin câte un spaţiu.
Cuvintele sunt formate numai din litere mici ale alfabetului englez. Scrieţi un program C/C++ care citeşte de la tastatură
un astfel de şir şi îl afişează pe ecran modificat, inversând prin oglindire doar cuvintele care încep cu vocală,
ca în exemplu. Se consideră ca fiind vocale următoarele litere: a, e, i, o, u.
Exemplu: pentru şirul: maine este proba la informatica se va afişa: maine etse proba la acitamrofni*/
/*#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[255], *p;
    cin.get(s,255);
    p=strtok(s, " ");
    while(p)
    {
        if(strchr("aeiou", *p))
            strrev(p);
        cout<<p<<" ";
        p=strtok(NULL," ");
    }
}*/

/*VEZI Un şir cu maximum 255 de caractere conţine cuvinte cuvinte formate numai din litere mici ale alfabetului englez.
Fiecare cuvânt este urmat de un caracter *. Scrieţi un program C/C++ care citeşte un astfel de şir şi
afişează pe ecran şirul obţinut prin eliminarea tuturor apariţiilor primului cuvânt, ca în exemplu.
Exemplu: pentru şirul: bine*albine*foarte*bine* se va afişa: *albine*foarte**       */
/*#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[100], s2[100];
    cin.get(s1, 100);
    char *p = strtok(s1, "*");
    cout<<"*";
    char *q = strtok(NULL, "*");
    while(q)
    {
        if(strcmp(p, q))
            cout<<q;
        cout<<"*";
        strcpy(s2, p);
        q = strtok(NULL, "*");
    }
    return 0;
}*/

/*VEZI Scrieţi programul C/C++ care citeşte de la tastatură un şir de cel mult 40 de caractere,
format doar din litere ale alfabetului englez, şi care afişează pe ecran toate şirurile obţinute prin eliminarea succesivă
a câte unei singure litere din şirul citit, ca în exemplu. Şirurile se vor afişa câte unul pe câte o linie a ecranului.*/
/*#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[100];
    int n;
    cin.getline(s1, 100);
    n=strlen(s1);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i!=j)
                cout<<s1[j];
        }
        cout<<endl;
    }
    return 0;
}*/

/*VEZI Se consideră un text format doar din spaţii şi litere mici ale alfabetului englez, care începe cu o literă şi care
conţine cel puţin o vocală din multimea {a,e,i,o,u}. Scrieţi programul C/C++ care citeşte de la tastatură un şir
cu cel mult 100 de caractere, ca cel descris mai sus şi care determină transformarea acestuia prin înlocuirea
fiecărei vocale din text cu litera imediat următoare din alfabet (a se înlocuieşte cu b, e se înlocuieşte cu f ş.a.m.d.).
Exemplu: dacă şirul citit este examen de bacalaureat, după modificare se afişează: bbcblbvrfbt*/
/*#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[100], vocale[]="aeiou";
    int i;
    cin.getline(s, 100);
    for(i=0; i<strlen(s); i++)
        if(strchr(vocale ,s[i]))
            s[i]++;
    cout<<s;
    return 0;
}*/
