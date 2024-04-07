/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package array;

/**
 *
 * @author MF
 */
import java .util.Scanner;

public class Array {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
       
        String s = null;
        
        Scanner input=new Scanner(System.in);
        System.out.println("please enter the paragragh");
        String paragrah=input.nextLine();
        String[] setparagrah= paragrah.split(" ");
//        System.out.println(" the scentance after split");
      for(int i=0;i<setparagrah.length;i++){
            System.out.println(setparagrah[i]);
      }    
int y =setparagrah.length ;
     for(int k=0;k<setparagrah.length;k++){
          int count=0;
         for(int z=1;z<k;z++){
            if( setparagrah[k].contains(setparagrah[z])){
              count++;
              y--;
              }
            count=Integer.MAX_VALUE;
           
            if(y<count){
                  System.out.println("the paragrah about "+setparagrah[k]); 
            
            
          }   
     }
         
        
              
             
           
        
    }
    
}
}