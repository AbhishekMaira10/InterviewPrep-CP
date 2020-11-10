     int i,j,m,n,s=0;
        
        for(i=0;i<b.size();i++)
        { for(j=0;j<b[0].size();j++)
         {
            if(b[i][j]=='R')
            { m=i;n=j; break;}
         }
        }
        
     for(i=m,j=n; j<b[0].size(); j++)
     {
         if(b[i][j]=='B')
         {break;}
         else if(b[i][j]=='p')
         {s++; break;}
     }
        
     for(i=m,j=n; j>=0; j--)
     {
         if(b[i][j]=='B')
         {break;}
         else if(b[i][j]=='p')
         {s++; break;}
     }   
        
        
      for(i=m,j=n; i<b.size(); i++)
     {
         if(b[i][j]=='B')
         {break;}
         else if(b[i][j]=='p')
         {s++; break;}
     }    
        
         for(i=m,j=n; i>=0; i--)
     {
         if(b[i][j]=='B')
         {break;}
         else if(b[i][j]=='p')
         {s++; break;}
     }    
        
        return s;
    }
};

