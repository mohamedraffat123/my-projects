/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package stack;

/**
 *
 * @author MF
 */
public class arr {

    private int top;
    private int size;
    private long [] arr;

    public arr(int n) {
        size = n;
         arr = new long [size];
        top = -1;
    }

    public void push(int r) {
        if (top == size - 1) {
            System.out.println("the stack is full");
        } else {
            
            arr[++top] = r;
        }
    }

    public void pop() {
        if (top == -1) {
            System.out.println(" it is an empty");
        } else {
            top--;
        }
    }

    public void show() {
        for (int i = top; i >= 0; top--) {
            System.out.println(arr[i]);
        }

    }
}
