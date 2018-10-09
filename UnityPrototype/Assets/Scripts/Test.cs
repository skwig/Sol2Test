
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using UnityEngine;

public class Test : MonoBehaviour
{
    [DllImport("Sol2Test")]
    private static extern int call_lua(string fileName, int a, int b);

    public int val1;
    public int val2;

    // Use this for initialization
    void Start()
    {
        var result = call_lua("Assets/LuaScripts/foo.lua", val1, val2);
        Debug.Log("Result " + result.ToString());
    }

    
    // Update is called once per frame
    void Update()
    {
    }
}
