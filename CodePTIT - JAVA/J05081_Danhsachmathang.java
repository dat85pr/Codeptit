import java.util.*;
import java.util.Arrays;
class Mathang implements Comparable<Mathang>{
    private String id, name, dvi;
    private int buy, sell, benefit;

    public Mathang(int id, String name, String dvi, int buy, int sell) {
        this.id = "MH" + String.format("%03d", id);
        this.name = name;
        this.dvi = dvi;
        this.buy = buy;
        this.sell = sell;
        this.benefit = sell - buy;
    }
    @Override
    public int compareTo(Mathang other){
        if((this.sell - this.buy) == (other.sell - other.buy)){
            return other.id.compareTo(this.id);
        }
        return (this.sell - this.buy) - (other.sell - other.buy);
        
                    
    }
    public String toString(){
        return String.format("%s %s %s %d %d %d", id , name, dvi, buy, sell, benefit);
    }
            
}
public class J05081_Danhsachmathang {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        ip.nextLine();
        Mathang[] ds = new Mathang[t];
        for(int i = 0; i < t; i++){
            String name = ip.nextLine();
            String dvi = ip.nextLine();
            int buy = ip.nextInt();
            int sell = ip.nextInt();
            ip.nextLine();
            ds[i] = new Mathang(i + 1, name, dvi, buy, sell);
        }
        Arrays.sort(ds);
        for(int i = t - 1; i >= 0; i--){
            System.out.println(ds[i]);
        }
    }
}   