/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package linear_data_stracture;

/**
 *
 * @author MF
 */
public class Stacklist {

    list top;

    public void push(char a) {
        list temp = new list(a);
        temp.next = top;
        top = temp;
    }

    public char pop() {
        list temp = top;
        top = top.next;
        return (char) temp.data;
    }

    public void display() {
        list temp = top;
        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }

    public list find(int a) {
        list temp = top;
        while (temp.data != a) {
            temp = temp.next;
            if (temp.next == null) {
                return null;
            }
        }
        return temp;
    }

    public void delete(int a) {
        list temp = this.find(a);
        list h = top;
        while (h.next != temp) {
            h = h.next;
        }
        h.next = h.next.next;
    }
    

}
