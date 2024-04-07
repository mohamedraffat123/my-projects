/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package linear_data_stracture;

/**
 *
 * @author MF
 */
public class queue {

    private int front;
    private int rear;
    private long arr[];
    private int size;
    private int nitem;

    public queue(int a) {
        size = a - 1;
        arr = new long[a];
        front = 0;
        rear = -1;
        nitem = 0;
    }

    public void insert(int a) {
        if (rear == size - 1) {
            arr[++rear] = a;
            rear = -1;
        } else {
            arr[++rear] = a;
        }
        nitem++;
    }

    public long delete() {
        nitem--;
        if (front == size) {
            front = 0;
            return arr[front];
        } else {
            return arr[front++];
        }
    }

    public void display() {
        if (nitem == 0) {
            System.out.println(arr[rear] + "\n the size is empty");

        } else {
            if (rear > front) {
                for (int i = front; i <= rear; i++) {
                    System.out.println(arr[i]);
                }
            } else {
                for (int j = front; j <= size; j++) {
                    System.out.println(arr[j]);
                }
                for (int z = 0; z <= rear; z++) {
                    System.out.println(arr[z]);
                }
                if (nitem == size + 1) {
                    System.out.println("the size is full");
                }
            }
        }
    }

}
