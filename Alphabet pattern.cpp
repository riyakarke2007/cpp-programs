// Printing Alphabet Pattern
 #include<iostream>
 using namespace std;
 int main()
 {
 int n=4;
 for(int i=1;i<=n;i++){
     char ch='A';
     for(int j=1;j<=n;j++){// line start
     cout<<ch<<" ";
     ch=ch+1;//A+1=> 65+1=> 66 type conversion 66=B
          }
          cout<<endl;
 }
 return 0;
 }