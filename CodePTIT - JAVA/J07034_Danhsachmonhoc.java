import java.io.*;
import java.util.*;
import java.text.*;
class Mon implements Comparable<Mon>{
    private String id, name;
    private int tc;

    public Mon(String id, String name, int tc) {
        this.id = id;
        this.name = name;
        this.tc = tc;
    }
    public int compareTo(Mon other){
        return this.name.compareTo(other.name);
    }
    public String toString(){
        return String.format("%s %s %d", id, name, tc);
    }
}
public class J07034_Danhsachmonhoc {
    public static void main(String[] args) throws IOException{
        Scanner ip = new Scanner(new File("MONHOC.in"));
        int t = ip.nextInt();
        ip.nextLine();
        Mon[] ds = new Mon[t];
        for(int i = 0; i < t; i++){
            String name = ip.nextLine();
            String id = ip.nextLine();
            int tc = Integer.parseInt(ip.nextLine());
            ds[i] = new Mon(name, id, tc);
        }
        Arrays.sort(ds);
        for(Mon x : ds){
            System.out.println(x);
        }
    }
}