#include <vector>
#include <iostream>
template <typename T>


int busquedaBinaria(T val,const std::vector<T> &V,int ini, int fin){
	if(ini>fin){
		std::cout<<"No se encuetra el array";
		return -1;
	}
	int medio=(ini+fin)/2;
	if(V[medio] ==val){
		return medio;
	}else{
		if(V[medio]>val){
			return busquedaBinaria(val,V,ini,medio-1);
		}else{
			return busquedaBinaria(val,V,medio+1,fin);
		}
	}
}

template <typename T>
 int Partition(std::vector<T> &vector, int ini, int fin){
    T x=vector[fin];
    int i= ini;
    for(int j=ini; j<fin;j++){
       if(vector[j]<=x){
           T temporal;
		   temporal=vector[i];
 	     vector[i]=vector[j];
		 vector[j]=temporal;
		 i=i+1;
        }
    }
	T temporal=vector[i];
    vector[i]=vector[fin];
    vector[fin]=temporal;
   return i;
}


template <typename T>
void quicksort(std::vector<T> &V,int ini, int fin){
	if(ini<fin){
		int pivot = Partition(V, ini, fin);
		quicksort(V, ini, pivot-1);
		quicksort(V, pivot +1,fin);
}
}
