#include "StdAfx.h"
#include <iostream>
#include "atributos.h"
#define MAX 100
using namespace std;

atributos::atributos(void)
{
	A[MAX]=0;
	n=0;
}
atributos::~atributos(void)
{
}
void cargar(int vec[],int n)
{
	for (int i=0;i<n;i++){
		cout<<"Ingrese un numero:";
	    cin>>vec[i];
	}
}
void show(int vec[],int n)
{
		for (int i=0;i<n;i++){
		cout<<"Vector "<<i<<": "<<vec[i]<<endl;
		}
}
void menor(int vec[],int n)
{
		int m=vec[0];
		for (int i=0;i<n;i++){
		if(m>vec[i]){
			m= vec[i];	
		}	
		}
			cout<<"EL MENOR ES: "<<m;
}