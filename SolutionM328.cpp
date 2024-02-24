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
        
        if(!head || !head->next){
            return head;
        }

        ListNode* odd = head;
        ListNode* odd2 = head;
        ListNode* eve = head->next;
        ListNode* eve2 = head->next;
        ListNode* temp = head;
        int counter = 1;

        while(temp){
            temp = temp->next;

            if(counter%2==0){
                if(eve){
                odd = eve->next;
                }
                if(odd){
                    if(odd->next){
                        eve->next  = odd->next;
                    }
                    else
                        eve->next = nullptr;
                }
                cout<<endl;


            }
            else{
                if(odd){
                eve = odd->next;
                }
                if(eve){
                    if(eve->next){
                        odd->next = eve->next;
                    }
                    else
                        odd->next = nullptr; 
                }
                if(odd && odd->next==nullptr)
                    odd2 = odd;
                cout<<endl;
            }


        counter++;
        }
        odd2->next = eve2;
        return head;
    }
};