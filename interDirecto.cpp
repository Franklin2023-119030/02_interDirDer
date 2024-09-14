#include<bits/stdc++.h>
using namespace std;

void interdirder(int arr[], int a){
	for(int i=0; i<a-1; i++){
		for(int j=i+1; j<a; j++){
			if(arr[i]>arr[j]){
				int aux;
				aux=arr[i];
				arr[i]=arr[j];
				arr[j]=aux;
			}
		}
	}
	cout<<endl;
	for(int i=0; i<a; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main (){
	
	int n, arr[100], op;
	cout<<"Ingrese la cantidad de elementos que desea: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Ingrese un elemento: ";
		cin>>arr[i];
	}
	
	do{
		cout<<endl;
		cout<<"1) Intercambio directo por la derecha. "<<endl;
    	cout<<"2) Intercambio directo por la izquierda. "<<endl; 
        cout<<"3) Intercambio directo con senal. "<<endl;
        cout<<"4) Intercambio directo bidireccional. "<<endl;
        cout<<"5) Salir del programa. "<<endl;
        cout<<endl;
        cout<<"Ingrese la opcion que desea: ";
        cin>>op;
        
        switch(op){
        	case 1:
        		interdirder(arr, n);
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


