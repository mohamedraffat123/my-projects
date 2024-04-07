/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exams;

/**
 *
 * @author MF
 */
public class rec {

    link rear;
    link front;
    int nitem;

    public rec() {
        rear = null;
        front = null;
        nitem = 0;
    }

    public void insert(int n) {
        link newlink = new link(n);
        link temp = newlink;
        link privous;
        if (front == null || n<front.data) {
            front = newlink;
            newlink.next=rear;
            rear=newlink;
        } else {
            link temp2 = front;
            while (n >=  temp2.next.data && temp.next!=null) {
                temp2 = temp2.next;
            }
            newlink.next=temp.next;
            temp.next=newlink;  
            
        }
    }
}
