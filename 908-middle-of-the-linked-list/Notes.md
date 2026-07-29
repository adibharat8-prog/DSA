<h2>middle-of-the-linked-list Notes</h2><hr>Brute force need to traverse two times :-
ListNode * temp=head;
int count = 0;
while(temp!=NULL){
    temp=temp->next;
    count++;
}
temp = head;
for(int i=0; i<(count/2); i++){
    temp=temp->next;
}
return temp;