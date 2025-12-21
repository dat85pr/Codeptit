import java.util.*;
import java.io.File;
import java.io.FileNotFoundException;

public class J07007_Lietketukhacnhau {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner ip = new Scanner(new File("VANBAN.in"));
        Set<String> se = new HashSet<>();
        while(ip.hasNext()){
            String word = ip.next().toLowerCase();
            se.add(word);
        }
        ip.close();
        for(String x : se){
            System.out.println(x);
        }
    }
}
