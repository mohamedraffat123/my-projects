/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package linear_data_stracture;

/**
 *
 * @author MF
 */
public class queuelist {

    private list rear;
    private list front;
    private int nitem;

    public queuelist() {
        rear = null;
        front = null;
        nitem = 0;
    }

    public boolean isempty(){
    return rear==null &&front==null;
    }
    public void insert(int a) {
        if (nitem == 0) {
            list temp = new list(a);
            rear = temp;
            front = temp;
            
        } else {
            list temp = new list(a);
           rear.next=temp;
           rear=rear.next;
        }
        nitem++;
    }

    public int delete() {
        nitem--;
        if (front == rear) {
            System.out.println("the size is empty");
            front = null;
            rear = null;
            return 0;
        } else {
            list temp = front;
            front = front.next; 
            return temp.data;
           
        }

    }
    
    public void display(){
        list temp=front;
        while(temp!=null){
            System.out.println(temp.data);
            temp=temp.next;
        }
    }
}
