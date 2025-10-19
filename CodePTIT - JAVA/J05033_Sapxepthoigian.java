import java.util.*;
import java.util.Arrays;
class Time implements Comparable<Time>{
    private int hour, min, sec;

    public Time(int hour, int min, int sec) {
        this.hour = hour;
        this.min = min;
        this.sec = sec;
    }
    @Override
    public int compareTo(Time other){
        if(this.hour == other.hour){
            if(this.min == other.min){
                return this.sec - other.sec;
            }
            return this.min - other.min;
        }
        return this.hour - other.hour;
    }
    public String toString(){
        return hour + " " + min + " " + sec;
    }
}
public class J05033_Sapxepthoigian {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        Time[] ds = new Time[t];
        for(int i = 0; i < t; i++){
            int a = ip.nextInt();
            int b = ip.nextInt();
            int c = ip.nextInt();
            ds[i] = new Time(a, b, c);
        }
        Arrays.sort(ds);
        for(Time x : ds){
            System.out.println(x);
        }
    }
}   