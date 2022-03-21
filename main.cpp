
#include <bits/stdc++.h>
using namespace std;
int main() {
  int sum=0;
  string s;
  cin>>s;
  char alf[26];
  int ptr=0;
  for(int i=0;i<26;i++){
    alf[i]='a'+i;
  }
  for(int i=0;i<s.length();i++){
    int l,r ;
    r=abs((s[i]-'a')-ptr);
    l=abs(25-r+1);
    if(r<l){
      sum+=r;
    }else{
      sum+=l;
    }
    ptr=s[i]-'a';
  }
  cout<<sum;
}
