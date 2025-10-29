
public class TryException {
    public static void main(String[] args) {
        int pembilang = 3;
        int penyebut = 0;
        try{
            int hasil = pembilang/penyebut;
            System.out.println("Hasil pembagian adalah "+hasil);
        } catch (ArithmeticException e){
            System.out.println("Error : Tidak dapat membagi dengan nol");
        } finally {
            System.out.println("Blok finally selalu dieksekusi");
        }
    }
    
}
