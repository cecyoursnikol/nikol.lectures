class Inheritanceme {
    
    public  void print(){
        
        System.out.println("This is SuperClass");
    }

    public static void main(String[] args) {
        // Your code here
    }


}


 class Inheritanceyou extends Inheritanceme{

    public static void main(String[] args) {
        

        Inheritanceme Obj = new Inheritanceme();
        System.out.println("Check");

        Obj.print();
    }
    
}
