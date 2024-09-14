#include<bits/stdc++.h>
using namespace std;
int main (){
	
	int n, arr[100], op;
	cout<<"Ingrese la cantidad de elementos que desea: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Ingrese un elemento: ";
		cin>>arr[i];
	}
	
	do{
		cout<<"1) Intercambio directo por la derecha. "<<endl;
    	cout<<"2) Intercambio directo por la izquierda. "<<endl; 
        cout<<"3) Intercambio directo con senal. "<<endl;
        cout<<"4) Intercambio directo bidireccional. "<<endl;
        cout<<"5) Salir del programa. "<<endl;
        cin>>op;
        
        switch(op){
        	case 1:
        		
        		break;
        	case 2:
			
				break;
			case 3:	
			
        		break;
        	case 4:
        		
        		break;
        	default:
        		
        		break;
		}
	}
	while(op!=0);
	return 0;
}
