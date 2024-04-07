/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package assignment;

/**
 *
 * @author MF
 */
public class modified_insertion_sort {

    int top;
    int arr[];
    int nitem;
    int size;

    public modified_insertion_sort(int max) {
        top = 0;
        arr = new int[max];
        nitem = 0;
    }

    public void insert(int n) {
        arr[top++] = n;
        nitem++;
    }

    public void display() {
        for (int i = 0; i < size; i++) {
            System.out.println(arr[i]);
        }
    }

    public void insertion_sorting() {//{2,10,6,2,5,10};
        int i, in, temp;
        size=1;
        for (i = 1; i < nitem; i++) {
            temp = arr[i];
            in = i;
            boolean flag = true;
            for (int j = 0 ; j < size ; j++) {
                if (temp == arr[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag==true) {
               int  d=size-1;
                while (d >= 0 && arr[d] > temp) {//  2 ,,, 3
                    arr[d+1] = arr[d];
                    d--;
                }
                arr[d+1] = temp;
                size++;
            }
        }
    }
}
