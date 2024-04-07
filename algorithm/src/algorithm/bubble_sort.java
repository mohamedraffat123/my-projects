/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package algorithm;

/**
 *
 * @author MF
 */
public class bubble_sort {

    private int[] arr;
    private int max;
    private int top;
    private int nitem;

    public bubble_sort(int max){
        this.max=max;
        arr=new int[max];
        top=0;
        nitem=0;
    }
    public void insert(int n){
        arr[top++]=n;
        nitem++;
    }
    public void bubble_sort() {//{11,56,9,78,0,1};
        for (int i = nitem - 1; i > 1; i--) {
            for (int j = 0; j < i; j++) {//1 
                if (arr[j] > arr[j + 1]) {
                    swap(j,j+1);
                }
            }
        }
    }
public void swap(int first, int secound) {
        int temp = arr[first];
        arr[first] = arr[secound];
        arr[secound] = temp;
    }
    
    public void display(){
          for(int i=0;i<nitem-1;i++){
           System.out.println(arr[i]);
       }
    }
}
