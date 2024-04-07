/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package algorithm;

/**
 *
 * @author MF
 */
public class insertion_sorting {
    int top;
    int arr[];
    int nitem;
    
    public insertion_sorting(int max){
        top=0;
        arr=new int[max];
        nitem=0;
    }
      public void insert (int n){
        arr[top++]=n;
        nitem++;
    }
     
     public void display(){
          for(int i=0;i<nitem;i++){
           System.out.println(arr[i]);
       }
    }
     public void insertion_sorting (int range){//{11,56,9,78,0,1};
            int i,in,temp;
            for(i=1;i<range;i++){
               temp=arr[i];
               in=i;
                while(in>0 && arr[in-1]>temp){
                    arr[in]=arr[in-1];
                    --in;
                }
                arr[in]=temp;
            }
     }
}
