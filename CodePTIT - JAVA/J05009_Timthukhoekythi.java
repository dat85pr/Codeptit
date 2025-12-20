import java.util.*;
import java.util.Arrays;
import java.io.File;
import java.io.FileNotFoundException;
class Sinhvien implements Comparable<Sinhvien>{
    private String name, ns;
    private int id;
    private float ovr;

    public Sinhvien(int id, String name, String ns, float ovr) {
        this.id = id;
        this.name = name;
        this.ns = ns;
        this.ovr = ovr;
    }

    public float getOvr() {
        return ovr;
    }

    public int compareTo(Sinhvien other){
        return Float.compare(this.ovr, other.ovr);
    }
    public String toString(){
        return String.format("%d %s %s %.1f", id, name, ns, ovr);
    }
}
public class J05009_Timthukhoekythi {
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        float max = 0;
        Sinhvien[] ds = new Sinhvien[t];
        for(int i = 0; i < t; i++){
            ip.nextLine();
            String name = ip.nextLine();
            String ns=  ip.nextLine();
            float d1 = ip.nextFloat();
            float d2 = ip.nextFloat();
            float d3 = ip.nextFloat();
            float ovr = d1 + d2 + d3;
            if(ovr > max){
                max = ovr;
            }
            ds[i] = new Sinhvien(i + 1, name, ns, ovr);
        }
        Arrays.sort(ds);
        for(Sinhvien x : ds){
            if(x.getOvr() == max){
                System.out.println(x);
            }
        }
    }
}   