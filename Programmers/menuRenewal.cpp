#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(vector <int> a, vector <int> b)
{
    return a[0]>b[0];
}
vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;
    int n=orders.size();
    string s="";
    int food[n][26];
    int total[26];
    
    for(int i=0; i<26; i++)
    {
        total[i]=0;
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<26; j++)
        {
            food[i][j]=0;
        }
    }
    
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<orders[i].length(); j++)
        {
            food[i][orders[i][j]-'A']++;
            total[orders[i][j]-'A']++;
        }
    }
    
    for(int i=0; i<26; i++)
    {
        if(total[i]>1)
        {
            s+=(char)(i+'A');
        }
    }
    
    
    for(int go=0; go<course.size(); go++)
    {
        int cnt=course[go];
        vector <int> mycom;
        
        if(cnt>s.length()) continue;
        
        for(int i=0; i<s.length(); i++)
        {
            if(i<cnt)
            {
                mycom.push_back(1);
            }
            else
            {
                mycom.push_back(0);
            }
         }   
         
         sort(mycom.begin(), mycom.end());
         
         vector < vector <int> > mycnt;
         vector < vector <int> > mys;
         do
         {
                vector<int> t;
                for(int i=0; i<mycom.size(); i++)
                {
                    
                    if(mycom[i] == 1)
                    {
                        t.push_back(i);
                    }
                }
                
                mys.push_back(t);
                 
          }while(next_permutation(mycom.begin(), mycom.end()));
            
          
          for(int i=0; i<mys.size(); i++)
          {
              int m=0;
              vector <int> k;
              for(int j=0; j<n; j++)
              {
                  int sw=0;
                  for(int k=0; k<cnt; k++)
                  {
                 
                      if(food[j][s[mys[i][k]]-'A']==0)
                      {
                          sw=1;
                          break;
                      }
                  }
                  if(sw==0) m++;
              }
              
              if(m>1)
              {
                  k.push_back(m);
                  k.push_back(i);
                  mycnt.push_back(k);
              }
              
          }
         
        sort(mycnt.begin(),mycnt.end(),cmp);
        
      
        if(mycnt.size()==0||mycnt[0][0]<2) continue;
        
        int maxmm=mycnt[0][0];
    
        for(int i=0; i<mycnt.size(); i++)
        {
            string str="";
            if(maxmm==mycnt[i][0])
            {
                for(int j=0; j<cnt; j++)
                {
                   str+=s[mys[mycnt[i][1]][j]]; 
                }
                answer.push_back(str);
            }
            else
            {
                break;
            }
        }
        
    }
    
    sort(answer.begin(),answer.end());
    
    return answer;
}