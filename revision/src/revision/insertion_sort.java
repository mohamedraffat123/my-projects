/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package revision;

/**
 *
 * @author MF
 */
public class insertion_sort {

    private int[] arr;
    private int top;
    private int nitem;

    public insertion_sort(int size) {
        arr = new int[size];
        top = 0;
        nitem = 0;
    }

    public void insert(int n) {
        arr[top++] = n;
        nitem++;
    }

    public void insertion_sort() {

        for (int i = 1; i < nitem; i++) {
            int min =i;// index=0 5
            int temp =arr[i];//1-->4 index 1
            while (min > 0 && temp < arr[min-1]) {//4<5
          arr[min]=arr[min-1];
                --min;
            }
            arr[min]=temp;
        }
    }
    public void display (){
        for(int i=0;i<nitem;i++){
            System.out.println(arr[i]);
        }
    }
}
