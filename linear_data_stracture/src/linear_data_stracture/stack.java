/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package linear_data_stracture;

/**
 *
 * @author MF
 */
public class stack {

    private int top;
    private char[] arr;
    private int r;
    StringBuilder d=new StringBuilder();
    public stack(int n) {
        arr = new char[n];
        top = -1;
        r = n;
    }

    public void push(char x) {
        if (this.isfull()) {
            System.out.println("size is full");
        } else {
            top++;
            arr[top] = x;
        }
    }

    public void pop() {
        if (this.isempty()) {
            System.out.println("size is full");
        } else {
            top--;
        }
    }

    public boolean isfull() {
        return (top == r - 1);
    }

    public boolean isempty() {
        return (top == -1);
    }

    public String appear() {
        for (int i = top; i >= 0; i--) {
            d.append(arr[i]);
        }
        return d.toString();
    }
    
}
