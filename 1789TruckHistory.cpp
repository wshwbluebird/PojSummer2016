//
// Created by wshwbluebird on 16/7/25.
//还有问题  跑 oj 已经没有问题了

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

char car[2001][8];
int n;
int dist[2005][2005];
int vis[2005];

int weight(int a, int b){
   int ans = 0;
   for (int i = 0; i < 7 ; ++i) {
       if(car[a][i]!=car[b][i]) ans++;
   }
   return ans;
}

void read_table(){

   for (int i = 0; i < n; ++i) {
       cin>>car[i];
   }


   for (int i = 0; i < n ; ++i) {
       for (int j = i; j < n ; ++j) {
           dist[i][j] = dist[j][i] = weight(i,j);
       }
   }

}

void merge(int b){ //把vertex b 合并进来
   for (int i = 1; i < n ; ++i) {
       dist[0][i] = min(dist[0][i],dist[b][i]);
   }


}


int Prim(){
   memset(vis,0, sizeof(vis));
   int ans = 0;
   for (int i = 1; i < n; ++i) {
       int x, m = 1000000;
       for (int j = 1; j < n; ++j) {
           if(!vis[j]&&dist[0][j]<m) m = dist[0][x=j];
       }
       //cout<<"dsfs"<<endl;
       ans+=m;
       vis[x] = 1;
       merge(x);
   }



   return ans;
}


int main(){
	   //cout<<"input n :"<<endl;
       while(cin>>n) {
           if(n == 0 )  break;
           read_table();
           cout << "The highest possible quality is 1/" << Prim() << "." << endl;
       }

   return 0;
}

