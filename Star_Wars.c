#include<stdio.h>
#include<time.h>
#include<windows.h>
/*dev: Sunny Dial
 cont: dialsunny91@gmail.com*/
void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }
main(){
inizio:;
             FILE *savload;
             int a=2,b,c,d,i,j,e,f=0,g,h,go=20,lo=16,w,q,r,t,colpito=0,ok=0,ko=3;
             int intensit=0;
             int dif,ris,special=0;
             unsigned int sola=2;                                         
             char salvo;  
      
char l[22][40]={"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",
                "x                                     x",
                "x         @@@@@@@@@@@@@@@@@@@         x",
                "x         @@@@@@@@@@@@@@@@@@@         x",
                "x         @@@@@@@@@@@@@@@@@@@         x",
                "x         @@@@@@@@@@@@@@@@@@@         x",
                "x         @@@@@@@@@@@@@@@@@@@         x",
                "x         @@@@@@@@@@@@@@@@@@@         x",
                "x         @@@@@@@@@@@@@@@@@@@         x",
                "x         @@@@@@@@@@@@@@@@@@@         x",
                "x                                     x",
                "xxxxxxxxxx                   xxxxxxxxxx",
                "x        x                   x        x",
                "x        x                   x        x",
                "x        x                   x        x",
                "xxxxxxxxxx                   xxxxxxxxxx",
                "x                                     x",
                "x                                     x",
                "x                                     x",
                "x                                     x",
                "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
      
            
      system("cls");
      system ("color 74");   
      printf("\n\tWECOME TO CHIOCCIOLA FIGHT\n\nSELECT DIFFICULTY:\n\n\t");
      printf("1)BEGINNER 20 UP\n\n\t\t2)MEDIUM 10 UP\n\n\t\t\t3)EXPERT 5 UP\n\n\t\t\t\t4)INFO\n\t\t\t\t\t5)LOAD LAST SAVED SESSION\n");
      scanf("%d",&ris);
      if(ris==1){dif=20;intensit=3;}
      else if(ris==2){dif=10;
      intensit=5;}
      else if(ris==3){dif=5;intensit=10;}   
        
      else if(ris==4){system("cls");
                       printf("\n\n\tPress %c , %c to move the weapon;\n\n\t",26,27);
                       printf("Press %c key of the keyboard to shot the 'k'\n\n\tBlockmaiusc for the T CANNON-SHOT \n\n\tF1 for the SUPER CANNON-SHOT T\n\n",24);
                       printf("DIFFICULTY:\n\n\tBEGINNER     T CANNON-SHOT =3X@\tSUPER CANNON-SHOT T =6X@\n\n");
                       printf("\n\tMEDIUM       T CANNON-SHOT =5X@\tSUPER CANNON-SHOT T =10X@\n\n");
                       printf("\n\tEXPERT       T CANNON-SHOT =10X@\tSUPER CANNON-SHOT T =20X@\n\n");    
                       getchar();
                       getchar();
                       system("cls"); 
                       goto inizio; }
      else if(ris==5){   
	  //per caricare dal file
                      savload=fopen("C://Salvataggio.txt","rt");
       
                      if(savload==NULL){system("cls");
                                        printf("\nDATI SALVATAGGIO INESISTENTI\n");
                                        system("pause");
                                        goto inizio;}
      else for(d=0;d<21;d++)
                      {for(j=0;j<39;j++)
                                        {l[d][j]=fgetc(savload);
                                        }}
                  
                  dif       =  getw(savload);
                  colpito   =  getw(savload);
                  ok        =  getw(savload);
                  special   =  getw(savload);
                  intensit  =  getw(savload); 
                  f         =  getw(savload);
                    
             fclose(savload);}//per caricare dal file
            
        
      system("cls");
       
       i=11;
       
         // inizia tutto qui                                  
        
      while( ko == 3)
                      {
        
      system ("color 74");
        
      //la i che                                      
      l[i][go]='i';
      l[i-1][go]=' ';
      i++;  //viaggia
                       
      //disegno matrice
      for(q=0;q<21;q++){gotoxy( 15,q+1);
                        {for(w=0;w<39;w++) 
                                           printf("%c",l[q][w]);}
                                           printf("\n");}//volta per volta
      //punti subiti                      
                                        if(l[i][go] == 23){  system("color 04");
                                                             system("color 04");
                                                             system("color 04");
                                                             system ("color 74");
                                                             colpito+=1;
                                                             sola-=6;
                                                             l[i-1][go]=' ';
                                                             go=rand() %(1+lo) + 10;
                                                             i=11;}
                                        else    if(l[i][go] == 'x'){
                                                                    sola+=1;;
                                                                    l[i-1][go]=' ';
                                                                    srand(sola);
                                                                    go=rand() %(1+lo) + 10;
                                                                    i=11; } 
                                                                                               //punti subiti
      
//sparo 

//se PREMO SU
                      
            loup:            
                    if(GetAsyncKeyState(VK_UP)!=0)
                                                  {                 
                                                    r=18;// riga della base = costante
                                                    while(l[r][e-2] != '@' || l[r][e-2] != 'x'){
                                                                                                //la i continua      
                                                                                                  l[i][go]='i';
                                                                                                  l[i-1][go]=' ';
                                                                                                  i+=1;
                                                                                                 //a viaggiare
            //disegno la matrice
                 for(d=0;d<21;d++){
                                   gotoxy( 15,d+1);
                                                 for(j=0;j<39;j++){ 
                                                                   printf("%c",l[d][j]);}
                                                                   printf("\n");}//volta per volta cosi vedo la k e la i viaggiante  
                                           
                //se la i                                 
              if(l[i][go]==23){ 
                                system("color 04");
                                system("color 04");
                                system("color 04");
                                system ("color 74");
                                sola+=1;
                                colpito+=1;
                                l[i-1][go]=' ';
                                go=rand() %(1+lo) + 10;
                                i=11;}//tocca l'arma 
                                        
                //se la i tocca x                        
              else    if( l[i][go]=='x'){ 
                                         l[i-1][go]=' ';
                                         i=11;
                                         srand((unsigned)time(0));
                                         go=rand()% lo + 13;
                                         i+=1;
                                         }  //se la i tocca x  
                                                                 
                                             
                                             
                                             
              // k viaggiante
              l[r][e-2]='k';
              l[r+1][e-2]=' ';
              r-=1;// per forza se no non viaggia
                   
            //per permettermi di muovere la base   
              if(GetAsyncKeyState(VK_RIGHT)!=0)          {f+=1;}
                          
              else if(GetAsyncKeyState(VK_LEFT)!=0)           { f-=1;}     
                   for(h=15+f;h<18+f && l[18][h]!='x';h++) {l[18][h]=23;}
                                                            if(l[18][h+1]=='x'){f-=1;} 
                                                       else if(l[18][h-5]=='x'){f+=1;}
                                                               l[18][h-4]=' ';
                                                               l[18][h]=' ';
                                                                             // anche quando ho già sparato
if(l[r][e-2]=='@' || l[r][e-2] == 'x' ){//se la k colpisce 
                                           if(l[r][e-2] == 'x'){
                                                                l[r][e-2]='x';
                                                                l[r+1][e-2]=' ';
                                                                l[i][go]=' ';
                                                                sola-=2;
                                                                break;
                                                                      } //la x questa non viene cancellata 
                                        //se la k colpisce la @
                                          else if(l[r][e-2]=='@'){  
                                                                    ok+=1;
                                                                    l[r][e-2]=' ';
                                                                    l[r+1][e-2]=' ';
                                                                    special+=1;
                                                                    break;
                                                                   }//questa viene cancellata
                                            }//if interno if(l[i][e-3]=='@' || l[i][e-3] == 'x')
                                           }//interno while l[r][e-3] 
                                          }//if getasinckUP
//sparo fine
                                    
      //per muovere                 
                   else if(GetAsyncKeyState(VK_RIGHT)!=0){
                                                          f+=1;
                                                          if(GetAsyncKeyState(VK_UP)!=0){goto loup;}
                                                                                                    }
                   else if(GetAsyncKeyState(VK_LEFT)!=0){ 
                                                         f-=1;
                                                         if(GetAsyncKeyState(VK_UP)!=0){goto loup;}
                                                                                                   } 
       for(e=15+f;e<18+f  ;e++) {l[18][e]=23;}//l'arma
                                               if(l[18][e+1]=='x'){f-=1;} //rimbalzo laterale
                                               else if(l[18][e-5]=='x'){f+=1;}//rimbalzo laterale
                                               l[18][e-4]=' ';
                                               l[18][e]=' ';  // la base contemporaneamente  senza aver sparato   
                       
      
//attacco speciale  
 if(special>=intensit){
                        if(GetAsyncKeyState(VK_CAPITAL)!=0)
                                                          {  
                                                                 system ("color 02");
                                                                 system ("color 02");
                                                                 system ("color 02");
                                                                 system ("color 74");
                                                                 r=18;
                  while(l[r][e-2] != 'x')
                                         {
                                           //la i continua      
                                           l[i][go]='i';
                                           l[i-1][go]=' ';
                                           i+=1;
                                           if(l[i][go]==23){ system("color 04");
                                           system("color 04");
                                           system("color 04");
                                           system ("color 74");
                                           sola+=1;
                                           colpito+=1;
                                           l[i-1][go]=' ';
                                           go=rand() %(1+lo) + 10;
                                           i=11;} 
                  else    if( l[i][go]=='x'){ 
                                             l[i-1][go]=' ';
                                             i=11;
                                             srand((unsigned)time(0));
                                             go=rand()% lo + 13;
                                             i+=1;
                                             } //a viaggiare
 // T viaggiante
    l[r][e-2]='T';
    l[r+1][e-2]=' ';
    r-=1;// per forza se no non viaggia
                   
                   
    //per permettermi di muovere la base   
                   
                   
                   if(GetAsyncKeyState(VK_RIGHT)!=0)          {f+=1;}
                   else if(GetAsyncKeyState(VK_LEFT)!=0)           { f-=1;}     
                   for(h=15+f;h<18+f ;h++) {l[18][h]=23;}
                                            if(l[18][h+1]=='x'){f-=1;} 
                                            else if(l[18][h-5]=='x'){f+=1;}
                                            l[18][h-4]=' ';
                                            l[18][h]=' ';
                       // anche quando ho già sparato
                 
 //disegno la matrice
                 for(d=0;d<21;d++){gotoxy( 15,d+1);
                                  {for(j=0;j<39;j++) 
                                           printf("%c",l[d][j]);}
                                           printf("\n");}//volta per volta cosi vedo la T e la i viaggiante
                                         
 if( l[r][e-2] == 'x' || l[r][e-2] == '@'){
                                           
                                           // se la T colpisce
                                           if(l[r][e-2] == 'x'){
                                                        l[r][e-2]='x';
                                                        l[r+1][e-2]=' ';
                                                        l[i][go]=' ';
                                                        sola-=2;
                                                        special-=intensit;
                                                        break;
                                                         } //la x questa non viene cancellata 
                                           
                                           // se la T colpisce
                                           if(l[r][e-2] == '@'){ok+=1;} //la x questa non viene cancellata 
                                           }//if interno if(l[i][e-3]=='@' || l[i][e-3] == 'x')
                                       }//interno while l[r][e-3] 
 }
//SECONDO ATTACCO SPECIALE               
else if(special>=(2*intensit))
                              {
                              if(GetAsyncKeyState(VK_F1)!=0)
                                                          {  
                                                          system ("color 08");
                                                          system ("color 08");
                                                          system ("color 08");
                                                          system ("color 74");
                                                          r=16;
                  while(l[r][e-2] != 'x')
                                         {
                                          //la i continua      
                                           l[i][go]='i';
                                           l[i-1][go]=' ';
                                           i+=1;
                                           if(l[i][go]==23){ system("color 04");
                                           system("color 04");
                                           system("color 04");
                                           system ("color 74");
                                           sola+=1;
                                           colpito+=1;
                                           l[i-1][go]=' ';
                                           go=rand() %(1+lo) + 10;
                                           i=11;} 
                  else    if( l[i][go]=='x'){ 
                                             l[i-1][go]=' ';
                                             i=11;
                                             srand((unsigned)time(0));
                                             go=rand()% lo + 13;
                                             i+=1;
                                             } //a viaggiare
                                                                 
                  // /T\viaggiante
                  l[r][e-1]='\\';
                  l[r][e-2]='T';
                  l[r][e-3]='/';
                  l[r+1][e-2]=' ';
                  l[r+3][e-1]=' ';
                  l[r+3][e-3]=' '; 
                  r-=1;      // /T\viaggiante
                   
//per permettermi di muovere la base   
                   if(GetAsyncKeyState(VK_RIGHT)!=0)          {f+=1;}
                   else if(GetAsyncKeyState(VK_LEFT)!=0)           { f-=1;}     
                   for(h=15+f;h<18+f ;h++) {l[18][h]=23;}
                                         if(l[18][h+1]=='x'){f-=1;} 
                                         else if(l[18][h-5]=='x'){f+=1;}
                                         l[18][h-4]=' ';
                                         l[18][h]=' ';
                                                     // anche quando ho già sparato
                 
                 
                 
                 //disegno la matrice
                 for(d=0;d<21;d++){gotoxy( 15,d+1);
                                  {for(j=0;j<39;j++) 
                                           printf("%c",l[d][j]);}
                                           printf("\n");}//volta per volta cosi vedo la k e la i viaggiante
                                         
if( l[r][e-2] == 'x' || l[r][e-2] == '@'){
                                           // se la ST colpisce
                                           if(l[r][e-2] == 'x'){
                                                                l[r][e-2]='x';
                                                                l[r+1][e-2]=' ';
                                                                l[i][go]=' ';
                                                                sola-=2;
                                                                special-=(2*intensit);
                                                                break;
                                                                      } //la x questa non viene cancellata 
                                           // se la T colpisce
                                           if(l[r][e-2] == '@'){ok+=3;} //la x questa non viene cancellata 
                                           }//if interno if(l[i][e-3]=='@' || l[i][e-3] == 'x')
                                       }//interno while l[r][e-3] 
                              }
           }
}//fine attacco speciale
                       
//indicatore punti
      
        gotoxy(2,22);
        printf("RIMAINIG LIFES=%3.2d\n",dif-colpito);
        gotoxy(2,23);
        printf("KILLED CHIOCCIOLE=%d\tCANNONI T :%d\n\n\t\tCANNONI SUPER T  :%d",ok,special/intensit,special/(2*intensit)); //indicatore punti
                          
        // controllo sconfitta            
                            
                            if(colpito==dif){
                    system("cls");
                    printf("\n\n\t\tGameover!!\n\n\tYour score:\t%d\n\n",ok);
                   
                   
                    system("pause");
                    system("cls");
                    printf("\n\n\tPRESS \n\t\t1 NEW GAME\n\t\t\t\t2  EXIT \n\t\t");
                    scanf("%d",&ris);
                    if(ris==1){
                               goto inizio;}
                  else 
                    system("cls");
                    printf("\n\n\t\t\tTHANKS FOR PLAYING....");
                    getchar();
                    getchar();
                     
                     goto fine;
                    } 
                    // controllo sconfitta                       
                   
                     
                    
                                                      
                         //Controllo Vittoria
      for(d=2;d<10;d++){
                       for(j=9;j<39 && l[d][j]!='@';j++){ if(d==2 && j==33)
                                                                              {
                                                                              system("cls");
                                                                              printf("\n\n\tYOU WIN!!!!!   CONGRATULATION!!!....\n\n"); 
                                                                              system("pause");
                                                                              system("cls");
                    printf("\n\n\tPRESS \n\t\t1 FOR NEW GAME\n\t\t\t\t2 TO EXIT GAME\n\t\t");
                    scanf("%d",&ris);
                    if(ris==1){goto inizio;}
                    else 
                    system("cls");
                    printf("\n\n\t\t\tTHANKS FOR PLAYING....");
                    getchar();
                    getchar();
                    goto fine;
                    }
                    }}//Controllo vittoria
      //per pausare                                
                       if(GetAsyncKeyState(VK_DOWN)!=0){printf("\n\n\n\tPAUSE\n\n\t\tF2 per salvare il gioco\n\n");
                                                        system("pause");
                                                        system("cls");
      if(GetAsyncKeyState(VK_F2)!=0){// per salvare sul file
       
                                    savload=fopen("C://Salvataggio.txt","wt");
       
    for(d=0;d<21;d++)
                      {for(j=0;j<39;j++)
                      {if(l[d][j] != 'i')
                        salvo=l[d][j];
                        fputc(salvo,savload);
                                        }}
                      putw(dif,savload);
                      putw(colpito,savload);
                      putw(ok,savload);
                      putw(special,savload);
                      putw(intensit,savload);
                      putw(f,savload); 
                                           
      
      fclose(savload);
      //per salvare sul file
                                                                                       }
                                                                                       
                                                                                      
                                                                                       }   //per pausare                                               
                                                      
                                                      
                                                        }// while ko==3
      fine:;//FONDAMENTALMENTE SI ESCE DAL GIOCO                              
      }//il main
