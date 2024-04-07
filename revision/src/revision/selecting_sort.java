/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package revision;

/**
 *
 * @author MF
 */
public class selecting_sort {
    private int []arr;
    private int top;
    private int nitem;
    
    public selecting_sort(int size){
        arr=new int[size];
        top=0;
        nitem=0;
    }
    public void insert(int n){
        arr[top++]=n;
        nitem++;
    }
    public void swap(int first,int secound ){
        int temp=arr[first];
        arr[first]=arr[secound];
        arr[secound]=temp;
    }
    public void selection_sort(){
        for(int i=0;i<nitem-1;i++){
            int max=i;
            for(int j=i+1;j<nitem;j++){
                if(arr[max]>arr[j]){
                    max=j;
                }
            }
            swap(i,max);
        }
    }
    public void display(){
        for(int i=0;i<nitem;i++){
            System.out.println(arr[i]);
        }
    }
}
