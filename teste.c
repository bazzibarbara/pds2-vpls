#include <iostream>
#include <string>
#include<cstring>

using namespace std;
int main(){
    int va=0, ve=0, vi=0, vo=0, vu=0;

    string palavra;
    cout << "digite uma palavra com todas as letras minusculas ";
    cin >> palavra;
    for(int i =0 ; i < palavra.size(); i++){
     if(palavra[i]=='a'){
        va++;
     }
      if(palavra[i]=='e'){
        ve++;
     }
      if(palavra[i]=='i'){
        vi++;
     }
      if(palavra[i]=='o'){
        vo++;
     }
      if(palavra[i]=='u'){
        vu++;
     }

    }
    if(va ==0 ){

    }else{
        cout<<" a " << va<< endl;
    }
    if(ve ==0 ){

    }else{
        cout<<" e " << ve<< endl;
    }
    if(vi ==0 ){

    }else{
        cout<<" a " << vi<< endl;
    }
    if(vo ==0 ){

    }else{
        cout<<" a " << vo<< endl;
    }
    if(vu ==0 ){

    }else{
        cout<<" a " << vu<< endl;
    }


}