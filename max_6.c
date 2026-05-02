#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter six numbers: ");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
   if(a>b)  
   {
         if(a>c)
         {
              if(a>d)
              {
                   if(a>e)
                   {
                        if(a>f)
                        {
                             printf("%d is the largest number",a);
                        }
                        else
                        {
                             printf("%d is the largest number",f);
                        }
                   }
                   else
                   {
                        if(e>f)
                        {
                             printf("%d is the largest number",e);
                        }
                        else
                        {
                             printf("%d is the largest number",f);
                        }
                   }
              }
              else
              {
                   if(d>e)
                   {
                        if(d>f)
                        {
                             printf("%d is the largest number",d);
                        }
                        else
                        {
                             printf("%d is the largest number",f);
                        }
                   }
                   else
                   {
                        if(e>f)
                        {
                             printf("%d is the largest number",e);
                        }
                        else
                        {
                             printf("%d is the largest number",f);
                        }
                   }
              }
         }
         else
         {
              if(c>d)
              {
                   if(c>e)
                   {
                        if(c>f)
                        {
                             printf("%d is the largest number",c);
                        }
                        else
                        {
                             printf("%d is the largest number",f);
                        }
                   }
                   else
                   {
                        if(e>f)
                        {
                             printf("%d is the largest number",e);
                        }
                        else
                        {
                             printf("%d is the largest number",f);
                        }
                   }
              }
              else
              {
                   if(d>e)
                   {
                        if(d>f)
                        {
                             printf("%d is the largest number",d);
                        }
                        else
                        {
                             printf("%d is the largest number",f);
                        }
                   }
                   else
                   {
                         if(e>f)
                         {
                              printf("%d is the largest number",e);
                         }
                         else
                         {
                              printf("%d is the largest number",f);
                         } 
                    } 
              } 
         } 
    } 
    else 
    { 
         if(b>c) 
         { 
              if(b>d) 
              { 
                   if(b>e) 
                   { 
                       if(b>f) 
                       { 
                            printf("%d is the largest number",b); 
                       } 
                       else 
                       { 
                            printf("%d is the largest number",f); 
                       }    
                   }
                    else 
                    { 
                            if(e>f) 
                            { 
                              printf("%d is the largest number",e); 
                            } 
                            else 
                            { 
                              printf("%d is the largest number",f); 
                            }    
                    }
              }
                else 
                { 
                     if(d>e) 
                     { 
                            if(d>f) 
                            { 
                                 printf("%d is the largest number",d); 
                            } 
                            else 
                            { 
                                 printf("%d is the largest number",f); 
                            }    
                     }
                        else 
                        { 
                                if(e>f) 
                                { 
                                printf("%d is the largest number",e); 
                                } 
                                else 
                                { 
                                printf("%d is the largest number",f); 
                                }    
                        }
                }
         }
            else 
            { 
                if(c>d) 
                { 
                    if(c>e) 
                    { 
                            if(c>f) 
                            { 
                                printf("%d is the largest number",c); 
                            } 
                            else 
                            { 
                                printf("%d is the largest number",f); 
                            }    
                    }
                        else 
                        { 
                                if(e>f) 
                                { 
                                printf("%d is the largest number",e); 
                                } 
                                else 
                                { 
                                printf("%d is the largest number",f); 
                                }    
                        }
                }
                    else 
                    { 
                        if(d>e) 
                        { 
                                if(d>f) 
                                { 
                                    printf("%d is the largest number",d); 
                                } 
                                else 
                                { 
                                    printf("%d is the largest number",f); 
                                }    
                        }
                            else 
                            { 
                                    if(e>f) 
                                    { 
                                    printf("%d is the largest number",e); 
                                    } 
                                    else 
                                    { 
                                    printf("%d is the largest number",f); 
                                    }    
                            }
                    }
            }
    }
    return 0;
}