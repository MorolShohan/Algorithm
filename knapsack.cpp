#include<iostream>
using namespace std;



int main(){



    string X;
    string Y;
    X=" BDCABA";
    Y=" ABCBDAB";
    int m=6, n=7;
    int table[m+1][n+1];
    string lcs_print[m+1][n+1];
    for(int i=0;i<=m;i++)
        table[i][0]=0;
    for(int j=0;j<=n;j++)
        table[0][j]=0;



    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){



            if(X[i]==Y[j]){
                table[i][j]=table[i-1][j-1]+1;
                lcs_print[i][j]="copy";
            }



            else if(table[i-1][j]>=table[i][j-1]){
                table[i][j]=table[i-1][j];
                lcs_print[i][j]="skipX";



            }



            else{
                table[i][j]=table[i][j-1];
                lcs_print[i][j]="skipY";
            }



        }
    }
    int i=m, j=n;
    string result= "";
    while(true){
        if(i==0 || j==0)
            break;
        else if(lcs_print[i][j]== "copy"){
            result=result+X[i];
            i--;
            j--;
        }
        else if(lcs_print[i][j]=="skipX")
        {
            i--;
        }
        else
        {
            j--;
        }
    }


    cout << "LCS length is: " << table[m][n];
    return 0;
}
