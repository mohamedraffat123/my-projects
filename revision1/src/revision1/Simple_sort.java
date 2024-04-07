/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package revision1;

/**
 *
 * @author MF
 */
public class Simple_sort {

    int arr[];
    int top;
    int maxsize;

    public Simple_sort(int n) {
        top = 0;
        arr = new int[n];
        maxsize = n;
    }

    public void insert(int n) {
        if (top == maxsize) {
            System.out.println("it is full");
        }
        arr[top++] = n;
    }

    public int delete() {
        return arr[top--];
    }

    public void swap(int first, int secound) {
        int temp = arr[first];
        arr[first] = arr[secound];
        arr[secound] = temp;

    }

    public void bubble_sort() {

        for (int i = top - 1; i > 1; i--) {
            for (int j = 0; j < i; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(j, j + 1);
                }
            }
        }
    }

    public void selection_sort() {
        for (int i = 0; i < top; i++) {
            int min =i;
            for (int j = i + 1; j < top; j++) {
                if (arr[j] < min) {
                    min = j;
                }
            }
            swap(min, i);
        }
    }

    public void inserion_sort() {
        for (int i = 1; i < top; i++) {
            int temp = arr[i];
            int index = i;
            while (index > 0 && temp < arr[index - 1]) {
                arr[index] = arr[index - 1];
                --index;
            }
            arr[index] = temp;
        }
    }

}
