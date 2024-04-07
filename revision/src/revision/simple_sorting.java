/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package revision;

/**
 *
 * @author MF
 */
public class simple_sorting {
    private int []arr;
    private int top;
    private int nitem;
    public simple_sorting(int size){
        arr=new int [size];
        top=0;
        nitem=0;
    }
    public void insert(int n){
        arr[top++]=n;
        nitem++;
    }
    public void bubble_sort(){
        for(int i=nitem-1;i>=1;i--){
            for(int j=0;j<i;j++){
                if(arr[j+1]<arr[j]){
                    swap(j+1,j);
                }
            }
        }
    }
    public void swap(int first,int secound){
        int temp=arr[first];
        arr[secound]=arr[first];
        arr[first]=temp;
    }
    public void display (){
        for(int i=0;i<nitem;i++){
            System.out.println(arr[i]);
        }
    }
}
