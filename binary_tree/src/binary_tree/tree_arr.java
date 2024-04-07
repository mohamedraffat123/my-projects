/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package binary_tree;

/**
 *
 * @author MF
 */
public class tree_arr {

    int arr[];
    int index;

    public tree_arr(int n) {
        arr = new int[n];
        index =1;
    }

    public void insert(int key) {
        int n = 0, left, right, parent;
        left = 2 * index + 1;
        right = 2 * index + 2;
        parent = (index - 1) / 2;
        if (index == 0) {
            arr[index] = key;
            n = arr[index];
            index++;
        } else if (index != 0) {
            if (key < n) {
                arr[left] = key;
            } else {
                arr[right] = key;
            }

        }

    }
}
