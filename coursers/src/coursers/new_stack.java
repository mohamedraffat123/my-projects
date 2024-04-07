/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package coursers;

/**
 *
 * @author MF
 */
public class new_stack {

    private int top;
    int size;
    private int[] arr;

    public new_stack(int x) {
        size = x;
        arr = new int[size];
        top = -1;
    }

    public void push(int n) {

        if (top == size - 1) {
            System.out.println("the stack is full");
        } else {
            arr[++top] = n;
        }
    }

    public int pop() {
        if (top == -1) {
            System.out.println("the stack is empty");
            return 0;
        } else {
            return arr[top--];
        }
    }

    public void show() {
        for (int i = top; i >= 0; i--) {
            System.out.println(arr[i]);
        }

    }
}
