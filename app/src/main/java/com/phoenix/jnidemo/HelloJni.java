package com.phoenix.jnidemo;

/**
 * 用来与C交互
 * Created by Phoenix on 2017/3/27.
 */

public class HelloJni {
    static {
        System.loadLibrary("hello");
    }
    public native String sayHello();
}
