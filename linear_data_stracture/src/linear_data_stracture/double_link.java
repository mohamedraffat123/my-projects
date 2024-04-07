/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package linear_data_stracture;

/**
 *
 * @author MF
 */
public class double_link {

    private list first;
    private list last;

    public boolean isempty() {
        return (first == null);
    }

    public void insert_first(int n) {
        list newlink = new list(n);
        if (isempty()) {
            first = newlink;
            last = newlink;
        } else {
            first.privous = newlink;
            newlink.next = first;
            first = newlink;
        }
    }

    public void insert_last(int n) {
        list temp = new list(n);
        if (isempty()) {
            first = temp;
        } else {
            temp.privous=last;
            last.next = temp;
            last = temp;
            
        }

    }
    
    private list search(int n){
       list temp=first; 
       if(temp==null|| temp.next==null){
           return temp;
       }else{
       while(temp.data!=n){
           temp=temp.next;
       }
       return temp;
       }
    }
    
    public void delete(int a){
        list temp=search(a);
        if(temp==first){
           temp=temp.next;
           temp.privous=null;
        }else
            temp.privous.next=temp.next;
        if(temp==last){
            last=temp.privous;
            temp.next=null;
        }else
            temp.next.privous=temp.privous;
    }

    
    public void insert_before(int n,int s){
        list temp=search(n);
        list newlink=new list(s);
        if(temp==first){
            first.privous=newlink;
            newlink.next=first;
            first=temp;
        }else if(temp==last){
            
        }
        else{
            temp.privous.next=newlink;
            newlink.privous=temp.privous;
            newlink.next=temp;
            temp.privous=newlink;
        }
    }
    public void display() {
        list temp=first;
        while(temp!=null){
            System.out.println(temp.data);
            temp=temp.next;
        }
    }
    
    public void back_display(){
        list temp=last;
        while(temp!=null){
            System.out.println(temp.data);
            temp=temp.privous;
        }
    }
    
    public void mergesorted (list a,list b){
        list temp1=a;
        list temp2=b;
        list newlink = null;
        if(temp1==null){
            while(temp2!=null){
                list rent=temp2;
                while(temp2.next!=null){ 
                if(temp2.next.data<rent.data){
                    rent=temp2;
                }
                temp2=temp2.next;
              }
               rent.next=newlink;
               newlink=rent;
                temp2=temp2.next;
            }
        }
    }
    public list sorted_list(){
        list temp2=first;
        list newlink=null;
          while(temp2!=null){
                list rent=temp2;
                while(temp2.next!=null){ 
                if(temp2.next.data<rent.data){
                    rent=temp2;
                }
                temp2=temp2.next;
              }
               rent.next=newlink;
               newlink=rent;
                temp2=temp2.next;
          }
          return newlink;
    }
}
