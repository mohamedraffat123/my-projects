/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package coursers;

/**
 *
 * @author MF
 */
import java.util.Scanner;
public class stack {
   
    private int top;
    private int[]arr;
    private int num;
    Scanner input=new Scanner(System.in);
   public stack() {
       top=-1;
   }
   public void push(int n){
       arr=new int[n];
       for( top=0;top<n;top++){
           arr[top]=input.nextInt();
       }
       
   }
   public void pop(){
   num=input.nextInt();
   for(int i=;i<=num;i++){
       if(num==i){
           
   }
   }
   
   
   
    
}
