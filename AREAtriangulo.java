package application;


import java.util.Scanner;

public class Program{
    
   
    
     public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        System.out.println("digite os valores para o triangulo X: ");
        double aX = sc.nextDouble();
        double bX = sc.nextDouble();
        double cX = sc.nextDouble();
       
        System.out.println("Digite os valores para o triangulo Y");
        double aY = sc.nextDouble();
        double bY = sc.nextDouble();
        double cY = sc.nextDouble();

        double p = (aX + bX + cX) /2.0;
        double areaX = Math.sqrt(p * (p - aX) * (p - bX) * (p - cX));
        
         p = (aY + bY + cY) /2.0;
        double areaY= Math.sqrt(p * (p - aY) * (p - bY) * (p - cY));

        

        System.out.printf("area do triangulo X : %.4F%n", areaX);
        System.out.printf("area do triangulo Y : %.4F%n", areaY);

        if(areaX > areaY){
            System.out.println("Area X maior!");
        }else {
            System.out.println("Area Y maior!");
        }
      sc.close();
    }
}