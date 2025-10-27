import java.util.*;
import java.io.*;
public class J07002_Tinhtong {
    public static void main(String[] args) throws Exception{
        Scanner ip = new Scanner(new File("DATA.in"));
        long sum = 0;
        while(ip.hasNext()){
            String s = ip.next();
            try{
                sum += Integer.parseInt(s);
            }
            catch(Exception e){
                
            }
        }
        System.out.println(sum);
    }
}   