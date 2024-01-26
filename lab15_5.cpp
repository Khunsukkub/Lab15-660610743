#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
    int E[4] = {*a,*b,*c,*d};
	int i = rand() % 4;

	*a = E[i];
	while(true){
		int j = rand()% 4;
		*b = E[j];
		while(j != i){
			int q = rand()% 4;
			*c = E[q];
			while(q != j && q != i){
				int w = rand()% 4;
				*d = E[w];
				if(w != q && w != j && w != i){
					break;
				}
			}
			if(q != j && q != i){
					break;
				}
		}
		if(j != i){
			break;
		}
    }
}