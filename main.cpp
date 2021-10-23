#include <iostream>
#include <fstream>
#include <prglib.h>
#include <list>
using namespace std;
using prglib::arvore;


template <typename T> int compara_arvores(arvore<T> & a1, arvore<T> & a)
{
    list<T>l1;
    list<T>l;
    a1.listeInOrder(l1);
    a.listeInOrder(l);


    if(a1.vazia()||a.vazia())
    {
        return 2;
    }
    if (l1!=l){
        return 0;
    }
    else
    if(a1.tamanho()==a.tamanho()&& a.altura()==a1.altura())
    {
        return 2;
    }
    if(a1.tamanho()==a.tamanho()&& a.altura()!=a1.altura()){
        return 1;
    }

}



int main(int argc, char * argv[]) {

    arvore<int> arv;
    arvore<int> arv1;

    arv.adiciona(5);
    arv.adiciona(7);
    arv.adiciona(2);
    arv.adiciona(13);
    arv.adiciona(11);
    arv.adiciona(15);
    arv.balanceia(true);

    arv1.adiciona(5);
    arv1.adiciona(7);
    arv1.adiciona(2);
    arv1.adiciona(13);
    arv1.adiciona(11);
    arv1.adiciona(15);
    arv1.balanceia(true);

    int i=compara_arvores(arv1,arv);
    cout<<i<<endl;

}
