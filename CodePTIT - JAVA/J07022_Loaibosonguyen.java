import java.io.*;
import java.util.*;

public class J07022_Loaibosonguyen {
    public static void main(String[] args) throws IOException{
        Scanner ip = new Scanner(new File("DATA.in"));
        List<String> ds = new ArrayList<>();
        while(ip.hasNext()){
            String s = ip.next();
            try{
                Integer.parseInt(s);
            } catch(Exception e){
                ds.add(s);
            }
        }
        Collections.sort(ds);
        for(String x : ds){
            System.out.print(x + " ");
        }
    }
}
