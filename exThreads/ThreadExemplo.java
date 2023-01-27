public class ThreadExemplo{
    public static void main(String args[]){
        Thread t01 = new Thread(new runThreads());
        Thread t02 = new Thread(new runThreads());
        t01.run();
        t02.run();
    }
}