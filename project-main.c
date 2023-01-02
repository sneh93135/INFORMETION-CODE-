

  /* this program for collge informetion with exam */
  
#include <stdio.h>
#include<string.h>

int main()
{
   float per=0;
   float xx=0,mt=0,tca=0,jq=0;                                                   //k my ++ value
   int a,z,total=0,oj=0,ql=0,ba=0,lw=0;                                                 //j is ma for loop use
   int  s,x,y,j,k=0,m=0,jb=0,up=0,ot=0;
   int at,to=0,pu=0,god=0,sz=0,mo=0;
   int tp=0,lo,g,gi,ji,ij,ig,oq;
   int ja=0,jj,kl,pb=0,lk,dog=0,cat=0;
   char sa[50],go [50];
   char oo[50],og [50];
   char jt[50],bk [50];
   char tj[50],kb [50];
   char ph[50],sn [50];
   char hp[50],eh [50];
   char xl,id,ii,aj,zs;
   char px,op,po,qa,aq,od,ml,lm,cr;
   char sk,mn,cn,ms,ss,kp,jd,gg,kk,dj; 
   char az,by,cx,dw,ev,hi,mi,ll,xp,dd;    
   char vj,jv,li,il,yu,uy,ut,tu,ya,ay;
   char pt,dl,kd,dk,ti,ks,jl,ct,tc,zx,xz;
   char wp,pw,ts,st,kt,tk,xa,ax,za,lp;
   
 // sk is  one Question veribal
 //  float per=0;
    printf("shankarchand patel univrcity \n");
    printf("all about infometion to main dipartment  <1>\n");
    
    
    
    scanf("%d",&a);
    
    switch(a)
    {
    
    case 1:
    
    printf("thare are theer types of collge\n");
    printf("collge of Computer Science infometion for press to <10> \n");
    printf("collge of Business infometion for press to <20> \n");
    printf("collge of Engineering nfometion for press to <30> \n");
    printf("--------------------------------------------------------------\n");
    printf("select collge  = ");
   
    
    scanf("%d",&s); 
    
    switch(s)
    {
        
        case 10:
        printf("\ncollge of Computer Science\n");
        printf("Department of BCA infometion \n");
        printf("Department of  B tech\n");
      
                                                                                  // bca for  select 50      
        printf("Department of BCA infometion select <50> \n");     
        printf("Department of B tech infometion select <60> \n");
        printf("--------------------------------------------------------------\n");
        printf("select option tow  = ");                                                                               // veri z   // b tech select 60
        
        scanf("%d",&z);
        
        switch(z)
        {
            case 50:
            
            printf("\nBCA fild is very technical fild \n");                                       // case  2 b tech
            printf("BCA three year course \n");
            printf("BCA have hige leval plesment\n");
            printf("BCA fees around 30000\n");
            printf("enter your name ");
            printf("\n BCA course admission befour two requirement \n (1) your parsonteg 75 upp compulsory\n");
            printf("after than \n (2) you can giv the finl exam \n");
            printf("your finl exam question pepar 10 marks you can calect 6 marks than after your selected for BCA course\n");
            printf("\nenter your first name  ");
            scanf("%s",sa);
            printf("enter the your last name ");
            scanf("%s",oo);
            printf("\n start now percentage cheak\n");
            
            for(int d=1;d<=5;d++)
            {
                printf("\nenter the %d subject marks\n",d);
                
                scanf("%d",&j);
                
                printf(" \n  = [%d] = \n",j);
                
                total=total+j;
                per=total/5;
            }
                printf(" student total marks = (%d) \n",total);
                printf(" \nstudent percentage = (%f)\n",per);
                
               if(per<=75)
               {
                   printf("sorry your percentage not 75 upp");
                    break;
               }
               
               strcat(sa,oo);
               printf(" \ncongratulaion %s your percentage 75 upp\n",sa);
               bp:
               if(kl==2)
               {
                   printf("\nsorry you can not giv the exam (3) time ");
                   break;
               }
               printf(" \n start now finl exam \n");
            
               printf(" \n(1) Question --=> what was time it devlop c language ?\n");
               printf(" \n (A) 1945, \n (B) 1986, \n (C) 1972, \n (D) 1912,\n");
               printf("ANS =  ");
               
               scanf("%c",&sk);
               scanf("%c",&sk);
               
               if(sk=='c')
               printf(" \n your answer is right %d \n",k=k+1);
               else
               printf(" \n sorry your answer is worng 0 \n right answer (C) 1972, \n");
               
               printf("------------------------------------------------------\n");
               
               printf("\n (2) Question --=> how many keyword in java language ?\n");
               printf("\n (A) 82, \n (B) 43, \n (C) 50, \n (d) 67, \n");
               printf("ANS = ");
               
               scanf("%c",&mn);
               scanf("%c",&mn);
               
               if(mn=='d')
               printf("\n your answer is right %d \n",k=k+1);
               else
               printf("\n sorry your answer is worng 0 \n right answer (D) 67, \n");
               
               printf("-----------------------------------------------------\n");
               
               printf("\n(3) Question --=> which language can be undarstend Computer ?\n ");
               printf("\n (A) low leval language, \n (b) machine leval language, \n (C) assignly language, \n (D) hige leval language,\n");
               printf("ANS =  ");
               
               scanf("%c",&cn);
               scanf("%c",&cn);
               
               if(cn=='b')
               printf("\n your answer is right %d \n",k=k+1);
               else
                   printf("\n sorry your answer is worng 0 \n right answer (b)  machine leval language, \n");
               
               printf("------------------------------------------------------\n");
               
               printf("\n(4) Question --=> which opreting system is best for user ?\n");
               printf("\n(A) windows opreting system, \n(B) MS DOS opreting system, \n");
               printf("(c) linux opreting system, \n(d) unix opreting system,\n");
               printf("ANS = ");
               
               scanf("%c",&ms);
               scanf("%c",&ms);
              
               if(ms=='a')
               printf("\n your answer is right %d \n",k=k+1);
               else
               printf("\nsorry your answer is worng 0 \n right answer (A) windows opreting system ,\n");
               
               printf("-------------------------------------------------------\n");
               
               printf("\n (5) Question --=> what IT full from ?\n");
               printf("\n (A) indian technology, \n (B) internatinol technical, \n (C) information technology, \n (D) indian technology,\n");
               printf("ANS = ");
               
               scanf("%c",&ss);
               scanf("%c",&ss);
               
               if(ss=='c')
               printf("\n your answer is right %d \n",k=k+1);
               else
               printf("\n sorry your answer is worng 0 \n right answer (C) information technology, \n");
               
               printf("-------------------------------------------------------\n");
               
               printf("\n (6) Question --=> which language use for web devlopment ?\n");
               printf("\n (A) CSS, \n (B) HTML, \n (C) javaScript, \n (D) all theer language,\n");
               printf("ANS = ");
               
               scanf("%c",&kp);
               scanf("%c",&kp);
               
               if(kp=='d')
               printf("\n your answer is right %d \n",k=k+1);
               else
               printf("\n sorry your answer is worng 0 \n right answer (D) all theer language,\n");
               
               printf("-------------------------------------------------------\n");
               
               printf("\n Question (7) --=> which country devlop by ASCII COD ? \n");
               printf("\n (A) canada, \n (B) india, \n (C) america, \n (D) japan,\n");
               printf("ANS = ");
               
               scanf("%c",&jd);
               scanf("%c",&jd);
               
               if(jd=='c')
               printf("\n your answer is right %d \n",k=k+1);
               else
               printf("\n sorry answer is worng 0 \n right answer (C) america,\n");
                
               printf("-------------------------------------------------------\n");
               
               
               printf("\n Question (8) --=> which of the following right binary number ?\n");
               printf("\n (A) 0 1 0 1, \n (B) 1 0 1 2, \n (C) 0 1 9 1, \n (D) 1 2 1 0,\n");
               printf("ANS =");
               
               scanf("%c",&gg);
               scanf("%c",&gg);
               
               if(gg=='a')
               printf("\n your answer is right %d \n",k=k+1);
               else
               printf("\n your answer is worng 0 \n right answer (A) 0 1 0 1,\n");
               
               printf("-------------------------------------------------------");
               
               printf("\n Question (9) --=> what time devlop microsoft windows ?\n");
               printf("\n (A) 1945, \n (B) 1982, \n (c) 1987, \n (D) 1964,\n");
               printf("ANS = ");
               
               scanf("%c",&kk);
               scanf("%c",&kk);
               
               if(kk=='b')
               printf("\n your answer is right %d \n",k=k+1);
               else
               printf("\n your answer is worng 0 \n right answer (B) 1982,\n");
               
               printf("-------------------------------------------------------");
               
               printf("\n Question (10) --=> what is BIOS full from ?\n");
               printf("\n   (A) basic infometion organise softewer,\n");
               printf("   (B) bachelor of input opreting system,\n");
               printf("   (C) basic input output softewer,\n");
               printf("   (D) basic input output system,\n");
               printf("ANS = ");
               
               scanf("%c",&dj);
               scanf("%c",&dj);
               
               if(dj=='d')
               printf("your answer is right %d \n ",k=k+1);
               else
               printf("your answer is worng 0 \n right answer (D)  basic input output system,\n");
               
               
               printf("----------------------------------------------------------");
               
               
               
               printf("\n you have collect point  = [%d] \n",k);
               
               if(k>=6)
               printf("\ncongratulaion you are selected for BCA college\n");
               else
               printf("sorry your fail \n ");
               printf("-----------------------------------------------------------\n");
               
                if(k>=6)
                {
                break;
                }
                
                if(k<4)
                {
                 printf("sorry your point not 4 upp");
                break;
                }
                k=k-k;
               printf("dont worry your collect point 4 upp\n");
               printf("you can giv the agen exm\n");
               kl=kl+1;
               
                printf("\nyou wont to agen exm \n");
               printf("press (A)\n");
               
               printf("\nyou not wont to agen exm \n");
               printf("press (B)\n");
               printf("--=> ");
               
               scanf("%c",&id);
               scanf("%c",&id);
             
               if(id=='a')
               {
                   goto bp;
               }
               else
               {
                   break;
               }
               
               
               break;
         
            
            case 60:
                    
            printf("\nb tech fild is hige IT softewer \n");
            printf("b tech four year course\n");
            printf("b tech have not plesment\n");
            printf("b tech fees around 40000\n");
            printf("\n b tech course admission befour two requirement \n (1) your parsonteg 55 upp compulsory\n");
            printf("after than \n (2) you can giv the finl exam \n");
            printf("your finl exam question pepar 10 marks you can calect 4 marks than after your selected for b tech course\n");
            printf("\nenter the first name ");
            scanf("%s",jt);
            printf("enter the last name ");
            scanf("%s",tj);
            printf("\n start now percentage cheak\n");
            
            
           for(int sd=1;sd<=5;sd++)
            {
                printf("\nenter the %d subject marks\n",sd);
                
                scanf("%d",&at);
                
                printf(" \n  = [%d] = \n",at);
                
                to=to+at;
                xx=to/5;
                
                
            }
                printf(" student total marks = (%d) \n",to);
                printf(" \nstudent percentage = (%f)\n",xx); 
            
               if(xx<=55)
               break;
               strcat(jt,tj);
               printf("\ncongratulaion %s your percentage 55 upp",jt);
               
               pb:
               if(lk==2)
               {
                   printf("sorry you can not give the (3) time exam");
                   break;
               }
               printf(" start now finl exam \n");
               
               printf("\n (1) Question --=> which language is best for App devlopment ?\n");
               printf("\n (A) javaScript, \n (B) PHP, \n (C) python, \n (D) C++,\n");
               printf("ANS = ");
               
               scanf("%c",&az);
               scanf("%c",&az);
               
               if(az=='c')
               printf("\nyour answer is right %d \n",m=m+1);
               else
               printf("\nsorry your answer is worng 0 \n right answer (C) python,\n");
               
               printf("-----------------------------------------------------------------\n");
               
               
               printf("\n (2) Question --=> which of the following for best language dtabase menagment system ?\n");
               printf("\n (A) ASP.NET, \n (B) SQL, \n (C) C#, \n (D)python,\n");
               printf("ANS =");
               
               scanf("%c",&by);
               scanf("%c",&by);
               
               
               if(by=='b')
               printf("\n your answer is right %d \n",m=m+1);
               else
               printf("\n sorry your answer is worng 0 \n right answer (B) SQL,\n");
               
               printf("--------------------------------------------------------\n");
               
               printf("\n (3) Question --=> RAM is also called as ?\n");
               printf("\n (A) Virtual memory, \n (B) Non volatile memory, \n (C) Cache memory, \n (D) Volatile memory,\n");
               printf("ANS =");
               
               scanf("%c",&cx);
               scanf("%c",&cx);
               
               if(cx=='b')
               printf("\n your answer is right %d \n ",m=m+1);
               else
               printf("\n sorry your answer is worng 0 \n right answer (D) Volatile memory,\n");
               
               printf("-------------------------------------------------------------\n");
               
               
               printf("\n (4) Question --=> Internal hard disk is ?\n");
               printf("\n (A) Fixed, \n (b) Removable, \n (c) Not fixed, \n (D) Removable but not fixed,\n");
               printf("ANS =");
               
               scanf("%c",&dw);
               scanf("%c",&dw);
               
               if(dw=='a')
               printf("\n your answer is right %d \n ",m=m+1);
               else
               printf("\n sorry your answer is worng 0 \n right answer (A) fixed\n");
               
               printf("-------------------------------------------------------------\n");
               
               printf("\n (5) Question --=> what is E-commerce ?\n ");
               printf("\n (A) entry infometion Commerce, \n (B) electronics Commerce, \n");
               printf(" (C) education Commerce, \n (D) endroid Commerce,\n");
               printf("ANS =");
               
               scanf("%c",&ev);
               scanf("%c",&ev);
               
               if(ev=='b')
               printf("your answer is right %d \n",m=m+1);
               else
               printf("sorry your answer is worng 0 \n right answer (B) electronics Commerce,\n");
               
               printf("--------------------------------------------------------------------\n");
               
               printf("\n (6) Question --=>  which of the following not valid for loop ?\n");
               printf("\n (A) array \n (B) for \n (C) while \n (D) do while \n");
               printf("ANS = ");
               
               scanf("%c",&hi);
               scanf("%c",&hi);
               
               if(hi=='a')
               printf("your answer is right %d \n",m=m+1);
               else
               printf("sorry your answer is worng 0 \n right answer (A) array,");
               
               printf("-----------------------------------------------------------\n");
               
               
               printf("\n (7) Question --=> The two kinds of main memory are ?\n");
               printf("\n (A) RAM and ROM, \n (B) CDs and DVD, \n (C) Primary and secondary,\n (D) Direct and sequentia,\n");
               printf("ANS = ");
               scanf("%c",&mi);
               scanf("%c",&mi);
               
               if(mi=='a')
               printf("\nyour answer is right %d \n",m=m+1);
               else
               printf("\nsorry your answer is worng 0 \n right answer (A) RAM and ROM,\n");
               
               printf("--------------------------------------------------------------------\n");
               
               
               printf("\n (8) Question --=> MS DOS is which types of opreting system ? ");
               printf("\n (A) malti user (OS), \n (B) malti user malti task (OS), \n (C) singal user singal task (OS),\n");
               printf("\n (D) singal user (OS) \n");
               printf("ANS ="); 
               scanf("%c",&dd);
               scanf("%c",&dd);
               
               if(dd=='c')
               printf("\n your answer is right %d \n",m=m+1);
               else
               printf("\n sorry your answer is worng 0 \n right answer (C) singal user singal task (OS),\n");
               
               printf("--------------------------------------------------------------------\n");
               
               printf("\n (9) Question --=> in which year was window 7 launched ? \n");
               printf("\n (A) 24 october 2000, \n (B) 12 january 2007, \n (C) 28 jun 2003, \n (D) 22 october 2009, \n");
               printf("ANS =");
               
               scanf("%c",&ll);
               scanf("%c",&ll);
               
               if(ll=='d')
               printf("\n your answer is right %d \n",m=m+1);
               else
               printf("\n sorry your answer is worng 0 \n right answer (D) 22 october 2009, \n");
               
               printf("--------------------------------------------------------------------\n");
               
               printf("\n (10) Question --=> what is maicrosoft word extension ?\n");
               printf("\n (A) DOCM, \n (B) XLSX, \n (C) PPTX, \n (D) ACCDB \n");
               printf("ANS= ");
               
               scanf("%c",&xp);
               scanf("%c",&xp);
               
               if(xp=='a')
               printf("your answer is right %d \n",m=m+1);
               else
               printf("sorry your answer is worng 0 \n right answer (A) DOCM,\n");
               
               printf("--------------------------------------------------------------------\n");
               
               printf("\nyou have calect marks %d \n",m);
               
               if(m>4)
               printf("construction you are selected\n");
               else
               printf("sorry you are not selected\n");
               
               
                if(m>=6)
                {
                break;
                }
                
                if(m<4)
                {
                 printf("sorry your point not 4 upp");
                break;
                }
                m=m-m;
               printf("\ndont worry your collect point 4 upp\n");
               printf("you can giv the agen exm\n");
               lk=lk+1;
               
                printf("\nyou wont to agen exm \n");
               printf("press (A)\n");
               
               printf("\nyou not wont to agen exm \n");
               printf("press (B)\n");
               printf("--=> ");
               
               scanf("%c",&ii);
               scanf("%c",&ii);
             
               if(ii=='a')
               {
                   goto pb;
               }
               else
               {
                   break;
               }
               
               
             break;
            
              default:
             printf("sorry your select key is worng\n");
             printf("--------------------------------------------------------------------");
    
            break;
        }
                                                                                  
        break;
        
        case 20:
       printf("collge of BBA infometion\n"); 
       printf("Department of Commerce\n");
      
       
       
       printf("Department of Commerce infometion select <100>\n");
       printf("Department of BBA infometion select select <200>\n");
       printf("select to tha Business option = ");
      
       
       
       
       scanf("%d",&x);
       
       switch(x)
    {
           case 100:
           printf("Commerce fild is Business fild\n");
           printf("this fild is all about acoount rileted\n");
           printf("Commerce is theer yera course\n");
           printf("this fild fees around 20000\n");
           printf("\n Commerce course admission befour two requirement \n (1) your parsonteg 65 upp compulsory\n");
           printf("after than \n (2) you can giv the finl exam \n");
           printf("your finl exam question pepar 10 marks you can calect 6 marks than after your selected for Commerce course\n");
           printf("\nenter the first name  ");
           scanf("%s",ph);
           printf("enter the last name ");
           scanf("%s",hp);
           printf("\n start now percentage cheak\n");
           
           for(int t=1;t<=5;t++)
           {
               printf("\nenter the student percentage\n");
               scanf("%d",&jj);
               
               printf("\n   = [%d] = \n",jj);
               
               ja=ja+jj;
               
               mt=ja/5;  
              
           }
           printf("\n your total marks = %d\n", ja);
           printf("\n your percentage = %f\n",mt);
           
           if(mt<=65)
           break;
           strcat(ph,hp);
           printf("\nconstruction %s your percentage 65 upp \n",ph);
           
           printf("\nstart now finl exam \n");
           
           lo:
           if(tp==2)
           {
               printf("sorry you can not give the (3) time exam");
               break;
           }
           printf("\n (1) question --=> who is big Business man in 2022 ?\n");
           printf("\n (A) Jeffrey Bezos, \n (B) Bill Gates, \n (C) Mary Barra, \n (D) Mark Zuckerberg, \n");
           printf("ANS = ");
           
           scanf("%c",&xl);
           scanf("%c",&xl);
           
           if(xl=='c')
           printf("your question is right   %d\n",jb=jb+1);
           else
           printf("sorry your question is worng \n right (C) Mary Barra,\n");
           
           printf("--------------------------------------------------------------------------------------");
           
           printf("\n (2) question --=> best resource for learning ?\n");
           printf("\n (A) Services only, \n (B) Goods or services, \n (C) Goods only, \n (D) Neither goods nor services,\n");
           printf("ANS = ");
           
           scanf("%c",&px);
           scanf("%c",&px);
           
           if(px=='b')
           printf("your question is right   %d\n",jb=jb+1);
           else
           printf("sorry your question is worng \n right (B)  Goods or services,\n");
           
           printf("-----------------------------------------------------------------------------------------");
           
           printf("\n (3) question --=> a Balance Sheet? also call?\n");
           printf("\n (A) financial position, \n (B) cheking the information, \n");
           printf(" (C) It is used to analyse a company, \n (D) A and B both right,\n");
           printf("ANS = ");
           
           scanf("%c",&op);
           scanf("%c",&op);
           
           if(op=='d')
           printf("your question is right   %d\n",jb=jb+1);
           else
           printf("sorry your question is worng \n right (D)  A and B both right,\n");
           
           printf("------------------------------------------------------------------------------------------");
           
           
           printf("\n (4) question --=> best Commerce collge in india?\n");
           printf("\n (A) hemchandra chariy univrcity, \n (B) shri ram collge, \n");
           printf(" (C) nirma collge, \n (D) parul collge,\n");
           printf("ANS = ");
           
           scanf("%c",&po);
           scanf("%c",&po);
           
           if(po=='b')
           printf("your question is right   %d\n",jb=jb+1);
           else
           printf("sorry your question is worng \n right (D) shri ram collge,\n");
           
           printf("---------------------------------------------------------------------------------------");
           
           
           
           printf("\n (5) question --=> Which among the following is not opened for private sector participation?\n");
           printf("\n (A) Education sector, \n (B) Power sector, \n");
           printf(" (C) Railways, \n (D) Education sector,\n");
           printf("ANS = ");
           
           scanf("%c",&qa);
           scanf("%c",&qa);
           
           if(qa=='c')
           printf("your question is right   %d\n",jb=jb+1);
           else
           printf("sorry your question is worng \n right (C) Railways,\n");
           
           printf("-------------------------------------------------------------------------------------------");
           
           
           printf("\n (6) question --=> By which act does the government check restrictive trade?\n");
           printf("\n (A) Industrial Policy Act 1991, \n (B) None of these, \n");
           printf(" (C) FEMA act, \n (D) MRTP Act,\n");
           printf("ANS = ");
           
           scanf("%c",&aq);
           scanf("%c",&aq);
           
           if(aq=='d')
           printf("your question is right   %d\n",jb=jb+1);
           else
           printf("sorry your question is worng \n right (d) MRTP Act,\n");
           
           printf("--------------------------------------------------------------------------------");
           
           
           printf("\n (7) question --=>  The first complete Indian Bank was established in which year?\n");
           printf("\n (A) 1794, \n (B) 1896, \n");
           printf(" (C) 1894, \n (D)  1943,\n");
           printf("ANS = ");
           
           scanf("%c",&od);
           scanf("%c",&od);
           
           if(od=='c')
           printf("your question is right   %d\n",jb=jb+1);
           else
           printf("sorry your question is worng \n right (C) 1894,\n");
           
           printf("-----------------------------------------------------------------------------------");
           
           
           printf("\n (8) question --=>  In Capital Market Line every investment is?\n");
           printf("\n (A) Infinitely divisible, \n (B) Finitely divisible, \n");
           printf(" (C) Both a & b, \n (D) None of the above,\n");
           printf("ANS = ");
           
           scanf("%c",&ml);
           scanf("%c",&ml);
           
           if(ml=='a')
           printf("your question is right   %d\n",jb=jb+1);
           else
           printf("sorry your question is worng \n right (A) Infinitely divisible ,\n");
           
           printf("------------------------------------------------------------------------------------");
           
           
           printf("\n (9) question --=>  An investor invests in assets known as a?\n");
           printf("\n (A) Securities, \n (B) Block of Assets, \n");
           printf(" (C) Portfolio, \n (D) None of the above,\n");
           printf("ANS = ");
           
           scanf("%c",&lm);
           scanf("%c",&lm);
           
           if(lm=='c')
           printf("your question is right   %d\n",jb=jb+1);
           else
           printf("sorry your question is worng \n right (C) Portfolio,\n");
           
           printf("------------------------------------------------------------------------------");
           
             printf("\n (10) question --=>  Investments would score high only if there is a protection to?\n");
           printf("\n (A)  Real estate, \n (B) Government bonds, \n");
           printf(" (C) Common stock, \n (D) Preferred stock,\n");
           printf("ANS = ");
           
           scanf("%c",&cr);
           scanf("%c",&cr);
           
           if(cr=='b')
           printf("your question is right   %d\n",jb=jb+1);
           else
           printf("sorry your question is worng \n right (B) Government bonds,\n");
           
           printf("--------------------------------------------------------------");
           printf("\nyou have calect marks %d \n",jb);
               
               if(jb>4)
               printf("construction you are selected\n");
               else
               printf("sorry you are not selected\n");
               
               
                if(jb>=6)
                {
                break;
                }
                
                if(jb<4)
                {
                 printf("sorry your point not 4 upp");
                break;
                }
                jb=jb-jb;
               printf("\ndont worry your collect point 4 upp\n");
               printf("you can giv the agen exm\n");
               tp=tp+1;
               
                printf("\nyou wont to agen exm \n");
               printf("press (A)\n");
               
               printf("\nyou not wont to agen exm \n");
               printf("press (B)\n");
               printf("--=> ");
               
               scanf("%c",&pt);
               scanf("%c",&pt);
             
               if(pt=='a')
               {
                   goto lo;
               }
               else
               {
                   break;
               }
               
           
           
           
           break;
           
           case 200:
           printf("BBA is hige leval Business course\n");
           printf("BBA is theer yera course \n");
           printf("BBA is have nice plesment\n");
           printf("this fild is fees around 35000\n");
           printf("\n BBA course admission befour two requirement \n (1) your parsonteg 70 upp compulsory\n");
           printf("after than \n (2) you can giv the finl exam \n");
           printf("your finl exam question pepar 10 marks you can calect 6 marks than after your selected for BBA course\n");
           printf("\nenter the first name  ");
           scanf("%s",go);
           printf("enter the last name ");
           scanf("%s",og);
           printf("\n start now percentage cheak\n");
           
           for(int g=1;g<=5;g++)
           {
               printf("\nenter the %d student marks ",g);
               scanf("%d",&gi);
               
               printf("\n   = [%d] = \n",gi);
               
               dog=dog+gi;
               cat=dog/5;
           }
           printf("\nstudent total marks = %d\n",dog);
           printf("student percentage = %d\n",cat);
           
           if(cat<=70)
           {
               printf("sorry your percentage not 70 upp");
               break;
           }
           else
           {
               strcat(go,og);
               printf("\nconstruction %s your percentage 70 upp",go);
           }
           
           printf("\nstart now final exam \n");
             ji:
           if(ij==2)
           {
               printf("sorry you can not give the (3) time exam");
               break;
           }
           
           printf("\nQuestion-=> (1) Who is the father of Economics?\n ");
           printf("\n (A) Alfred Marshall, \n (B) Adam Smith, \n (C) Lionel Robbins, \n (D) Samuelson,\n");
           printf("ANS-=>  ");
           
           scanf("%c",&dl);
           scanf("%c",&dl);
           
           if(dl=='b')
           {
               printf("your answer is right %d\n",pu=pu+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (B) Adam Smith,\n");
           }
           
           printf("\n---------------------------------------------------------------------\n");
           
           printf("\nQuestion-=> (2) Economics is a ________. ?\n ");
           printf("\n (A) Positive science, \n (B) Normative science, \n (C) None, \n (D) Both,\n");
           printf("ANS-=>  ");
           
           scanf("%c",&kd);
           scanf("%c",&kd);
           
           if(kd=='d')
           {
               printf("your answer is right %d\n",pu=pu+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (D) Both,\n");
           }
           
           printf("\n----------------------------------------------------------------\n");
           
           printf("\nquestion-=> (3) The relationship between price and demand is ____________.?\n");
           printf("\n (A) Direct, \n (B) Positive, \n (C) Negative, \n (D) None of these\n");
           printf("ANS-=>  ");
           
           scanf("%c",&dk);
           scanf("%c",&dk);
          
           if(dk=='c')
           {
               printf("your answer is right %d\n",pu=pu+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (C) Negative,\n");
           }
           
           printf("\n--------------------------------------------------------------\n");
           
           printf("\nquestion-=> (4) Consumer surplus is ____.?\n");
           printf("\n (A) Potential price - actual price, \n (C) MVn=TVn-TVn-1,\n");
           printf(" (C) Demand=supply, \n (D) None\n");
            printf("ANS-=>  ");
            
            
           scanf("%c",&ti);
           scanf("%c",&ti);
            
           if(ti=='a')
           {
               printf("your answer is right %d\n",pu=pu+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (A) Potential price - actual price,\n");
           }
           
           printf("\n---------------------------------------------------------------------\n");
           
           printf("\nquestion--=> (5) ._______ is absence of competition.?");
           printf("\n (A) Monopolistic, \n (B) Oligopoly, \n (C) Monopoly, \n (D) Duopoly \n");
           printf("ANS-=>  ");
           
           scanf("%c",&ks);
           scanf("%c",&ks);
           
           if(ks=='c')
           {
               printf("your answer is right %d\n",pu=pu+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (C) Monopoly,\n");
           }
           
           printf("\n--------------------------------------------------------------\n");
           
           printf("\n question-=> (6) The long run average cost curve is also called as_________.?\n");
           printf("\n (A) Budget line, \n (B) Planning curve, \n (C) Indifference curve, \n (D) None of the above,\n");
           printf("ANS-=>  ");
           
           scanf("%c",&jl);
           scanf("%c",&jl);
           
           if(jl=='b')
           {
               printf("your answer is right %d\n",pu=pu+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (B) Planning curve,\n");
           }
           
           printf("\n---------------------------------------------------------------------\n");
           
           printf("\n question-=> (7)  Relatively elastic demand  is ____.?\n");
           printf("\n (A) e p = 0, \n (B) e p > 1, \n (C) e p <1, \n (D)e p = 1,\n");
           printf("ANS-=>  ");
           
           scanf("%c",&ct);
           scanf("%c",&ct);
           
            if(ct=='c')
           {
               printf("your answer is right %d\n",pu=pu+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (C) e p <1,\n");
           }
           
           printf("\n---------------------------------------------------------------------\n");
           
           printf("\n question-=> (8) The average income of the people of a country in a particular year is _____.?\n");
           printf("\n (A) Net national product, \n (B) Per capita income, \n (C) Personal income, \n (D) National income,\n");
           printf("ANS-=>  ");
           
           scanf("%c",&tc);
           scanf("%c",&tc);
           
            if(tc=='d')
           {
               printf("your answer is right %d\n",pu=pu+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (D) National income,\n");
           }
           
           printf("\n------------------------------------------------------------------------\n");
           
           printf("\n question-=> (9) The long run average cost curve is also called as_________.?\n");
           printf("\n (A) Budget line, \n (B) Planning curve, \n (C) Indifference curve, \n (D) None of the above,\n");
           printf("ANS-=>  ");
           
           scanf("%c",&zx);
           scanf("%c",&zx);
           
           
            if(zx=='c')
           {
               printf("your answer is right %d\n",pu=pu+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (C) Indifference curve,\n");
           }
           
           printf("\n----------------------------------------------------------------\n");
           
           printf("\n question-=> (10) The demand for necessities is usually ?\n");
           printf("\n (A) Highly elastic, \n (B) Highly inelastic, \n (C) Unit elasticity, \n (D) Relatively inelastic\n");
           printf("ANS-=>  ");
           
           scanf("%c",&xz);
           scanf("%c",&xz);
           
            if(xz=='b')
           {
               printf("your answer is right %d\n",pu=pu+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (B) Highly inelastic,\n");
           }
           
           printf("\n--------------------------------------------------------------\n");
           
            printf("\nyou have calect marks %d \n",pu);
               
               if(pu>4)
               printf("construction you are selected\n");
               else
               printf("sorry you are not selected\n");
               
               
                if(pu>=6)
                {
                break;
                }
                
                if(pu<4)
                {
                 printf("sorry your point not 4 upp");
                break;
                }
                pu=pu-pu;
               printf("\ndont worry your collect point 4 upp\n");
               printf("you can giv the agen exm\n");
               ij=ij+1;
               
                printf("\nyou wont to agen exm \n");
               printf("press (A)\n");
               
               printf("\nyou not wont to agen exm \n");
               printf("press (B)\n");
               printf("--=> ");
               
               scanf("%c",&aj);
               scanf("%c",&aj);
             
               if(aj=='a')
               {
                   goto ji;
               }
               else
               {
                   break;
               }
           break;
           
           default:
           printf("sorry you are select key is worng\n");
           printf("--------------------------------------------------------------\n");
           break; 
        
    }
                            
      break;
            
            // start now the Engineering Department                                                                          // BBA select 200   //   Commerce select 100
       
        case 30:                                                                    // veribal name x
        printf("collge of Engineering informetion \n");
        printf("the Engineering fild is very expensive fild \n");
        printf("Department of Mechanical Engineering\n");
        printf("Department of civil Engineering\n");
         
         
        printf("\nDepartment of Mechanical Engineering informetion for select <500>\n");             // eng for 500 ; civil for 600
        printf("Department of civil Engineering informetion for select <600>\n");    
        printf("\nselect diploma for option = ");                                                                                        // veribal y
        
        
        scanf("%d",&y);
        
        switch(y)
        {
            case 500:
            printf("Mechanical Engineering is diploma leval education \n");
            printf("this fild is all about mashin related\n");
            printf("this fild three year course \n");
            printf("this course fess around 30000\n");
            printf("\n Mechanical course admission befour two requirement \n (1) your parsonteg 50 upp compulsory\n");
           printf("after than \n (2) you can giv the finl exam \n");
           printf("your finl exam question pepar 10 marks you can calect 5 marks than after your selected for Mechanical course\n");
           printf("\nenter the first name  ");
           scanf("%s",bk);
           printf("enter the last name ");
           scanf("%s",kb);
           printf("\n start now percentage cheak\n");
           
           for(int w=1;w<=5;w++)
           {
               printf("\nenter the %d student marks ",w);
               scanf("%d",&ig);
               
               printf("\n   = [%d] = \n",ig);
               
               god=god+ig;
               tca=god/5;
           }
           printf("\nstudent total marks = %d\n",god);
           printf("student percentage = %f\n",tca);
           
             if(tca<=50)
           {
               printf("sorry your percentage not 50 upp");
               break;
           }
           else
           {
               strcat(bk,kb);
               printf("\nconstruction %s your percentage 50 upp",bk);
           }
           
           
           printf("\nstart now final exam \n");
           
            oq:
           if(sz==2)
           {
               printf("sorry you can not give the (3) time exam");
               break;
           }
           
           printf("\n question-=> (1) What we call the resistance of a material against any external force ?\n");
           printf("\n (A) Malleability \n (B) Stiffness \n (C) Hardness \n (D) Strength \n");
           printf("ANS -=>");
           
           scanf("%c",&wp);
           scanf("%c",&wp);
           
           if(wp=='d')
           {
               printf("your answer is right %d\n",oj=oj+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (D) Strength\n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
           
           printf("\n question-=> (2) Which hardness test uses the steel ball as indenter ?\n");
           printf("\n (A) Rockwell C hardness test \n (B) Brinell Hardness test \n (C) Rockwell B hardness test \n ");
           printf("(D) Vickers hardness test \n");
           printf("ANS -=>");
           
           scanf("%c",&pw);
           scanf("%c",&pw);
           
           if(pw=='b')
           {
               printf("your answer is right %d\n",oj=oj+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (B) Brinell Hardness test \n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
           
           printf("\n question-=> (3) Which of the following has less crystallinity ?\n");
           printf("\n (A) Nickel \n (B) Iron \n (C) Low-density polythene \n ");
           printf("(D) High-density polythene \n");
           printf("ANS -=>");
           
           scanf("%c",&ts);
           scanf("%c",&ts);
           
           if(ts=='c')
           {
               printf("your answer is right %d\n",oj=oj+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (C) Low-density polythene \n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
           
           printf("\n question-=> (4) Which one of the following is least symmetrical ?\n");
           printf("\n (A) Simple Cubic \n (B) Triclinic \n (C) Monoclinic \n ");
           printf("(D) etragonal \n");
           printf("ANS -=>");
           
           scanf("%c",&st);
           scanf("%c",&st);
           
           if(st=='c')
           {
               printf("your answer is right %d\n",oj=oj+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (C) Monoclinic \n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
           
           printf("\n question-=> (5) Etching of specimen is done to achieve _______ ?\n");
           printf("\n (A) Invisible grain boundary \n (B) Visible grain boundary \n (C) Hardness \n ");
           printf("(D) Toughness \n");
           printf("ANS -=>");
           
           scanf("%c",&kt);
           scanf("%c",&kt);
           
           if(kt=='b')
           {
               printf("your answer is right %d\n",oj=oj+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (b) Visible grain boundary \n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
           
           printf("\n question-=> (6) Which of the following property is the fine-grained structure? \n");
           printf("\n (A) Corrosion resistance \n (B) Creep resistance \n (C) Hardness \n ");
           printf("(D) Ductility \n");
           printf("ANS -=>");
           
           scanf("%c",&tk);
           scanf("%c",&tk);
           
           if(tk=='d')
           {
               printf("your answer is right %d\n",oj=oj+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (d) Ductility \n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
           
             
           printf("\n question-=> (7) Which of the following property is the fine-grained structure ? \n");
           printf("\n (A) Corrosion resistance \n (B) Creep resistance \n (C) Hardness \n ");
           printf("(D) Ductility \n");
           printf("ANS -=>");
           
           scanf("%c",&tk);
           scanf("%c",&tk);
           
           if(tk=='d')
           {
               printf("your answer is right %d\n",oj=oj+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (d) Ductility \n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
           
           printf("\n question-=> (8) Which penetrating liquid is used for the liquid penetration test ? \n");
           printf("\n (A) Fluorine based solvent \n (B) Petroleum-based carrier fluidn \n (C) Chlorine-based solvent \n ");
           printf("(D) Water \n");
           printf("ANS -=>");
           
           scanf("%c",&xa);
           scanf("%c",&xa);
           
           if(xa=='b')
           {
               printf("your answer is right %d\n",oj=oj+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (B) Petroleum-based carrier fluidn \n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
           
           printf("\n question-=> (9)  What is the Iron-Carbon phase diagram ? \n");
           printf("\n (A) Unary phase diagram \n (B) Binary phase diagram \n (C) Tertiary phase diagram \n ");
           printf("(D) Ternary phase diagram \n");
           printf("ANS -=>");
           
           scanf("%c",&ax);
           scanf("%c",&ax);
           
           if(ax=='b')
           {
               printf("your answer is right %d\n",oj=oj+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (B) Binary phase diagram \n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
           
            printf("\n question-=> (10) The line joining a solid phase with liquid and solid phase mixture is known as ________ ? \n");
           printf("\n (A) Solidus \n (B) Liquidus \n (C) Solvus \n ");
           printf("(D) Tie Line \n");
           printf("ANS -=>");
           
           scanf("%c",&za);
           scanf("%c",&za);
           
           if(za=='a')
           {
               printf("your answer is right %d\n",oj=oj+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (a)  Solidus \n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
             printf("\nyou have calect marks %d \n",oj);
               
               if(oj>4)
               printf("construction you are selected\n");
               else
               printf("sorry you are not selected\n");
               
               
                if(oj>=6)
                {
                break;
                }
                
                if(oj<4)
                {
                 printf("sorry your point not 4 upp");
                break;
                }
                oj=oj-oj;
               printf("\ndont worry your collect point 4 upp\n");
               printf("you can giv the agen exm\n");
               sz=sz+1;
               
                printf("\nyou wont to agen exm \n");
               printf("press (A)\n");
               
               printf("\nyou not wont to agen exm \n");
               printf("press (B)\n");
               printf("--=> ");
               
               scanf("%c",&zs);
               scanf("%c",&zs);
             
               if(zs=='a')
               {
                   goto oq;
               }
               else
               {
                   break;
               }
           
           
           
            
            break;
            
            case 600:
            printf("civil Engineering is best fild\n");
            printf("civil is construction fild\n");
            printf("this course diploma leval course\n");
            printf("this course fess around 45000\n");
            printf("\n civil course admission befour two requirement \n (1) your parsonteg 45 upp compulsory\n");
           printf("after than \n (2) you can giv the finl exam \n");
           printf("your finl exam question pepar 10 marks you can calect 5 marks than after your selected for civil course\n");
           printf("\nenter the first name  ");
           scanf("%s",sn);
           printf("enter the last name ");
           scanf("%s",eh);
           printf("\n start now percentage cheak\n");
           
           for(int q=1;q<=5;q++)
           {
               printf("\nenter the %d student marks ",q);
               scanf("%d",&ql);
               
               printf("\n   = [%d] = \n",ql);
               
               ba=ba+ql;
               jq=ba/5;
           }
           printf("\nstudent total marks = %d\n",ba);
           printf("student percentage = %f\n",jq);
            
             if(jq<=45)
           {
               printf("sorry your percentage not 45 upp");
               break;
           }
           else
           {
               strcat(sn,eh);
               printf("\nconstruction %s your percentage 70 upp",sn);
           }
           
           
           printf("\nstart now final exam \n");
            
            
             ot:
           if(lw==2)
           {
               printf("sorry you can not give the (3) time exam");
               break;
           }
           
             
           printf("\n question-=> (1) A good building stone should not absorb water more than_____________? \n");
           printf("\n (A) 5 \n (B) 10 \n (C) 15 \n ");
           printf("(D) 20 \n");
           printf("ANS -=>");
           
           scanf("%c",&vj);
           scanf("%c",&vj);
           
           if(vj=='a')
           {
               printf("your answer is right %d\n",mo=mo+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (A) 5  \n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
            
            
           printf("\n question-=> (2)  Which of the following is a mineral ? \n");
           printf("\n (A) basalt \n (B) granite \n (C) quartz \n ");
           printf("(D) syenite \n");
           printf("ANS -=>");
           
           scanf("%c",&jv);
           scanf("%c",&jv);
           
           if(jv=='c')
           {
               printf("your answer is right %d\n",mo=mo+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (C) quartz \n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
           
           printf("\n question-=> (3)  Which of the following is a rock ?\n");
           printf("\n (A) quartz \n (B) mica \n (C)  gypsum \n ");
           printf("(D) none of the above \n");
           printf("ANS -=>");
           
           scanf("%c",&li);
           scanf("%c",&li);
           
           if(li=='d')
           {
               printf("your answer is right %d\n",mo=mo+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (D) none of the above \n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
            
           printf("\n question-=> (4)  A heavy stone is suitable for________________?\n");
           printf("\n (A) arches \n (B) rubble masonry \n (C) roads \n ");
           printf("(D) retaining walls \n");
           printf("ANS -=>");
           
           scanf("%c",&il);
           scanf("%c",&il);
           
           if(il=='d')
           {
               printf("your answer is right %d\n",mo=mo+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (D) retaining walls \n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
            
           printf("\n question-=> (5)   Which of the following is indicated by a warning sign?\n");
           printf("\n (A) level crossing \n (B)  no parking\n (C) end of speed limit \n ");
           printf("(D) overtaking prohibited \n");
           printf("ANS -=>");
           
           scanf("%c",&yu);
           scanf("%c",&yu);
           
           if(yu=='a')
           {
               printf("your answer is right %d\n",mo=mo+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (A) overtaking prohibited \n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
           
           printf("\n question-=> (6) The most efficient traffic signal system is________________?\n");
           printf("\n (A) simultaneous system \n (B) alternate system \n (C) flexible progressive system \n ");
           printf("(D) simple progressive system \n");
           printf("ANS -=>");
           
           scanf("%c",&uy);
           scanf("%c",&uy);
           
           if(uy=='c')
           {
               printf("your answer is right %d\n",mo=mo+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (C) simple progressive system \n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
            
           printf("\n question-=> (7) The age of a tree can be known by examining_________________?\n");
           printf("\n (A) cambium layer \n (B) annular rings \n (C) medullary rays \n ");
           printf("(D) heart wood \n");
           printf("ANS -=>");
           
           scanf("%c",&ut);
           scanf("%c",&ut);
           
           if(ut=='b')
           {
               printf("your answer is right %d\n",mo=mo+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (B) annular rings \n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
            
               
           printf("\n question-=> (8) Plywood has the advantage of_____________?\n");
           printf("\n (A) greater tensile strength in longer direction\n (B)  greater tensile strength in shorter direction \n (C) same tensile strength in all directions \n ");
           printf("(D) none of the above \n");
           printf("ANS -=>");
           
           scanf("%c",&tu);
           scanf("%c",&tu);
           
           if(tu=='d')
           {
               printf("your answer is right %d\n",mo=mo+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (D) none of the above\n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
           
                  
           printf("\n question-=> (9) First class timber has an average life of_____________?\n");
           printf("\n (A) less than one year\n (B) 1 to 5 years \n (C)  5 to 10 years \n ");
           printf("(D) more than 10 years \n");
           printf("ANS -=>");
           
           scanf("%c",&ya);
           scanf("%c",&ya);
           
           if(ya=='b')
           {
               printf("your answer is right %d\n",mo=mo+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (D) none of the above\n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
           
                       
           printf("\n question-=> (10) The main function of alumina in brick earth is_______________?\n");
           printf("\n (A) to impart plasticity \n (B) to make the brick durable \n (C) to prevent shrinkage \n ");
           printf("(D)  to make the brick impermeable \n");
           printf("ANS -=>");
           
           scanf("%c",&ay);
           scanf("%c",&ay);
           
           if(ay=='b')
           {
               printf("your answer is right %d\n",mo=mo+1);
           }
           else
           {
               printf("sorry your answer is worng \n right answer (D) none of the above\n");
           }
           
           printf("\n--------------------------------------------------------------------\n");
            
            
             printf("\nyou have calect marks %d \n",mo);
             
             if(mo<=3)
             {
                 printf("sorry you are not selected\n");
                 break;
             }
               
               if(mo>4)
               printf("construction you are selected\n");
               else
               printf("sorry you are not selected\n");
               
               
                if(mo>=6)
                {
                break;
                }
                
                if(mo<4)
                {
                 printf("sorry your point not 4 upp");
                break;
                }
                mo=mo-mo;
               printf("\ndont worry your collect point 4 upp\n");
               printf("you can giv the agen exm\n");
               lw=lw+1;
               
                printf("\nyou wont to agen exm \n");
               printf("press (A)\n");
               
               printf("\nyou not wont to agen exm \n");
               printf("press (B)\n");
               printf("--=> ");
               
               scanf("%c",&lp);
               scanf("%c",&lp);
             
               if(lp=='a')
               {
                   goto ot;
               }
               else
               {
                   break;
               }
           
            break;
            
            default:
            printf("sorry your select key is worng\n");
             printf("\n--------------------------------------------------------------------");
             
            break;
            
            
        }
        
        break;
        
        default:
         printf("your press key is worng\n");
        break;
         
    }
      break;
       default:
        printf("nothing Informatics worng\n");
       break;
       
 }

       
}