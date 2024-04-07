/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package linear_data_stracture;

/**
 *
 * @author MF
 */
public class train {

    list head;
    list tail;

    public train() {
        head = null;
        tail = null;
    }

    public boolean isempty() {
        return (head == null && tail == null);
    }

    public void insert_first(int n) {
        list newlink = new list(n);
        if (isempty()) {
            tail = newlink;
        } else {
            head.privous = newlink;
        }
        newlink.next = head;
        head = newlink;
    }

    public void insert_last(int n) {
        list newlink = new list(n);
        if (isempty()) {
            head = newlink;
        } else {
            tail.next = newlink;
        }
        newlink.privous = tail;
        tail = newlink;
    }

    public void display() {
        list temp = head;
        while (temp != null) {
            System.out.println(temp.data);
            temp=temp.next;
        }
    }
    
    public void last_dispaly(){
        list temp=tail;
        while(temp!=null){
            System.out.println(temp.data);
            temp=temp.privous;
        }
    }
    
    public void delete (){
        
    }
    
    
}
