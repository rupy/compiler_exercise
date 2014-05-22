#include <stdio.h>
#include <string.h>


char buf[100];

void mondai1(){

  int i,len;
  int state = 0;

  int dfatable[6][3] = {
    {1,2,-1},
    {-1,3,4},
    {-1,-1,5},
    {1,2,-1},
    {-1,-1,-1},
    {1,2,-1},
  };

  printf("input strings1:");
  fgets(buf,1000,stdin);
  len = strlen(buf)-1;

  for(i=0;i<len;++i){
    state = dfatable[state][buf[i]-'a'];
    if(state==-1){
      printf("cannot move!\n");
      break;
    }
    printf("state is:%c\n",state+'A');
  }

  if(state==4||state==3){
    printf("accepted!!\n");
  }else{
    printf("not accepted!!\n");    
  }

  return;
}

void mondai2(){

  int i,len;
  int state = 0;

  int dfatable[5][2] = {
    {1,2},
    {3,4},
    {1,2},
    {3,4},
    {1,2},
  };

  printf("input strings2:");
  fgets(buf,1000,stdin);
  len = strlen(buf)-1;

  for(i=0;i<len;++i){
    state = dfatable[state][buf[i]-'a'];
    if(state==-1){
      printf("cannot move!\n");
      break;
    }
    printf("state is:%c\n",state+'A');
  }

  if(state==3||state==4){
    printf("accepted!!\n");
  }else{
    printf("not accepted!!\n");    
  }

  return;
}

void mondai3(){

  int i,len;
  int state = 0;

  int dfatable[7][3] = {
    {1,2,-1},
    {1,3,-1},
    {1,3,-1},
    {4,5,6},
    {4,5,6},
    {4,5,6},
    {-1,-1,-1},
  };

  printf("input strings3:");
  fgets(buf,1000,stdin);
  len = strlen(buf)-1;

  for(i=0;i<len;++i){
    state = dfatable[state][buf[i]-'a'];
    if(state==-1){
      printf("cannot move!\n");
      break;
    }
    printf("state is:%c\n",state+'A');
  }

  if(state==6){
    printf("accepted!!\n");
  }else{
    printf("not accepted!!\n");    
  }

  return;
}

void mondai4(){

  int i,len;
  int state = 0;

  int dfatable[7][3] = {
    {1,2,-1},
    {3,4,-1},
    {3,5,6},
    {-1,4,-1},
    {3,5,6},
    {3,5,6},
    {-1,-1,-1},
  };

  printf("input strings4:");
  fgets(buf,1000,stdin);
  len = strlen(buf)-1;

  for(i=0;i<len;++i){
    state = dfatable[state][buf[i]-'a'];
    if(state==-1){
      printf("cannot move!\n");
      break;
    }
    printf("state is:%c\n",state+'A');
  }


  if(state==6){
    printf("accepted!!\n");
  }else{
    printf("not accepted!!\n");    
  }

  return;
}

void mondai5(){

  int i,len;
  int state = 0;

  int dfatable[9][3] = {
    {1,-1,2},
    {-1,3,-1},
    {4,5,2},
    {1,-1,2},
    {6,7,-1},
    {-1,-1,8},
    {6,5,-1},
    {1,-1,2},
    {6,5,-1},
  };

  printf("input strings5:");
  fgets(buf,1000,stdin);
  len = strlen(buf)-1;

  for(i=0;i<len;++i){
    state = dfatable[state][buf[i]-'a'];
    if(state==-1){
      printf("cannot move!\n");
      break;
    }
    printf("state is:%c\n",state+'A');
  }

  if(state==2||state==4||state==6||state==8){
    printf("accepted!!\n");
  }else{
    printf("not accepted!!\n");    
  }

  return;
}
int main(){
  int num;

 LABEL:
  puts("input mondai number:");
  scanf("%d",&num);
  getchar();

  switch(num){
  case 1:
    mondai1();
    break;
  case 2:
    mondai2();
    break;
  case 3:
    mondai3();
    break;
  case 4:
    mondai4();
    break;
  case 5:
    mondai5();
    break;
  default:
    puts("Error\n");
    break;
  }

  goto LABEL;

  return 0;
}
