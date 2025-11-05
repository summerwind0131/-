#include<iostream>
using namespace std;
int main(){
    int i=0;
    int round_11=0;
    int round_21=0;
    int score_11[10000][2];
    int score_21[10000][2];
    while(1){
        char c;
        cin>>c;
        if(c=='E')break;
        else if(c=='W'){
            if(score_11[round_11][0]>=10){
                score_11[round_11][0]++;
                if((score_11[round_11][0]-score_11[round_11][1])>=2)round_11++;
            }
            else{
                score_11[round_11][0]++;
            }
            if(score_21[round_21][0]>=20){
                score_21[round_21][0]++;
                if((score_21[round_21][0]-score_21[round_21][1])>=2)round_21++;
            }
            else{
                score_21[round_21][0]++;
            }

        }
        else if(c=='L'){
            if(score_11[round_11][1]>=10){
                score_11[round_11][1]++;
                if((score_11[round_11][1]-score_11[round_11][0])>=2)round_11++;
            }
            else{
                score_11[round_11][1]++;
            }
            if(score_21[round_21][1]>=20){
                score_21[round_21][1]++;
                if((score_21[round_21][1]-score_21[round_21][0])>=2)round_21++;
            }
            else{
                score_21[round_21][1]++;
            }
        }
    }
    for(int i=0;i<=round_11;i++){
        cout<<score_11[i][0]<<":"<<score_11[i][1]<<endl;
    }
    cout<<endl;
    for(int i=0;i<=round_21;i++){
        cout<<score_21[i][0]<<":"<<score_21[i][1]<<endl;
    }
    return 0;
    
}