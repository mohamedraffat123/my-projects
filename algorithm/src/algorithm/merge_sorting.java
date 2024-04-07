/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package algorithm;

/**
 *
 * @author MF
 */
public class merge_sorting {
   private int arr[];
   private int top;
   private int nitem;
   public  merge_sorting (int size){
       arr=new int[size];
       nitem=0;
   }
    public void insert(int n) {
        arr[nitem] = n;
        nitem++;
    }
    public void mergesorting (){
        int workspace[] = new int [nitem];
        mergesort(workspace,0,nitem-1);
    }
    private void mergesort(int []ws,int low,int high){
        if(high==low){
            return;
        }else{
           int mid=(high+low)/2;
            mergesort(ws,low,mid);
            mergesort(ws,mid+1,high);
            merge(ws,low,mid+1,high);
        }
    }
    private void merge(int []ws,int low,int mid,int high){
        int j=0;
        int lower=low;
        int lowmid=mid-1;
        int n=high-low+1;
        while(lower<=lowmid && mid<=high){
            if(arr[lower]<arr[mid]){
                ws[j++]=arr[lower++];
            }else{
                ws[j++]=arr[mid++];
            }
        }
        while(lower<=lowmid){
            ws[j++]=arr[lower++];
        }
        while(mid<=high){
              ws[j++]=arr[mid++];
        }
        for(int i=0;i<n;i++){
            arr[low+i]=ws[i];
        }
    }
    public void display(){
        for(int i=0;i<nitem;i++){
            System.out.println(arr[i]);
        }
    }
}
