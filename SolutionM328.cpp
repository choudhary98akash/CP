/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if(head == NULL || head ->next == NULL)
            return head;

        ListNode* odd = head;
        ListNode* eve = head->next;
        ListNode* temp = head;
        int counter =1;
        while(temp){
            cout<<"Current node "<<temp->val<<endl;
            temp = temp->next;
            if(counter%2 == 1){
                if(odd){
                    cout<<"This is odd node "<<odd->val;
                    eve = odd->next;
                    if(eve){
                    cout<<" next of odd is "<<eve->val;
                    odd->next = eve->next;
                    if(odd->next)
                    cout<<" odd next is now "<<eve->next->val<<endl;
                    }
                }
            }
            else{
                if(eve){
                    cout<<" This node is eve "<<eve->val;
                    odd = eve->next;
                    cout<<" next to eve is "<<odd->val;
                    if(odd)
                    eve->next = odd->next;
                    if(eve->next)
                    cout<<": new eve next is "<<eve->next->val<<endl;
                }
            }
            counter++;
            ListNode* tempe = head->next;
            cout<<"Even list ";
            while(tempe){
                cout<<" "<<tempe->val;
                tempe = tempe->next;
            }
            cout<<endl;
            ListNode* tempo = head;
            cout<<"Odd list ";
            while(tempo){
                cout<<" "<<tempo->val;
                tempo = tempo->next;
            }
            cout<<endl;
        }

        odd->next = head->next;
        
        return odd;
        
    }
};  //30 +min 1 soluttion (Sanitization error)