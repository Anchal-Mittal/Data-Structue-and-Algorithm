#include<iostream>

using namespace std;

template <class T ,const int size>
class queuarray
{
public:
T queue[size];
T front;
T rare;
queuarray()
{
front=-1;
rare=-1;
}
void enqueue(T el);
T dequeue();
void clear();
void displayqueue();
};

template< class T,int size>
void queuarray<T ,size>::enqueue(T el){
  if((front==0)&&(rare==size-1)&&(front==rare+1))
    cout << "CAN NOT ENQUEUE MORE ELEMENTS QUEUE IS FULL"<<endl;
  else if(front==-1)
    front=rare;
  else
    rare++;
queue[rare]=el;
}

template <class T ,const int size>
T queuarray<T ,size>::dequeue(){
if(front==-1){
 cout<<"QUEUE IS EMPTY"<<endl;
 return 0;
 }
else{
T el=queue[front];

if(front==rare)
front=-1;
else if(front==size-1)
front=0;
else
front++;

return el;
}
}
template< class T,const int size>
void queuarray<T ,size>::displayqueue()
{
if(rare==-1)
{
cout<<"QUEUE IS EMPTY"<<endl;

}
else if(front<=rare)
{
T a=rare;
T b=0;
T c=front;
while(a!=size-1)
cout<<queue[a++]<<" ";
while(b!=front)
cout<<queue[b++]<<" ";
while(c!=rare)
{
cout<<"*"<<" ";
c++;
}
}
else
{
T a=front;
T b=0;
T c=rare;
while(a!=size-1)
cout<<queue[a++]<<" ";
while(b!=rare)
cout<<queue[b++]<<" ";
while(c!=front)
{
cout<<"*"<<endl;
c++;
}
}
}
int main()
{
clrscr();
queuarray<int,6> queue;
cout<<"MENU "<<endl;
cout<<"1.ENQUEUE"<<endl;
cout<<"2.DEQUEUE"<<endl;
cout<<"3.DISPLAY QUEUE"<<endl;
cout<<"ENTER UR CHOICE"<<endl;
int choice;
int info;
char ch;
cin>>choice;
switch(choice)
{
case 1:do
       {
       cout<<"ENTER THE ELEMENTS DO U WANT TO ENQUEUE"<<endl;
       cin>>info;
       queue.enqueue(info);
       cout<<"IF U WANT TO ENQUEUE MORE ELEMENTS THAN PRESS Y"<<endl;
       cin>>ch;
       }while(ch=='Y'||ch=='y');
       queue.displayqueue();
       break;
case 2:queue.displayqueue();
       do
       {
       cout<<"ENTER THE ELEMENTS DO U WANT TO ENQUEUE"<<endl;
       cin>>info;
       queue.enqueue(info);
       cout<<"IF U WANT TO ENQUEUE MORE ELEMENTS THAN PRESS Y"<<endl;
       cin>>ch;
       }while(ch=='Y'||ch=='y');
       queue.displayqueue();
       do
       {
       queue.dequeue();
       cout<<"IF U WANT TO DEQUEUE MORE ELEMENTS THAN PRESS Y"<<endl;
       cin>>ch;
       }while(ch=='Y'||ch=='y');
       break;
case 3:do
       {
       cout<<"ENTER THE ELEMENTS DO U WANT TO ENQUEUE"<<endl;
       cin>>info;
       queue.enqueue(info);
       cout<<"IF U WANT TO ENQUEUE MORE ELEMENTS THAN PRESS Y"<<endl;
       cin>>ch;
       }while(ch=='Y'||ch=='y');
       queue.displayqueue();
       break;
}
getch();
return 0;
}


