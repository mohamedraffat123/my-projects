/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package revision1;

/**
 *
 * @author MF
 */
public class advanced_sorting {

    int arr[];
    int top;
    int maxsize;

    public advanced_sorting(int n) {
        top = 0;
        arr = new int[n];
        maxsize = n;
    }

    public void insert(int n) {
        if (n == maxsize) {
            System.out.println("no space");
        } else {
            arr[top++] = n;
        }
    }

    //merge sorting
    public void merge(int arr[], int left, int right) {
        if (left == right) {
            return;
        } else {
            int mid = (left + right) / 2;
            merge(arr, left, mid);
            merge(arr, mid + 1, right);
            sorting_merge( arr, left,  right, mid);

        }
    }

    public void sorting_merge(int workspace[], int left, int right, int mid) {
        int med = mid + 1;
        int n = right - left + 1;//4
        int j=0;
        while (left <= mid && med<=right) {
            if(arr[left]>arr[right]){
                workspace[j++]=arr[left++];
            }else{
                workspace[j++]=arr[right++];
            }
        }
        while(left <= mid){
            if(arr[left]>arr[right]){
                workspace[j++]=arr[left++];
            }
        }
        while(med<=right){
            workspace[j++]=arr[right++];
        }
        for(int i=0;i<n;i++){
            arr[i+left]=workspace[i];
        }
    }
    
    
}
