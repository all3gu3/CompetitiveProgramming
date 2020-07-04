/*****************************/
//adhoc_trainig A-1
/*****************************/
/*****************************/
#include <bits/stdc++.h>

using namespace std;

int a,b,c,d,res=120;

bool comprueba(){
    if((a+b+c+d)==0){
        return 0;
    }
    return 1;
}

int f(int A, int B, bool cw){///start number, end number, isClockwise
    if(cw==0){///Is colckwise
        swap(A,B);

    }
    int diff = abs(A-B);
    //out<<diff<<"\n";
    if(A>B){
        return 40-diff;
    }
    return diff;
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
    while(1){
        cin>>a>>b>>c>>d;
        res = 120;
        if(comprueba()==0){
            break;
        }
        res+=f(a,b,0);
        res+=f(b,c,1);
        res+=f(c,d,0);
        cout<<res*9<<"\n";
    }
	return 0;
}

//Allegue  \_0>
