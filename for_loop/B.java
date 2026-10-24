enum A{

}

class B{
    public static void main(String[] args){
        A b = new A();
    }
}


// B.java:7: error: enum types may not be instantiated
//         A b = new A();
//               ^
// 1 error
// error: compilation failed