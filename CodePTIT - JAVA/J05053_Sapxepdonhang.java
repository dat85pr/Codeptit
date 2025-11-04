import java.util.*;
import java.io.*;
import java.util.Arrays;
class Mathang implements Comparable<Mathang>{
   private String name, id;
   private long cost, quantity; 

    public Mathang(String name, String id, long cost, long quantity) {
        this.name = name;
        this.id = id;
        this.cost = cost;
        this.quantity = quantity;
    }
    public String getSTT(){
        return id.substring(1, 4);
    }
    public long getSale(){
        long x, sum;
        if(id.charAt(id.length() - 1) == '1') x = 1;
        else x = 2;
        if(x == 1){
            sum = cost * quantity / 2;
        }
        else sum = cost * quantity * 3 / 10;
        return sum;
    }
    public long getMoney(){
        long mo = cost * quantity;
        return mo - getSale();
    }
    @Override
    public int compareTo(Mathang other){
        return this.getSTT().compareTo(other.getSTT());
    }
    @Override
    public String toString(){
        return String.format("%s %s %s %d %d", name, id, getSTT(), getSale(), getMoney());
    }
}
public class J05052_Tracuudonhang {
    public static void main(String[] args) throws Exception{
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        ip.nextLine();
        Mathang[] ds = new Mathang[t];
        for(int i = 0; i < t; i++){
            String name = ip.nextLine();
            String id = ip.nextLine();
            long cost = ip.nextLong();
            long quan = ip.nextLong();
            ip.nextLine();
            ds[i] = new Mathang(name, id, cost, quan);
        }
        Arrays.sort(ds);
        for(Mathang x : ds){
            System.out.println(x);
        }
    }
}   