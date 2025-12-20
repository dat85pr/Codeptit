import java.util.*;
class Sophuc{
    private int thuc, ao;
    public Sophuc(int thuc, int ao){
        this.thuc = thuc;
        this.ao = ao;
    }
    public Sophuc getC(Sophuc other){
        Sophuc c = new Sophuc(0, 0);
        Sophuc d = new Sophuc(0, 0);
        c.thuc = this.thuc + other.thuc;
        c.ao = this.ao + other.ao;
        d.thuc = c.thuc * this.thuc - c.ao * this.ao;
        d.ao = c.thuc * this.ao + c.ao * this.thuc;
        return d;
    }
    public Sophuc getD(Sophuc other){
        Sophuc c = new Sophuc(this.thuc + other.thuc, this.ao + other.ao);
        Sophuc d = new Sophuc(0, 0);
        d.thuc = c.thuc * c.thuc - c.ao * c.ao;
        d.ao = c.thuc * c.ao * 2;
        return d;
    }
    public String toString(){
        if(ao < 0){
            return String.format("%d - %di", thuc, -ao);
        }
        return String.format("%d + %di", thuc, ao);
    }
}
public class J04018_Sophuc{
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        while(t-- > 0){
            Sophuc a = new Sophuc(ip.nextInt(), ip.nextInt());
            Sophuc b = new Sophuc(ip.nextInt(), ip.nextInt());
            Sophuc d = a.getC(b);
            Sophuc e = a.getD(b);
            System.out.println(d + ", " + e);
        }
    }
}   