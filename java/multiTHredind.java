class thread1 implements Runnable{
    public void run(){
        System.out.println("I am Thread 1");
    }
}
class thread2 implements Runnable{
    public void run(){
        System.out.println("I am Thread 2");
    }
}
class multiTHreding{
    public static void main(String[] args) {
        thread1 bullet1 = new thread1();
        Thread gun1 = new Thread(bullet1);
        
        new thread2();
        Thread gun2 = new Thread(bullet1);
        
        gun1.run();
        gun2.run();

    }
}