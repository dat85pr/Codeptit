import java.util.*;
import java.util.Arrays;
class Time implements Comparable<Time>{
    private String id, name, in, out;
    private int hi, ho, mi, mo, hour, min;

    public Time(String id, String name, String in, String out) {
        this.id = id;
        this.name = name;
        this.in = in;
        this.out = out;
        hi = Integer.parseInt(in.substring(0, 2));
        mi = Integer.parseInt(in.substring(3));
        ho = Integer.parseInt(out.substring(0, 2));
        mo = Integer.parseInt(out.substring(3));
        hour = ho - hi;
        if(mo < mi){
            min = mo - mi + 60;
            hour -= 1;
        }
        else{
            min = mo - mi;
        }
    }
    @Override
    public int compareTo(Time other){
        if(this.hour == other.hour){
            return other.min - this.min;
        }
        return other.hour - this.hour;
    }
    @Override
    public String toString(){
        return String.format("%s %s %d gio %d phut", id, name, hour, min);
    }
}
public class J05011_Tinhgio {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        ip.nextLine();
        Time[] ds = new Time[t];
        for(int i = 0; i < t; i++){
            String id = ip.nextLine();
            String name = ip.nextLine();
            String in = ip.nextLine();
            String out = ip.nextLine();
            ds[i] = new Time(id, name, in, out);
        }
        Arrays.sort(ds);
        for(Time x : ds){
            System.out.println(x);
        }
    }
}   