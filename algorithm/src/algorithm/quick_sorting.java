/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package algorithm;

/**
 *
 * @author MF
 */
public class quick_sorting {
    private int arr[];
    public void quick_sorting(int item){
      arr=new int[item];
    }
   
    public void quicksort(int[]arr,int start,int end){
        if(start>=end){
            return;
        }else{
            int pandix=partition(arr,start,end);
            quicksort(arr,start,pandix-1);
            quicksort(arr,pandix+1,end);
        }
    }
    private int partition(int arr[],int start,int end){
        int pivot=arr[end];
        int prefix=start;
        for(int i=start;i<=end-1;i++){
            if(arr[i]<=pivot){
                swap(arr[i],arr[prefix]);
                prefix++;
            }
        }
        swap(arr[prefix],arr[end]);
       return prefix;
    }
    public void swap(int first,int secound){
        int temp=first;
        first=secound;
        secound=first;
    }
    
    
}
