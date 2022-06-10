#include<iostream>
#include<utility>
#include<map>
using namespace std;

map <int,pair<int,int>> m{{0,make_pair(0,0)},{1,make_pair(0,0)},{2,make_pair(0,1)},{3,make_pair(0,2)},{4,make_pair(1,0)},{5,make_pair(1,1)},{6,make_pair(1,2)},{7,make_pair(2,0)},{8,make_pair(2,1)},{9,make_pair(2,2)}};



void enterplayer1(char a[][3]){
    int pos;
    cout<<"Enter the position you want to enter x"<<endl;
    cin>>pos;
    int x=m.at(pos).first;
    int y=m.at(pos).second;
    a[x][y]='x';
}

void enterplayer2(char a[][3]){
    int pos;
    cout<<"Enter the position you want to enter o"<<endl;
    cin>>pos;
    int x=m.at(pos).first;
    int y=m.at(pos).second;
    a[x][y]='o';
}

void printboard(char a[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}


bool conditions(char a[][3]){
    //for rows
    bool won=false;
    for(int r=0;r<3;r++){
        int temp=a[r][0];
        for(int c=0;c<3;c++){
            if(a[r][c]!=temp){
                won=false;
                break;
            }
            //for end case
            won=true;
        }
        if(won==true)
            return true;
    }

    //for columns
    for(int c=0;c<3;c++){
        int temp=a[0][c];
        for(int r=0;r<3;r++){
            if(a[r][c]!=temp){
                won=false;
                break;
            }
                

            //for end case
            won=true;
        }
        if(won==true)
            return true;
    }

    //for diagnol
    if( (a[0][0]==a[1][1] && a[1][1]==a[2][2] ) || ((a[0][2]==a[1][1]) && a[1][1]==a[2][0])){
        return true;
    }

    return false;
}




int main(){
    char a[3][3] ={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    bool wonplayer1=false;
    bool wonplayer2=false;
    

    for(int i=0;i<5;i++){
        printboard(a);
        enterplayer1(a);
        wonplayer1=conditions(a);
        if(wonplayer1){
            printboard(a);
            cout<<"Player 1 won"<<endl;
            return 0;
        }
        if(i==4){
            printboard(a);
            break;
        }
            
        printboard(a);
        enterplayer2(a);
        wonplayer2=conditions(a);
        if(wonplayer2){
            printboard(a);
            cout<<"Player 2 won"<<endl;
            return 0;
        }
    }

    cout<<"Draw"<<endl;
       
}