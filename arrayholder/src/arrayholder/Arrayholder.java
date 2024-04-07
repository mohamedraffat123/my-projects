/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package arrayholder;

/**
 *
 * @author MF
 */
public class Arrayholder {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        array num;
        num=new  child_array_holder();
        int [] arr=num.getNum();
       
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
    
}
