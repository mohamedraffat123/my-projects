/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package stack;

/**
 *
 * @author MF
 */
public class part2 {

    private String s;
    private int top;
    private char[] ch;

    public part2(int size) {
        ch = new char[size];
        top = -1;
    }

    public char push(char r) {
        ch[++top] = r;
        return ch[top];
    }

    public char pop() {
        return ch[top--];
    }

    public boolean isEmpty() {
        return (top == -1);
    }

    public boolean isMax() {
        return (top == s.length() - 1);
    }

}
