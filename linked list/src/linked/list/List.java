/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package linked.list;

/**
 *
 * @author MF
 */
public class List {

    int size;
    private Node head;
    private Node tail;

    public List() {
        head = null;
        tail = null;
        size = 0;
    }

    public void add(int element) {
        if (size == 0) {
            Node temp = new Node();
            temp.data = element;
            head = temp;
            tail = temp;
            size++;
        } else {
            Node temp = new Node();
            temp.data = element;
            tail.next = temp;
            tail = temp;
            size++;
        }
    }

    public void add_first(int element) {
        Node temp = new Node();
        temp.data = element;
        temp.next = head;
        head = temp;
    }

    public void print() {
        Node h = head;
        while (h != null) {
            System.out.println(h.data);
            h = h.next;
        }
    }

    public Node find(int element) {
        Node h = head;
        while (h != null) {
            if (h.data == element) {
                return h;
            }
            h = h.next;
        }
        return null;

    }

    public void insert(int after_element , int old_element) {
        Node temp = find(old_element);
        Node h = new Node();
        h.data = after_element;
        h.next = temp.next;
        temp.next = h;
        size++;
    }

    public void replace(int new_element , int element) {
        Node temp = find(element);
        Node h=new Node();
        h.data=new_element;
        Node f=head;
        while(f.next!=temp){
        f=f.next;
        }
       f.next=h;
       h.next=temp.next;
    
    }
    
    public void del_first(){
       //Node temp =head;
   head=head.next;
    size--;
    }
    public void delete(int element){
        Node temp=find(element);
    Node h=head;
    while(h.next!=temp){
        h=h.next;
    }
    h.next=h.next.next;
    }
    
}
