#include<iostream>
using namespace std;
class intcllnode{
public:
int info;
intcllnode *next;
intcllnode(int el,intcllnode *ptr=0){
 info=el;
 next=ptr;
 }
};

class intcllist{
intcllnode *tail;
public:
intcllist(){
tail=0;
}
int isempty(){
  return(tail==0);
 }
void addtotail(int);
void addnode(int,int);
void deletefromtail();
void deletenode(int);
int searchlist(int);
void reverselist();
void displaylist();
};

void intsllist::addtotail(int el){
if(tail==0){
  tail=new intcllnode(el);
  tail->next=tail;
 }
else{
  tail->next=new intsllnode(el,tail->next);
  tail=tail->next;
 }
}

void intsllist::deletefromtail(){
intsllnode *tmp;
if(tail->next==tail){
  delete tail;
  tail=0;
 }
else{
  for(tmp==tail->next;tmp->next!=tail;tmp=tmp->next);
  tmp->next=tail->next;
  delete tail;
  tail=tmp;
 }
}

void intsllist::addnode(int el1,int el2){
