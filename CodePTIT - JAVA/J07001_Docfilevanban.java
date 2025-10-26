import java.util.*;
import java.io.File;
import java.io.FileNotFoundException;
public class J07001_Docfilevanban {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner ip = new Scanner(new File("DATA.in"));
        while(ip.hasNext()){
            System.out.println(ip.nextLine());
        }
    }
}   