/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package algorithm;

/**
 *
 * @author MF
 */
public class Algorithm {

    /**
     * @param args the command line arguments
     */
     
    public static void main(String[] args) {
        int arr[]={64,21,33,70,12,85,44};
        quick_sorting k=new quick_sorting();
        k.quicksort(arr, 0, arr.length-1);
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }

    }
    
   
    
}
