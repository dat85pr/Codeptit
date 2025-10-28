import java.util.*;
import java.io.*;
public class J07004_SokhacnhautrongFile1 {
    public static void main(String[] args) throws Exception{
        Scanner ip = new Scanner(new File("DATA.in"));
        int[] dd = new int[1001];
        while(ip.hasNext()){
            int n = Integer.parseInt(ip.next());
            dd[n]++;           
        }
        for(int i = 0; i <= 1000; i++){
            if(dd[i] > 0){
                System.out.println(i + " " + dd[i]);
            }
        }
    }
}   