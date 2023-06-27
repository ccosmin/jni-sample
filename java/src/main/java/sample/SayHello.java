package sample;

public class SayHello {
  static {
    System.loadLibrary("lib1");
  }

  public static void main(String[] args) {
    new SayHello().sayHello();
  }

  private native void sayHello();
}
