/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exams;

/**
 *
 * @author MF
 */
public class Exams {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[]={10,12,15,42,45,70,96,101};
        binary_search(arr,0,arr.length-1,75);
    }
    public static void binary_search(int arr[],int left,int right,int item){
        if(left>right){
            return;
        }
        int mid=(left+right)/2;
        if(arr[mid]==item){
            System.out.println(arr[mid]);
        }
        if(arr[mid]>item){
            binary_search(arr,left,mid-1,item);
        }else{
              binary_search(arr,mid+1,right,item);
        }
    }
    
}
