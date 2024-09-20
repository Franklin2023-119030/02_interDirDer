#include<bits/stdc++.h>
using namespace std;

void interdirder(int arr[], int a){
	for(int i=0; i<a-1; i++){
		for(int j=i+1; j<a; j++){
			if(arr[i]>arr[j]){
				int aux=arr[i];
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

void interdirizq(int arr[], int b){
    for(int i=0; i<b-1; i++){
        for(int j=b-1; j>i; j--){
            if(arr[j]<arr[j-1]){
                int aux=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=aux;
            }
        }
    }
    cout<<endl;
    for(int i=0; i<b; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void interdircen(int arr[], int c){
		int cen=1;
		int i=0;
		while(i<c-1 && cen==1){
			cen=0;
			for(int j=0; j<c-i-1;j++){
				if(arr[j]>arr[j+1]){
					int aux=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=aux;
					cen=1;
				}
			}
			i++;
		}
		cout<<endl;
		for(int i=0; i<c; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
}

void interdirbi(int arr[], int d){
	bool cambio=true;
	int inicio=0;
	int fin=d-1;
	
	while(cambio){
		cambio=false;
		for(int i=inicio; i<fin; i++){
			if(arr[i]>arr[i+1]){
				int aux=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=aux;
				cambio=true;
			}
		}
		if(!cambio)
		break;
		fin--;
		
		cambio=false;
		for(int i=fin; i>inicio; i--){
			if(arr[i]<arr[i-1]){
				int aux=arr[i];
				arr[i]=arr[i-1];
				arr[i-1]=aux;
				cambio=true;
			}
		}
		inicio++;
	}
	cout<<endl;
	for(int i=0; i<d; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void Selecciondirecta(int arr[], int e){
	int menor;
	int k;
	for(int i=0; i<e-1; i++){
		menor=arr[i];
		k=i;
		for(int j=i+1; j<e; j++){
			if(arr[j]<menor){
			menor=arr[j];
			k=j;
			}
		}
		arr[k]=arr[i];
		arr[i]=menor;
	}
	cout<<endl;
	for(int i=0; i<e; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main (){
	
	int n, arr[100], op;
	cout<<endl;
	cout<<"*****************BIENVENIDO AL PROGRAMA*****************"<<endl<<endl;
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
        cout<<"3) Intercambio directo con senial. "<<endl;
        cout<<"4) Intercambio directo bidireccional. "<<endl;
        cout<<"5) Seleccion directa. "<<endl;
		cout<<"6) Salir del programa. "<<endl;
        cout<<endl;
        cout<<"Ingrese la opcion que desea: ";
        cin>>op;
        
        switch(op){
        	case 1:
        		interdirder(arr, n);
        		break;
        	case 2:
				interdirizq(arr, n);
				break;
			case 3:	
				interdircen(arr, n);
        		break;
        	case 4:
        		interdirbi(arr, n);
        		break;
        	case 5:
        		Selecciondirecta(arr, n);
        		break;
        	case 6:
        		cout<<endl; 
        		cout<<"-------------------SALIENDO DEL PROGRAMA-------------------"<<endl;
        		return 0;
        	default:
        		cout<<endl;
        		cout<<"Opcion incorrecta, porfavor ingrese una opcion valida."<<endl;
        		break;
		}
	}
	while(op!=0);
	return 0;
}


