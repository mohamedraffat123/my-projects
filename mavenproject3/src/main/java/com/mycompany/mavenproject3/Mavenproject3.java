

package com.mycompany.mavenproject3;

/**
 *
 * @author MF
 */
import java.util.Scanner;
public class Mavenproject3 {
static  Scanner input=new Scanner(System.in);
    public static void main(String[] args) {
        
        
            
        
        System.out.println("pleaese enter the number of row");
        int[][] matrix1=new int[100][100];
        
        int b,c,s=0;
        b=input.nextInt();
         System.out.println("pleaese enter the number of column");
        c=input.nextInt();        
        for(int i=0;i<b;i++){
            for(int y=0;y<c;y++){
                System.out.println("enter the number"+ (i+1) +"and" +(y+1));
               matrix1[i][y]=input.nextInt();
               s+=matrix1[i][y];
            }
        }
        for(int o=0;o<b;o++){
            for(int u=0;u<c;u++){
                System.out.print(matrix1[o][u]+"\t");
            }
            System.out.println();
        }
           
        System.out.println(" the sum of this matrix is ====> \t"+s);
    }
      
}


