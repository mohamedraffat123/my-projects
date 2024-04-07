/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package linear_data_stracture;

/**
 *
 * @author MF
 */
public class limiter {

     list top;
    private int size;
     list down;

    public limiter() {
        top = null;
    }

    public void insert(int a) {
        list temp = new list(a);
        temp.next = top;
        top = temp;

    }

    public int pop1() {
        if (top == null) {
            System.out.println("the size is empty");
            return 0;
        } else if (top.next == null) {
            top = null;
            return 0;
        } else {
            list temp = top;
            while (temp.next.next != null) {
                temp = temp.next;
            }
            temp.next = null;
            return temp.data;
        }

    }
    
    public int pop2() {
        if (top == null) {
            System.out.println("the size is empty");
            return 0;
        } else {
            list temp = top;
            top = top.next;
            return temp.data;
        }
    }
    
    public void display_queue() {
        list temp = top;
        if (top == null) {
            System.out.println("the size is empty");
        } else {
            while (temp != null) {
                System.out.println(temp.data);
                temp = temp.next;
            }
        }
    }


    public void insert2(int a) {
        if (top == null) {
            list temp = new list(a);
            top = temp;
        } else {
            list temp = top;
            while (temp.next != null) {
                temp = temp.next;
            }
            list temp2=new list (a);
            temp.next=temp2;
        }
    }
    
    public void pop3(){
        list temp=top;
        if(temp==null){
            System.out.println("the size is empty");
        }else{
            while(temp.next.next!=null){
                temp=temp.next;
            }
            temp.next =null;
        }
    }
    
    public void search (int a){
        list temp=top;
        while(temp.data!=a){
            if(temp.next==null){
                System.out.println("the value is not found");
                return;
            }
             temp=temp.next;
        }
        System.out.println(" the number is found");
    }
    
    public void sorting_inset(int a){
        if(top==null){
            list temp=new list(a);
            top=temp;
        }else if(top.data>a){
            list temp=new list(a);
            temp.next=top;
            top=temp;
        }
        else {
            list temp=top;
            while(temp.next!=null && temp.next.data<a){
                temp=temp.next;
            }
            list temp2=new list(a);
            temp2.next=temp.next;
            temp.next=temp2;
        }
        
    }
    public boolean isempty(){
        return top.next==null;
    }
    public void merge(limiter a,limiter b){
        list newlink_head=null;
        if(newlink_head==null){
            if(a.top.data<=b.top.data){
               newlink_head=a.top;
               a.top=a.top.next;
            }else{
                newlink_head=b.top;
                b.top=b.top.next;
            }
        }
        list newlink_tail=newlink_head;
        while(a!=null && b!=null)
        {
            list temp=null;
        if(a.top.data<=b.top.data){
            temp=a.top;
            a.top=a.top.next;
        }else{
            temp=b.top;
            b.top=b.top.next;
        }
         newlink_tail.next=temp;
         temp=newlink_tail;
        }
        if(a!=null){
            newlink_tail.next=a.top;
        }else if(b!=null){
            newlink_tail.next=b.top;
        }
       
    }
        
}
    
    


