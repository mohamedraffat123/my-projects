/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication4;



/**
 *
 * @author MF 
 */
class student{
private String name;
private double id;
private String gpa;
    boolean toString;

public void set_name( String p){
    name=p;
}
public void set_id( double r){
    id=r;
}
public void set_gpa(String f){
    gpa=f;
}
public String get_name(){
    return name;
}
public double get_id(){
    return id;
}
public String get_gpa(){
    return gpa;
}
public String toString(){
    return null;
   
}


    
}


public class JavaApplication4 {

    /**
     * @param args the command line arguments
     */
    
//    public static int c=50;
//    enum Season 
//{
//    Winter,Summer,Spring,Autumn;
//   int a=c;
//}
//    enum Flavor
//    {
//        vanilla(10), chocolate(20), strawberry(30), fudgeRipple(40), coffee(15),
//    rockyRoad(25), mintChocolateChip(35), cookieDough(50);
//    private int price;
//    Flavor(int p){
//        price= p;
//    }
//    int get_price(){
//        return price;
//    }
//    }

    public static void main(String[] args) {
        // TODO code application logic here
//        Flavor cone1,cone2,cone3,cone4;
//Season time1, time2;
//cone1=Flavor.chocolate;
//cone3=Flavor.coffee;
//cone2=Flavor.vanilla;
//cone4=Flavor.strawberry;
//time1=Season.Winter;
//time2=Season.Summer;
//System.out.println("i love the "+time1+" and i love icecream espacially with"+cone2);
//System.out.println(" the ordinal of the enumeted for  season "+time1.ordinal()+" the ordinal of the enumeted for flavor is "+cone2.ordinal());
//System.out.println();
//
//System.out.println("but in "+time2 +" i love icecream with "+cone3+" and "+cone1);
//System.out.println("the ordinal for Season is"+time2.ordinal()+" the ordinal for flavor is"+cone3.ordinal());
//System.out.println(" the name of each time i used is "+time1+" and "+time2.name()+" and the name of flavour that i used is "+cone1.name()+" and "+cone3.name()+" and "+cone2.name());
//        System.out.println(" the price of strawaberry is " +cone4.get_price()+"$");
//        
        student s1=new student();
        s1.set_gpa("excellent");
        System.out.println(s1.toString);
        s1.set_id(231903553);
        s1.set_name("mohamed raafat");
        System.out.println(" the name is "+s1.get_name()+" the gpa is "+s1.get_gpa()+" the id is "+s1.get_id());
    }
    
}
