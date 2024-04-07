/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package queue;

/**
 *
 * @author MF
 */
public class part1 {

    private int front;
    private int reer;
    final int size = 5;
    int[] data = new int[size];

    part1() {
        front = 0;
        reer = -1;
    }

    public void add(int num) {
        if ((reer == size - 1 && front == 0) || (reer > -1 && front == reer + 1)) {
            System.out.println("the size is full");
        } else {
            if (reer == size - 1) {
                reer = 0;
                data[reer] = num;
                //System.out.println(reer + " " + num);
            } else {
                //1 2 3 4  
                data[++reer] = num;
                // System.out.println(reer + " " + num);
            }
        }
    }

    public void del() {
        // System.out.println(front+"-");
        if (front == reer) {
            System.out.println("the deleted no. is" + data[front]);
            front = 0;
            reer = -1;
        } else {
            if (front == size - 1) {
                System.out.println("the deleted no. is" + data[front]);
                front = 0;

            } else {
                System.out.println("the deleted no. is" + data[front++]);
            }
            //System.out.println(front+"+");
        }
    }

    public void show() {
        // System.out.println(reer + " " + front);
        if ((front == reer && reer != 0)) {
            System.out.println(data[reer]);
            System.out.println("the queue is empty*");
        } else {
            int f = front;
            int r = reer;
            if (front == 0 && reer == -1) {
                System.out.println("empty");
            } else if (f > r) {
                for (int i = f; i < size; i++) {
                    System.out.println(data[i]);
                }
                f = 0;
                for (int j = f; j <= r; j++) {
                    System.out.println(data[j]);
                }
            } else {
                for (int z = front; z <= reer; z++) {
                    System.out.println(data[z]);
                }

            }
        }
    }
}
