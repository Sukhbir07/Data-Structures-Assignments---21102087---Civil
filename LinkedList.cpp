#include<bits/stdc++.h>
using namespace std;
struct node{
int age;
string name;
node *prev;
node *next;
node(string s,int x){
age = x;
name = s;
prev=NULL;
next=NULL;
}
};
void printthelist(node *head){
while(head!=NULL){
cout<<"["<<head->name<<"]"<<"["<<head->age<<"]"<< " -> ";
head=head->next;
}
cout<<"NULL";
}
int main(){
node *father = new node("Hardev Singh",50);
node *mother = new node("Ranjeet Kour",42);
node *myself = new node("Sukhbir Singh",20);
node *brother = new node("Sanvir Singh",14);
node *head=father;
father->prev = NULL;
father->next = mother;
mother->prev = father;
mother->next = myself;
myself->prev = mother;
myself->next = brother;
brother->next = NULL;
brother->prev = myself;
printthelist(head);
return 0;
}