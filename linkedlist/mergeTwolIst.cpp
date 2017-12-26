#include<iostream>
#include"singlylist"
using namespace std;



Node List ::*merge(Node *first ,Node *second){
		  if(!first)
			  return second;
			if(!second)
			   return first;
			   
    		  	if(first->info > second->info){
          			   first->next = merge(first->next,second);
 				       first->next->prev = first;
                       first->prev = NULL;
                       return first;
                 }
    else{
        second->next = merge(first,second->next);
        second->next->prev = second;
        second->prev = NULL;
        return second;
     }
}
