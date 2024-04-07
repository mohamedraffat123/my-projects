/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package algorithm;

/**
 *
 * @author MF
 */
public class selection_sort {
  int arr[];
  int top;
  int nitem;
  
    public selection_sort(int max){
        arr=new int [max];
        top=0;
        nitem=0;
    }
    public void insert (int n){
        arr[top++]=n;
        nitem++;
    }
    public void selection_insert(){//{11,56,9,78,0,1};
        int min,i;
        for( i=0;i<nitem;i++){
            min=i;
            for(int j=i+1;j<nitem;j++){
                if(arr[min]>arr[j]){
                    min=j;
                }
            }
            swap(i,min);
        }
    }
    public void swap(int first, int secound) {
        int temp = arr[first];
        arr[first] = arr[secound];
        arr[secound] = temp;
    }
     public void display(){
          for(int i=0;i<nitem;i++){
           System.out.println(arr[i]);
       }
    }
    
}
