<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html lang="en" xml:lang="en" xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="content-type" content="text/html;charset=UTF-8"/>
<link rel="icon" type="image/gif" href="/favicon.gif"/>
<link rel="apple-touch-icon" sizes="120x120" href="touch-icon-iphone-retina.png" />
<link rel="apple-touch-icon" sizes="152x152" href="touch-icon-ipad-retina.png" />
<title>C++ Style Languages: C++, Objective-C, Java, C# - Hyperpolyglot</title>
<style type="text/css" id="internal-style">
@import url(hyperpolyglot.css);
</style>
<meta http-equiv="content-type" content="text/html;charset=UTF-8"/>
<meta http-equiv="content-language" content="en"/>
</head>
<body>
<div id="container-wrap-wrap">
  <div id="container-wrap">
    <div id="container">
      <div id="header">
        <h1><a href="/"><span>Hyperpolyglot</span></a></h1>
      </div>
      <div id="content-wrap">
        <div id="main-content">
<div id="page-title">
                            C++ Style Languages: C++, Objective-C, Java, C#
                        </div>
<div id="page-content">
                        

<p><a name="top" id="top"></a><em>a side-by-side reference sheet</em></p>
<p><a href="#grammar-invocation">grammar and invocation</a> | <a href="#variables-expressions">variables and expressions</a> | <a href="#arithmetic-logic">arithmetic and logic</a> | <a href="#strings">strings</a> | <a href="#regexes">regexes</a> | <a href="#dates-time">dates and time</a> | <a href="#fixed-length-arrays">fixed-length arrays</a> | <a href="#resizable-arrays">resizable arrays</a> | <a href="#tuples">tuples</a> | <a href="#dictionaries">dictionaries</a> | <a href="#functions">functions</a> | <a href="#execution-control">execution control</a> | <a href="#exceptions">exceptions</a> | <a href="#concurrency">concurrency</a> | <a href="#file-handles">file handles</a> | <a href="#files">files</a> | <a href="#file-fmt">file formats</a> | <a href="#directories">directories</a> | <a href="#processes-environment">processes and environment</a> | <a href="#libraries-namespaces">libraries and namespaces</a> | <a href="#user-defined-types">user-defined types</a> | <a href="#generic-types">generic types</a> | <a href="#objects">objects</a> | <a href="#polymorphism">polymorphism</a> | <a href="#reflection">reflection</a> | <a href="#net-web">net and web</a> | <a href="#unit-tests">unit tests</a> | <a href="#debugging-profiling">debugging and profiling</a></p>
<table class="wiki-content-table"><tr><th><a name="general" id="general"></a></th>
<th><a href="#cpp">c++</a></th>
<th><a href="#objective-c">objective c</a></th>
<th><a href="#java">java</a></th>
<th><a href="#c-sharp">c#</a></th>
</tr><tr><td><a name="version-used" id="version-used"></a><a href="#version-used-note">version used</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>g++ 4.6 with -std=c++0x flag</em></span></td>
<td><span style="color: gray"><em>gcc 4.2</em></span></td>
<td><span style="color: gray"><em>java 1.7</em></span></td>
<td><span style="color: gray"><em>mono 2.10 (C# 4.0)</em></span></td>
</tr><tr><td><a name="show-version" id="show-version"></a><a href="#show-version-note">show version</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>$ g++ <span style="white-space: pre-wrap;">--</span>version</td>
<td>$ gcc <span style="white-space: pre-wrap;">--</span>version</td>
<td>$ javac -version</td>
<td>$ mcs <span style="white-space: pre-wrap;">--</span>version</td>
</tr><tr><td><a name="implicit-prologue" id="implicit-prologue"></a><a href="#implicit-prologue-note">implicit prologue</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;iostream&gt;</span><br /><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;string&gt;</span><br /><br /><span style="color: purple">using namespace</span> <span style="color: teal">std</span>;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="grammar-invocation" id="grammar-invocation"></a><a href="#grammar-invocation-note">grammar and invocation</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="hello-world" id="hello-world"></a><a href="#hello-world-note">hello world</a></td>
<td>$ cat hello.cpp<br />
#include &lt;iostream&gt;<br /><br />
using namespace std;<br /><br />
int main(int argc, char<span style="white-space: pre-wrap;">**</span> arg) {<br /><span style="white-space: pre-wrap;">  </span>cout <span style="white-space: pre-wrap;">&lt;&lt;</span> "Hello, World!" <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;<br />
}<br /><br />
$ g++ -std=c++0x hello.cpp<br /><br />
$ ./a.out</td>
<td>$ cat hello.m<br />
#include &lt;stdio.h&gt;<br /><br />
int main(int argc, char <span style="white-space: pre-wrap;">**</span>argv) {<br /><span style="white-space: pre-wrap;">  </span>printf("Hello, World!\n");<br />
}<br /><br />
$ gcc hello.m<br /><br />
$ ./a.out</td>
<td>$ cat Hello.java<br />
public class Hello {<br /><span style="white-space: pre-wrap;">  </span>public static void main(String[] args) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>System.out.println("Hello, World!");<br /><span style="white-space: pre-wrap;">  </span>}<br />
}<br /><br />
$ javac Hello.java<br /><br />
$ java Hello</td>
<td>$ cat hello.cs<br />
using System;<br /><br />
public class Hello {<br /><span style="white-space: pre-wrap;">  </span>public static void Main() {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>Console.WriteLine("Hello, World!");<br /><span style="white-space: pre-wrap;">  </span>}<br />
}<br /><br />
$ mcs hello.cs<br /><br />
$ mono hello.exe</td>
</tr><tr><td><a name="file-suffixes" id="file-suffixes"></a><a href="#file-suffixes-note">file suffixes</a><br /><span style="color: gray"><em>source, header, object file</em></span></td>
<td>foo.cpp<br />
foo.h<br />
foo.o</td>
<td>Foo.m<br />
Foo.h<br />
Foo.o</td>
<td>Foo.java<br /><span style="color: gray"><em>none</em></span><br />
Foo.class<br /><br /><span style="color: gray">Foo.java <em>must define a single top level class</em> Foo</span></td>
<td>Foo.cs<br /><span style="color: gray"><em>none</em></span><br />
Foo.exe <span style="color: gray"><em>or</em></span> Foo.dll<br /><br /><span style="color: gray"><em>although files are often named after a class they contain, this is not required</em></span></td>
</tr><tr><td><a name="block-delimiters" id="block-delimiters"></a><a href="#block-delimiters-note">block delimiters</a></td>
<td>{ }</td>
<td>{ }</td>
<td>{ }</td>
<td>{ }</td>
</tr><tr><td><a name="stmt-terminator" id="stmt-terminator"></a><a href="#stmt-terminator-note">statement terminator</a></td>
<td>;</td>
<td>;</td>
<td>;</td>
<td>;</td>
</tr><tr><td><a name="top-level-stmt" id="top-level-stmt"></a><a href="#top-level-stmt-note">top level statements</a></td>
<td><span style="color: gray"><em>A source file will normally have</em> #include <em>directives at the top, followed by declarations, definitions, and namespaces containing declarations and definitions.<br /><br />
After the preprocessor has finished processing a source file, the compilation unit will only contain declarations, definitions, and namespaces at the top level.</em></span></td>
<td></td>
<td><span style="color: gray"><em>each file contains the following elements in order:<br /><br />
(1) optional package directive<br />
(2) zero or more import directives<br />
(3) one public class definition and zero or more private class definitions</em></span></td>
<td></td>
</tr><tr><td><a name="eol-comment" id="eol-comment"></a><a href="#eol-comment-note">end-of-line comment</a></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> comment</span></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> comment</span></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> comment</span></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> comment</span></td>
</tr><tr><td><a name="multiple-line-comment" id="multiple-line-comment"></a><a href="#multiple-line-comment-note">multiple line comment</a></td>
<td><span style="color: gray">/* comment<br />
another comment */</span></td>
<td><span style="color: gray">/* comment<br />
another comment */</span></td>
<td><span style="color: gray">/* comment<br />
another comment */</span></td>
<td><span style="color: gray">/* comment<br />
another comment */</span></td>
</tr><tr><th colspan="5"><a name="variables-expressions" id="variables-expressions"></a><a href="#variables-expressions-note">variables and expressions</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="local-var" id="local-var"></a><a href="#local-var-note">local variable</a></td>
<td><span style="color: green">int</span> <span style="color: peru">i</span>;<br /><span style="color: green">int</span> <span style="color: peru">j</span> = 3;<br /><span style="color: green">int</span> <span style="color: peru">k</span>(7);</td>
<td>int i;<br />
int j = 3;</td>
<td><span style="color: green">int</span> <span style="color: peru">i</span>;<br /><span style="color: green">int</span> <span style="color: peru">j</span> = 3;</td>
<td>int i;<br />
int j = 3;</td>
</tr><tr><td><a name="uninitialized-local-var" id="uninitialized-local-var"></a><a href="#uninitialized-local-var-note">uninitialized local variable</a></td>
<td><span style="color: gray"><em>The behavior is undefined.<br /><br />
Most implementations do not zero-initialize stack variables, so the value will be whatever happened to be in memory.</em></span></td>
<td><span style="color: gray"><em>behavior is undefined.<br /><br />
Most implementations do not zero-initialize stack variables, so the value will be whatever happened to be in memory.</em></span></td>
<td><span style="color: gray"><em>zero initialized</em></span></td>
<td><span style="color: gray"><em>compiler prevents use of uninitialized local variable</em></span></td>
</tr><tr><td><a name="global-var" id="global-var"></a><a href="#global-var-note">global variable</a></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> in foo.cpp and outside of any function<br /><span style="white-space: pre-wrap;">//</span> or class definition:</span><br /><span style="color: green">int</span> <span style="color: peru">foo</span> = 7;<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> in bar.cpp and outside of any function<br /><span style="white-space: pre-wrap;">//</span> or class definition:</span><br /><span style="color: purple">extern</span> <span style="color: green">int</span> <span style="color: peru">foo</span>;</td>
<td><span style="color: gray"><em>in</em> foo.cpp <em>outside of any function or class definition:</em></span><br />
int foo = 7;<br /><br /><span style="color: gray"><em>in</em> bar.cpp <em>outside of any function or class definition:</em></span><br />
extern int foo;</td>
<td><span style="color: gray"><em>foo/Foo.java:</em></span><br /><span style="color: purple">package</span> <span style="color: teal">foo</span>;<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> globals must be declared inside a<br /><span style="white-space: pre-wrap;">//</span> class:</span><br /><span style="color: purple">public class</span> <span style="color: green">Foo</span> {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">public static</span> <span style="color: green">int</span> <span style="color: peru">bar</span>;<br />
}<br /><br /><span style="color: gray"><em>UseFoo.java:</em></span><br /><span style="color: purple">import</span> <span style="color: teal">foo</span>.<span style="color: green">Foo</span>;<br /><br /><span style="color: purple">public class</span> <span style="color: green">UseFoo</span> {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">public static</span> <span style="color: green">void</span> <span style="color: mediumblue">main</span>(<span style="color: green">String</span>[] <span style="color: peru">args</span>) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>System.out.println(Foo.bar);<br /><span style="white-space: pre-wrap;">  </span>}<br />
}</td>
<td></td>
</tr><tr><td><a name="uninitialized-global-var" id="uninitialized-global-var"></a><a href="#uninitialized-global-var-note">uninitialized global variable</a></td>
<td><span style="color: gray"><em>Zero initialized: numeric types and pointers are set to zero. Classes, structs, and arrays have all of their members or elements zero-initialized recursively.</em></span></td>
<td></td>
<td><span style="color: gray"><em>Zero initialized.</em></span></td>
<td></td>
</tr><tr><td><a name="write-once-var" id="write-once-var"></a><a href="#write-once-var-note">write-once variable</a></td>
<td><span style="color: purple">const</span> <span style="color: type">int</span> <span style="color: peru">i</span> = 7;</td>
<td>const int i = 7;</td>
<td><span style="color: purple">final</span> <span style="color: green">int</span> <span style="color: peru">i</span> = 7;</td>
<td>const int i = 7;</td>
</tr><tr><td><a name="assignment" id="assignment"></a><a href="#assignment-note">assignment</a></td>
<td><span style="color: green">int</span> <span style="color: peru">n</span>;<br />
n = 3;</td>
<td></td>
<td><span style="color: green">int</span> <span style="color: peru">n</span>;<br />
n = 3;</td>
<td></td>
</tr><tr><td><a name="compound-assignment" id="compound-assignment"></a><a href="#compound-assignment-note">compound assignment</a><br /><span style="color: gray"><em>arithmetic, bit</em></span></td>
<td>+= -= *= /= %=<br /><span style="white-space: pre-wrap;">&lt;&lt;= &gt;&gt;= </span>&amp;= ^= |=</td>
<td></td>
<td>+= -= *= /= %=<br /><span style="white-space: pre-wrap;">&lt;&lt;= &gt;&gt;= </span>&amp;= ^= |=<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">&gt;&gt;=</span> <em>is arithmetic right shift,</em> <span style="white-space: pre-wrap;">&gt;&gt;&gt;=</span> <em>is logical right shift</em></span></td>
<td></td>
</tr><tr><td><a name="incr-decr" id="incr-decr"></a><a href="#incr-decr-note">increment and decrement</a></td>
<td><span style="color: green">int</span> <span style="color: peru">n</span> = 1;<br /><span style="color: green">int</span> <span style="color: peru">one</span> = n++;<br /><span style="color: green">int</span> <span style="color: peru">three</span> = ++n;<br /><span style="color: green">int</span> <span style="color: peru">two</span> = <span style="white-space: pre-wrap;">--</span>n;</td>
<td></td>
<td><span style="color: green">int</span> <span style="color: peru">n</span> = 1;<br /><span style="color: green">int</span> <span style="color: peru">one</span> = n++;<br /><span style="color: green">int</span> <span style="color: peru">three</span> = ++n;<br /><span style="color: green">int</span> <span style="color: peru">two</span> = <span style="white-space: pre-wrap;">--</span>n;</td>
<td></td>
</tr><tr><td><a name="addr" id="addr"></a><a href="#addr-note">address</a></td>
<td><span style="color: green">int</span> <span style="color: peru">i</span>(3);<br /><span style="color: green">int</span>* <span style="color: peru">ip</span> = &amp;i;</td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
</tr><tr><td><a name="dereference" id="dereference"></a><a href="#dereference-note">dereference</a></td>
<td><span style="color: green">int</span> <span style="color: peru">i</span>(3);<br /><span style="color: green">int</span>* <span style="color: peru">ip</span> = &amp;i;<br /><span style="color: green">int</span> <span style="color: peru">i2</span> = *ip + 1;</td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
</tr><tr><td><a name="type-size" id="type-size"></a><a href="#type-size-note">type size</a></td>
<td>cout <span style="white-space: pre-wrap;">&lt;&lt;</span> <span style="color: purple">sizeof</span>(<span style="color: green">int</span>) <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;<br />
cout <span style="white-space: pre-wrap;">&lt;&lt;</span> <span style="color: purple">sizeof</span>(<span style="color: green">int</span>*) <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;</td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
</tr><tr><td><a name="addr-arith" id="addr-arith"></a><a href="#addr-arith-note">address arithmetic</a></td>
<td></td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
</tr><tr><td><a name="unique-ptr" id="unique-ptr"></a><a href="#unique-ptr-note">unique pointer</a></td>
<td></td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
</tr><tr><td><a name="ref-cnt-ptr" id="ref-cnt-ptr"></a><a href="#ref-cnt-ptr-note">reference count pointer</a></td>
<td></td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
</tr><tr><td><a name="weak-ptr" id="weak-ptr"></a><a href="#weak-ptr-note">weak pointer</a></td>
<td></td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
</tr><tr><td><a name="allocate-heap" id="allocate-heap"></a><a href="#allocate-heap-note">allocate heap</a></td>
<td><span style="color: green">int</span>* <span style="color: peru">ip</span> = <span style="color: purple">new</span> <span style="color: green">int</span>;</td>
<td>#include &lt;stdlib.h&gt;<br /><br />
int *ip = malloc(sizeof(int));</td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> Primitive types are stack allocated.<br /><span style="white-space: pre-wrap;">//</span> Use a wrapper class to store on the<br /><span style="white-space: pre-wrap;">//</span> heap:</span><br /><span style="color: green">Integer</span> <span style="color: peru">i</span> = <span style="color: purple">new</span> <span style="color: green">Integer</span>(0);</td>
<td>object i = 0;</td>
</tr><tr><td><a name="uninitialized-heap" id="uninitialized-heap"></a><a href="#uninitialized-heap-note">uninitialized heap</a></td>
<td><span style="color: gray"><em>Memory allocated by the</em> new <em>operator is zero-initialized.</em></span></td>
<td></td>
<td><span style="color: gray"><em>zero-initialized</em></span></td>
<td></td>
</tr><tr><td><a name="free-heap" id="free-heap"></a><a href="#free-heap-note">free heap</a></td>
<td><span style="color: purple">delete</span> i;</td>
<td>#include &lt;stdlib.h&gt;<br /><br />
free(ip);</td>
<td><span style="color: gray"><em>garbage collected</em></span></td>
<td><span style="color: gray"><em>garbage collected</em></span></td>
</tr><tr><td><a name="null" id="null"></a><a href="#null-note">null</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: teal">NULL</span></td>
<td>NULL</td>
<td><span style="color: teal">null</span></td>
<td>null</td>
</tr><tr><td><a name="coalesce" id="coalesce"></a><a href="#coalesce-note">coalesce</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: green">string</span> <span style="color: peru">s1</span> = s2 <span style="white-space: pre-wrap;">||</span> <span style="color: maroon">"was null"</span>;</td>
<td>NSString *s1 = s2 <span style="white-space: pre-wrap;">||</span> @"was null";</td>
<td><span style="color: green">String</span> <span style="color: peru">s1</span> = s2 == <span style="color: teal">null</span> ? <span style="color: maroon">"was null"</span> : s2;</td>
<td>string s1 = s2 ?? "was null";</td>
</tr><tr><th colspan="5"><a name="arithmetic-logic" id="arithmetic-logic"></a><a href="#arithmetic-logic-note">arithmetic and logic</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="boolean-type" id="boolean-type"></a><a href="#boolean-type-note">boolean type</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: green">bool</span></td>
<td>BOOL</td>
<td><span style="color: green">boolean</span></td>
<td>bool</td>
</tr><tr><td><a name="true-false" id="true-false"></a><a href="#true-false-note">true and false</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: teal">true false</span></td>
<td>YES NO</td>
<td><span style="color: teal">true false</span></td>
<td>true false</td>
</tr><tr><td><a name="falsehoods" id="falsehoods"></a><a href="#falsehoods-note">falsehoods</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: teal">false</span> 0 0.0 <span style="color: teal">NULL</span></td>
<td>0 0.0 NULL</td>
<td><span style="color: teal">false</span></td>
<td>false</td>
</tr><tr><td><a name="logical-op" id="logical-op"></a><a href="#logical-op-note">logical operators</a></td>
<td>&amp;&amp; <span style="white-space: pre-wrap;">||</span> !<br /><span style="color: purple">and or not</span></td>
<td>&amp;&amp; <span style="white-space: pre-wrap;">||</span> !</td>
<td>&amp;&amp; <span style="white-space: pre-wrap;">||</span> !</td>
<td>&amp;&amp; <span style="white-space: pre-wrap;">||</span> !</td>
</tr><tr><td><a name="relational-op" id="relational-op"></a><a href="#relational-op-note">relational operators</a></td>
<td>== != &lt; &gt; &lt;= &gt;=</td>
<td>== != &lt; &gt; &lt;= &gt;=</td>
<td>== != &lt; &gt; &lt;= &gt;=</td>
<td>== != &lt; &gt; &lt;= &gt;=</td>
</tr><tr><td><a name="int-type" id="int-type"></a><a href="#int-type-note">integer type</a></td>
<td><span style="color: green">signed char</span> <span style="color: peru">n1</span>;<span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;"> </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 1+ bytes</span><br /><span style="color: green">short int</span> <span style="color: peru">n2</span>;<span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;"> </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 2+ bytes</span><br /><span style="color: green">int</span> <span style="color: peru">n3</span>;<span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;"> </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 2+ bytes</span><br /><span style="color: green">long int</span> <span style="color: peru">n4</span>;<span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 4+ bytes</span><br /><span style="color: green">long long int</span> <span style="color: peru">n5</span>;<span style="white-space: pre-wrap;"> </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 4+ bytes</span></td>
<td>signed char <span style="color: gray"><em>1+ byte</em></span><br />
short int <span style="color: gray"><em>2+ bytes</em></span><br />
int <span style="color: gray"><em>2+ bytes</em></span><br />
long int <span style="color: gray"><em>4+ bytes</em></span><br />
long long int <span style="color: gray"><em>4+ bytes</em></span></td>
<td><span style="color: green">byte</span> <span style="color: peru">n1</span>;<span style="white-space: pre-wrap;">  </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 1 byte</span><br /><span style="color: green">short</span> <span style="color: peru">n2</span>; <span style="color: gray"><span style="white-space: pre-wrap;">//</span> 2 bytes</span><br /><span style="color: green">int</span> <span style="color: peru">n3</span>;<span style="white-space: pre-wrap;">   </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 4 bytes</span><br /><span style="color: green">long</span> <span style="color: peru">n4</span>;<span style="white-space: pre-wrap;">  </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 8 bytes</span></td>
<td>sbyte <span style="color: gray"><em>1 byte</em></span><br />
short <span style="color: gray"><em>2 bytes</em></span><br />
int <span style="color: gray"><em>4 bytes</em></span><br />
long <span style="color: gray"><em>8 bytes</em></span></td>
</tr><tr><td><a name="unsigned-type" id="unsigned-type"></a><a href="#unsigned-type-note">unsigned type</a></td>
<td><span style="color: green">unsigned char</span> <span style="color: peru">n1</span>;<span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 1+ bytes</span><br /><span style="color: green">unsigned short int</span> <span style="color: peru">n2</span>;<span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;"> </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 2+ bytes</span><br /><span style="color: green">unsigned int</span> <span style="color: peru">n3</span>;<span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;"> </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 2+ bytes</span><br /><span style="color: green">unsigned long int</span> <span style="color: peru">n4</span>;<span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 4+ bytes</span><br /><span style="color: green">unsigned long long int</span> <span style="color: peru">n5</span>; <span style="color: gray"><span style="white-space: pre-wrap;">//</span> 4+ bytes</span></td>
<td>unsigned char: 8+<br />
unsigned short int <span style="color: gray"><em>2 bytes+</em></span><br />
unsigned int <span style="color: gray"><em>2 bytes+</em></span><br />
unsigned long int <span style="color: gray"><em>4+ bytes</em></span><br />
unsigned long long int <span style="color: gray"><em>4+ bytes</em></span></td>
<td><span style="color: green">char</span> <span style="color: peru">n1</span>;<span style="white-space: pre-wrap;">  </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span>2 bytes</span></td>
<td>byte <span style="color: gray"><em>1 byte</em></span><br />
ushort <span style="color: gray"><em>2 bytes</em></span><br />
uint <span style="color: gray"><em>4 bytes</em></span><br />
ulong <span style="color: gray"><em>8 bytes</em></span></td>
</tr><tr><td><a name="float-type" id="float-type"></a><a href="#float-type-note">float type</a></td>
<td><span style="color: green">float</span> <span style="color: peru">x1</span>;<span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;"> </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 4 bytes</span><br /><span style="color: green">double</span> <span style="color: peru">x2</span>;<span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 8 bytes</span><br /><span style="color: green">long double</span> <span style="color: peru">x3</span>; <span style="color: gray"><span style="white-space: pre-wrap;">//</span> 16 bytes</span></td>
<td>float<br />
double<br />
long double</td>
<td><span style="color: green">float</span> <span style="color: peru">x1</span>;<span style="white-space: pre-wrap;">  </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 4 bytes</span><br /><span style="color: green">double</span> <span style="color: peru">x2</span>; <span style="color: gray"><span style="white-space: pre-wrap;">//</span> 8 bytes</span></td>
<td>float <span style="color: gray"><em>4 bytes</em></span><br />
double <span style="color: gray"><em>8 bytes</em></span></td>
</tr><tr><td><a name="fixed-type" id="fixed-type"></a><a href="#fixed-type-note">fixed type</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>decimal <span style="color: gray"><em>12 bytes</em></span></td>
</tr><tr><td><a name="arithmetic-op" id="arithmetic-op"></a><a href="#arithmetic-op-note">arithmetic operators</a></td>
<td>+ - * / %</td>
<td>+ - * / %</td>
<td>+ - * / %</td>
<td>+ - * / %</td>
</tr><tr><td><a name="int-div" id="int-div"></a><a href="#int-div-note">integer division</a></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> evaluates to 2:</span><br />
7 / 3</td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> evaluates to 2:</span><br />
7 / 3</td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> evaluates to 2:</span><br />
7 / 3</td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> evaluates to 2:</span><br />
7 / 3</td>
</tr><tr><td><a name="int-div-zero" id="int-div-zero"></a><a href="#int-div-zero-note">integer division by zero</a></td>
<td><span style="color: gray"><em>process sent a</em></span> SIGFPE <span style="color: gray"><em>signal</em></span></td>
<td><span style="color: gray"><em>process sent a</em></span> SIGFPE <span style="color: gray"><em>signal</em></span></td>
<td><span style="color: gray"><em>throws</em></span> java.lang.ArithmeticException</td>
<td><span style="color: gray"><em>Syntax error if divisor is a constant. Otherwise throws</em></span> System.DivideByZeroException</td>
</tr><tr><td><a name="float-div" id="float-div"></a><a href="#float-div-note">float division</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>7 / <span style="color: purple">static_cast</span>&lt;<span style="color: green">float</span>&gt;(3)</td>
<td>7 / (float)3</td>
<td>7 / (<span style="color: green">float</span>)3</td>
<td>7 / (float)3</td>
</tr><tr><td><a name="float-div-zero" id="float-div-zero"></a><a href="#float-div-zero-note">float division by zero</a><br /><span style="color: gray"><em>dividend is positive, zero, negative</em></span></td>
<td>inf<br />
nan<br />
-inf<br /><br /><span style="color: gray"><em>There are no portably defined literals or constants for the above values.</em></span></td>
<td>inf<br />
nan<br />
-inf<br /><br /><span style="color: gray"><em>there are no portably defined literals or constants for the above values.</em></span></td>
<td><span style="color: teal">Float</span>.POSITIVE_INFINITY<br /><span style="color: teal">Float</span>.NaN<br /><span style="color: teal">Float</span>.NEGATIVE_INFINITY<br /><br /><span style="color: gray"><em>constants with same names defined in</em></span> <span style="color: teal">Double</span></td>
<td>float.PositiveInfinity<br />
float.NaN<br />
float.NegativeInfinity<br /><br /><span style="color: gray"><em>constants with same names defined in</em></span> double</td>
</tr><tr><td><a name="power" id="power"></a><a href="#power-note">power</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;cmath&gt;</span><br /><br /><span style="color: green">double</span> <span style="color: peru">x</span> = pow(2.0, 32.0);</td>
<td>#include &lt;math.h&gt;<br /><br />
pow(2.0, 32.0);</td>
<td>Math.pow(2.0, 32.0);</td>
<td>System.Math.Pow(2.0, 32.0);</td>
</tr><tr><td><a name="sqrt" id="sqrt"></a><a href="#sqrt-note">sqrt</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;cmath&gt;</span><br /><br /><span style="color: green">double</span> <span style="color: peru">x</span> = sqrt(2);</td>
<td>#include &lt;math.h&gt;<br /><br />
sqrt(2)</td>
<td>Math.sqrt(2)</td>
<td>Math.Sqrt(2)</td>
</tr><tr><td><a name="sqrt-negative-one" id="sqrt-negative-one"></a><a href="#sqrt-negative-one-note">sqrt -1</a></td>
<td>nan</td>
<td>nan</td>
<td><span style="color: teal">Double</span>.NaN</td>
<td>double.NaN</td>
</tr><tr><td><a name="transcendental-func" id="transcendental-func"></a><a href="#transcendental-func-note">transcendental functions</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;cmath&gt;</span><br /><br />
exp log log2 log10<br />
sin cos tan<br />
asin acos atan<br />
atan2</td>
<td>#include &lt;math.h&gt;<br /><br />
exp log log2 log10<br />
sin cos tan<br />
asin acos atan<br />
atan2</td>
<td>Math.exp Math.log <span style="color: gray"><em>none</em></span> Math.log10<br />
Math.sin Math.cos Math.tan<br />
Math.asin Math.acos Math.atan<br />
Math.atan2</td>
<td>using System;<br /><span style="white-space: pre-wrap;"> </span><br />
Math.Exp Math.Log <span style="color: gray"><em>none</em></span> Math.Log10<br />
Math.Sin Math.Cos Math.Tan<br />
Math.Asin Math.Acos Math.Atan<br />
Math.Atan2</td>
</tr><tr><td><a name="transcendental-const" id="transcendental-const"></a><a href="#transcendental-const-note">transcendental constants</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;cmath&gt;</span><br /><br /><span style="color: green">double</span> <span style="color: peru">e</span> = M_E;<br /><span style="color: green">double</span> <span style="color: peru">pi</span> = M_PI;</td>
<td>#include &lt;math.h&gt;<br /><br />
M_E<br />
M_PI</td>
<td><span style="color: teal">Math</span>.E<br /><span style="color: teal">Math</span>.PI</td>
<td>System.Math.E<br />
System.Math.PI</td>
</tr><tr><td><a name="float-truncation" id="float-truncation"></a><a href="#float-truncation-note">float truncation</a><br /><span style="color: gray"><em>towards zero, to nearest integer, towards -∞, towards ∞</em></span></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;cmath&gt;</span><br /><span style="white-space: pre-wrap;"> </span><br /><span style="color: green">double</span> <span style="color: peru">x</span> = 3.7;<br /><span style="white-space: pre-wrap;"> </span><br /><span style="color: green">long</span> <span style="color: peru">trnc</span> = <span style="color: purple">static_cast</span>&lt;<span style="color: green">long</span>&gt;(x);<br /><span style="color: green">long</span> <span style="color: peru">rnd</span> = round(x);<br /><span style="color: green">long</span> <span style="color: peru">flr</span> = floorl(x);<br /><span style="color: green">long</span> <span style="color: peru">cl</span> = ceill(x);</td>
<td>#include &lt;math.h&gt;<br /><span style="white-space: pre-wrap;"> </span><br />
double d = 3.77;<br /><span style="white-space: pre-wrap;"> </span><br />
long trnc = (long)d;<br />
long rnd = round(d);<br />
long flr = floorl(d);<br />
long cl = ceill(d);</td>
<td>(<span style="color: green">long</span>)3.77<br />
Math.round(3.77)<br />
(<span style="color: green">long</span>)Math.floor(3.77)<br />
(<span style="color: green">long</span>)Math.ceil(3.77)</td>
<td>using System;<br /><span style="white-space: pre-wrap;"> </span><br />
(long)3.77<br />
Math.Round(3.77)<br />
Math.Floor(3.77)<br />
Math.Ceiling(3.77)</td>
</tr><tr><td><a name="absolute-val" id="absolute-val"></a><a href="#absolute-val-note">absolute value</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;cmath&gt;</span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> fabs()</span><br /><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;cstdlib&gt;</span><span style="white-space: pre-wrap;">  </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> abs()</span><br /><br /><span style="color: green">int</span> <span style="color: peru">n</span> = -7;<br /><span style="color: green">int</span> <span style="color: peru">absn</span> = abs(n);<br /><br /><span style="color: green">double</span> <span style="color: peru">x</span> = -7.77;<br /><span style="color: green">double</span> <span style="color: peru">absx</span> = fabs(x);</td>
<td>#include &lt;stdlib.h&gt;<span style="white-space: pre-wrap;">  </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> abs()</span><br />
#include &lt;math.h&gt;<span style="white-space: pre-wrap;">  </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> fabs()</span><br /><br />
int i = -7;<br />
int ai = abs(i);<br /><br />
float x = -7.77;<br />
float ax = fabs(x);</td>
<td>Math.abs(-7)<br />
Math.abs(-7.77)</td>
<td>System.Math.Abs(-7)<br />
System.Math.Abs(-7.77)</td>
</tr><tr><td><a name="int-overflow" id="int-overflow"></a><a href="#int-overflow-note">integer overflow</a></td>
<td><span style="color: gray"><em>modular arithmetic<br /><br />
The C standard does not define behavior for signed integers, however.</em></span></td>
<td><span style="color: gray"><em>modular arithmetic<br /><br />
The C standard does not define behavior for signed integers, however.</em></span></td>
<td><span style="color: gray"><em>modular arithmetic</em></span></td>
<td><span style="color: gray"><em>modular arithmetic</em></span></td>
</tr><tr><td><a name="float-overflow" id="float-overflow"></a><a href="#float-overflow-note">float overflow</a></td>
<td><span style="color: gray"><em>no behavior defined by standard; many implementations return</em> inf</span></td>
<td><span style="color: gray"><em>no behavior defined by standard; many implementations return</em> inf</span></td>
<td><span style="color: teal">Float</span>.POSITIVE_INFINITY</td>
<td>float.PositiveInfinity</td>
</tr><tr><td><a name="float-limits" id="float-limits"></a><a href="#float-limits-note">float limits</a><br /><span style="color: gray"><em>largest finite float, smallest positive float</em></span></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;cfloat&gt;</span><br /><br />
FLT_MAX<br />
FLT_MIN<br />
DBL_MAX<br />
DBL_MIN<br />
LDBL_MAX<br />
LDBL_MIN</td>
<td></td>
<td><span style="color: teal">Float</span>.MAX_VALUE<br /><span style="color: teal">Float</span>.MIN_VALUE<br /><span style="color: teal">Double</span>.MAX_VALUE<br /><span style="color: teal">Double</span>.MIN_VALUE</td>
<td>float.MaxValue<br />
float.Epsilon<br />
double.MaxValue<br />
double.Epsilon</td>
</tr><tr><td><a name="complex-construction" id="complex-construction"></a><a href="#complex-construction-note">complex construction</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;complex&gt;</span><br /><br /><span style="color: green">complex</span>&lt;<span style="color: green">double</span>&gt; <span style="color: peru">z</span>(1.0, 2.0);</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="complex-decomposition" id="complex-decomposition"></a><a href="#complex-decomposition-note">complex decomposition</a><br /><span style="color: gray"><em>real and imaginary component, argument, absolute value, conjugate</em></span></td>
<td>z.real()<br />
z.imag()<br />
arg(z)<br />
abs(z)<br />
conj(z)</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="random-num" id="random-num"></a><a href="#random-num-note">random number</a><br /><span style="color: gray"><em>uniform integer, uniform float, normal float</em></span></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;random&gt;</span><br /><br /><span style="color: green">default_random_engine</span> <span style="color: peru">dre</span>;<br /><br /><span style="color: green">uniform_int_distribution</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">uid</span>(0, 99);<br /><span style="color: green">uniform_real_distribution</span>&lt;<span style="color: green">double</span>&gt;<br /><span style="white-space: pre-wrap;">  </span><span style="color: peru">urd</span>(0.0, 1.0);<br /><span style="color: green">normal_distribution</span>&lt;<span style="color: green">double</span>&gt; <span style="color: peru">nd</span>(0.0, 1.0);<br /><br /><span style="color: green">int</span> <span style="color: peru">i</span> = uid(dre);<br /><span style="color: green">double</span> <span style="color: peru">x</span> = urd(dre);<br /><span style="color: green">double</span> <span style="color: peru">y</span> = nd(dre);</td>
<td>#include &lt;stdlib.h&gt;<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> assuming 100 much smaller than RAND_MAX:</span><br />
int i = rand() % 100;<br />
double x = drand48();<br /><span style="color: gray"><em>none</em></span></td>
<td><span style="color: purple">import</span> <span style="color: teal">java</span>.<span style="color: teal">util</span>.<span style="color: green">Random</span>;<br /><br /><span style="color: green">Random</span> <span style="color: peru">rnd</span> = <span style="color: purple">new</span> <span style="color: green">Random</span>();<br /><br /><span style="color: green">int</span> <span style="color: peru">i</span> = rnd.nextInt(100);<br /><span style="color: green">double</span> <span style="color: peru">x</span> = rnd.nextDouble();<br /><span style="color: green">double</span> <span style="color: peru">y</span> = rnd.nextGaussian();</td>
<td>using System;<br /><br />
Random rnd = new Random();<br /><br />
int i = rnd.Next();<br />
double x = rnd.NextDouble();<br /><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="random-seed" id="random-seed"></a><a href="#random-seed-note">random seed</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;random&gt;</span><br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> set seed in constructor:</span><br /><span style="color: green">default_random_engine</span> <span style="color: peru">dre</span>(17);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> set seed of existing engine:</span><br />
dre.seed(17);</td>
<td></td>
<td><span style="color: purple">import</span> <span style="color: teal">java</span>.<span style="color: teal">util</span>.<span style="color: green">Random</span>;<br /><br /><span style="color: green">Random</span> <span style="color: peru">rnd</span> = <span style="color: purple">new</span> <span style="color: green">Random</span>();<br /><br />
rnd.setSeed(17);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> seed can also be passed to constructor</span></td>
<td>using System;<br /><br />
Random rnd = new Random(17);</td>
</tr><tr><td><a name="bit-op" id="bit-op"></a><a href="#bit-op-note">bit operators</a></td>
<td><span style="white-space: pre-wrap;"> &lt;&lt; &gt;&gt; &amp; | ^ ~ </span><br /><span style="white-space: pre-wrap;"> </span><span style="color: purple">bitand bitor compl</span><br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">&gt;&gt;</span> <em>is arithmetic right shift on signed integers and logical right shift on unsigned integers</em></span></td>
<td><span style="white-space: pre-wrap;"> &lt;&lt; &gt;&gt; &amp; | ^ ~ </span></td>
<td><span style="white-space: pre-wrap;"> &lt;&lt; &gt;&gt; &amp; | ^ ~ </span><br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">&gt;&gt;</span> <em>is arithmetic right shift, <span style="white-space: pre-wrap;">&gt;&gt;&gt;</span> is logical right shift</em></span></td>
<td><span style="white-space: pre-wrap;"> &lt;&lt; &gt;&gt; &amp; | ^ ~ </span></td>
</tr><tr><td><a name="binary-octal-hex-literals" id="binary-octal-hex-literals"></a><a href="#binary-octal-hex-literals-note">binary, octal, and hex literals</a></td>
<td>0b0101010<br />
052<br />
0x2a</td>
<td></td>
<td><span style="color: gray"><em>none in Java 1.6</em></span><br />
052<br />
0x2a</td>
<td><span style="color: gray"><em>none</em></span><br />
052<br />
0x2a</td>
</tr><tr><td><a name="radix" id="radix"></a><a href="#radix-note">radix</a><br /><span style="color: gray"><em>convert integer to and from string with radix</em></span></td>
<td></td>
<td></td>
<td>Integer.toString(42, 7)<br />
Integer.parseInt(<span style="color: maroon">"60"</span>, 7)</td>
<td></td>
</tr><tr><th colspan="5"><a name="strings" id="strings"></a><a href="#strings-note">strings</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="str-type" id="str-type"></a><a href="#str-type-note">string type</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: green">string</span> <span style="color: peru">s</span>(<span style="color: maroon">"lorem ipsum"</span>);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> convert to C string:</span><br /><span style="color: purple">const</span> <span style="color: green">char</span>* <span style="color: peru">s2</span> = s.c_str();</td>
<td>NSString* s = @"lorem ipsum";<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> convert to C string:</span><br />
const char* s2 = [s UTF8String];</td>
<td>java.lang.String</td>
<td>string</td>
</tr><tr><td><a name="str-literal" id="str-literal"></a><a href="#str-literal-note">string literal</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> const char*:</span><br /><span style="color: maroon">"don't say \"no\""</span></td>
<td>@"don't say \"no""</td>
<td>"don't say\"no\""</td>
<td>"don't say \"no\""</td>
</tr><tr><td><a name="newline-literal" id="newline-literal"></a><a href="#newline-literal-note">newline in literal</a></td>
<td><span style="color: gray"><em>Newlines in string literals are ignored.</em></span></td>
<td><span style="color: gray"><em>string literals can extend over multiple lines, but the newlines do not appear in the resulting string</em></span></td>
<td><span style="color: gray"><em>no</em></span></td>
<td><span style="color: gray"><em>string literals can extend over multiple lines, but the newlines do not appear in the resulting string</em></span></td>
</tr><tr><td><a name="str-literal-escape" id="str-literal-escape"></a><a href="#str-literal-escape-note">literal escapes</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>\a \b \f \n \r \t \v<br />
\\ \" \'<br />
\x<span style="color: gray"><em>hh</em></span> \<span style="color: gray"><em>o</em></span> \<span style="color: gray"><em>oo</em></span> \<span style="color: gray"><em>ooo</em></span></td>
<td>\a \b \f \n \r \t \v<br />
\\ \" \'<br />
\x<span style="color: gray"><em>hh</em></span> \<span style="color: gray"><em>o</em></span> \<span style="color: gray"><em>oo</em></span> \<span style="color: gray"><em>ooo</em></span></td>
<td>\b \f \n \r \t<br />
\\ \" \'<br />
\u<span style="color: gray"><em>hhhh</em></span> \<span style="color: gray"><em>o</em></span> \<span style="color: gray"><em>oo</em></span> \<span style="color: gray"><em>ooo</em></span></td>
<td>\a \b \f \n \r \t \v<br />
\\ \" \'<br />
\x<span style="color: gray"><em>hh</em></span> \x<span style="color: gray"><em>hhhh</em></span> \<span style="color: gray"><em>o</em></span> \<span style="color: gray"><em>oo</em></span> \<span style="color: gray"><em>ooo</em></span></td>
</tr><tr><td><a name="allocate-str" id="allocate-str"></a><a href="#allocate-str-note">allocate string</a></td>
<td><span style="color: green">string</span>* <span style="color: peru">s</span> = <span style="color: purple">new</span> <span style="color: green">string</span>(<span style="color: maroon">"hello"</span>);</td>
<td>NSString *s = @"hello";</td>
<td>String s = "hello";<br />
String t = new String(s);</td>
<td>string s = "hello";<br />
string t = string.Copy(s);</td>
</tr><tr><td><a name="mutable-str" id="mutable-str"></a><a href="#mutable-str-note">are strings mutable?</a></td>
<td><span style="color: green">string</span> <span style="color: peru">s</span>(<span style="color: maroon">"bar"</span>);<br />
s[2] = <span style="color: maroon">'z'</span>;</td>
<td></td>
<td><span style="color: gray">String <em>objects are immutable.</em></span><br /><br /><span style="color: gray">StringBuffer <em>has</em> append(), delete(), deleteCharAt(), insert(), replace(), setCharAt().</span></td>
<td></td>
</tr><tr><td><a name="copy-str" id="copy-str"></a><a href="#copy-str-note">copy string</a></td>
<td><span style="color: green">string</span> <span style="color: peru">s</span>(<span style="color: maroon">"bar"</span>);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> use assignment or copy constructor:</span><br /><span style="color: green">string</span> <span style="color: peru">s2</span> = s;<br /><span style="color: green">string</span> <span style="color: peru">s3</span>(s);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> s contains "baz";</span><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> s2 and s3 contain "bar":</span><br />
s[2] = <span style="color: maroon">'z'</span>;</td>
<td></td>
<td>String s = "bar";<br />
StringBuffer sb = new StringBuffer(s);<br />
sb.setCharAt(2, 'z');<br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> s contains "bar"; s2 contains "baz":</span><br />
String s2 = sb.toString();</td>
<td></td>
</tr><tr><td><a name="fmt-str" id="fmt-str"></a><a href="#fmt-str-note">format string</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;sstream&gt;</span><br /><br /><span style="color: green">ostringstream</span> <span style="color: peru">oss</span>;<br />
oss <span style="white-space: pre-wrap;">&lt;&lt;</span> <span style="color: maroon">"Spain: "</span> <span style="white-space: pre-wrap;">&lt;&lt;</span> 7;<br /><span style="color: green">string</span> <span style="color: peru">s</span>(oss.str());</td>
<td>[NSString stringWithFormat:@"%@: %d", @"Spain", 7]</td>
<td>String.format("%s: %d", "Spain", 7)</td>
<td>string.Format("{0}: {1}", "Spain", 7)</td>
</tr><tr><td><a name="compare-str" id="compare-str"></a><a href="#compare-str-note">compare strings</a></td>
<td><span style="color: green">string</span> <span style="color: peru">s1</span>(<span style="color: maroon">"hello"</span>);<br /><span style="color: green">string</span> <span style="color: peru">s2</span>(<span style="color: maroon">"world"</span>);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> negative if s1 lexically before s2;<br /><span style="white-space: pre-wrap;">//</span> zero if s1 and s2 are equal:</span><br /><span style="color: green">int</span> <span style="color: peru">result1</span> = s1.compare(s2);<br /><br /><span style="color: green">bool</span> <span style="color: peru">result2</span> = s1 == s2;</td>
<td>[@"hello" compare:@"hello"]</td>
<td>"hello".compareTo("world")</td>
<td>"hello".CompareTo("world")</td>
</tr><tr><td><a name="str-concat" id="str-concat"></a><a href="#str-concat-note">concatenate</a><br /><span style="color: gray"><em>and append</em></span></td>
<td><span style="color: green">string</span> <span style="color: peru">s</span>(<span style="color: maroon">"hello"</span>);<br /><span style="color: green">string</span> <span style="color: peru">s2</span> = s + <span style="color: maroon">" world"</span>;<br />
s += <span style="color: maroon">" world"</span>;</td>
<td>NSString *s1 = @"hello";<br />
NSString *s2 = @" world";<br />
NSString *s3 = [s1 stringByAppendingString:s2];</td>
<td>"hello" + " world"</td>
<td>"hello" + " world"</td>
</tr><tr><td><a name="str-replicate" id="str-replicate"></a><a href="#str-replicate-note">replicate</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: green">string</span> <span style="color: peru">hbar</span>(80, <span style="color: maroon">'-'</span>);</td>
<td></td>
<td>import java.util.Arrays;<br /><br />
char[] a = new char[80];<br />
Arrays.fill(a, '-');<br />
String s = new String(a);</td>
<td></td>
</tr><tr><td><a name="translate-case" id="translate-case"></a><a href="#translate-case-note">translate case</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;algorithm&gt;</span><br /><br /><span style="color: green">string</span> <span style="color: peru">s</span>(<span style="color: maroon">"foo"</span>);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> in place:</span><br />
transform(s.begin(), s.end(),<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>s.begin(), ::toupper);<br />
transform(s.begin(), s.end(),<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>s.begin(), ::tolower);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> non-destructive:</span><br /><span style="color: green">string</span> <span style="color: peru">s2</span>;<br />
s2.resize(s.size();<br />
transform(s.begin(), s.end(),<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>s2.begin(), ::toupper);</td>
<td>[@"HELLO" lowercaseString]</td>
<td>"hello".toUpperCase()<br />
"HELLO".toLowerCase()</td>
<td>"hello".ToUpper()<br />
HELLO".ToLower()</td>
</tr><tr><td><a name="trim" id="trim"></a><a href="#trim-note">trim</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;algorithm&gt;</span><br /><br /><span style="color: green">string</span> <span style="color: peru">s</span>(<span style="color: maroon">" hello "</span>);<br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> trim in place on left:</span><br />
s.erase(<br /><span style="white-space: pre-wrap;">  </span>s.begin(),<br /><span style="white-space: pre-wrap;">  </span>find_if(<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>s.begin(),<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>s.end(),<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>not1(ptr_fun&lt;<span style="color: green">int</span>, <span style="color: green">int</span>&gt;(isspace))<br /><span style="white-space: pre-wrap;">  </span>)<br />
);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> trim in place on right:</span><br />
s.erase(<br /><span style="white-space: pre-wrap;">  </span>find_if(<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>s.rbegin(),<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>s.rend(),<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>not1(ptr_fun&lt;<span style="color: green">int</span>, <span style="color: green">int</span>&gt;(isspace))<br /><span style="white-space: pre-wrap;">  </span>).base(),<br /><span style="white-space: pre-wrap;">  </span>s.end()<br />
);</td>
<td>[@" hello " stringByTrimmingCharactersInSet: [NSCharacterSet whitespaceCharacterSet]]</td>
<td>" hello ".trim()</td>
<td>" hello ".Trim()</td>
</tr><tr><td><a name="pad" id="pad"></a><a href="#pad-note">pad</a><br /><span style="color: gray"><em>on right, on left</em></span></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;iomanip&gt;</span><br /><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;sstream&gt;</span><br /><br /><span style="color: green">string</span> <span style="color: peru">s</span>(<span style="color: maroon">"hello"</span>);<br /><span style="color: green">string</span> <span style="color: peru">rpad</span>(s);<br />
rpad += string(10 - s.length(), <span style="color: maroon">' '</span>);<br /><br /><span style="color: green">ostringstream</span> <span style="color: peru">oss</span>;<br />
oss <span style="white-space: pre-wrap;">&lt;&lt;</span> setw(10) <span style="white-space: pre-wrap;">&lt;&lt;</span> s;<br /><span style="color: green">string</span> <span style="color: peru">lpad</span>(oss.str());</td>
<td>[@"hello" stringByPaddingToLength:10 withString:@" " startingAtIndex:0]</td>
<td></td>
<td></td>
</tr><tr><td><a name="num-to-str" id="num-to-str"></a><a href="#num-to-str-note">number to string</a></td>
<td></td>
<td></td>
<td>Integer.toString(14)<br />
Long.toString(14)<br />
Double.toString(14.7)</td>
<td>14.ToString()<br />
14.7.ToString()</td>
</tr><tr><td><a name="str-to-num" id="str-to-num"></a><a href="#str-to-num-note">string to number</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;sstream&gt;</span><br /><br /><span style="color: green">stringstream</span> <span style="color: peru">ss</span>(<span style="color: maroon">"7 14.3 12"</span>);<br /><span style="color: green">int</span> <span style="color: peru">n1</span>;<br /><span style="color: green">double</span> <span style="color: peru">x</span>;<br /><span style="color: green">long</span> <span style="color: peru">n2</span>;<br /><br />
ss <span style="white-space: pre-wrap;">&gt;&gt;</span> n1 <span style="white-space: pre-wrap;">&gt;&gt;</span> x <span style="white-space: pre-wrap;">&gt;&gt;</span> n2;</td>
<td>[@"14" integerValue]<br />
[@"14" longLongvalue]<br />
[@"14.7" floatValue]<br />
[@"14.7" doubleValue]</td>
<td>Byte.parseByte("14")<br />
Short.parseShort("14")<br />
Integer.parseInt("14")<br />
Long.parseLong("14")<br />
Float.parseFloat("14.7")<br />
Double.parseDouble("14.7")</td>
<td>byte.Parse("14")<br />
short.Parse("14")<br />
int.Parse("14")<br />
long.Parse("14")<br />
float.Parse("14")<br />
double.Parse("14")<br />
decimal.Parse("14")</td>
</tr><tr><td><a name="join" id="join"></a><a href="#join-note">join</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
<td></td>
<td>System.String.Join(", ", names)</td>
</tr><tr><td><a name="split" id="split"></a><a href="#split-note">split</a></td>
<td></td>
<td>[@"Bob Ned Amy" componentsSeparatedByString:@" "]</td>
<td>"Bob Ned Amy".split(" ")</td>
<td>string[] names = "Bob Ned Amy".Split(' ');</td>
</tr><tr><td><a name="serialize" id="serialize"></a><a href="#serialize-note">serialize</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="str-length" id="str-length"></a><a href="#str-length-note">string length</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: green">string</span> <span style="color: peru">s</span>(<span style="color: maroon">"hello"</span>);<br /><span style="color: green">size_t</span> <span style="color: peru">len</span> = s.length();</td>
<td>[s length]</td>
<td>s.length()</td>
<td>s.Length</td>
</tr><tr><td><a name="index-substr" id="index-substr"></a><a href="#index-substr-note">index of substring</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>string(<span style="color: maroon">"hello"</span>).find(<span style="color: maroon">"ll"</span>)</td>
<td>[@"hello" rangeOfString:@"ll"].location</td>
<td>"hello".indexOf("ll")</td>
<td>"hello".IndexOf("ll")</td>
</tr><tr><td><a name="extract-substr" id="extract-substr"></a><a href="#extract-substr-note">extract substring</a></td>
<td>string(<span style="color: maroon">"hello"</span>).substr(2, 2)</td>
<td>[@"hello" substringWithRange:NSMakeRange(2, 2)]</td>
<td>"hello".substring(2,4)</td>
<td>"hello".Substring(2, 2)</td>
</tr><tr><td><a name="char-type" id="char-type"></a><a href="#char-type-note">character type</a></td>
<td><span style="color: green">char</span><br /><span style="color: green">wchar_t</span></td>
<td></td>
<td><span style="color: green">char</span><br /><span style="color: green">Character</span></td>
<td></td>
</tr><tr><td><a name="char-literal" id="char-literal"></a><a href="#char-literal-note">character literal</a></td>
<td><span style="color: green">char</span> <span style="color: peru">n</span> = <span style="color: maroon">'X'</span>;</td>
<td></td>
<td>char n = 'X';</td>
<td></td>
</tr><tr><td><a name="test-char" id="test-char"></a><a href="#test-char-note">test character</a><br /><span style="color: gray"><em>letter, digit, whitespace, uppercase letter, lowercase letter</em></span></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> functions have this signature:<br /><span style="white-space: pre-wrap;">//</span><br /><span style="white-space: pre-wrap;">//</span> <span style="white-space: pre-wrap;">  </span>int (*)(int):<br /><span style="white-space: pre-wrap;">//</span></span><br />
isalpha<br />
isdigit<br />
isspace<br />
isupper<br />
islower</td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="regexes" id="regexes"></a><a href="#regexes-note">regular expressions</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="regex-type" id="regex-type"></a><a href="#regex-type-note">regex type</a></td>
<td><span style="color: green">regex</span><br /><span style="color: green">wregex</span></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="char-class-abbrev" id="char-class-abbrev"></a><a href="#char-class-abbrev-note">character class abbreviations</a></td>
<td>. \d \D \s \S \w \W</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="regex-anchors" id="regex-anchors"></a><a href="#regex-anchors-note">anchors</a></td>
<td>^ $ \b \B</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="regex-lookahead" id="regex-lookahead"></a><a href="#regex-lookahead-note">lookahead</a><br /><span style="color: gray"><em>positive, negative</em></span></td>
<td>(?=<span style="color: gray"><em>subpattern</em></span>)<br />
(?!<span style="color: gray"><em>subpattern</em></span>)</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="regex-test" id="regex-test"></a><a href="#regex-test-note">match test</a></td>
<td>#include &lt;regex&gt;<br /><br />
regex rx(".*ll.*");<br />
bool match = regex_match("hello", rx);</td>
<td>NSPredicate *pred = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", @".*ll.*"];<br />
BOOL is_match = [pred evaluateWithObject:@"hello"];</td>
<td>boolean isMatch = "hello".matches(".*ll.*");</td>
<td>using System.Text.RegularExpressions;<br />
Regex regex = new Regex("ll");<br />
bool isMatch = regex.IsMatch("hello");</td>
</tr><tr><td><a name="case-insensitive-regex" id="case-insensitive-regex"></a><a href="#case-insensitive-regex-note">case insensitive match test</a></td>
<td>#include &lt;regex&gt;<br /><br />
regex rx("lorem", icase);<br />
bool match = regex_match("Lorem", rx);</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="regex-modifiers" id="regex-modifiers"></a><a href="#regex-modifiers-note">modifiers</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#regex-substitute">substitution</a></td>
<td></td>
<td></td>
<td>String s1 = "hello".replace("ll","LL");<br />
String s2 = "hello".replaceAll("l","L");</td>
<td>using System.Text.RegularExpressions;<br />
Regex r1 = new Regex("ll");<br />
String s1 = r1.Replace("hello", "LL", 1);<br />
Regex r2 = new Regex("l");<br />
String s2 = r2.Replace("hello", "L");</td>
</tr><tr><td><a name="match-prematch-postmatch" id="match-prematch-postmatch"></a><a href="#match-prematch-postmatch-note">match, prematch, postmatch</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="group-capture" id="group-capture"></a><a href="#group-capture-note">group capture</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="dates-time" id="dates-time"></a><a href="#dates-time-note">dates and time</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="date-time-type" id="date-time-type"></a><a href="#date-time-type-note">date and time type</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
<td>java.util.Date</td>
<td>System.DateTime</td>
</tr><tr><td><a name="current-date-time" id="current-date-time"></a><a href="#current-date-time-note">current date and time</a></td>
<td></td>
<td></td>
<td>import java.util.Date;<br /><br />
long millis = System.currentTimeMillis();<br />
Date dt = new Date(millis);</td>
<td>DateTime dt = DateTime.Now();</td>
</tr><tr><td><a name="unix-epoch" id="unix-epoch"></a><a href="#unix-epoch-note">to unix epoch, from unix epoch</a></td>
<td></td>
<td></td>
<td>long epoch = dt.getTime() / 1000;<br /><br />
Date dt2 = new Date(epoch * 1000);</td>
<td>long hundredM = 100 * 1000 * 1000;<br />
long sec = dt.ToFileTimeUtc() / hundredM;<br />
long epoch = sec - 1164444480;<br /><br />
long ft = (epoch + 1164444480) * hundredM;<br />
Date dt2 = DateTime.FromFiltTimeUtc(ft);</td>
</tr><tr><td><a name="date-time-to-str" id="date-time-to-str"></a><a href="#date-time-to-str-note">date and time to string</a></td>
<td></td>
<td></td>
<td>dt.toString()</td>
<td></td>
</tr><tr><td><a name="format-date" id="format-date"></a><a href="#format-date-note">format date</a></td>
<td></td>
<td></td>
<td>String s = "yyyy-MM-dd HH:mm:ss";<br />
DateFormat fmt = new SimpleDateFormat(s);<br />
String s2 = fmt.format(dt);</td>
<td>String s = "yyyy-MM-dd HH:mm:ss");<br />
String s2 = dt.ToString(s);</td>
</tr><tr><td><a name="parse-date" id="parse-date"></a><a href="#parse-date-note">parse date</a></td>
<td></td>
<td></td>
<td>String s = "2011-05-03 17:00:00";<br />
Date dt2 = fmt.parse(s);</td>
<td>CultureInfo enUS =<br /><span style="white-space: pre-wrap;">  </span>new CultureInfo("en-US");<br /><br />
DateTime dt2 = DateTime.ParseExact(<br /><span style="white-space: pre-wrap;">  </span>"2011-05-03 17:00:00",<br /><span style="white-space: pre-wrap;">  </span>"yyyy-MM-dd HH:mm:ss",<br /><span style="white-space: pre-wrap;">  </span>enUS);</td>
</tr><tr><td><a name="date-subtraction" id="date-subtraction"></a><a href="#date-subtraction-note">date subtraction</a></td>
<td></td>
<td></td>
<td><span style="color: gray"><em>difference in milliseconds as a long:</em></span><br />
dt2.getTime() - dt.getTime()</td>
<td></td>
</tr><tr><td><a name="add-duration" id="add-duration"></a><a href="#add-duration-note">add duration</a></td>
<td></td>
<td></td>
<td>long day_ms = 24 * 3600 * 1000;<br />
Date dt = new Date(dt.getTime() + day_ms));</td>
<td></td>
</tr><tr><td><a name="date-parts" id="date-parts"></a><a href="#date-parts-note">date parts</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="time-parts" id="time-parts"></a><a href="#time-parts-note">time parts</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="fixed-length-arrays" id="fixed-length-arrays"></a><a href="#fixed-length-arrays-note">fixed-length arrays</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="fixed-len-array-stack" id="fixed-len-array-stack"></a><a href="#fixed-len-array-stack-note">declare on stack</a></td>
<td><span style="color: green">int</span> <span style="color: peru">a</span>[10];</td>
<td>int a[10];</td>
<td><span style="color: gray"><em>arrays must be allocated on heap</em></span></td>
<td><span style="color: gray"><em>arrays must be allocated on heap</em></span></td>
</tr><tr><td><a name="fixed-len-array-heap" id="fixed-len-array-heap"></a><a href="#fixed-len-array-heap-note">declare on heap</a></td>
<td><span style="color: green">int</span>* <span style="color: peru">a</span> = <span style="color: purple">new</span> <span style="color: green">int</span>[10];</td>
<td>#include &lt;stdlib.h&gt;<br />
int *a = calloc(10, sizeof(int));</td>
<td>int[] a = new int[10];</td>
<td>int[] a = new int[10];</td>
</tr><tr><td><a name="free-fixed-len-array-heap" id="free-fixed-len-array-heap"></a><a href="#free-fixed-len-array-heap-note">free heap</a></td>
<td><span style="color: purple">delete</span>[] a;</td>
<td>#include &lt;stdlib.h&gt;<br />
free(a);</td>
<td><span style="color: gray"><em>garbage collected</em></span></td>
<td><span style="color: gray"><em>garbage collected</em></span></td>
</tr><tr><td><a name="fixed-len-array-init-list" id="fixed-len-array-init-list"></a><a href="#fixed-len-array-init-list-note">initialization list</a></td>
<td><span style="color: green">int</span> <span style="color: peru">a</span>[] = {1, 2, 3};</td>
<td>NSArray *a = [NSArray arrayWithObjects:@"hello", @"goodbye", nil];</td>
<td>int[] a = {1,2,3};</td>
<td>int[] a = {1,2,3};</td>
</tr><tr><td><a name="fixed-len-array-size" id="fixed-len-array-size"></a><a href="#fixed-len-array-size-note">size</a></td>
<td><span style="color: green">int</span> <span style="color: peru">a</span>[10];<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> stack arrays only:</span><br /><span style="color: green">size_t</span> <span style="color: peru">len</span> = <span style="color: purple">sizeof</span>(a) / <span style="color: purple">sizeof</span>(a[0]);</td>
<td>[a count]</td>
<td>a.length</td>
<td>a.Length</td>
</tr><tr><td><a name="fixed-len-array-lookup" id="fixed-len-array-lookup"></a><a href="#fixed-len-array-lookup-note">lookup</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: green">int</span> <span style="color: peru">first</span> = a[0];</td>
<td>[a objectAtIndex:0]</td>
<td>a[0]</td>
<td>a[0]</td>
</tr><tr><td><a name="fixed-len-array-update" id="fixed-len-array-update"></a><a href="#fixed-len-array-update-note">update</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>a[0] = 7;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="fixed-len-array-out-of-bounds" id="fixed-len-array-out-of-bounds"></a><a href="#fixed-len-array-out-of-bounds-note">out-of-bounds</a></td>
<td><span style="color: gray"><em>No defined behavior</em></span><br /><br /><span style="color: gray"><em>An out-of-bounds lookup may return the value the memory location contains; an out-of-bounds update may cause memory corruption. The system may detect an invalid address and send the process a</em> SIGSEGV.</span></td>
<td><span style="color: gray"><em>raises</em></span> NSRangeException exception</td>
<td>ArrayIndexOutOfBoundsException</td>
<td>IndexOutOfRangeException</td>
</tr><tr><td><a name="copy-fixed-len-array" id="copy-fixed-len-array"></a><a href="#copy-fixed-len-array-note">copy</a></td>
<td><span style="color: purple">const</span> <span style="color: green">size_t</span> <span style="color: peru">LEN</span>(4);<br /><span style="color: green">int</span> <span style="color: peru">src</span>[LEN] = {3, 2, 4, 1};<br /><span style="color: green">int</span> <span style="color: peru">dest</span>[LEN];<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 3rd arg is number of bytes to copy:</span><br />
memcpy(dest, src, LEN * <span style="color: purple">sizeof</span>(src[0]));</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="fixed-len-array-as-func-arg" id="fixed-len-array-as-func-arg"></a><a href="#fixed-len-array-as-func-arg-note">as function argument</a></td>
<td><span style="color: green">void</span><br /><span style="color: mediumblue">reverse</span>(<span style="color: green">int</span>* <span style="color: peru">a</span>, <span style="color: green">size_t</span> <span style="color: peru">len</span>) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">for</span> (<span style="color: green">int</span> <span style="color: peru">i</span> = 0; i &lt; len / 2; ++i) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: green">int</span> <span style="color: peru">tmp</span> = a[len - i - 1];<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>a[len - i - 1] = a[i];<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>a[i] = tmp;<br /><span style="white-space: pre-wrap;">  </span>}<br />
}<br /><br /><span style="color: purple">const</span> <span style="color: green">size_t</span> <span style="color: peru">LEN</span>(4);<br /><span style="color: green">int</span> <span style="color: peru">a</span>[LEN] = {3, 2, 4, 1};<br />
reverse(a, LEN);</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="iterate-over-fixed-len-array" id="iterate-over-fixed-len-array"></a><a href="#iterate-over-fixed-len-array-note">iterate</a></td>
<td><span style="color: purple">const</span> <span style="color: green">size_t</span> <span style="color: peru">LEN</span>(4);<br /><span style="color: green">int</span> <span style="color: peru">a</span>[LEN] = {3, 2, 4, 1};<br /><br /><span style="color: purple">for</span> (<span style="color: green">int</span> <span style="color: peru">i</span> = 0; i &lt; LEN; ++i) {<br /><span style="white-space: pre-wrap;">  </span>cout <span style="white-space: pre-wrap;">&lt;&lt;</span> <span style="color: maroon">"value at "</span> <span style="white-space: pre-wrap;">&lt;&lt;</span> i <span style="white-space: pre-wrap;">&lt;&lt;</span> <span style="color: maroon">" is "</span><br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;"> </span><span style="white-space: pre-wrap;">&lt;&lt;</span> a[i] <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;<br />
}</td>
<td>NSEnumerator *i = [a objectEnumerator];<br />
id o;<br />
while (o = [i nextObject]) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>do something with o</em></span><br />
}</td>
<td>for (String name : names) {</td>
<td>foreach (string name in names) {</td>
</tr><tr><td><a name="sort-fixed-len-array" id="sort-fixed-len-array"></a><a href="#sort-fixed-len-array-note">sort</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;cstdlib&gt;</span><br /><br /><span style="color: green">int</span><br /><span style="color: mediumblue">comp</span>(<span style="color: purple">const</span> <span style="color: green">void</span>* <span style="color: peruap##, ##purple">const</span> <span style="color: green">void</span>* <span style="color: peru">bp</span>) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: green">int</span> <span style="color: peru">a</span> = *(<span style="color: green">int</span>*)ap;<br /><span style="white-space: pre-wrap;">  </span><span style="color: green">int</span> <span style="color: peru">b</span> = *(<span style="color: green">int</span>*)bp;<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">return</span> a &lt; b ? -1 : (a == b ? 0 : 1);<br />
}<br /><br /><span style="color: purple">const</span> <span style="color: green">size_t</span> <span style="color: peru">LEN</span>(4);<br /><span style="color: green">int</span> <span style="color: peru">a</span>[LEN] = {3, 2, 1, 4};<br /><br />
qsort(a, LEN, <span style="color: purple">sizeof</span>(a[0]), &amp;comp);</td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="resizable-arrays" id="resizable-arrays"></a><a href="#resizable-arrays-note">resizable arrays</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="decl-resizable-array" id="decl-resizable-array"></a><a href="#decl-resizable-array-note">declare</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;vector&gt;</span><br /><br /><span style="color: green">vector</span> &lt;<span style="color: green">int</span>&gt; <span style="color: peru">a</span>;</td>
<td>NSMutableArray *a = [NSMutableArray arrayWithCapacity:10];</td>
<td>java.util.Vector&lt;String&gt; vec = new java.util.Vector&lt;String&gt;();</td>
<td>using System.Collections.Generic;<br />
List&lt;string&gt; l = new List&lt;string&gt;();</td>
</tr><tr><td><a name="resizable-array-init-list" id="resizable-array-init-list"></a><a href="#resizable-array-init-list-note">initialization list</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;vector&gt;</span><br /><br /><span style="color: green">vector</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">a</span> = {1, 2, 3};<br /><span style="color: green">vector</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">a2</span>({7, 8, 9});</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="resizable-array-size" id="resizable-array-size"></a><a href="#resizable-array-size-note">size</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: green">size_t</span> <span style="color: peru">len</span> = a.size();</td>
<td>[a count]</td>
<td>vec.size()</td>
<td>l.Count</td>
</tr><tr><td><a name="resizable-array-capacity" id="resizable-array-capacity"></a><a href="#resizable-array-capacity-note">capacity</a><br /><span style="color: gray"><em>get, increase</em></span></td>
<td><span style="color: green">size_t</span> <span style="color: peru">cap</span> = a.capacity();<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> will not decrease capacity:</span><br />
a.reserve(10);</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="resizable-array-empty-test" id="resizable-array-empty-test"></a><a href="#resizable-array-empty-test-note">empty test</a><br /><span style="color: gray"><em>and clear</em></span></td>
<td><span style="color: green">bool</span> <span style="color: peru">is_empty</span> = a.empty();<br />
a.clear();</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="resizable-array-lookup" id="resizable-array-lookup"></a><a href="#resizable-array-lookup-note">lookup</a></td>
<td><span style="color: green">int</span> <span style="color: peru">n</span> = a[0];<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> can raise out_of_range:</span><br /><span style="color: green">int</span> <span style="color: peru">n2</span> = a.at(0);</td>
<td>[a objectAtIndex:0]</td>
<td>vec.elementAt(0)</td>
<td>l[0]</td>
</tr><tr><td><a name="resizable-array-update" id="resizable-array-update"></a><a href="#resizable-array-update-note">update</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>a[2] = 4;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="resizable-array-out-of-bounds" id="resizable-array-out-of-bounds"></a><a href="#resizable-array-out-of-bounds-note">out-of-bounds behavior</a></td>
<td><span style="color: gray"><em>using [] with out-of-bounds index has undefined behavior</em></span></td>
<td><span style="color: gray"><em>raises</em></span> NSRangeException</td>
<td><span style="color: gray"><em>throws</em></span> ArrayIndexOutOfBoundsException</td>
<td><span style="color: gray"><em>throws</em></span> System.ArgumentOutOfRangeException</td>
</tr><tr><td><a name="resizable-array-elem-index" id="resizable-array-elem-index"></a><a href="#resizable-array-elem-index-note">element index</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;vector&gt;</span><br /><br /><span style="color: green">vector</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">a</span>({6, 7, 8, 9});<br /><br /><span style="color: purple">auto</span> <span style="color: peru">iter</span> = find(a.cbegin(), a.cend(), 8);<br /><span style="color: purple">if</span> (iter != a.cend()) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: green">size_t</span> <span style="color: peru">pos</span> = *iter;<br />
}</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="slice-resizable-array" id="slice-resizable-array"></a><a href="#slice-resizable-array-note">slice</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;vector&gt;</span><br /><br /><span style="color: green">vector</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">a</span>({6, 7, 8, 9});<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> a2 contains {7, 8}:</span><br /><span style="color: green">vector</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">a2</span>(a.cbegin() + 1,<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;"> </span>a.cbegin() + 3);</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="slice-resizable-array-to-end" id="slice-resizable-array-to-end"></a><a href="#slice-resizable-array-to-end-note">slice to end</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;vector&gt;</span><br /><br /><span style="color: green">vector</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">a</span>({6, 7, 8, 9});<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> a2 contains {7, 8, 9}:</span><br /><span style="color: green">vector</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">a2</span>(a.cbegin() + 1, a.cend());</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="resizable-array-back" id="resizable-array-back"></a><a href="#resizable-array-back-note">manipulate back</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;vector&gt;</span><br /><br /><span style="color: green">vector</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">a</span>({6, 7, 8});<br /><br />
a.push_back(9);<br /><span style="color: green">int</span> <span style="color: peru">elem</span> = a.pop_back();</td>
<td>[a addObject:@"hello"];<br />
[a removeLastObject];</td>
<td>vec.add("hello");<br /><span style="color: gray"><em>or</em></span><br />
vec.add(vec.size(), "hello");<br />
vec.removeElementAt(vec.size()-1);</td>
<td>l.Add("hello");<br />
l.RemoveAt(l.Count - 1);</td>
</tr><tr><td><a name="resizable-array-front" id="resizable-array-front"></a><a href="#resizable-array-front-note">manipulate front</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;vector&gt;</span><br /><br /><span style="color: green">vector</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">a</span>({6, 7, 8});<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> slower than manipulating back:</span><br />
a.insert(a.cbegin(), 5);<br /><span style="color: green">int</span> <span style="color: peru">elem</span> = a[0];<br />
a.erase(a.cbegin());</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="concat-resizable-array" id="concat-resizable-array"></a><a href="#concat-resizable-array-note">concatenate</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;vector&gt;</span><br /><br /><span style="color: green">vector</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">a1</span>({1, 2, 3});<br /><span style="color: green">vector</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">a2</span>({4, 5, 6});<br /><br />
a1.insert(a1.cend(),<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>a2.cbegin(),<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>a2.cend());</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="replicate-resizable-array-elem" id="replicate-resizable-array-elem"></a><a href="#replicate-resizable-array-elem-note">replicate element</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;vector&gt;</span><br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> array of 10 zeros:</span><br /><span style="color: green">vector</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">a</span>(10, 0);</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="copy-resizable-array" id="copy-resizable-array"></a><a href="#copy-resizable-array-note">copy</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;vector&gt;</span><br /><br /><span style="color: green">vector</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">a</span>({1, 2, 3});<br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> copy constructor:</span><br /><span style="color: green">vector</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">a2</span>(a);<br /><span style="color: green">vector</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">a3</span>;<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> assignment performs copy:</span><br />
a3 = a;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="resizable-array-as-func-arg" id="resizable-array-as-func-arg"></a><a href="#resizable-array-as-func-arg-note">array as function argument</a></td>
<td><span style="color: gray"><em>use reference or pointer to avoid copying array</em></span></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="iterate-over-resizable-array" id="iterate-over-resizable-array"></a><a href="#iterate-over-resizable-array-note">iterate</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;vector&gt;</span><br /><br /><span style="color: green">int</span> <span style="color: peru">sum</span>(0);<br /><span style="color: green">vector</span>&lt;<span style="color: green">int</span>&gt; <span style="color: peru">a</span>({1, 2, 3});<br /><br /><span style="color: purple">for</span> (<span style="color: purple">const auto</span>&amp; <span style="color: peru">n</span>: a) {<br /><span style="white-space: pre-wrap;">  </span>sum += n;<br />
}</td>
<td>NSEnumerator *i = [a objectEnumerator];<br />
id o;<br />
while (o = [i nextObject]) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>do something with o</em></span><br />
}</td>
<td>for ( String s : vec ) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>do something with s</em></span><br />
}</td>
<td>foreach ( string s in l ) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>do something with s</em></span><br />
}</td>
</tr><tr><td>indexed iteration</td>
<td>#include &lt;vector&gt;<br /><br />
vector&lt;int&gt; a({6, 7, 8});<br /><br />
for (auto iter = a.cbegin();<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;"> </span>iter != a.cend();<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;"> </span>++iter) {<br /><br /><span style="white-space: pre-wrap;">  </span>cout <span style="white-space: pre-wrap;">&lt;&lt;</span> "value at " <span style="white-space: pre-wrap;">&lt;&lt;</span> iter - a.cbegin()<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;"> </span><span style="white-space: pre-wrap;">&lt;&lt;</span> " is " <span style="white-space: pre-wrap;">&lt;&lt;</span> *iter <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;<br />
}</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>reverse</td>
<td>#include &lt;vector&gt;<br /><br />
vector&lt;int&gt; a({1, 2, 3});<br />
vector&lt;int&gt; a2(a.crbegin(), a.crend());</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>sort</td>
<td>#include &lt;vector&gt;<br /><br />
vector&lt;int&gt; a({3, 2, 4, 1});<br />
sort(a.begin(), a.end());</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>dedupe</td>
<td>#include &lt;set&gt;<br />
#include &lt;vector&gt;<br /><br />
vector&lt;int&gt; a({1, 1, 2, 2, 3});<br />
set&lt;int&gt; tmp(a.cbegin(), a.cend());<br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> often unnecessary since sets provide<br /><span style="white-space: pre-wrap;">//</span> many of the same methods as vectors:</span><br />
vector&lt;int&gt; a2(tmp.cbegin(), tmp.cend());</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>membership</td>
<td>#include &lt;vector&gt;<br /><br />
vector&lt;int&gt; a({1, 2, 3});<br />
if (find(a.cbegin(), a.cend(), 7) !=<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>a.cend()) {<br /><br /><span style="white-space: pre-wrap;">  </span>cout <span style="white-space: pre-wrap;">&lt;&lt;</span> "contains 7" <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;<br />
}</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>intersection</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>union</td>
<td></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>relative complement, symmetric difference</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>map</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>filter</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>reduce</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>min and max element</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>universal and existential tests</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>shuffle and sample</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>zip</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="tuples" id="tuples"></a><a href="#tuples-note">tuples</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td>declare pair</td>
<td>pair &lt;string, int&gt; p1;<br />
pair &lt;string, int&gt; p2("foo", 7);<br />
auto p3 = make_pair("foo", 7);</td>
<td></td>
<td></td>
<td>using System.Collections.Generic;<br />
KeyValuePair&lt;string,int&gt; pr = new KeyValuePair&lt;string,int&gt;("hello",5);<br />
System.Console.WriteLine("{0} {1}", pr.Key, pr.Value);</td>
</tr><tr><td>lookup pair elements</td>
<td>auto p = make_pair("foo", 7);<br />
cout <span style="white-space: pre-wrap;">&lt;&lt;</span> "first: " <span style="white-space: pre-wrap;">&lt;&lt;</span> p.first <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;<br />
cout <span style="white-space: pre-wrap;">&lt;&lt;</span> "second: " <span style="white-space: pre-wrap;">&lt;&lt;</span> p.second <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>update pair elements</td>
<td>p.first = "bar";<br />
p.second = 8;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>declare tuple</td>
<td>tuple&lt;string, int, float&gt; tup1;<br />
tuple&lt;string, int, float&gt; tup2(<br /><span style="white-space: pre-wrap;">  </span>"foo", 1, 3.7);<br />
auto tup3 = make_tuple("foo", 1, 3.7);</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>lookup tuple elements</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>update tuple elements</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>tuple size</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>create references for tuple elements</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="dictionaries" id="dictionaries"></a><a href="#dictionaries-note">dictionaries</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a href="#map">map declaration</a></td>
<td>#include &lt;map&gt;<br />
map&lt;string, int&gt; m;</td>
<td>NSMutableDictionary *dict = [NSMutableDictionary dictionaryWithCapacity:10];</td>
<td>java.util.TreeMap&lt;String, Integer&gt; m = new java.util.TreeMap&lt;String, Integer&gt;();</td>
<td>using System.Collections.Generic;<br />
Dictionary&lt;string, int&gt; dict = new Dictionary&lt;string, int&gt;();</td>
</tr><tr><td><a href="#map-access">map access</a></td>
<td>m["hello"] = 5;<br />
cout <span style="white-space: pre-wrap;">&lt;&lt;</span> m["hello"] <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;</td>
<td>[dict setObject:@"5" forKey:@"hello"];<br />
[dict objectForKey:@"hello"]</td>
<td>m.put("hello", 5);<br />
m.get("hello")</td>
<td>dict.Add("hello", 5);<br />
dict["hello"]</td>
</tr><tr><td><a href="#map-size">map size</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>m.size()</td>
<td>[dict count]</td>
<td>m.size()</td>
<td>dict.Count</td>
</tr><tr><td><a href="#map-remove">map remove element</a></td>
<td>m.erase(m.find("hello"));</td>
<td>[dict removeObjectForKey:@"hello"];</td>
<td>m.remove("hello");</td>
<td>dict.Remove("hello");</td>
</tr><tr><td><a href="#map-element-not-found">map element not found result</a></td>
<td><span style="color: gray"><em>returns element created by default constructor of value type</em></span></td>
<td>NULL</td>
<td>null</td>
<td><span style="color: gray"><em>throws</em></span> KeyNotFoundException<br /><span style="color: gray"><em>in</em> System.Collections.Generic</span></td>
</tr><tr><td><a href="#map-iterator">map iterate</a></td>
<td>map&lt;string,int&gt;::iterator mi;<br />
for (mi = m.begin(); mi != m.end(); ++mi) {<br /><span style="white-space: pre-wrap;">  </span>printf("%s %d", mi-&gt;first, mi-&gt;second)<br />
}</td>
<td>NSEnumerator *i = [dict keyEnumerator];<br />
id key;<br />
while ((key = [i nextObject])) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>do something with key</em></span><br />
}</td>
<td>for ( java.util.Map.Entry&lt;String, Integer&gt; e : m.entrySet() ) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>use e.getKey() or e.getValue()</em></span><br />
}</td>
<td>foreach ( KeyValuePair&lt;string,int&gt; e in dict) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>use e.Key and e.Value</em></span><br />
}</td>
</tr><tr><th colspan="5"><a name="functions" id="functions"></a><a href="#functions-note">functions</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="decl-func" id="decl-func"></a><a href="#decl-func-note">declare function</a></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> parameter names are optional:</span><br /><span style="color: green">int</span><br /><span style="color: mediumblue">add</span>(<span style="color: green">int</span> <span style="color: peru">m</span>, <span style="color: green">int</span> <span style="color: peru">n</span>);</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="def-func" id="def-func"></a><a href="#def-func-note">define function</a></td>
<td><span style="color: green">int</span><br /><span style="color: mediumblue">add</span>(<span style="color: green">int</span> <span style="color: peru">m</span>, <span style="color: green">int</span> <span style="color: peru">n</span>) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">return</span> m + n;<br />
}</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="invoke-func" id="invoke-func"></a><a href="#invoke-func-note">invoke function</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: green">int</span> <span style="color: peru">sum</span> = add(3, 7);</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="def-static-class-method" id="def-static-class-method"></a><a href="#def-static-class-method-note">define static class method</a></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> Ops.h:</span><br /><span style="color: purple">class</span> <span style="color: green">Ops</span> {<br /><span style="color: purple">public</span>:<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">static</span> <span style="color: green">int</span> <span style="color: mediumblue">add</span>(<span style="color: green">int</span> <span style="color: peru">m</span>, <span style="color: green">int</span> <span style="color: peru">n</span>);<br />
};<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> Ops.cpp:</span><br /><span style="color: green">int</span> <span style="color: teal">Ops</span>::<span style="color: mediumblue">add</span>(<span style="color: green">int</span> <span style="color: peru">m</span>, <span style="color: green">int</span> <span style="color: peru">n</span>) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">return</span> m + n;<br />
}</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="invoke-static-class-method" id="invoke-static-class-method"></a><a href="#invoke-static-class-method-note">invoke static class method</a></td>
<td><span style="color: green">int</span> <span style="color: peru">sum</span> = <span style="color: teal">Ops</span>::add(3, 7);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> class name not needed<br /><span style="white-space: pre-wrap;">//</span> inside class namespace:</span><br /><span style="color: green">int</span> <span style="color: peru">sum</span> = add(3, 7);</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="overload-func" id="overload-func"></a><a href="#overload-func-note">overload function</a></td>
<td><span style="color: green">int</span> <span style="color: mediumblue">add</span>(<span style="color: green">int</span> <span style="color: peru">m</span>, <span style="color: green">int</span> <span style="color: peru">n</span>) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">return</span> m + n;<br />
}<br /><br /><span style="color: green">float</span> <span style="color: mediumblue">add</span>(<span style="color: green">float</span> <span style="color: peru">x</span>, <span style="color: green">float</span> <span style="color: peru">y</span>) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">return</span> x + y;<br />
}</td>
<td><span style="color: gray"><em>method overloading only</em></span></td>
<td><span style="color: gray"><em>yes</em></span></td>
<td><span style="color: gray"><em>yes</em></span></td>
</tr><tr><td><a name="default-arg" id="default-arg"></a><a href="#default-arg-note">default argument</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;cmath&gt;</span><br /><br /><span style="color: green">float</span><br /><span style="color: mediumblue">logarithm</span>(<span style="color: green">float</span> <span style="color: peru">x</span>, <span style="color: green">float</span> <span style="color: peru">base</span> = 10.0) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">return</span> log(x) / log(base);<br />
}</td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>use method overloading</em></span></td>
<td><span style="color: gray"><em>use method overloading</em></span></td>
</tr><tr><td><a name="variable-num-arg" id="variable-num-arg"></a><a href="#variable-num-arg-note">variable number of arguments</a></td>
<td></td>
<td><span style="color: gray"><em>use C; use method overloading for finite arities</em></span></td>
<td>public static String concat(String first, String… rest) {<br /><span style="white-space: pre-wrap;">  </span>StringBuilder sb = new StringBuilder(first);<br /><span style="white-space: pre-wrap;">  </span>for (String arg: rest) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>sb.append(arg);<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>return sb.toString();<br />
}<br />
String s = Concat.concat("Hello", ", ", "World", "!");</td>
<td>public static string concat(params string[] args) {<br /><span style="white-space: pre-wrap;">  </span>return System.String.Join("",args);<br />
}<br />
string s = Concat.concat("Hello", ", ", "World", "!")</td>
</tr><tr><td><a name="named-param" id="named-param"></a><a href="#named-param-note">named parameters</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>+(float)weight: (float) w height: (float) h {<br /><span style="white-space: pre-wrap;">  </span>return (w * 703) / (h * h);<br />
}<br />
+(float)height: (float) h weight: (float) w {<br /><span style="white-space: pre-wrap;">  </span>return [BMI weight: w height: h];<br />
}<br />
[BMI weight:155 height:70];<br />
[BMI height:70 weight:155];</td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>added in C# 4.0:</em></span><br />
static int BMI(int weight, int height) {<br /><span style="white-space: pre-wrap;">  </span>return (weight * 703) / (height * height);<br />
}<br />
BMI(weight: 123, height: 64);<br />
BMI(height: 64, weight: 123);</td>
</tr><tr><td><a name="pass-by-val" id="pass-by-val"></a><a href="#pass-by-val-note">pass by value</a></td>
<td><span style="color: green">int</span> <span style="color: mediumblue">add1</span>(<span style="color: green">int</span> <span style="color: peru">n</span>) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">return</span> ++n;<br />
}<br /><br /><span style="color: green">int</span> <span style="color: peru">i</span>(7);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> set i2 to 8 w/o modifying i:</span><br /><span style="color: green">int</span> <span style="color: peru">i2</span> = <span style="color: mediumblue">add1</span>(i);</td>
<td>void use_integer(int i) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>function body</em></span><br />
}<br />
int i = 7;<br />
use_integer(i);</td>
<td><span style="color: gray"><em>primitive types are always passed by value</em></span></td>
<td><span style="color: gray"><em>primitive types are always passed by value</em></span></td>
</tr><tr><td><a name="pass-by-ref" id="pass-by-ref"></a><a href="#pass-by-ref-note">pass by reference</a></td>
<td><span style="color: green">int</span> <span style="color: mediumblue">add1</span>(<span style="color: peru">int</span>&amp; <span style="color: peru">n</span>) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">return</span> ++n;<br />
}<br /><br /><span style="color: green">int</span> <span style="color: peru">i</span>(7);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> set i and i2 to 8:</span><br /><span style="color: green">int</span> <span style="color: peru">i2</span> = add1(i);</td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>objects and arrays are always passed by reference</em></span></td>
<td><span style="color: gray"><em>objects and arrays are always passed by reference</em></span><br /><br /><span style="color: gray"><em>also out parameter</em></span></td>
</tr><tr><td><a name="pass-by-addr" id="pass-by-addr"></a><a href="#pass-by-addr-note">pass by address</a></td>
<td><span style="color: green">int</span> <span style="color: mediumblue">add1</span>(<span style="color: green">int</span>* <span style="color: peru">n</span>) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">return</span> ++*n;<br />
}<br /><br /><span style="color: green">int</span> <span style="color: peru">i</span>(7);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> set i and i2 to 8:</span><br /><span style="color: green">int</span> <span style="color: peru">i2</span> = add1(&amp;i);</td>
<td>void use_iptr(int *i) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>function body</em></span><br />
}<br />
int i = 7;<br />
use_iptr(&amp;i);</td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="retval" id="retval"></a><a href="#retval-note">return value</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>argument of</em> return; <em>type must be declared</em></span></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="no-retval" id="no-retval"></a><a href="#no-retval-note">no return value</a></td>
<td><span style="color: green">void</span><br /><span style="color: mediumblue">message</span>(<span style="color: purple">const</span> <span style="color: green">string</span>&amp; <span style="color: peru">msg</span>) {<br /><span style="white-space: pre-wrap;">  </span>cout <span style="white-space: pre-wrap;">&lt;&lt;</span> msg <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;<br />
}</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="recursive-func" id="recursive-func"></a><a href="#recursive-func-note">recursive function</a></td>
<td><span style="color: green">int</span><br /><span style="color: mediumblue">factorial</span>(<span style="color: green">int</span> <span style="color: peru">n</span>) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">if</span> (n &lt;= 1) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: purple">return</span> 1;<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">return</span> n * factorial(n - 1);<br />
}</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="anonymous-func" id="anonymous-func"></a><a href="#anonymous-func-note">anonymous function</a></td>
<td><span style="color: purple">auto</span> <span style="color: peru">add</span> = [](<span style="color: green">int</span> <span style="color: peru">n</span>, <span style="color: green">int</span> <span style="color: peru">m</span>) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">return</span> n + m;<br />
};</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="invoke-anonymous-func" id="invoke-anonymous-func"></a><a href="#invoke-anonymous-func-note">invoke anonymous function</a></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span>on variable holding anon. function:</span><br /><span style="color: green">int</span> <span style="color: peru">sum</span> = add(3, 7);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> on lambda expression:</span><br /><span style="color: green">int</span> <span style="color: peru">sum2</span> = [](<span style="color: green">int</span> <span style="color: peru">n</span>, <span style="color: green">int</span> <span style="color: peru">m</span>) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">return</span> n + m;<br />
}(3, 7);</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="closure" id="closure"></a><a href="#closure-note">closure</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="func-private-state" id="func-private-state"></a><a href="#func-private-state-note">function with private state</a></td>
<td><span style="color: green">int</span><br /><span style="color: mediumblue">counter</span>() {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">static</span> <span style="color: green">int</span> <span style="color: peru">i</span> = 0;<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">return</span> ++i;<br />
}</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="func-as-val" id="func-as-val"></a><a href="#func-as-val-note">function as value</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="overload-op" id="overload-op"></a><a href="#overload-op-note">overload operator</a></td>
<td>Rational Rational::operator+(Rational&amp; o) {<br /><span style="white-space: pre-wrap;">  </span>return Rational(this-&gt;num * o.denom + o.num * this-&gt;denom, this-&gt;denom * o.denom);<br />
}</td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>public static Rational operator+(Rational a, Rational b) {<br /><span style="white-space: pre-wrap;">  </span>return new Rational(a.num*b.denom + b.num *a.denom,a.denom*b.denom);<br />
}</td>
</tr><tr><th colspan="5"><a name="execution-control" id="execution-control"></a><a href="#execution-control-note">execution control</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="if" id="if"></a><a href="#if-note">if</a></td>
<td><span style="color: green">int</span> <span style="color: peru">signum</span>;<br /><br /><span style="color: purple">if</span> (n &gt; 0) {<br /><span style="white-space: pre-wrap;">  </span>signum = 1;<br />
}<br /><span style="color: purple">else if</span> (n == 0) {<br /><span style="white-space: pre-wrap;">  </span>signum = 0;<br />
}<br /><span style="color: purple">else</span> {<br /><span style="white-space: pre-wrap;">  </span>signum = -1;<br />
}</td>
<td>if (i&gt;0) {<br /><span style="white-space: pre-wrap;">  </span>signum = 1;<br />
} else if (i==0) {<br /><span style="white-space: pre-wrap;">  </span>signum = 0;<br />
} else {<br /><span style="white-space: pre-wrap;">  </span>signum = -1;<br />
}</td>
<td>if (i&gt;0) {<br /><span style="white-space: pre-wrap;">  </span>signum = 1;<br />
} else if (i==0) {<br /><span style="white-space: pre-wrap;">  </span>signum = 0;<br />
} else {<br /><span style="white-space: pre-wrap;">  </span>signum = -1;<br />
}</td>
<td>if (i&gt;0) {<br /><span style="white-space: pre-wrap;">  </span>signum = 1;<br />
} else if (i==0) {<br /><span style="white-space: pre-wrap;">  </span>signum = 0;<br />
} else {<br /><span style="white-space: pre-wrap;">  </span>signum = -1;<br />
}</td>
</tr><tr><td><a name="dangling-else" id="dangling-else"></a><a href="#dangling-else-note">dangling else</a></td>
<td><span style="color: purple">if</span> (n == 0)<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">if</span> (m == 0)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>cout <span style="white-space: pre-wrap;">&lt;&lt;</span> <span style="color: maroon">"n and m are zero"</span> <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">else</span><br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>cout <span style="white-space: pre-wrap;">&lt;&lt;</span> <span style="color: maroon">"n is zero; m isn't"</span> <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="switch" id="switch"></a><a href="#switch-note">switch</a></td>
<td><span style="color: purple">const</span> <span style="color: green">int</span> <span style="color: peru">INVALID_BINARY_DIGIT</span>(-1);<br /><span style="color: green">int</span> <span style="color: peru">bin_digit</span>;<br /><br /><span style="color: purple">switch</span>(n) {<br /><span style="color: purple">case</span> 0:<br /><span style="color: purple">case</span> 1:<br /><span style="white-space: pre-wrap;">  </span>bin_digit = n;<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">break</span>;<br /><span style="color: purple">default</span>:<br /><span style="white-space: pre-wrap;">  </span>bin_digit = INVALID_BINARY_DIGIT;<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">break</span>;<br />
}</td>
<td>switch(i) {<br />
case 0:<br /><span style="white-space: pre-wrap;">  </span>0;<br /><span style="white-space: pre-wrap;">  </span>break;<br />
case 1:<br /><span style="white-space: pre-wrap;">  </span>1;<br /><span style="white-space: pre-wrap;">  </span>break;<br />
default:<br /><span style="white-space: pre-wrap;">  </span>-1;<br /><span style="white-space: pre-wrap;">  </span>break;<br />
}</td>
<td>switch(i) {<br />
case 0:<br /><span style="white-space: pre-wrap;">  </span>0;<br /><span style="white-space: pre-wrap;">  </span>break;<br />
case 1:<br /><span style="white-space: pre-wrap;">  </span>1;<br /><span style="white-space: pre-wrap;">  </span>break;<br />
default:<br /><span style="white-space: pre-wrap;">  </span>-1;<br /><span style="white-space: pre-wrap;">  </span>break;<br />
}</td>
<td>switch(i) {<br />
case 0:<br /><span style="white-space: pre-wrap;">  </span>0;<br /><span style="white-space: pre-wrap;">  </span>break;<br />
case 1:<br /><span style="white-space: pre-wrap;">  </span>1;<br /><span style="white-space: pre-wrap;">  </span>break;<br />
default:<br /><span style="white-space: pre-wrap;">  </span>-1;<br /><span style="white-space: pre-wrap;">  </span>break;<br />
}</td>
</tr><tr><td><a name="while" id="while"></a><a href="#while-note">while</a></td>
<td><span style="color: green">int</span> <span style="color: peru">i</span>(1), <span style="color: peru">fact</span>(1), <span style="color: peru">n</span>(10);<br /><br /><span style="color: purple">while</span> (i &lt; n) {<br /><span style="white-space: pre-wrap;">  </span>fact *= i;<br /><span style="white-space: pre-wrap;">  </span>++i;<br />
}</td>
<td>int i = 0;<br />
while (i&lt;10) {<br /><span style="color: gray">…</span><br /><span style="white-space: pre-wrap;">  </span>i++;<br />
}</td>
<td>int i = 0;<br />
while (i&lt;10) {<br /><span style="color: gray">…</span><br /><span style="white-space: pre-wrap;">  </span>i++;<br />
}</td>
<td>int i = 0;<br />
while (i&lt;10) {<br /><span style="color: gray">…</span><br /><span style="white-space: pre-wrap;">  </span>i++;<br />
}</td>
</tr><tr><td><a name="for" id="for"></a><a href="#for-note">for</a></td>
<td><span style="color: green">int</span> <span style="color: peru">fact</span>, <span style="color: peru">n</span>(10);<br /><br /><span style="color: purple">for</span> (<span style="color: green">int</span> <span style="color: peru">i</span> = 1, fact = 1; i &lt;= n; ++i) {<br /><span style="white-space: pre-wrap;">  </span>fact *= i;<br />
}</td>
<td>int i, n;<br />
for (i=1,n=1; i&lt;=10; i++) {<br /><span style="white-space: pre-wrap;">  </span>n *= i;<br />
}</td>
<td>int n = 1;<br />
for (int i=1; i&lt;=10; i++) {<br /><span style="white-space: pre-wrap;">  </span>n *= i;<br />
}</td>
<td>int i, n;<br />
for (i=1,n=1; i&lt;=10; i++) {<br /><span style="white-space: pre-wrap;">  </span>n *= i;<br />
}</td>
</tr><tr><td><a name="break" id="break"></a><a href="#break-note">break</a></td>
<td><span style="color: green">int</span> <span style="color: peru">data</span>[4] = {3, 2, 0, 1};<br /><span style="color: green">int</span> <span style="color: peru">i</span>;<br /><span style="color: green">bool</span> <span style="color: peru">has_zero</span>(<span style="color: teal">false</span>);<br /><br /><span style="color: purple">for</span> (i = 0; i &lt; 4; ++i) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">if</span> (data[i] == 0) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>has_zero = <span style="color: teal">true</span>;<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: purple">break</span>;<br /><span style="white-space: pre-wrap;">  </span>}<br />
}</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="break-nested-loops" id="break-nested-loops"></a><a href="#break-nested-loops-note">break out of nested loops</a></td>
<td><span style="color: green">int</span> <span style="color: peru">data</span>[2][2] = <span style="white-space: pre-wrap;">{{</span>3, 2}, {0, 1<span style="white-space: pre-wrap;">}}</span>;<br /><span style="color: green">int</span> <span style="color: peru">i</span>, <span style="color: peru">j</span>;<br /><span style="color: green">bool</span> <span style="color: peru">has_zero</span>(<span style="color: teal">false</span>);<br /><br /><span style="color: purple">for</span> (i = 0; i &lt; 2; ++i) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">for</span> (j = 0; j &lt; 2; ++j) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: purple">if</span> (data[i][j] == 0) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>has_zero = <span style="color: teal">true</span>;<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: purple">goto</span> <span style="color: teal">end_of_loops</span>;<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>}<br />
}<br />
:end_of_loops</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="continue" id="continue"></a><a href="#continue-note">continue</a></td>
<td><span style="color: green">int</span> <span style="color: peru">a</span>[4] = {3, 2, 0, 1};<br /><br /><span style="color: purple">for</span> (<span style="color: green">int</span> <span style="color: peru">i</span> = 0; i &lt; 4; ++i) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">if</span> (a[i] == 0) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: purple">continue</span>;<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>cout <span style="white-space: pre-wrap;">&lt;&lt;</span> 1.0 / a[i] <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;<br />
}</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="goto" id="goto"></a><a href="#goto-note">goto</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="exceptions" id="exceptions"></a><a href="#exceptions-note">exceptions</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="base-exc" id="base-exc"></a><a href="#base-exc-note">base exception</a></td>
<td><span style="color: gray"><em>Any type can be thrown.<br /><br />
All exceptions thrown by the language or the standard library derive from</em> exception, <em>defined in</em> &lt;exception&gt;.</span></td>
<td></td>
<td><span style="color: gray"><em>Any type which implements the interface</em> java.lang.Throwable <em>can be thrown.<br /><br />
Exceptions thrown by the language and the standard libraries derive from</em> java.lang.Errror <em>or</em> java.lang.Exception.</span></td>
<td></td>
</tr><tr><td><a name="predefined-exc" id="predefined-exc"></a><a href="#predefined-exc-note">predefined exceptions</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;exception&gt;</span><br /><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;stdexcept&gt;</span><br /><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;system_error&gt;</span><br /><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;typeinfo&gt;</span><br /><br />
exception<br /><span style="white-space: pre-wrap;">  </span>logic_error<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>domain_error<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>invalid_argument<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>length_error<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>out_of_range<br /><span style="white-space: pre-wrap;">  </span>runtime_error<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>system_error<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>ios_base::failure<br /><span style="white-space: pre-wrap;">  </span>bad_cast<br /><span style="white-space: pre-wrap;">  </span>bad_exception<br /><span style="white-space: pre-wrap;">  </span>bad_alloc</td>
<td></td>
<td><span style="color: gray"><em>java.lang.Throwable</em></span><br /><span style="white-space: pre-wrap;">  </span>java.lang.Error<br /><span style="white-space: pre-wrap;">  </span>java.lang.Exception<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>java.lang.IOException<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>java.lang.RuntimeException<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>java.lang.ArithmeticException<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>java.lang.IllegalArgumentException<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>java.lang.IndexOutOfBoundsException<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>java.lang.NullPointerException</td>
<td></td>
</tr><tr><td><a name="raise-exc" id="raise-exc"></a><a href="#raise-exc-note">raise exception</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;cstdlib&gt;</span><br /><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;stdexcept&gt;</span><br /><br /><span style="color: green">void</span> <span style="color: mediumblue">risky</span>() {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">if</span> (rand() &lt; 10) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: purple">throw</span> runtime_error(<span style="color: maroon">"bam!"</span>);<br /><span style="white-space: pre-wrap;">  </span>}<br />
}</td>
<td>NSException *exc = [NSException exceptionWithName:@"error" reason:@"failed" userInfo:nil];<br />
@throw exc;</td>
<td>throw new Exception("failed");</td>
<td>throw new System.Exception("failed");</td>
</tr><tr><td><a name="handle-exc" id="handle-exc"></a><a href="#handle-exc-note">handle exception</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;stdexcept&gt;</span><br /><br /><span style="color: purple">try</span> {<br /><span style="white-space: pre-wrap;">  </span>risky();<br />
}<br /><span style="color: purple">catch</span> (<span style="color: purple">const</span> <span style="color: green">exception</span> &amp;<span style="color: peru">e</span>) {<br /><span style="white-space: pre-wrap;">  </span>cout <span style="white-space: pre-wrap;">&lt;&lt;</span> e.what() <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;<br />
}</td>
<td>@try {<br /><span style="white-space: pre-wrap;">  </span>[NSException raise:@"error" format:@"failed"];<br />
} @catch (NSException *e) {<br /><span style="white-space: pre-wrap;">  </span>printf([[e reason] UTF8String]);<br />
}</td>
<td>try {<br /><span style="white-space: pre-wrap;">  </span>throw new Exception("failed");<br />
}<br />
catch (Exception e) {<br /><span style="white-space: pre-wrap;">  </span>System.out.println(e.getMessage());<br />
}</td>
<td>try {<br /><span style="white-space: pre-wrap;">  </span>throw new System.Exception("failed");<br />
} catch (System.Exception e) {<br /><span style="white-space: pre-wrap;">  </span>System.Console.WriteLine(e.Message);<br />
}</td>
</tr><tr><td><a name="def-exc" id="def-exc"></a><a href="#def-exc-note">define exception</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;stdexcept&gt;</span><br /><br /><span style="color: purple">class</span> <span style="color: green">Bam</span> : <span style="color: purple">public</span> <span style="color: green">runtime_error</span> {<br /><span style="color: purple">public</span>:<br /><span style="white-space: pre-wrap;">  </span>Bam() : runtime_error(<span style="color: maroon">"bam!"</span>) {}<br />
};<br /><br /><span style="color: purple">throw</span> <span style="color: green">Bam</span>();</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="re-raise-exc" id="re-raise-exc"></a><a href="#re-raise-exc-note">re-raise exception</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;stdexcept&gt;</span><br /><br /><span style="color: purple">try</span> {<br /><span style="white-space: pre-wrap;">  </span>risky();<br />
}<br /><span style="color: purple">catch</span> (<span style="color: purple">const</span> <span style="color: green">exception</span>&amp; <span style="color: peru">e</span>) {<br /><span style="white-space: pre-wrap;">  </span>cout <span style="white-space: pre-wrap;">&lt;&lt;</span> <span style="color: maroon">"an error occurred<span style="white-space: pre-wrap;">...</span>"</span> <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">throw</span>;<br />
}</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="catch-all-handler" id="catch-all-handler"></a> <a href="#catch-all-handler-note">catch-all handler</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;stdexcept&gt;</span><br /><br /><span style="color: purple">try</span> {<br /><span style="white-space: pre-wrap;">  </span>risky();<br />
}<br /><span style="color: purple">catch</span> (<span style="white-space: pre-wrap;">...</span>) {<br /><span style="white-space: pre-wrap;">  </span>cout <span style="white-space: pre-wrap;">&lt;&lt;</span> <span style="color: maroon">"an error was ignored"</span><br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;"> </span><span style="white-space: pre-wrap;">&lt;&lt;</span> endl;<br />
}</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="multiple-handlers" id="multiple-handlers"></a><a href="#multiple-handlers-note">multiple handlers</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;stdexcept&gt;</span><br /><br /><span style="color: purple">try</span> {<br /><span style="white-space: pre-wrap;">  </span>risky();<br />
}<br /><span style="color: purple">catch</span> (<span style="color: purple">const</span> <span style="color: green">system_error</span> &amp;<span style="color: peru">e</span>) {<br /><span style="white-space: pre-wrap;">  </span>cout <span style="white-space: pre-wrap;">&lt;&lt;</span> <span style="color: maroon">"system error: "</span> <span style="white-space: pre-wrap;">&lt;&lt;</span> e.name()<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;"> </span><span style="white-space: pre-wrap;">&lt;&lt;</span> endl;<br />
}<br /><span style="color: purple">catch</span> (<span style="color: purple">const</span> <span style="color: green">exception</span> &amp;<span style="color: peru">e</span>) {<br /><span style="white-space: pre-wrap;">  </span>cout <span style="white-space: pre-wrap;">&lt;</span>&lt; <span style="color: maroon">"exception: "</span> <span style="white-space: pre-wrap;">&lt;&lt;</span> e.what()<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;"> </span><span style="white-space: pre-wrap;">&lt;&lt;</span> endl;<br />
}<br /><span style="color: purple">catch</span> (<span style="white-space: pre-wrap;">...</span>) {<br /><span style="white-space: pre-wrap;">  </span>cout <span style="white-space: pre-wrap;">&lt;&lt;</span> <span style="color: maroon">"unknown error"</span> <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;<br />
}</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="uncaught-exc" id="uncaught-exc"></a><a href="#uncaught-exc-note">uncaught exception behavior</a></td>
<td><span style="color: gray"><em>calls</em> terminate() <em>which by default calls</em> abort()</span></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="error-msg" id="error-msg"></a><a href="#error-msg-note">error message</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;exception&gt;</span><br /><br /><span style="color: purple">try</span> {<br /><span style="white-space: pre-wrap;">  </span>risky();<br />
}<br /><span style="color: purple">catch</span> (<span style="color: purple">const</span> <span style="color: green">exception</span> &amp;<span style="color: peru">e</span>) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">const</span> <span style="color: green">char</span> *<span style="color: peru">msg</span> = e.what();<br />
}</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="errno" id="errno"></a><a href="#errno-note">system call errno</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;system_error&gt;</span><br /><br /><span style="color: purple">try</span> {<br /><span style="white-space: pre-wrap;">  </span>risky();<br />
}<br /><span style="color: purple">catch</span> (<span style="color: purple">const</span> <span style="color: green">system_error</span> &amp;<span style="color: peru">e</span>) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: green">int</span> <span style="color: peru">err_code_val</span> = e.code().value();<br />
}</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="finally-clause" id="finally-clause"></a><a href="#finally-clause-note">finally clause</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>@try {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>risky code</em></span><br />
} @finally {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>perform cleanup</em></span><br />
}</td>
<td>try {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>risky code</em></span><br />
} finally {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>perform cleanup</em></span><br />
}</td>
<td>try {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>risky code</em></span><br />
} finally {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>perform cleanup</em></span><br />
}</td>
</tr><tr><td><a name="exc-specification" id="exc-specification"></a><a href="#exc-specification-note">exception specification</a></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> Use noexcept to declare that a function<br /><span style="white-space: pre-wrap;">//</span> does not raise exceptions;<br /><span style="white-space: pre-wrap;">//</span> declaring which exceptions a function<br /><span style="white-space: pre-wrap;">//</span> raises is deprecated in C++11.</span><br /><span style="color: green">int</span><br /><span style="color: mediumblue">add</span>(<span style="color: green">int</span> <span style="color: peru">a</span>, <span style="color: green">int</span> <span style="color: peru">b</span>) noexcept {<br /><span style="white-space: pre-wrap;">  </span><span style="color: purple">return</span> a + b;<br />
}</td>
<td><span style="color: gray"><em>no</em></span></td>
<td><span style="color: gray"><em>yes</em></span></td>
<td><span style="color: gray"><em>no</em></span></td>
</tr><tr><th colspan="5"><a name="concurrency" id="concurrency"></a><a href="#concurrency-note">concurrency</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="start-thread" id="start-thread"></a><a href="#start-thread-note">start thread</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="terminate-current-thread" id="terminate-current-thread"></a><a href="#terminate-current-thread-note">terminate current thread</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="terminate-other-thread" id="terminate-other-thread"></a><a href="#terminate-other-thread-note">terminate other thread</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="list-threads" id="list-threads"></a><a href="#list-threads-note">list threads</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="wait-on-thread" id="wait-on-thread"></a><a href="#wait-on-thread-note">wait on thread</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="lock" id="lock"></a><a href="#lock-note">lock</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="create-msg-queue" id="create-msg-queue"></a><a href="#create-msg-queue-note">create message queue</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="send-msg" id="send-msg"></a><a href="#send-msg-note">send message</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="receive-msg" id="receive-msg"></a><a href="#receive-msg-note">receive message</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="file-handles" id="file-handles"></a><a href="#file-handles-note">file handles</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td>standard file handles</td>
<td>cin<br />
cout<br />
cerr<br />
clog</td>
<td></td>
<td>System.in<br />
System.out<br />
System.err</td>
<td></td>
</tr><tr><td><a name="printf" id="printf"></a><a href="#printf-note">printf</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>cout <span style="white-space: pre-wrap;">&lt;&lt;</span> "count: " <span style="white-space: pre-wrap;">&lt;&lt;</span> 7 <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;</td>
<td>printf("count: %d\n", 7);</td>
<td>System.out.printf("count: %d", 7);</td>
<td>System.Console.WriteLine("count: {0}", 7);</td>
</tr><tr><td><a href="#read-file">read from file</a></td>
<td>#include &lt;fstream&gt;<br />
string line;<br />
ifstream f("/etc/passwd");<br />
if (f.is_open()) {<br /><span style="white-space: pre-wrap;">  </span>while (!f.eof()) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>getline(f, line);<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>process line</em></span><br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>f.close();<br /><span style="white-space: pre-wrap;">  </span>if ( 0 != f.fail() ) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>handle error</em></span><br /><span style="white-space: pre-wrap;">  </span>}<br />
}<br />
else {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>handle error</em></span><br />
}</td>
<td>NSError *error = nil;<br />
NSString *s = [NSString stringWithContentsOfFile: @"/etc/passwd" encoding:NSUTF8StringEncoding error:&amp;error];<br />
if ( error != nil ) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>handle error</em></span><br />
}<br />
NSArray *a = [s componentsSeparatedByString:@"\n"];<br />
id line;<br />
while (line = [i nextObject]) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>process line</em></span><br />
}</td>
<td>import java.io.BufferedReader;<br />
import java.io.FileReader;<br /><br />
BufferedReader in = new BufferedReader(new FileReader("/etc/passwd"));<br />
String line;<br />
while ((line = in.readLine()) != null) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>process line</em></span><br />
}</td>
<td>using System.IO;<br />
StreamReader sr = new StreamReader("/etc/passwd");<br />
string line;<br />
while ((line = sr.ReadLine()) != null) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>use line</em></span><br />
}</td>
</tr><tr><td><a href="#write-file">write to file</a></td>
<td>#include &lt;fstream&gt;<br />
ofstream f("/tmp/test4");<br />
int i;<br />
for (i = 0; i &lt; 10; ++i) {<br /><span style="white-space: pre-wrap;">  </span>f <span style="white-space: pre-wrap;">&lt;&lt;</span> i <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;<br />
}<br />
f.close();<br />
if (0 != f.fail()) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>handle error</em></span><br />
}</td>
<td></td>
<td>import java.io.BufferedWriter;<br />
import java.io.FileWriter;<br />
BufferedWriter fout = new BufferedWriter(new FileWriter("/tmp/test2"));<br />
int i;<br />
for (i=0; i&lt;10; i++) {<br /><span style="white-space: pre-wrap;">  </span>fout.write(String.format("%d", i));<br /><span style="white-space: pre-wrap;">  </span>fout.newLine();<br />
}<br />
fout.close();</td>
<td>using System.IO;<br />
StreamWriter fout = new StreamWriter("/tmp/test3");<br />
int i;<br />
for (i=0; i&lt;10; i++) {<br /><span style="white-space: pre-wrap;">  </span>fout.WriteLine(i.ToString());<br />
}<br />
fout.Close();</td>
</tr><tr><th colspan="5"><a name="files" id="files"></a><a href="#files-note">files</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="file-test" id="file-test"></a><a href="#file-test-note">file exists test, file regular test</a></td>
<td></td>
<td></td>
<td>import java.io.File;<br /><br />
File f = new File("/etc/hosts");<br />
f.exists()<br />
f.isFile()</td>
<td>System.IO.File.Exists("/etc/hosts")</td>
</tr><tr><td><a name="file-size" id="file-size"></a><a href="#file-size-note">file size</a></td>
<td></td>
<td></td>
<td>import java.io.File;<br /><br />
File f = new File("/etc/hosts");<br />
f.length()</td>
<td></td>
</tr><tr><td><a name="readable-writable-executable" id="readable-writable-executable"></a><a href="#readable-writable-executable">is file readable, writable, executable</a></td>
<td></td>
<td></td>
<td>import java.io.File;<br /><br />
File f = new File("/etc/hosts");<br /><br />
f.canRead()<br />
f.canWrite()<br />
f.canExecute()</td>
<td></td>
</tr><tr><td><a name="chmod" id="chmod"></a><a href="#chmod-note">set file permissions</a></td>
<td></td>
<td></td>
<td>import java.io.File;<br /><br />
File f = new File("/tmp/foo");<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> sets owner perms; to turn perms off<br /><span style="white-space: pre-wrap;">//</span> set arg to false:</span><br />
f.setReadable(true);<br />
f.setWritable(true);<br />
f.setExecutable(true);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> if 2nd arg is false, perms are<br /><span style="white-space: pre-wrap;">//</span> for owner, group, and other:</span><br />
f.setReadable(true, false);<br />
f.setWritable(true, false);<br />
f.setExecutable(true, false);</td>
<td></td>
</tr><tr><td><a name="file-cp-rm-mv" id="file-cp-rm-mv"></a><a href="#file-cp-rm-mv-note">copy file, remove file, rename file</a></td>
<td></td>
<td></td>
<td>import java.io.File;<br /><br /><span style="color: gray"><em>??</em></span><br /><br />
File f2 = new File("/tmp/foo");<br />
f2.delete();<br /><br />
File f3 = new File("/tmp/bar");<br />
f3.renameTo(new File("/tmp/bar"));</td>
<td></td>
</tr><tr><th colspan="5"><a name="file-fmt" id="file-fmt"></a><a href="#file-fmt-note">file formats</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td>csv</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>json</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>build xml</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>parse xml</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>parse html</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="directories" id="directories"></a><a href="#directories-note">directories</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="build-pathname" id="build-pathname"></a><a href="#build-pathname-note">build pathname</a></td>
<td></td>
<td></td>
<td>import java.io.File;<br /><br />
File root = File.listRoots()[0];<br />
File etc = new File(root, "etc");<br />
File hosts = newFile(etc, "hosts");<br />
String path = hosts.getPath();</td>
<td></td>
</tr><tr><td><a name="dirname-basename" id="dirname-basename"></a><a href="#dirname-basename-note">dirname and basename</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;libgen.h&gt;</span><br /><br /><span style="color: green">string</span> <span style="color: peru">s1</span> = dirname(<span style="color: maroon">"/etc/hosts"</span>);<br /><span style="color: green">string</span> <span style="color: peru">s2</span> = basename(<span style="color: maroon">"/etc/hosts"</span>);</td>
<td></td>
<td>import java.io.File;<br /><br />
File f = new File("/etc/hosts");<br />
String dirname = f.getParent();<br />
String basename = f.getName();</td>
<td></td>
</tr><tr><td><a name="absolute-pathname" id="absolute-pathname"></a><a href="#absolute-pathname-note">absolute pathname</a></td>
<td><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;climits&gt;</span><br /><span style="color: darkslateblue">#include</span> <span style="color: maroon">&lt;cstdlib&gt;</span><br /><br /><span style="color: green">char</span> <span style="color: peru">buf</span>[PATH_MAX];<br />
if (realpath(<span style="color: maroon">".."</span>, buf) == NULL) {<br /><span style="white-space: pre-wrap;">  </span>throw exception();<br />
}<br />
else {<br /><span style="white-space: pre-wrap;">  </span>string path(buf);<br />
}</td>
<td></td>
<td>import java.io.File;<br /><br />
File f = new File("foo");<br />
String abspath = f.getAbsolutePath();<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> getCanonicalPath() expands .. and .:</span><br />
File f2 = new File("../foo");<br />
String abspath2 = f2.getCanonicalPath();<br />
File f3 = new File("./foo");<br />
String abspath3 = f3.getCanonicalPath();</td>
<td></td>
</tr><tr><td><a name="iterate-dir" id="iterate-dir"></a><a href="#dir-iterate-note">iterate over directory by file</a></td>
<td></td>
<td></td>
<td>import java.io.File;<br /><br />
File dir = new File("/etc");<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> iterate over names:</span><br />
for (String name: dir.list()) {<br /><span style="white-space: pre-wrap;">  </span>System.out.println(name);<br />
}<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> iterate over file objects:</span><br />
for (File f: dir.listFiles()) {<br /><span style="white-space: pre-wrap;">  </span>System.out.println(f.getName());<br />
}</td>
<td></td>
</tr><tr><td><a name="glob" id="glob"></a><a href="#glob-note">glob paths</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="mkdir" id="mkdir"></a><a href="#mkdir-note">make directory</a></td>
<td></td>
<td></td>
<td>import java.io.File;<br /><br />
File f = new File("/tmp/foo/bar");<br />
f.mkdirs();</td>
<td></td>
</tr><tr><td><a name="recursive-cp" id="recursive-cp"></a><a href="#recursive-cp-note">recursive copy</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="rmdir" id="rmdir"></a><a href="#rmdir-note">remove empty directory</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="rm-rf" id="rm-rf"></a><a href="#rm-rf-note">remove directory and contents</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="dir-test" id="dir-test"></a><a href="#dir-test-note">directory test</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
<td>import java.io.File;<br /><br />
File f = new File("/tmp");<br />
f.isDirectory()</td>
<td></td>
</tr><tr><td><a name="unused-dir" id="unused-dir"></a><a href="#unused-dir-note">generate unused directory name</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="system-tmp-dir" id="system-tmp-dir"></a><a href="#system-tmp-dir-note">system temporary file directory</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="processes-environment" id="processes-environment"></a><a href="#processes-environment-note">processes and environment</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a href="#main">signature of main</a></td>
<td>int main(int argc, char<span style="white-space: pre-wrap;">**</span> argv) {</td>
<td>int main(int argc, char <span style="white-space: pre-wrap;">**</span>argv) {</td>
<td>public class <em>Foo</em> {<br /><span style="white-space: pre-wrap;">  </span>public static void main(String[] args) {</td>
<td>public class <em>Foo</em> {<br /><span style="white-space: pre-wrap;">  </span>public static void Main(string[] args) {</td>
</tr><tr><td><a href="#first-argument">first argument</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>pathname of executable</em></span></td>
<td><span style="color: gray"><em>pathname of executable</em></span></td>
<td><span style="color: gray"><em>first command line argument</em></span></td>
<td><span style="color: gray"><em>first command line argument</em></span></td>
</tr><tr><td><a href="#environment-variable">environment variable</a></td>
<td>#include &lt;stdlib.h&gt;<br />
char* home = getenv("HOME");<br />
setenv("EDITOR", "emacs", 1);<br />
unsetenv("EDITOR");</td>
<td>NSString *home = [[[NSProcessInfo processInfo] environment] objectForKey:@"HOME"];</td>
<td>String home = System.getenv("HOME");</td>
<td>using System.Environment;<br />
string home = GetEnvironmentVariable("HOME");<br />
SetEnvironmentVariable("EDITOR", "emacs");<br />
SetEnvironmentVariable("EDITOR", null);</td>
</tr><tr><td><a href="#iterate-environment-variable">iterate through environment variables</a></td>
<td></td>
<td>NSEnumerator *i = [[[NSProcessInfo processInfo] environment] keyEnumerator];<br />
id key;<br />
while ((key = [i nextObject])) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>use NSString key</em></span><br />
}</td>
<td>import java.util.Map;<br />
Map&lt;String, String&gt; env = System.getenv();<br />
for (String name : env.keySet()) {<br /><span style="white-space: pre-wrap;">  </span>String value = env.get(name));<br />
}</td>
<td>using System.Collections;<br />
using System.Environment;<br />
IDictionary env = GetEnvironmentVariables();<br />
foreach (DictionaryEntry de in env) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>use de.Key or de.Value</em></span><br />
}</td>
</tr><tr><th colspan="5"><a name="libraries-namespaces" id="libraries-namespaces"></a><a href="#libraries-namespaces-note">libraries and namespaces</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="std-lib-name" id="std-lib-name"></a><a href="#std-lib-name-note">standard library name</a></td>
<td><span style="color: gray"><em>C++ Standard Library</em></span></td>
<td><span style="color: gray"><em>Foundation Framework</em></span></td>
<td><span style="color: gray"><em>Java API</em></span></td>
<td><span style="color: gray"><em>Base Class Library</em></span></td>
</tr><tr><td><a href="#declare-namespace">declare namespace</a></td>
<td>namespace foo {<br /><span style="white-space: pre-wrap;">  </span>namespace bar {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>class Baz {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>static const int ANSWER = 42;<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>};<br /><span style="white-space: pre-wrap;">  </span>}<br />
}</td>
<td></td>
<td>package foo.bar;<br />
public class Baz {<br /><span style="white-space: pre-wrap;">  </span>public static final int ANSWER = 42;<br />
}</td>
<td>namespace foo {<br /><span style="white-space: pre-wrap;">  </span>namespace bar {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>public class Baz {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>public const int ANSWER = 42;<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>};<br /><span style="white-space: pre-wrap;">  </span>}<br />
}</td>
</tr><tr><td><a href="#namespaces-per-file">multiple namespaces per file</a></td>
<td><span style="color: gray"><em>yes</em></span></td>
<td></td>
<td><span style="color: gray"><em>no</em></span></td>
<td><span style="color: gray"><em>yes</em></span></td>
</tr><tr><td><a href="#namespace-directory-mapping">namespaces map to directories</a></td>
<td><span style="color: gray"><em>no</em></span></td>
<td></td>
<td><span style="color: gray"><em>yes</em></span></td>
<td><span style="color: gray"><em>no</em></span></td>
</tr><tr><td><a href="#import-namespace">import namespace</a></td>
<td>using namespace foo::bar;<br />
cout <span style="white-space: pre-wrap;">&lt;&lt;</span> Baz::ANSWER <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;</td>
<td></td>
<td>import foo.bar.*;<br />
System.out.println(Baz.ANSWER);</td>
<td>using foo.bar;<br />
System.Console.WriteLine(Baz.ANSWER);</td>
</tr><tr><td><a href="#import-part-namespace">import part of namespace</a></td>
<td>using namespace foo;<br />
cout <span style="white-space: pre-wrap;">&lt;&lt;</span> bar::Baz::ANSWER <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;</td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#import-symbol">import symbol</a></td>
<td>using foo::bar::Baz;<br />
cout <span style="white-space: pre-wrap;">&lt;&lt;</span> Baz::ANSWER <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;</td>
<td></td>
<td>import foo.bar.Baz;<br />
System.out.println(Baz.ANSWER);</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#import-static-symbol">import static symbol</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
<td>import static foo.bar.Baz.ANSWER;<br />
System.out.println(ANSWER);</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#import-position">import position</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>anywhere a statement is legal</em></span></td>
<td></td>
<td><span style="color: gray"><em>after package and before type definitions</em></span></td>
<td><span style="color: gray"><em>outside of class definitions</em></span></td>
</tr><tr><td><a href="#not-imported-symbol">using a symbol that hasn't been imported</a></td>
<td>cout <span style="white-space: pre-wrap;">&lt;&lt;</span> foo::bar::Baz::ANSWER <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;</td>
<td></td>
<td>System.out.println(foo.bar.Baz.ANSWER);</td>
<td>using System.Console;<br />
WriteLine(foo.bar.Baz.ANSWER);</td>
</tr><tr><td><a name="app-env" id="app-env"></a><a href="#app-env-note">application environment</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="multiple-installations" id="multiple-installations"></a><a href="#multiple-installations-note">multiple installations</a></td>
<td></td>
<td></td>
<td><span style="color: gray"><em>set</em> JAVA_HOME <em>environment variable to directory containing a</em> bin <em>subdirectory with</em> java, javac, <em>and other command line tools. Put</em> $JAVA_HOME/bin <em>at front of search path.</em></span></td>
<td></td>
</tr><tr><td><a name="pkg-manager" id="pkg-manager"></a><a href="#pkg-manager-note">package manager</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="user-defined-types" id="user-defined-types"></a><a href="#user-defined-types-note">user-defined types</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="typedef" id="typedef"></a><a href="#typedef-note">typedef</a></td>
<td>typedef int customer_id;<br />
customer_id cid = 3;</td>
<td>typedef int customer_id;<br />
customer_id cid = 3;</td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="enum" id="enum"></a><a href="#enum-note">enum</a></td>
<td>enum day_of_week { mon, tue, wed, thu, fri, sat, sun };<br />
day_of_week d = tue;</td>
<td>enum day_of_week { mon, tue, wed, thu, fri, sat, sun };<br />
enum day_of_week d = tue;</td>
<td>public enum DayOfWeek { MON, TUE, WED, THU, FRI, SAT, SUN };<br />
DayOfWeek d = DayOfWeek.TUE;</td>
<td>public enum DayOfWeek { MON, TUE, WED, THU, FRI, SAT, SUN };<br />
DayOfWeek d = DayOfWeek.TUE;</td>
</tr><tr><td><a href="#struct-definition">struct definition</a></td>
<td>class MedalCount {<br />
public:<br /><span style="white-space: pre-wrap;">  </span>const char *country;<br /><span style="white-space: pre-wrap;">  </span>int gold;<br /><span style="white-space: pre-wrap;">  </span>int silver;<br /><span style="white-space: pre-wrap;">  </span>int bronze;<br />
};</td>
<td>struct medal_count {<br /><span style="white-space: pre-wrap;">  </span>const char* country;<br /><span style="white-space: pre-wrap;">  </span>int gold;<br /><span style="white-space: pre-wrap;">  </span>int silver;<br /><span style="white-space: pre-wrap;">  </span>int bronze;<br />
};</td>
<td>public class MedalCount {<br /><span style="white-space: pre-wrap;">  </span>public String country;<br /><span style="white-space: pre-wrap;">  </span>public int gold;<br /><span style="white-space: pre-wrap;">  </span>public int silver;<br /><span style="white-space: pre-wrap;">  </span>public int bronze;<br />
}</td>
<td>public class MedalCount {<br /><span style="white-space: pre-wrap;">  </span>public string country;<br /><span style="white-space: pre-wrap;">  </span>public int gold;<br /><span style="white-space: pre-wrap;">  </span>public int silver;<br /><span style="white-space: pre-wrap;">  </span>public int bronze;<br />
}</td>
</tr><tr><td><a href="#struct-declaration">struct declaration</a></td>
<td>MedalCount spain;</td>
<td>struct medal_count spain;</td>
<td>MedalCount spain = new MedalCount();</td>
<td>MedalCount spain = new MedalCount();</td>
</tr><tr><td><a href="#struct-initialization">struct initialization</a></td>
<td>MedalCount spain = { "Spain", 3, 7, 4 };</td>
<td>struct medal_count spain = { "Spain", 3, 7, 4};<br />
struct medal_count france = { .gold = 8, .silver = 7, .bronze = 9, .country = "France" };</td>
<td><span style="color: gray"><em>no object literal syntax; define a constructor</em></span></td>
<td><span style="color: gray"><em>no object literal syntax; define a constructor</em></span></td>
</tr><tr><td><a href="#struct-member-assignment">struct member assignment</a></td>
<td>spain.country = "Spain";<br />
spain.gold = 3;<br />
spain.silver = 7;<br />
spain.bronze = 4;</td>
<td>spain.country = "Spain";<br />
spain.gold = 3;<br />
spain.silver = 7;<br />
spain.bronze = 4;</td>
<td>spain.country = "Spain";<br />
spain.gold = 3;<br />
spain.silver = 7;<br />
spain.bronze = 4;</td>
<td>spain.country = "Spain";<br />
spain.gold = 3;<br />
spain.silver = 7;<br />
spain.bronze = 4;</td>
</tr><tr><td><a href="#struct-member-access">struct member access</a></td>
<td>int spain_total = spain.gold + spain.silver + spain.bronze;</td>
<td>int spain_total = spain.gold + spain.silver + spain.bronze;</td>
<td>int spain_total = spain.gold + spain.silver + spain.bronze;</td>
<td>int spain_total = spain.gold + spain.silver + spain.bronze;</td>
</tr><tr><th colspan="5"><a name="generic-types" id="generic-types"></a><a href="#generic-types-note">generic types</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a href="#define-generic">define generic type</a></td>
<td>template &lt;class A&gt;<br />
class Foo {<br />
public:<br /><span style="white-space: pre-wrap;">  </span>A a;<br /><span style="white-space: pre-wrap;">  </span>Foo(A a);<br />
};<br /><span style="white-space: pre-wrap;"> </span><br />
template &lt;class A&gt;<br />
Foo&lt;A&gt;::Foo(A a) : a(a) {<br />
}</td>
<td></td>
<td>public class Foo&lt;A&gt; {<br /><span style="white-space: pre-wrap;">  </span>public A a;<br /><span style="white-space: pre-wrap;">  </span>public Foo(A a) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>this.a = a;<br /><span style="white-space: pre-wrap;">  </span>}<br />
}</td>
<td>public class Foo&lt;A&gt; {<br /><span style="white-space: pre-wrap;">  </span>public A a;<br /><span style="white-space: pre-wrap;">  </span>public Foo(A a) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>this.a = a;<br /><span style="white-space: pre-wrap;">  </span>}<br />
}</td>
</tr><tr><td><a href="#instantiate-generic">instantiate generic type</a></td>
<td>Foo&lt;string&gt; f = Foo&lt;string&gt;("foo");</td>
<td></td>
<td>Foo&lt;String&gt; f = new Foo&lt;String&gt;("foo");</td>
<td>Foo&lt;string&gt; f = new Foo&lt;string&gt;("foo");</td>
</tr><tr><td><a href="#generic-function">generic function</a></td>
<td>template &lt;class C&gt;<br />
C add(C a, C b) {<br /><span style="white-space: pre-wrap;">  </span>return a + b;<br />
}</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#generic-array">generic array</a></td>
<td>template &lt;class C&gt;<br />
class Foo {<br />
public:<br /><span style="white-space: pre-wrap;">  </span>C a[10];<br />
};</td>
<td></td>
<td><span style="color: gray"><em>not permitted. Use</em> Object <em>as the element type for the array or use an</em> ArrayList.</span></td>
<td>public class Bar&lt;C&gt; {<br /><span style="white-space: pre-wrap;">  </span>public C[] a;<br /><span style="white-space: pre-wrap;">  </span>public Bar(C c) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>this.a = new C[10];<br /><span style="white-space: pre-wrap;">  </span>}<br />
}</td>
</tr><tr><td><a href="#value-parameter">value parameter</a></td>
<td>template &lt;int N&gt;<br />
int add(int i) {<br /><span style="white-space: pre-wrap;">  </span>return N+i;<br />
}<br /><span style="white-space: pre-wrap;"> </span><br />
cout <span style="white-space: pre-wrap;">&lt;&lt;</span> add&lt;7&gt;(3) <span style="white-space: pre-wrap;">&lt;&lt;</span> endl;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#template-parameter">template parameter</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#template-specialization">template specialization</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#multiple-type-parameters">multiple type parameters</a></td>
<td>template &lt;class A, class B&gt;<br />
class Pair {<br />
public:<br /><span style="white-space: pre-wrap;">  </span>A a;<br /><span style="white-space: pre-wrap;">  </span>B b;<br /><span style="white-space: pre-wrap;">  </span>Pair(A a, B b);<br />
};<br /><span style="white-space: pre-wrap;"> </span><br />
template &lt;class A, class B&gt;<br />
Pair&lt;A, B&gt;::Pair(A a, B b) :<br /><span style="white-space: pre-wrap;">  </span>a(a), b(b) { }<br /><span style="white-space: pre-wrap;">  </span><br />
Pair&lt;int, string&gt; p =<br /><span style="white-space: pre-wrap;">  </span>Pair&lt;int, string&gt;(7, "foo");</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#generic-type-parameters">generic type parameters</a></td>
<td>Pair&lt;int, Foo&lt;string&gt; &gt; p =<br /><span style="white-space: pre-wrap;">  </span>Pair&lt;int, Foo&lt;string&gt; &gt;(<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>7, Foo&lt;string&gt;("foo"));</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#template-parameters">template parameters</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>variadic template</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="objects" id="objects"></a><a href="#objects-note">objects</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="str-equal" id="str-equal"></a><a href="#str-equal-note">semantics of ==</a></td>
<td><span style="color: gray"><em>value comparison</em></span></td>
<td><span style="color: gray"><em>object identity comparison</em></span></td>
<td><span style="color: gray"><em>object identity comparison</em></span></td>
<td><span style="color: gray"><em>value comparison</em></span></td>
</tr><tr><td><a href="#define-class">define class</a></td>
<td><span style="color: gray"><em>Rational.hpp:</em></span><br />
class Rational {<br /><span style="white-space: pre-wrap;"> </span>public:<br /><span style="white-space: pre-wrap;">  </span>int num, denom;<br /><span style="white-space: pre-wrap;">  </span>Rational(int num, int denom);<br /><span style="white-space: pre-wrap;">  </span>virtual ~Rational();<br /><span style="white-space: pre-wrap;">  </span>Rational operator+(Rational&amp; addend);<br /><span style="white-space: pre-wrap;">  </span>static Rational max(Rational&amp; a, Rational&amp; b);<br />
};</td>
<td><span style="color: gray"><em>Rational.h:</em></span><br />
#import &lt;Foundation/Foundation.h&gt;<br />
@interface Rational : NSObject {<br /><span style="white-space: pre-wrap;">  </span>int num;<br /><span style="white-space: pre-wrap;">  </span>int denom;<br />
}<br />
@property int num, denom;<br />
-(Rational*) initWith: (int) n: (int) d;<br />
-(Rational*) add: (Rational *) o;<br />
@end<br /><span style="color: gray"><em>Rational.m:</em></span><br />
#include "Rational.h"<br />
@implementation Rational<br />
@synthesize num, denom;<br />
-(Rational*) add: (Rational*) o {<br /><span style="white-space: pre-wrap;">  </span>int sum_n = self.num * o.denom + o.num * self.denom;<br /><span style="white-space: pre-wrap;">  </span>int sum_d = self.denom * o.denom;<br /><span style="white-space: pre-wrap;">  </span>Rational* sum = [[Rational alloc] initWith: sum_n: sum_d];<br /><span style="white-space: pre-wrap;">  </span>return sum;<br />
}<br />
@end</td>
<td>public class Rational {<br /><span style="white-space: pre-wrap;">  </span>public int num;<br /><span style="white-space: pre-wrap;">  </span>public int denom;<br /><span style="white-space: pre-wrap;">  </span>public Rational add(Rational o) throws Exception {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>return new Rational(this.num*o.denom + o.num*this.denom,this.denom*o.denom);<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>public static Rational max(Rational a, Rational b) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>return (a.num*b.denom &gt; a.num*b.denom) ? a : b;<br /><span style="white-space: pre-wrap;">  </span>}<br />
}</td>
<td>public class Rational {<br /><span style="white-space: pre-wrap;">  </span>public int num;<br /><span style="white-space: pre-wrap;">  </span>public int denom;<br />
}</td>
</tr><tr><td><a href="#class-definition-location">class definition location</a></td>
<td><span style="color: gray"><em>top level, class block, or function block</em></span></td>
<td><span style="color: gray"><em>top level</em></span></td>
<td><span style="color: gray"><em>top level, class block, or function block for anonymous classes</em></span></td>
<td></td>
</tr><tr><td><a href="#constructor">constructor</a></td>
<td>Rational::Rational(int n, int d) : num(n), denom(d) {<br /><span style="white-space: pre-wrap;">  </span>if (denom == 0) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>throw "zero denominator";<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>int div = gcd(n,d);<br /><span style="white-space: pre-wrap;">  </span>num = num / div;<br /><span style="white-space: pre-wrap;">  </span>denom = denom / div;<br />
}</td>
<td>-(Rational*) initWith: (int) n: (int) d {<br /><span style="white-space: pre-wrap;">  </span>self = [super init];<br /><span style="white-space: pre-wrap;">  </span>if (self) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>self.num = n;<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>self.denom = d;<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>return self;<br />
}</td>
<td>public Rational(int n, int d) throws Exception {<br /><span style="white-space: pre-wrap;">  </span>if (d == 0) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>throw new Exception("zero denominator");<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>if ( d &lt; 0 ) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>this.num = -1 * n;<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>this.denom = -1 * d;<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>else {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>this.num = n;<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>this.denom = d;<br /><span style="white-space: pre-wrap;">  </span>}<br />
}</td>
<td>public Rational(int n, int d) {<br /><span style="white-space: pre-wrap;">  </span>if (0 == d) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>throw new System.Exception("zero denominator");<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>if (d &lt; 0) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>this.num = -1 * n;<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>this.denom = -1 * d;<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>else {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>this.num = n;<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>this.denom = d;<br /><span style="white-space: pre-wrap;">  </span>}<br />
}</td>
</tr><tr><td><a href="#create-object">create object</a></td>
<td>Rational r1(7, 3);<br />
Rational* r2 = new Rational(8, 5);</td>
<td>Rational *r = [[Rational alloc] initWith: 7: 3];</td>
<td>Rational r = new Rational(7,3);</td>
<td>Rational r = new Rational(7,3);</td>
</tr><tr><td><a href="#destructor">destructor</a></td>
<td>Rational::~Rational() {};</td>
<td>-(void) dealloc {<br /><span style="white-space: pre-wrap;">  </span>[super dealloc];<br /><span style="white-space: pre-wrap;">  </span>printf("deallocated…");<br />
}</td>
<td>protected void finalize() throws Throwable {<br /><span style="white-space: pre-wrap;">  </span>super.finalize();<br />
}</td>
<td>~Rational() {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>perform cleanup</em></span><br />
}</td>
</tr><tr><td><a href="#destroy-object">destroy object</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>delete r2;</td>
<td>[r release];</td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#define-method">define method</a></td>
<td>int Rational::height() {<br /><span style="white-space: pre-wrap;">  </span>return (abs(num) &gt; abs(denom)) ? abs(num) : abs(denom);<br />
}</td>
<td>-(int) height {<br /><span style="white-space: pre-wrap;">  </span>if ( abs(self.num) &gt; abs(self.denom) ) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>return abs(self.num);<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>return abs(self.denom);<br />
}</td>
<td>public int height() {<br /><span style="white-space: pre-wrap;">  </span>return (Math.abs(this.num) &gt; this.denom) ? Math.abs(this.num) : this.denom;<br />
}</td>
<td>public int Height() {<br /><span style="white-space: pre-wrap;">  </span>return (System.Math.Abs(this.num) &gt; this.denom) ? System.Math.Abs(this.num) : this.denom;<br />
}</td>
</tr><tr><td><a href="#invoke-method">invoke method</a></td>
<td>r1.height();<br />
r2-&gt;height();</td>
<td>[r1 height];</td>
<td>r.height();</td>
<td>r.Height();</td>
</tr><tr><td><a href="#define-class-method">define class method</a></td>
<td><span style="color: gray"><em>declare static in class definition</em></span></td>
<td><span style="color: gray"><em>precede definition with +:</em></span><br />
+(Rational*) max: (Rational*) a: (Rational*) b {<br /><span style="white-space: pre-wrap;">  </span>if ( a.num * b.denom &gt; b.num * a.denom ) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>return a;<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>return b;<br />
}</td>
<td><span style="color: gray"><em>declare static in class definition</em></span></td>
<td><span style="color: gray"><em>declare static in class definition</em></span></td>
</tr><tr><td><a href="#invoke-class-method">invoke class method</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#receiver">name of receiver</a></td>
<td>this</td>
<td>self</td>
<td>this</td>
<td>this</td>
</tr><tr><td><a href="#access-control">access control</a></td>
<td><span style="color: gray"><em>access keywords define regions:</em></span><br />
class Foo {<br /><span style="white-space: pre-wrap;">  </span>int privateInt1;<br /><span style="white-space: pre-wrap;">  </span>int privateInt2;<br />
public:<br /><span style="white-space: pre-wrap;">  </span>int publicInt1;<br /><span style="white-space: pre-wrap;">  </span>int publicInt2;<br />
protected:<br /><span style="white-space: pre-wrap;">  </span>int protectedInt1;<br /><span style="white-space: pre-wrap;">  </span>int protectedInt2;<br />
private:<br /><span style="white-space: pre-wrap;">  </span>int privateInt3;<br /><span style="white-space: pre-wrap;">  </span>int privateInt4;<br />
};</td>
<td><span style="color: gray"><em>access keywords define regions:</em></span><br />
@interface Foo : NSObject {<br /><span style="white-space: pre-wrap;">  </span>int protectedInt1;<br /><span style="white-space: pre-wrap;">  </span>int protectedInt2;<br />
@public<br /><span style="white-space: pre-wrap;">  </span>int publicInt1;<br /><span style="white-space: pre-wrap;">  </span>int publicInt2;<br />
@protected<br /><span style="white-space: pre-wrap;">  </span>int protectedInt3;<br /><span style="white-space: pre-wrap;">  </span>int protectedInt4;<br />
@private<br /><span style="white-space: pre-wrap;">  </span>int privateInt1;<br /><span style="white-space: pre-wrap;">  </span>int privateInt2;<br />
}<br />
@end</td>
<td><span style="color: gray"><em>access keywords required for methods and members:</em></span><br />
public class Foo {<br /><span style="white-space: pre-wrap;">  </span>private int privateInt;<br /><span style="white-space: pre-wrap;">  </span>protected int protectedInt;<br /><span style="white-space: pre-wrap;">  </span>public int publicInt;<br />
}</td>
<td><span style="color: gray"><em>access keywords available for methods and members:</em></span><br />
public class Foo {<br /><span style="white-space: pre-wrap;">  </span>private int privateInt1;<br /><span style="white-space: pre-wrap;">  </span>int privateInt2;<br /><span style="white-space: pre-wrap;">  </span>protected int protectedInt;<br /><span style="white-space: pre-wrap;">  </span>public int publicInt;<br />
}</td>
</tr><tr><td><a href="#anonymous-class">anonymous class</a></td>
<td><span style="color: gray"><em>possible but not useful</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(new Object() { public void hello() { System.out.println("hello!"); } }).hello();</td>
<td></td>
</tr><tr><th colspan="5"><a name="polymorphism" id="polymorphism"></a><a href="#polymorphism-note">polymorphism</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a href="#dynamic-dispatch">dynamic dispatch</a></td>
<td><span style="color: gray"><em>declare as virtual in base class</em></span></td>
<td><span style="color: gray"><em>dispatch always dynamic</em></span></td>
<td><span style="color: gray"><em>dispatch dynamic by default</em></span></td>
<td><span style="color: gray"><em>declare as virtual in base class and override in derived class</em></span></td>
</tr><tr><td><a href="#static-dispatch">static dispatch</a></td>
<td><span style="color: gray"><em>dispatch static by default</em></span></td>
<td><span style="color: gray"><em>dispatch always dynamic</em></span></td>
<td><span style="color: gray"><em>declare as final, private, or static (i.e. make it a class method)</em></span></td>
<td><span style="color: gray"><em>dispatch static by default; compiler error if same method defined in base and derived class and not marked virtual in base class</em></span></td>
</tr><tr><td><a href="#subclass">subclass</a></td>
<td>class Integer : public Rational {<br /><span style="white-space: pre-wrap;"> </span>public:<br /><span style="white-space: pre-wrap;">  </span>Integer(int n);<br /><span style="white-space: pre-wrap;">  </span>virtual ~Integer();<br />
};</td>
<td></td>
<td>public class RInteger extends Rational {<br /><span style="white-space: pre-wrap;">  </span>public RInteger(int n) throws Throwable {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>super(n, 1);<br /><span style="white-space: pre-wrap;">  </span>}<br />
}</td>
<td></td>
</tr><tr><td><a href="#superclass-constructor">invoking superclass constructor</a></td>
<td>Integer::Integer(int n) : Rational(n, 1) {<br />
}</td>
<td></td>
<td>super(n, 1);</td>
<td></td>
</tr><tr><td><a href="#underivable-class">mark class underivable or method unoverrideable</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>final</td>
<td>sealed</td>
</tr><tr><td><a href="#root-class">root class</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>NSObject</td>
<td>java.lang.Object</td>
<td>System.Object</td>
</tr><tr><td><a href="#root-class-methods">root class methods</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>autorelease<br />
class<br />
conformsToProtocol:<br />
hash<br />
isEqual:<br />
isKindOfClass:<br />
isProxy<br />
performSelector:<br />
performSelector:withObject:<br />
performSelector:withObject:withObject:<br />
release<br />
respondsToSelector:<br />
retain<br />
retainCount<br />
self<br />
superclass</td>
<td>clone()<br />
equals()<br />
finalize()<br />
getClass()<br />
hashCode()<br />
toString()</td>
<td>Equals()<br />
Finalize()<br />
GetHashCode()<br />
GetType()<br />
MemberwiseClone()<br />
ReferenceEquals()<br />
ToString()</td>
</tr><tr><th colspan="5"><a name="reflection" id="reflection"></a><a href="#reflection-note">reflection</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a href="#type-class">get type class of object</a></td>
<td></td>
<td></td>
<td>o = new Object();<br />
Class c = o.getClass();</td>
<td>object o = new object();<br />
System.Type t = o.GetType();<br /><span style="color: gray"><em>or</em></span><br />
System.type t = typeof(o);</td>
</tr><tr><td><a href="#get-type-class-string">get type class from string</a></td>
<td></td>
<td></td>
<td>Class c = Class.forName("java.io.File");</td>
<td>using System;<br />
Type t = Type.GetType("object");</td>
</tr><tr><td><a href="#get-type-class-identifier">get type class from type identifier</a></td>
<td>typeid(Foo)</td>
<td></td>
<td></td>
<td>System.Type t = typeof(object);</td>
</tr><tr><td><a href="#class-name">class name</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>typeid(Foo).name()</td>
<td></td>
<td>String name = c.getName();</td>
<td>t.ToString();</td>
</tr><tr><td><a href="#get-methods">get methods</a></td>
<td></td>
<td></td>
<td>import java.lang.reflect.*;<br />
Method[] m = c.getMethods();</td>
<td>using System.Reflection;<br />
System.Type t = typeof(object);<br />
MethodInfo[] a = t.GetMethods();</td>
</tr><tr><td><a href="#has-method">has method</a></td>
<td></td>
<td></td>
<td>import java.lang.reflect.*;<br />
Class c = Class.forName("java.io.File");<br />
Method[] a = c.getMethods();<br />
boolean hasMethod = false;<br />
for (int i=0; i &lt; a.length; i++) {<br /><span style="white-space: pre-wrap;">  </span>if (a[i].getName() == "toString") {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>hasMethod = true;<br /><span style="white-space: pre-wrap;">  </span>}<br />
}</td>
<td><span style="color: gray"><em>null if method not found:</em></span><br />
MethodInfo m = t.GetMethod("ToString");</td>
</tr><tr><td><a href="#invoke-method-object">invoke method object</a></td>
<td></td>
<td></td>
<td>import java.lang.reflect.*;<br />
Class c = Class.forName("java.io.File");<br />
Method m = c.getMethod("toString");<br />
Object o = new Object();<br />
m.invoke(o);</td>
<td>m.Invoke(o);</td>
</tr><tr><th colspan="5"><a name="net-web" id="net-web"></a><a href="#net-web-note">net and web</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td>get local hostname, dns lookup, reverse dns lookup</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>http get</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>http post</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>absolute url</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>parse url</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="url-encode" id="url-encode"></a><a href="#url-encode-note">url encode/decode</a></td>
<td></td>
<td></td>
<td>import java.net.URLEncoder;<br />
import java.net.URLDecoder;<br /><br />
String url = "<span style="white-space: pre-wrap;">http://www.google.com</span>";<br />
String s = URLEncoder.encode(url, "utf8");<br />
String s2 = URLDecoder.decode(s, "utf8");</td>
<td></td>
</tr><tr><td>base64 encode/decode</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="unit-tests" id="unit-tests"></a><a href="#unit-tests-note">unit tests</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td><a name="test-class" id="test-class"></a><a href="#test-class-note">test class</a></td>
<td>$ cat &gt; test_foo.cpp<br />
#include &lt;cppunit/TestCaller.h&gt;<br />
#include &lt;cppunit/TestCase.h&gt;<br />
#include &lt;cppunit/TestSuite.h&gt;<br />
#include "test_foo.h"<br /><br />
using namespace CppUnit;<br /><br />
void TestFoo::test_01() {<br /><span style="white-space: pre-wrap;">  </span>CPPUNIT_ASSERT_EQUAL(1, 1);<br />
}<br /><br />
Test* TestFoo::suite() {<br /><span style="white-space: pre-wrap;">  </span>TestSuite* suiteOfTests = new TestSuite("Foo");<br /><span style="white-space: pre-wrap;">  </span>suiteOfTests-&gt;addTest(<br /><span style="white-space: pre-wrap;">  </span>new TestCaller&lt;TestFoo&gt;(<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>"test_01",<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>&amp;TestFoo::test_01));<br /><br /><span style="white-space: pre-wrap;">  </span>return suiteOfTests;<br />
}<br /><br />
$ cat &gt; test_foo.h<br />
#include &lt;cppunit/TestCase.h&gt;<br /><br />
class TestFoo: public CppUnit::TestCase {<br />
public:<br /><span style="white-space: pre-wrap;">  </span>void test_01();<br /><br /><span style="white-space: pre-wrap;">  </span>static CppUnit::Test* suite();<br />
};</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="run-all-tests" id="run-all-tests"></a><a href="#run-all-tests-note">run all tests</a></td>
<td>$ cat &gt; test_runner.cpp<br />
#include &lt;cppunit/ui/text/TestRunner.h&gt;<br />
#include "test_foo.h"<br /><br />
int main( int argc, char** argv)<br />
{<br /><span style="white-space: pre-wrap;">  </span>CppUnit::TextUi::TestRunner runner;<br /><span style="white-space: pre-wrap;">  </span>runner.addTest(TestFoo::suite());<br /><span style="white-space: pre-wrap;">  </span>runner.run();<br /><span style="white-space: pre-wrap;">  </span>return 0;<br />
}<br /><br />
$ sudo apt-get install libcppunit-dev<br /><br />
$ cat &gt; Makefile<br />
test_runner: test_runner.o test_foo.o<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>g++ -o $@ $^ -lcppunit<br /><br />
check: test_runner<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>./test_runner<br /><br />
$ make check</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="assert-equal" id="assert-equal"></a><a href="#assert-equal-note">equality assertion</a></td>
<td>#include &lt;cppunit/TestCase.h&gt;<br /><br />
CPPUNIT_ASSERT_EQUAL(1, 1);<br />
CPPUNIT_ASSERT_EQUAL("foo", "bar");<br />
CPPUNIT_ASSERT_EQUAL_MESSAGE("1 != 1",<br /><span style="white-space: pre-wrap;">  </span>1, 1);</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="assert-approx" id="assert-approx"></a><a href="#assert-approx-note">approximate assertion</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="assert-exc" id="assert-exc"></a><a href="#assert-exc-note">exception assertion</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="setup" id="setup"></a><a href="#setup-note">setup</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="teardown" id="teardown"></a><a href="#teardown-note">teardown</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="debugging-profiling" id="debugging-profiling"></a><a href="#debugging-profiling-note">debugging and profiling</a></th>
</tr><tr><th></th>
<th>c++</th>
<th>objective c</th>
<th>java</th>
<th>c#</th>
</tr><tr><td>flag for stronger warnings</td>
<td>$ g++ -Wall foo.cpp</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>suppress warnings</td>
<td>$ g++ -w foo.cpp</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>treat warnings as errors</td>
<td>$ g++ -Werror foo.cpp</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>run debugger</td>
<td>$ g++ -g -o foo foo.cpp<br /><br />
$ gdb foo<br />
(gdb) b main<br />
(gdb) run</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="debugger-cmds" id="debugger-cmds"></a><a href="#debugger-cmds-note">debugger commands</a><br /><span style="color: gray"><em>help, list source, (re)load executable, next, step, set breakpoint, show breakpoints, delete breakpoint, continue, backtrace, up stack, down stack, print, run, quit</em></span></td>
<td><span style="white-space: pre-wrap;">&gt;</span> h<br /><span style="white-space: pre-wrap;">&gt;</span> l <span style="color: gray">[FIRST_LINENO, LAST_LINENO]</span><br /><span style="white-space: pre-wrap;">&gt;</span> file <span style="color: gray">PATH</span><br /><span style="white-space: pre-wrap;">&gt;</span> n<br /><span style="white-space: pre-wrap;">&gt;</span> s<br /><span style="white-space: pre-wrap;">&gt;</span> b <span style="color: gray">[FILE:]LINENO</span><br /><span style="white-space: pre-wrap;">&gt;</span> i<br /><span style="white-space: pre-wrap;">&gt;</span> d <span style="color: gray">NUM</span><br /><span style="white-space: pre-wrap;">&gt;</span> c<br /><span style="white-space: pre-wrap;">&gt;</span> bt<br /><span style="white-space: pre-wrap;">&gt;</span> up<br /><span style="white-space: pre-wrap;">&gt;</span> do<br /><span style="white-space: pre-wrap;">&gt;</span> p <span style="color: gray">EXPR</span><br /><span style="white-space: pre-wrap;">&gt;</span> r <span style="color: gray">[ARG1[, [ARG2 <span style="white-space: pre-wrap;">...</span>]]</span><br /><span style="white-space: pre-wrap;">&gt;</span> q</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>benchmark code</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>profile code</td>
<td><span style="color: gray"><em>gprof does not work on Mac OS X:</em></span><br /><br />
$ g++ -pg -o foo foo.cpp<br /><br />
$ ./foo<br /><br />
$ gprof foo</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>memory tool</td>
<td>$ sudo apt-get install valgrind<br /><br />
$ g++ -o foo foo.cpp<br /><br />
$ valgrind ./foo</td>
<td></td>
<td></td>
<td></td>
</tr><tr><th></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">_______________________________________________</span></span></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">_______________________________________________</span></span></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">_______________________________________________</span></span></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">_______________________________________________</span></span></th>
</tr></table><p><a name="general-note" id="general-note"></a></p>
<h2 id="toc0"><span><a href="#general">General</a></span></h2>
<p><a name="version-used-note" id="version-used-note"></a></p>
<h2 id="toc1"><span><a href="#version-used">version used</a></span></h2>
<p>The compiler version used for this sheet.</p>
<p><a name="show-version-note" id="show-version-note"></a></p>
<h2 id="toc2"><span><a href="#show-version">show version</a></span></h2>
<p>How to get the compiler version.</p>
<p><a name="implicit-prologue-note" id="implicit-prologue-note"></a></p>
<h2 id="toc3"><span><a href="#implicit-prologue">implicit prologue</a></span></h2>
<p>Code which examples in the sheet assume to have already been executed.</p>
<p><a name="grammar-invocation-note" id="grammar-invocation-note"></a></p>
<h1 id="toc4"><span><a href="#grammar-invocation">Grammar and Invocation</a></span></h1>
<p><a name="hello-world-note" id="hello-world-note"></a></p>
<h2 id="toc5"><span><a href="#hello-world">hello world</a></span></h2>
<p>How to write, compile, and run a "Hello, World!" program.</p>
<p><a name="file-suffixes-note" id="file-suffixes-note"></a></p>
<h2 id="toc6"><span><a href="#file-suffixes">file suffixes</a></span></h2>
<p>For source files, header files, and compiled object files.</p>
<p><strong>C++</strong></p>
<p>The <tt>gcc</tt> compiler will treat a file with any of the following suffixes as C++ source:</p>
<div class="code">
<pre>
<code> .cc .cp .cxx .cpp .CPP .c++ .C</code>
</pre></div>
<p>GNU <tt>make</tt> has built-in rules which treat the following suffixes as C++ source:</p>
<div class="code">
<pre>
<code>.cc .C .cpp</code>
</pre></div>
<p>The Google C++ Style Guide recommends that <tt>.cc</tt> be used as the suffix for C++ source files. Visual Studio uses <tt>.cpp</tt> as the C++ source file suffix.</p>
<p>One sometimes sees suffixes for headers which distinguish C++ code from C code, but the Google C++ Style Guide and Visual Studio both use <tt>.h</tt> as the C++ header suffix.</p>
<p>The C++11 standard library uses no suffix at all in headers, at least in the <tt>#include</tt> statements. This change was made so that the new and the old standard library headers could be distributed together and new headers could have the same basename as the old headers.</p>
<p><a name="block-delimiters-note" id="block-delimiters-note"></a></p>
<h2 id="toc7"><span><a href="#block-delimiters">block delimiters</a></span></h2>
<p>How blocks are delimited.</p>
<p>A block contains a sequence of statements. Blocks for function bodies in function definitions; to define the branches of <tt>if</tt> statements and the bodies of <tt>while</tt> loops.</p>
<p>Class definition bodies are blocks, though the statements that appear in them are restricted to declarations and definitions.</p>
<p>Bare blocks can be used to limit the scope of variables which are declared inside them.</p>
<p><a name="stmt-terminator-note" id="stmt-terminator-note"></a></p>
<h2 id="toc8"><span><a href="#stmt-terminator">statement terminator</a></span></h2>
<p>How statements are terminated.</p>
<p><a name="top-level-stmt-note" id="top-level-stmt-note"></a></p>
<h2 id="toc9"><span><a href="#top-level-stmt">top level statements</a></span></h2>
<p>Statements that can appear at the top level of a source file.</p>
<p><a name="eol-comment-note" id="eol-comment-note"></a></p>
<h2 id="toc10"><span><a href="#eol-comment">end-of-line comment</a></span></h2>
<p>The syntax for a comment which is terminated by the end of the line.</p>
<p><a name="multiple-line-comment-note" id="multiple-line-comment-note"></a></p>
<h2 id="toc11"><span><a href="#multiple-line-comment">multiple line comment</a></span></h2>
<p>The syntax for a comment which can span multiple lines.</p>
<p>The <tt>/* */</tt> delimiters do not nest. Using them to comment out code which already contains a <tt>/* */</tt> comment usually results in a syntax error.</p>
<p><a name="variables-expressions-note" id="variables-expressions-note"></a></p>
<h1 id="toc12"><span><a href="#variables-expressions">Variables and Expressions</a></span></h1>
<p><a name="local-var-note" id="local-var-note"></a></p>
<h2 id="toc13"><span><a href="#local-var">local variable</a></span></h2>
<p>How to declare a variable which is allocated on the stack.</p>
<p><a name="uninitialized-local-var-note" id="uninitialized-local-var-note"></a></p>
<h2 id="toc14"><span><a href="#uninitialized-local-var">uninitialized local variable</a></span></h2>
<p>The value contained by a local variable that wasn't initialized.</p>
<p><a name="global-var-note" id="global-var-note"></a></p>
<h2 id="toc15"><span><a href="#global-var">global variable</a></span></h2>
<p>How to declare a global variable.</p>
<p><a name="uninitialized-global-var-note" id="uninitialized-global-var-note"></a></p>
<h2 id="toc16"><span><a href="#uninitialized-global-var">uninitialized global variable</a></span></h2>
<p>The value assigned to an uninitialized global variable.</p>
<p><a name="write-once-var-note" id="write-once-var-note"></a></p>
<h2 id="toc17"><span><a href="#write-once-var">write-once variable</a></span></h2>
<p>How to declare a constant variable.</p>
<p><a name="assignment-note" id="assignment-note"></a></p>
<h2 id="toc18"><span><a href="#assignment">assignment</a></span></h2>
<p>How to assign a value to a variable.</p>
<p><a name="compound-assignment-note" id="compound-assignment-note"></a></p>
<h2 id="toc19"><span><a href="#compound-assignment">compound assignment</a></span></h2>
<p>The compound assignment operators.</p>
<p>If <tt>&lt;OP&gt;</tt> is a binary operator and the language has the compound assignment operator <tt>&lt;OP&gt;=</tt>, then the following are equivalent:</p>
<div class="code">
<pre>
<code>x &lt;OP&gt;= y
x = x &lt;OP&gt; y</code>
</pre></div>
<p><a name="incr-decr-note" id="incr-decr-note"></a></p>
<h2 id="toc20"><span><a href="#incr-decr">increment and decrement</a></span></h2>
<p>The C-style increment and decrement operators.</p>
<p>There are prefix (preincrement and predecrement) and postfix (postincrement and postdecrement) versions. The prefix version returns the value after mutation, and the postfix version returns the value before mutation.</p>
<p><strong>c++</strong></p>
<p>Since the compound assignment operators also return the value after mutation, the following are equivalent for primitive types:</p>
<div class="code">
<pre>
<code>cout &lt;&lt; ++i &lt;&lt; endl;
cout &lt;&lt; (i += 1) &lt;&lt; endl;</code>
</pre></div>
<p>The parens are necessary because compound assignment has lower precedence than the <tt><span style="white-space: pre-wrap;">&lt;&lt;</span></tt> operator.</p>
<p>The caveat about primitive types is necessary because the <tt>++</tt> operator can be overloaded. In fact the prefix and postfix versions can be overloaded separately.</p>
<p>In the case of the the postfix operator, the following are equivalent for primitive types:</p>
<div class="code">
<pre>
<code>cout &lt;&lt; i-- &lt;&lt; endl;
cout &lt;&lt; (i += 1, i - 1) &lt;&lt; endl;</code>
</pre></div>
<p>The compiler may have to allocate a temporary variable to hold the value of <tt>i - 1</tt>, which means the postfix version might be slower.</p>
<p><a name="addr-note" id="addr-note"></a></p>
<h2 id="toc21"><span><a href="#addr">address</a></span></h2>
<p>How to get the memory address for a variable. Memory addresses are stored in a type which records the type of the variable whose address was taken.</p>
<p><a name="dereference-note" id="dereference-note"></a></p>
<h2 id="toc22"><span><a href="#dereference">dereference</a></span></h2>
<p>How to get the value stored at a memory address.</p>
<p><a name="type-size-note" id="type-size-note"></a></p>
<h2 id="toc23"><span><a href="#type-size">type size</a></span></h2>
<p>How to get the size of a type in bytes.</p>
<p><a name="allocate-heap-note" id="allocate-heap-note"></a></p>
<h2 id="toc24"><span><a href="#allocate-heap">allocate heap</a></span></h2>
<p>How to allocate memory for a primitive type on the heap.</p>
<p><strong>C++</strong></p>
<p><em>new</em> and <em>delete</em> can be used to manage the memory of both primitive types and objects.</p>
<p><strong>objective c</strong></p>
<p>Object C has a different memory management schemes for primitive types and objects. Objects are allocated with <em>alloc</em> and freed by means of <em>NSAutoreleasePool</em>. For primitive types the same techniques are used as for C. However, idiomatic Objective C will declare primitive types as local variables or as part of the state of an object and avoid explicit calls to <em>malloc</em>.</p>
<p>Arrays of objects can be created with <em>NSArray</em> and <em>NSMutableArray</em>.</p>
<p><strong>java</strong></p>
<p>In Java, arrays are always stored on the heap and the JVM is responsible for garbage collection. The primitive types are stored (1) on the local frame, (2) as part of the state of an object, or (3) as part of the state of a class. The primitive types are never stored in the heap directly and when they are part of object state they are garbage collected with the object. Primitive types are passed by value unless they are encapsulated in an object.</p>
<p>Each of the primitive types has a wrapper class, and instantiating this class is the best approximation in Java to allocating the primitive type on the heap:</p>
<div class="code">
<pre>
<code>Integer i = new Integer(0);</code>
</pre></div>
<p>The compiler may instantiate the wrapper class implicitly; this is called boxing. The compiler also permits use of a wrapper class in the place of the primitive type, or unboxing.</p>
<p><strong>C#</strong></p>
<p>C# behavior is like Java. Note that C# lacks specific wrapper classes for each primitive data type.</p>
<p><a name="free-heap-note" id="free-heap-note"></a></p>
<h2 id="toc25"><span><a href="#free-heap">free heap</a></span></h2>
<p>How to free the memory for a primitive type that was allocated on the heap.</p>
<p><a name="null-note" id="null-note"></a></p>
<h2 id="toc26"><span><a href="#null">null</a></span></h2>
<p><strong>C++</strong></p>
<p>A typical definition:</p>
<div class="code">
<pre>
<code>const int NULL = 0;</code>
</pre></div>
<p><a name="coalesce-note" id="coalesce-note"></a></p>
<h2 id="toc27"><span><a href="#coalesce">coalesce</a></span></h2>
<p>The equivalent of the COALESCE function from SQL.</p>
<p><strong>C++, Objective C++:</strong></p>
<p>The short circuit or operator <span style="white-space: pre-wrap;">||</span> can be used as a coalesce operator. However, in C++ and Objective C, NULL is identical to zero, whereas in databases they are two distinct values.</p>
<p><strong>Java:</strong></p>
<p>The ternary operator provides the closest approximation to COALESCE, but it does not have the same behavior if the tested value has a side effect.</p>
<p><a name="arithmetic-logic-note" id="arithmetic-logic-note"></a></p>
<h1 id="toc28"><span><a href="#arithmetic-logic">Arithmetic and Logic</a></span></h1>
<p><a name="boolean-type-note" id="boolean-type-note"></a></p>
<h2 id="toc29"><span><a href="#boolean-type">boolean type</a></span></h2>
<p><strong>C</strong></p>
<p>The following definitions are common:</p>
<div class="code">
<pre>
<code>typedef int BOOL;
#define TRUE 1
#define FALSE 0</code>
</pre></div>
<p><strong>Objective C</strong></p>
<p>From objc.h:</p>
<div class="code">
<pre>
<code>typedef signed char BOOL;
#define YES (BOOL)1
#define NO (BOOL)0</code>
</pre></div>
<p><strong>C#</strong></p>
<p>bool is an alias for System.Boolean</p>
<p><a name="true-false-note" id="true-false-note"></a></p>
<h2 id="toc30"><span><a href="#true-false">true and false</a></span></h2>
<p>Literals for the boolean values true and false.</p>
<p><strong>C</strong></p>
<p>The following definitions are common:</p>
<div class="code">
<pre>
<code>typedef int BOOL;
#define TRUE 1
#define FALSE 0</code>
</pre></div>
<p><strong>Objective C</strong></p>
<p>From objc.h:</p>
<div class="code">
<pre>
<code>typedef signed char BOOL;
#define YES (BOOL)1
#define NO (BOOL)0</code>
</pre></div>
<p><a name="falsehoods-note" id="falsehoods-note"></a></p>
<h2 id="toc31"><span><a href="#falsehoods">falsehoods</a></span></h2>
<p>Values which evaluate as false in the conditional expression of an <tt>if</tt> statement.</p>
<p><a name="logical-op-note" id="logical-op-note"></a></p>
<h2 id="toc32"><span><a href="#logical-op">logical operators</a></span></h2>
<p>The logical operators.</p>
<p>In all languages on this sheet the &amp;&amp; and <span style="white-space: pre-wrap;">||</span> operators short circuit: i.e. &amp;&amp; will not evaluate the 2nd argument if the 1st argument is false, and <span style="white-space: pre-wrap;">||</span> will not evaluate the 2nd argument if the 1st argument is true. If the 2nd argument is not evaluated, side-effects that it contains are not executed.</p>
<p><strong>C++</strong></p>
<p>C++ defines <em>and</em>, <em>or</em>, and <em>not</em> to be synonyms of &amp;&amp;, <span style="white-space: pre-wrap;">||</span>, and !, with the same semantics and precedence.</p>
<p><strong>Java</strong></p>
<p>The arguments of the logical operators must be of type <em>boolean</em>.</p>
<p><strong>C#</strong></p>
<p>The arguments of the logical operators must be of type <em>bool</em>.</p>
<p><a name="relational-op-note" id="relational-op-note"></a></p>
<h2 id="toc33"><span><a href="#relational-op">relational operators</a></span></h2>
<p>Binary operators which return boolean values.</p>
<p><a name="int-type-note" id="int-type-note"></a></p>
<h2 id="toc34"><span><a href="#int-type">integer type</a></span></h2>
<p>Signed integer types.</p>
<p><strong>C++</strong></p>
<p>Whether <em>char</em> is a signed or unsigned type depends on the implementation.</p>
<p><strong>C#</strong></p>
<p>C# has the following aliases:</p>
<p>sbyte: System.SByte<br />
short: System.Int16<br />
int: System.Int32<br />
long: System.Int64</p>
<p><a name="unsigned-type-note" id="unsigned-type-note"></a></p>
<h2 id="toc35"><span><a href="#unsigned-type">unsigned type</a></span></h2>
<p>Unsigned integer types.</p>
<p><strong>C++</strong></p>
<p>Whether <em>char</em> is a signed or unsigned type depends on the implementation.</p>
<p><strong>C#</strong></p>
<p>C# has the following aliases:</p>
<p>byte: System.Byte<br />
ushort: System.UInt16<br />
uint: System.UInt32<br />
ulong: System.UInt64</p>
<p><a name="float-type-note" id="float-type-note"></a></p>
<h2 id="toc36"><span><a href="#float-type">float type</a></span></h2>
<p>Floating point types.</p>
<p><strong>C#</strong></p>
<p>C# has the following aliases:</p>
<p>float: System.Single<br />
double: System.Double</p>
<p><a name="fixed-type-note" id="fixed-type-note"></a></p>
<h2 id="toc37"><span><a href="#fixed-type">fixed type</a></span></h2>
<p>Fixed-point decimal types.</p>
<p><strong>C#:</strong></p>
<p>C# has the following alias:</p>
<p>decimal: System.Decimal</p>
<p><a name="arithmetic-op-note" id="arithmetic-op-note"></a></p>
<h2 id="toc38"><span><a href="#arithmetic-op">arithmetic operators</a></span></h2>
<p>The arithmetic binary operators: addition, subtraction, multiplication, division, modulus.</p>
<p><a name="int-div-note" id="int-div-note"></a></p>
<h2 id="toc39"><span><a href="#int-div">integer division</a></span></h2>
<p>How to get the quotient of two integers.</p>
<p><a name="int-div-zero-note" id="int-div-zero-note"></a></p>
<h2 id="toc40"><span><a href="#int-div-zero">integer division by zero</a></span></h2>
<p>The results of integer division by zero.</p>
<p><strong>C++, Objective C</strong></p>
<p>The behavior for division by zero is system dependent; the behavior described is nearly universal on Unix.</p>
<p><strong>C#</strong></p>
<p>It is a compilation error to divide by a zero constant. Division by a variable set to zero results in a runtime exception.</p>
<p><a name="float-div-note" id="float-div-note"></a></p>
<h2 id="toc41"><span><a href="#float-div">float division</a></span></h2>
<p>How to perform floating point division on two integers.</p>
<p><a name="float-div-zero-note" id="float-div-zero-note"></a></p>
<h2 id="toc42"><span><a href="#float-div-zero">float division by zero</a></span></h2>
<p>The result of floating point division by zero.</p>
<p>Modern hardware, if it implements floating point instructions, will implement instructions which conform to the IEEE 754 standard. The standard requires values for positive infinity, negative infinity, and not-a-number (NaN).</p>
<p>The C and C++ standards do not assume that they are running on hardware which provides these values; code which assumes they exist is not strictly speaking portable.</p>
<p><a name="power-note" id="power-note"></a></p>
<h2 id="toc43"><span><a href="#power">power</a></span></h2>
<p>How to perform exponentiation.</p>
<p><strong>C++</strong></p>
<p><em>powm1</em> is an abbreviation for "power minus one". Hence the need to add one to get the answer.</p>
<p><a name="sqrt-note" id="sqrt-note"></a></p>
<h2 id="toc44"><span><a href="#sqrt">sqrt</a></span></h2>
<p>The positive square root function.</p>
<p><a name="sqrt-negative-one-note" id="sqrt-negative-one-note"></a></p>
<h2 id="toc45"><span><a href="#sqrt-negative-one">sqrt -1</a></span></h2>
<p>The result of taking the square root of a negative number.</p>
<p>Here is a list of the standard mathematical functions whose domains do not cover the entire real number line:</p>
<table class="wiki-content-table"><tr><th>function</th>
<th>returns inf on</th>
<th>returns nan on</th>
<th>returns -inf on</th>
</tr><tr><td>sqrt</td>
<td>inf</td>
<td>[-inf, 0)</td>
<td></td>
</tr><tr><td>log</td>
<td>inf</td>
<td>[-inf, 0)</td>
<td>0</td>
</tr><tr><td>asin</td>
<td></td>
<td>[-inf, -1) U (1, inf]</td>
<td></td>
</tr><tr><td>acos</td>
<td></td>
<td>[-inf, -1) U (1, inf]</td>
<td></td>
</tr></table><p><a name="transcendental-func-note" id="transcendental-func-note"></a></p>
<h2 id="toc46"><span><a href="#transcendental-func">transcendental functions</a></span></h2>
<p>The exponential and logarithm functions; the trigonometric functions; the inverse trigonometric functions.</p>
<p>The arguments of the trigonometric functions are in radians as are the return values of the inverse trigonometric functions.</p>
<p><a name="transcendental-const-note" id="transcendental-const-note"></a></p>
<h2 id="toc47"><span><a href="#transcendental-const">transcendental constants</a></span></h2>
<p>The transcendental constants <em>e</em> and <em>pi</em>.</p>
<p><a name="float-truncation-note" id="float-truncation-note"></a></p>
<h2 id="toc48"><span><a href="#float-truncation">float truncation</a></span></h2>
<p>Functions for converting a float to a nearby integer value.</p>
<p><strong>C:</strong></p>
<p>The <tt>math.h</tt> library also provides <tt>floor</tt> and <tt>ceil</tt> which return <tt>double</tt> values.</p>
<p><strong>Java:</strong></p>
<p><tt>Math.floor</tt> and <tt>Math.ceil</tt> return <tt>double</tt> values.</p>
<p><a name="absolute-val-note" id="absolute-val-note"></a></p>
<h2 id="toc49"><span><a href="#absolute-val">absolute value</a></span></h2>
<p>The absolute value of a numeric quantity.</p>
<p><a name="int-overflow-note" id="int-overflow-note"></a></p>
<h2 id="toc50"><span><a href="#int-overflow">integer overflow</a></span></h2>
<p>What happens when an integer expression results in a value larger than what can be stored in the integer type.</p>
<p><a name="float-overflow-note" id="float-overflow-note"></a></p>
<h2 id="toc51"><span><a href="#float-overflow">float overflow</a></span></h2>
<p>What happens when a float expression results in a value larger than largest representable finite float value.</p>
<p><a name="float-limits-note" id="float-limits-note"></a></p>
<h2 id="toc52"><span><a href="#float-limits">float limits</a></span></h2>
<p>The largest finite floating point number and the smallest positive floating point number.</p>
<p><a name="complex-construction-note" id="complex-construction-note"></a></p>
<h2 id="toc53"><span><a href="#complex-construction">complex construction</a></span></h2>
<p>How to construct a complex number.</p>
<p><a name="complex-decomposition-note" id="complex-decomposition-note"></a></p>
<h2 id="toc54"><span><a href="#complex-decomposition">complex decomposition</a></span></h2>
<p>How to get the components of a complex number. Both Cartesian and polar decompositions are illustrated. Also how to get the complex conjugate.</p>
<p><a name="random-num-note" id="random-num-note"></a></p>
<h2 id="toc55"><span><a href="#random-num">random number</a></span></h2>
<p>Ways to generate random numbers. The distributions are a uniform integer from 0 to 99; a uniform float from 0.0 to 1.0; a standard normal float.</p>
<p><strong>c++:</strong></p>
<p>The standard library includes functions for generating random numbers from <a href="/distributions">other distributions</a>.</p>
<p><a name="random-seed-note" id="random-seed-note"></a></p>
<h2 id="toc56"><span><a href="#random-seed">random seed</a></span></h2>
<p>How to set the seed for the random number generator.</p>
<p><a name="bit-op-note" id="bit-op-note"></a></p>
<h2 id="toc57"><span><a href="#bit-op">bit operators</a></span></h2>
<p>The bit operators: left shift, right shift, and, or, xor, and complement.</p>
<p><strong>C++</strong></p>
<p><em>bitand</em>, <em>bitor</em>, and <em>compl</em> are synonyms of &amp;, |, and ~ with identical precedence and semantics.</p>
<p><a name="binary-octal-hex-literals-note" id="binary-octal-hex-literals-note"></a></p>
<h2 id="toc58"><span><a href="#binary-octal-hex-literals">binary, octal, and hex literals</a></span></h2>
<p>Binary, octal, and hex integer literals.</p>
<p><a name="radix-note" id="radix-note"></a></p>
<h2 id="toc59"><span><a href="#radix">radix</a></span></h2>
<p>How to convert integers to strings of digits of a given base. How to convert such strings into integers.</p>
<p><a name="strings-note" id="strings-note"></a></p>
<h1 id="toc60"><span><a href="#strings">Strings</a></span></h1>
<p><a name="str-type-note" id="str-type-note"></a></p>
<h2 id="toc61"><span><a href="#str-type">string type</a></span></h2>
<p>The type for strings.</p>
<p><a name="str-literal-note" id="str-literal-note"></a></p>
<h2 id="toc62"><span><a href="#str-literal">string literal</a></span></h2>
<p>The syntax for string literals.</p>
<p><a name="newline-literal-note" id="newline-literal-note"></a></p>
<h2 id="toc63"><span><a href="#newline-literal">newline in literal</a></span></h2>
<p>Can a newline be used in a string literal? Does the newline appear in the resulting string object?</p>
<p><a name="str-literal-escape-note" id="str-literal-escape-note"></a></p>
<h2 id="toc64"><span><a href="#str-literal-escape">literal escapes</a></span></h2>
<p>Escape sequences that can be used in string literals.</p>
<p><a name="allocate-str-note" id="allocate-str-note"></a></p>
<h2 id="toc65"><span><a href="#allocate-str">allocate string</a></span></h2>
<p>How to allocate a string.</p>
<p><strong>Java</strong></p>
<p>The following code</p>
<div class="code">
<pre>
<code>String t = new String(s);</code>
</pre></div>
<p>creates a copy of the string <em>s</em>. However, because Java strings are immutable, it would be safe to store the same string object it <em>t</em> as follows:</p>
<div class="code">
<pre>
<code>String t = s;</code>
</pre></div>
<p><a name="mutable-str-note" id="mutable-str-note"></a></p>
<h2 id="toc66"><span><a href="#mutable-str">are strings mutable?</a></span></h2>
<p><a name="copy-str-note" id="copy-str-note"></a></p>
<h2 id="toc67"><span><a href="#copy-str">copy string</a></span></h2>
<p><a name="fmt-str-note" id="fmt-str-note"></a></p>
<h2 id="toc68"><span><a href="#fmt-str">format string</a></span></h2>
<p><a name="compare-str-note" id="compare-str-note"></a></p>
<h2 id="toc69"><span><a href="#compare-str">compare strings</a></span></h2>
<p><strong>C++</strong></p>
<p><em>string::compare</em> returns a positive value, 0, or a negative value depending upon whether the receiver is lexicographically greater, equal, or less than the argument. C++ overload the comparison operators (&lt;, &gt;, ==, !=, &lt;=, &gt;=) so that they can be used for string comparison.</p>
<p><strong>Objective C</strong><br /><em>compare</em> will return -1, 0, or 1.</p>
<p><strong>Java</strong></p>
<p><em>compareTo</em> will return a negative value, 0, or a positive value.</p>
<p><strong>C#</strong></p>
<p><em>CompareTo</em> will return -1, 0, or 1.</p>
<p><a name="str-concat-note" id="str-concat-note"></a></p>
<h2 id="toc70"><span><a href="#str-concat">concatenate</a></span></h2>
<p><a name="str-replicate-note" id="str-replicate-note"></a></p>
<h2 id="toc71"><span><a href="#str-replicate">replicate</a></span></h2>
<p><a name="translate-case-note" id="translate-case-note"></a></p>
<h2 id="toc72"><span><a href="#translate-case">translate case</a></span></h2>
<p><a name="trim-note" id="trim-note"></a></p>
<h2 id="toc73"><span><a href="#trim">trim</a></span></h2>
<p><a name="pad-note" id="pad-note"></a></p>
<h2 id="toc74"><span><a href="#pad">pad</a></span></h2>
<p><a name="num-to-str-note" id="num-to-str-note"></a></p>
<h2 id="toc75"><span><a href="#num-to-str">number to string</a></span></h2>
<p><a name="str-to-num-note" id="str-to-num-note"></a></p>
<h2 id="toc76"><span><a href="#str-to-num">string to number</a></span></h2>
<p><strong>C++</strong></p>
<p><em>strtoimax</em>, <em>strtol</em>, <em>strtoll</em>, <em>strtoumax</em>, <em>strtoul</em>, and <em>strtoull</em> take three arguments:</p>
<div class="code">
<pre>
<code>intmax_t
strtoimax(const char *str, char **endp, int base);</code>
</pre></div>
<p>The 2nd argument, if not NULL, will be set to first character in the string that is not part of the number. The 3rd argument can specify a base between 2 and 36.</p>
<p><em>strtof</em>, <em>strtod</em>, and <em>strtold</em> take three arguments:</p>
<div class="code">
<pre>
<code>double
strtod(const char *str, char **endp);</code>
</pre></div>
<p><strong>Java</strong></p>
<p><em>parseInt</em> has an optional second argument for the base.</p>
<p><a name="join-note" id="join-note"></a></p>
<h2 id="toc77"><span><a href="#join">join</a></span></h2>
<p><strong>java:</strong></p>
<p>Use <tt>StringBuilder</tt> to implement join:</p>
<div class="code">
<pre>
<code>public static String join(String[] a, String sep) {

    StringBuilder sb = new StringBuilder();

    for (int i=0; i&lt;a.length; i++) {
        if (i &gt; 0) {
            sb.append(sep);
        }
        sb.append(a[i]);
    }

    return sb.toString();
}</code>
</pre></div>
<p><a name="split-note" id="split-note"></a></p>
<h2 id="toc78"><span><a href="#split">split</a></span></h2>
<p><a name="serialize-note" id="serialize-note"></a></p>
<h2 id="toc79"><span><a href="#serialize">serialize</a></span></h2>
<p><a name="str-length-note" id="str-length-note"></a></p>
<h2 id="toc80"><span><a href="#str-length">string length</a></span></h2>
<p><a name="index-substr-note" id="index-substr-note"></a></p>
<h2 id="toc81"><span><a href="#index-substr">index of substring</a></span></h2>
<p><a name="extract-substr-note" id="extract-substr-note"></a></p>
<h2 id="toc82"><span><a href="#extract-substr">extract substring</a></span></h2>
<p><a name="char-type-note" id="char-type-note"></a></p>
<h2 id="toc83"><span><a href="#char-type">character type</a></span></h2>
<p><a name="char-literal-note" id="char-literal-note"></a></p>
<h2 id="toc84"><span><a href="#char-literal">character literal</a></span></h2>
<p><a name="test-char-note" id="test-char-note"></a></p>
<h2 id="toc85"><span><a href="#test-char">test character</a></span></h2>
<p><a name="regexes-note" id="regexes-note"></a></p>
<h1 id="toc86"><span><a href="#regexes">Regular Expressions</a></span></h1>
<p><a name="regex-match" id="regex-match"></a></p>
<h2 id="toc87"><span>regex match</span></h2>
<p><a name="regex-substitute" id="regex-substitute"></a></p>
<h2 id="toc88"><span>regex substitute</span></h2>
<p><a name="dates-time-note" id="dates-time-note"></a></p>
<h1 id="toc89"><span><a href="#dates-time">Date and Time</a></span></h1>
<p><a name="date-time-type-note" id="date-time-type-note"></a></p>
<h2 id="toc90"><span><a href="#date-time-type">date and time type</a></span></h2>
<p>The data type used to store a combined date and time.</p>
<p><a name="current-date-time-note" id="current-date-time-note"></a></p>
<h2 id="toc91"><span><a href="#current-date-time">current date and time</a></span></h2>
<p>How to get the current date and time.</p>
<p><a name="unix-epoch-note" id="unix-epoch-note"></a></p>
<h2 id="toc92"><span><a href="#unix-epoch">to unix epoch, from unix epoch</a></span></h2>
<p>How to convert a date/time object to the Unix epoch. How to convert the Unix epoch to a date/time object.</p>
<p>The Unix epoch is the number of seconds since 1 January 1970 UTC.</p>
<p><strong>c#:</strong></p>
<p>Windows file time is the number of nanoseconds since 1 January 1601 UTC divided by 100. The concept was introduced when journaling was added to NTFS with Windows 2000.</p>
<p>The magic constant (1164444480) used for the conversion can be calculated with the following code:</p>
<div class="code">
<pre>
<code>using System;
using System.Globalization;

CultureInfo enUS = new CultureInfo("en-US");
DateTime startEpoch = DateTime.ParseExact("1970-01-01 00:00:00 -00", "yyyy-MM-dd HH:mm:ss zz", enUS);

Console.WriteLine(startEpoch.ToFileTimeUtc() / (100*1000*1000));</code>
</pre></div>
<p><a name="format-date-note" id="format-date-note"></a></p>
<h2 id="toc93"><span><a href="#format-date">format date</a></span></h2>
<p>How to use a format string to display a date/time object.</p>
<p>The canonical example of doing this is the <tt>strftime</tt> function from the C standard library which defines used letters prefix by percent signs as conversion specification characters, e.g. %Y-%m-%d.</p>
<p><a name="parse-date-note" id="parse-date-note"></a></p>
<h2 id="toc94"><span><a href="#parse-date">parse date</a></span></h2>
<p>How to use a format string to parse date data from a string.</p>
<p><a name="date-subtraction-note" id="date-subtraction-note"></a></p>
<h2 id="toc95"><span><a href="#date-subtraction">date subtraction</a></span></h2>
<p><a name="add-duration-note" id="add-duration-note"></a></p>
<h2 id="toc96"><span><a href="#add-duration">add duration</a></span></h2>
<p><a name="date-parts-note" id="date-parts-note"></a></p>
<h2 id="toc97"><span><a href="#date-parts">date parts</a></span></h2>
<p><a name="time-parts-note" id="time-parts-note"></a></p>
<h2 id="toc98"><span><a href="#time-parts">time parts</a></span></h2>
<p><a name="fixed-length-arrays-note" id="fixed-length-arrays-note"></a></p>
<h1 id="toc99"><span><a href="#fixed-length-arrays">Fixed-Length Arrays</a></span></h1>
<p><a name="fixed-len-array-stack-note" id="fixed-len-array-stack-note"></a></p>
<h2 id="toc100"><span><a href="#fixed-len-array-stack">declare on stack</a></span></h2>
<p>How to allocate an array which is freed when the block in which it is defined goes out of scope.</p>
<p><a name="fixed-len-array-heap-note" id="fixed-len-array-heap-note"></a></p>
<h2 id="toc101"><span><a href="#fixed-len-array-heap">declare on heap</a></span></h2>
<p>How to allocate an array on the heap.</p>
<p><a name="free-fixed-len-array-heap-note" id="free-fixed-len-array-heap-note"></a></p>
<h2 id="toc102"><span><a href="#free-fixed-len-array-heap">free heap</a></span></h2>
<p>How to free an array that was allocated on the heap.</p>
<p><a name="fixed-len-array-init-list-note" id="fixed-len-array-init-list-note"></a></p>
<h2 id="toc103"><span><a href="#fixed-len-array-init-list">initialization list</a></span></h2>
<p><strong>Objective C</strong></p>
<p>NSArray can only store instances of NSObject. For primitive types, use C arrays.</p>
<p><strong>Java</strong></p>
<p>Java permits arrays to be declared with C-style syntax:</p>
<div class="code">
<pre>
<code>int a[] = {1,2,3}</code>
</pre></div>
<p><a name="fixed-len-array-size-note" id="fixed-len-array-size-note"></a></p>
<h2 id="toc104"><span><a href="#fixed-len-array-size">size</a></span></h2>
<p>How to get the size of a fixed-length array.</p>
<p><a name="fixed-len-array-lookup-note" id="fixed-len-array-lookup-note"></a></p>
<h2 id="toc105"><span><a href="#fixed-len-array-lookup">lookup</a></span></h2>
<p>How to get the value stored at an index in a fixed-length array.</p>
<p><strong>C++</strong></p>
<p>Arrays can be manipulated with pointer syntax. The following sets <em>x</em> and <em>y</em> to the same value:</p>
<div class="code">
<pre>
<code>int a[] = {3,7,4,8,5,9,6,10};
int x = a[4];
int y = *(a+4);</code>
</pre></div>
<p><a name="fixed-len-array-update-note" id="fixed-len-array-update-note"></a></p>
<h2 id="toc106"><span><a href="#fixed-len-array-update">update</a></span></h2>
<p>How to update the value stored at an index in a fixed-length array.</p>
<p><a name="fixed-len-array-out-of-bounds-note" id="fixed-len-array-out-of-bounds-note"></a></p>
<h2 id="toc107"><span><a href="#fixed-len-array-out-of-bounds">out-of-bounds</a></span></h2>
<p>What happens when an out-of-bounds index is used to access a value in a fixed-length array.</p>
<p><a name="copy-fixed-len-array-note" id="copy-fixed-len-array-note"></a></p>
<h2 id="toc108"><span><a href="#copy-fixed-len-array">copy</a></span></h2>
<p>How to copy a fixed-length array.</p>
<p><a name="fixed-len-array-as-func-arg-note" id="fixed-len-array-as-func-arg-note"></a></p>
<h2 id="toc109"><span><a href="#fixed-len-array-as-func-arg">as function argument</a></span></h2>
<p>How to pass a fixed-length array as a function argument.</p>
<p><a name="iterate-over-fixed-len-array-note" id="iterate-over-fixed-len-array-note"></a></p>
<h2 id="toc110"><span><a href="#iterate-over-fixed-len-array">iterate</a></span></h2>
<p>How to iterate over the values of the fixed-length array.</p>
<p><strong>C++</strong></p>
<p>Range-based for loops can be used with fixed-length arrays (but not pointers):</p>
<div class="code">
<pre>
<code>int a[4] = {3, 2, 4, 1};
int sum(0);

for (const auto&amp; n: a) {
  sum += n;
}</code>
</pre></div>
<p><a name="sort-fixed-len-array-note" id="sort-fixed-len-array-note"></a></p>
<h2 id="toc111"><span><a href="#sort-fixed-len-array">sort</a></span></h2>
<p><a name="resizable-arrays-note" id="resizable-arrays-note"></a></p>
<h1 id="toc112"><span><a href="#resizable-arrays">Resizable Arrays</a></span></h1>
<p><a name="decl-resizable-array-note" id="decl-resizable-array-note"></a></p>
<h2 id="toc113"><span><a href="#decl-resizable-array">declare</a></span></h2>
<p><a name="resizable-array-init-list-note" id="resizable-array-init-list-note"></a></p>
<h2 id="toc114"><span><a href="#resizable-array-init-list">initialization list</a></span></h2>
<p><a name="resizable-array-size-note" id="resizable-array-size-note"></a></p>
<h2 id="toc115"><span><a href="#resizable-array-size">size</a></span></h2>
<p><a name="resizable-array-capacity-note" id="resizable-array-capacity-note"></a></p>
<h2 id="toc116"><span><a href="#resizable-array-capacity">capacity</a></span></h2>
<p><a name="resizable-array-empty-test-note" id="resizable-array-empty-test-note"></a></p>
<h2 id="toc117"><span><a href="#resizable-array-empty-test">empty test</a></span></h2>
<p><a name="resizable-array-lookup-note" id="resizable-array-lookup-note"></a></p>
<h2 id="toc118"><span><a href="#resizable-array-lookup">lookup</a></span></h2>
<p><a name="resizable-array-update-note" id="resizable-array-update-note"></a></p>
<h2 id="toc119"><span><a href="#resizable-array-update">update</a></span></h2>
<p><a name="resizable-array-out-of-bounds-note" id="resizable-array-out-of-bounds-note"></a></p>
<h2 id="toc120"><span><a href="#resizable-array-out-of-bounds">out-of-bounds behavior</a></span></h2>
<p><a name="resizable-arary-elem-index-note" id="resizable-arary-elem-index-note"></a></p>
<h2 id="toc121"><span><a href="#resizable-array-elem-index">element index</a></span></h2>
<p><a name="slice-resizable-array-note" id="slice-resizable-array-note"></a></p>
<h2 id="toc122"><span><a href="#slice-resizable-array">slice</a></span></h2>
<p><a name="slice-resizable-array-to-end-note" id="slice-resizable-array-to-end-note"></a></p>
<h2 id="toc123"><span><a href="#slice-resizable-array-to-end">slice to end</a></span></h2>
<p><a name="resizable-array-back-note" id="resizable-array-back-note"></a></p>
<h2 id="toc124"><span><a href="#resizable-array-back">manipulate back</a></span></h2>
<p><a name="resizable-array-front-note" id="resizable-array-front-note"></a></p>
<h2 id="toc125"><span><a href="#resizable-array-front">manipulate front</a></span></h2>
<p><a name="concat-resizable-array-note" id="concat-resizable-array-note"></a></p>
<h2 id="toc126"><span><a href="#concat-resizable-array">concatenate</a></span></h2>
<p><a name="replicate-resizable-array-elem-note" id="replicate-resizable-array-elem-note"></a></p>
<h2 id="toc127"><span><a href="#replicate-resizable-array-elem">replicate element</a></span></h2>
<p><a name="copy-resizable-array-note" id="copy-resizable-array-note"></a></p>
<h2 id="toc128"><span><a href="#copy-resizable-array">copy</a></span></h2>
<p><a name="resizable-array-as-func-arg-note" id="resizable-array-as-func-arg-note"></a></p>
<h2 id="toc129"><span><a href="#resizable-array-as-func-arg">array as function argument</a></span></h2>
<p><a name="iterate-over-resizable-array-note" id="iterate-over-resizable-array-note"></a></p>
<h2 id="toc130"><span><a href="#iterate-over-resizable-array">iterate</a></span></h2>
<p>How to iterate over a resizable array.</p>
<p><strong>C++</strong></p>
<p>The range-based for loop was introduced in C++11. It it can be used to iterate over an initialization list:</p>
<div class="code">
<pre>
<code>for (const auto&amp; n: {1, 2, 3}) {
  sum += n;
}</code>
</pre></div>
<p><a name="tuples-note" id="tuples-note"></a></p>
<h1 id="toc131"><span><a href="#tuples">Tuples</a></span></h1>
<p><a name="pair" id="pair"></a></p>
<h2 id="toc132"><span>pair</span></h2>
<p><a name="dictionaries-note" id="dictionaries-note"></a></p>
<h1 id="toc133"><span><a href="#dictionaries">Dictionaries</a></span></h1>
<p><a name="map" id="map"></a></p>
<h2 id="toc134"><span>map declaration</span></h2>
<p><strong>C:</strong></p>
<p>For those interested in an industrial strength hashtable implementation for C, here is the <a href="http://svn.ruby-lang.org/cgi-bin/viewvc.cgi/trunk/include/ruby/st.h?revision=26401&amp;view=markup">header file</a> and the <a href="http://svn.ruby-lang.org/cgi-bin/viewvc.cgi/trunk/st.c?revision=26672&amp;view=markup">source file</a> for the hashtable used by Ruby.<br />
For those interested in a "Computer Science 101" implementation of a hashtable, here is a simpler <a href="http://gist.github.com/400762">source file</a> and <a href="http://gist.github.com/400764">header file</a>.</p>
<p><a name="map-access" id="map-access"></a></p>
<h2 id="toc135"><span>map access</span></h2>
<p><a name="map-size" id="map-size"></a></p>
<h2 id="toc136"><span>map size</span></h2>
<p><a name="map-remove" id="map-remove"></a></p>
<h2 id="toc137"><span>map remove</span></h2>
<p><a name="map-element-not-found" id="map-element-not-found"></a></p>
<h2 id="toc138"><span>map element not found result</span></h2>
<p><a name="map-iterator" id="map-iterator"></a></p>
<h2 id="toc139"><span>map iterator</span></h2>
<p><a name="functions-note" id="functions-note"></a></p>
<h1 id="toc140"><span><a href="#functions">Functions</a></span></h1>
<p><a name="decl-func-note" id="decl-func-note"></a></p>
<h2 id="toc141"><span><a href="#decl-func">declare function</a></span></h2>
<p>How to declare the type of a function.</p>
<p><a name="def-func-note" id="def-func-note"></a></p>
<h2 id="toc142"><span><a href="#def-func">define function</a></span></h2>
<p>How to define a function.</p>
<p><a name="invoke-func-note" id="invoke-func-note"></a></p>
<h2 id="toc143"><span><a href="#invoke-func">invoke function</a></span></h2>
<p>How to invoke a function.</p>
<p><a name="def-static-method-note" id="def-static-method-note"></a></p>
<h2 id="toc144"><span><a href="#def-static-class-method">define static class method</a></span></h2>
<p><a name="invoke-static-method-note" id="invoke-static-method-note"></a></p>
<h2 id="toc145"><span><a href="#invoke-static-class-method">invoke static class method</a></span></h2>
<p><a name="overload-func-note" id="overload-func-note"></a></p>
<h2 id="toc146"><span><a href="#overload-func">overload function</a></span></h2>
<p><a name="default-arg-note" id="default-arg-note"></a></p>
<h2 id="toc147"><span><a href="#default-arg">default argument</a></span></h2>
<p><a name="variable-num-arg-note" id="variable-num-arg-note"></a></p>
<h2 id="toc148"><span><a href="#variable-num-arg">variable number of arguments</a></span></h2>
<p><a name="named-param-note" id="named-param-note"></a></p>
<h2 id="toc149"><span><a href="#named-param">named parameters</a></span></h2>
<p><strong>Objective C:</strong></p>
<p>Named parameters must be invoked in the order in which they are defined in the method signature.</p>
<p><strong>C#:</strong></p>
<p>Named parameter do not need to be invoked in the order in which they are defined in the method signature. Additionally, their use in<br />
invocation is optional: the arguments can be provided without names in which case the definition order must be used.</p>
<p><a name="pass-by-val-note" id="pass-by-val-note"></a></p>
<h2 id="toc150"><span><a href="#pass-by-val">pass by value</a></span></h2>
<p><a name="pass-by-ref-note" id="pass-by-ref-note"></a></p>
<h2 id="toc151"><span><a href="#pass-by-ref">pass by reference</a></span></h2>
<p><a name="pass-by-addr-note" id="pass-by-addr-note"></a></p>
<h2 id="toc152"><span><a href="#pass-by-addr">pass by address</a></span></h2>
<p><a name="retval-note" id="retval-note"></a></p>
<h2 id="toc153"><span><a href="#retval">return value</a></span></h2>
<p><a name="no-retval-note" id="no-retval-note"></a></p>
<h2 id="toc154"><span><a href="#no-retval">no return value</a></span></h2>
<p><a name="recursive-func-note" id="recursive-func-note"></a></p>
<h2 id="toc155"><span><a href="#recursive-func">recursive function</a></span></h2>
<p><a name="anonymous-func-note" id="anonymous-func-note"></a></p>
<h2 id="toc156"><span><a href="#anonymous-func">anonymous function</a></span></h2>
<p><a name="invoke-anonymous-func-note" id="invoke-anonymous-func-note"></a></p>
<h2 id="toc157"><span><a href="#invoke-anonymous-func">invoke anonymous function</a></span></h2>
<p><a name="closure-note" id="closure-note"></a></p>
<h2 id="toc158"><span><a href="#closure">closure</a></span></h2>
<p><a name="func-private-state-note" id="func-private-state-note"></a></p>
<h2 id="toc159"><span><a href="#func-private-state">function with private state</a></span></h2>
<p><a name="func-as-val-note" id="func-as-val-note"></a></p>
<h2 id="toc160"><span><a href="#func-as-val">function as value</a></span></h2>
<p><a name="overload-op-note" id="overload-op-note"></a></p>
<h2 id="toc161"><span><a href="#overload-op">overload operator</a></span></h2>
<p><strong>C++</strong></p>
<p>A note on how to overload postfix and prefix <tt>++</tt> and <tt>—</tt>.</p>
<p><a name="execution-control-note" id="execution-control-note"></a></p>
<h1 id="toc162"><span><a href="#execution-control">Execution Control</a></span></h1>
<p><a name="if-note" id="if-note"></a></p>
<h2 id="toc163"><span><a href="#if">if</a></span></h2>
<p>The syntax for an <tt>if</tt> statement.</p>
<p><a name="dangling-else-note" id="dangling-else-note"></a></p>
<h2 id="toc164"><span><a href="#dangling-else">dangling else</a></span></h2>
<p>The curly braces around the branches of an <tt>if</tt> statement are optional when the branch contains a single statement.</p>
<p>From the perspective of the parser, the branches are statements. Curly branch delimited blocks are legal wherever a statement is legal.</p>
<p>When <tt>if</tt> statements are nested and the outer <tt>if</tt> statement does not put its if-clause in curly braces, the parser will match a subsequent <tt>else</tt> to the inner <tt>if</tt>. Code which puts the <tt>else</tt> on the same level of indentation as the outer <tt>if</tt> is deceptive.</p>
<p><a name="switch-note" id="switch-note"></a></p>
<h2 id="toc165"><span><a href="#switch">switch</a></span></h2>
<p>The syntax for a <tt>switch</tt> statement.</p>
<p>A <tt>switch</tt> checks the value of integer expression and jumps to the correct label. This can faster than an <tt>if</tt> statement with numerous <tt>else if</tt> branches which tests the expression until a match is found.</p>
<p>Execution falls through to code after subsequent labels unless a <tt>break</tt> statement is encountered. This makes it possible to write code once which handles multiple values.</p>
<p><a name="while-note" id="while-note"></a></p>
<h2 id="toc166"><span><a href="#while">while</a></span></h2>
<p>The syntax for a <tt>while</tt> loop.</p>
<p>If the body of a <tt>while</tt> loop is a single statement, the curly braces are optional.</p>
<p>The languages in this sheet also have a <tt>do-while</tt> loop, which is a loop which always executes at least once.</p>
<p>Here is an example of a <tt>do-while</tt> loop which converts an unsigned integer to a string. The corresponding <tt>while</tt> loop would require extra handling when the integer is zero.</p>
<div class="code">
<pre>
<code>/*  unsigned int n;
 *  char* s;
 */

do {
  s[i++] = n % 10 + '0';
} while ((n /= 10) &gt; 0);
s[i] = '\0';
reverse(s);</code>
</pre></div>
<p><a name="for-note" id="for-note"></a></p>
<h2 id="toc167"><span><a href="#for">for</a></span></h2>
<p>The syntax for a C-style <tt>for</tt> loop.</p>
<p>The parens of the <tt>for</tt> loop contain three expressions set off by semicolons: the <em>initialization</em>, the <em>condition</em>, and the <em>increment</em>.</p>
<p>The initialization expression executes once before the loop starts.</p>
<p>The condition expression executes once before the start of each iteration. The loop stops if the condition is false.</p>
<p>The increment executes at the end of each iteration.</p>
<p><a name="break-note" id="break-note"></a></p>
<h2 id="toc168"><span><a href="#break">break</a></span></h2>
<p>The <tt>break</tt> statement terminates execution of the innermost containing loop or switch statement.</p>
<p><a name="break-nested-loops-note" id="break-nested-loops-note"></a></p>
<h2 id="toc169"><span><a href="#break-nested-loops">break out of nested loops</a></span></h2>
<p>A method for breaking out of nested loops.</p>
<p><a name="continue-note" id="continue-note"></a></p>
<h2 id="toc170"><span><a href="#continue">continue</a></span></h2>
<p>The <tt>continue</tt> statement, which terminates execution of the current loop iteration.</p>
<p><a name="goto-note" id="goto-note"></a></p>
<h2 id="toc171"><span><a href="#goto">goto</a></span></h2>
<p><a name="exceptions-note" id="exceptions-note"></a></p>
<h1 id="toc172"><span><a href="#exceptions">Exceptions</a></span></h1>
<p><a name="base-exc-note" id="base-exc-note"></a></p>
<h2 id="toc173"><span><a href="#base-exc">base exception</a></span></h2>
<p>The base class or interface for exceptions.</p>
<p><a name="predefined-exc-note" id="predefined-exc-note"></a></p>
<h2 id="toc174"><span><a href="#predefined-exc">predefined exceptions</a></span></h2>
<p>A partial list of exceptions raised by the language or the standard library.</p>
<p><a name="raise-exc-note" id="raise-exc-note"></a></p>
<h2 id="toc175"><span><a href="#raise-exc">raise exception</a></span></h2>
<p>How to raise an exception.</p>
<p><strong>C++</strong></p>
<p>C++ code can throw or catch any type of object or primitive data type. The C++ standard library throws subclasses of std::exception, which does not have a message member.</p>
<p><strong>Objective C</strong></p>
<p>Objective C can only throw an instance of NSException or one of its subclasses.</p>
<p><strong>Java</strong></p>
<p>Java can only throw an implementation of java.lang.Throwable.</p>
<p><strong>C#</strong></p>
<p>C# can only throw an instance of System.Exception of one of its subclasses.</p>
<p><a name="handle-exc-note" id="handle-exc-note"></a></p>
<h2 id="toc176"><span><a href="#handle-exc">handle exception</a></span></h2>
<p>How to handle an exception.</p>
<p><strong>C++</strong></p>
<p>Exceptions can be caught by value or by reference. If the exception is an object and it is caught by value, the copy constructor and the destructor will be invoked.</p>
<p><strong>Objective C</strong></p>
<p>Exceptions are thrown and caught by pointer value.</p>
<p><a name="def-exc-note" id="def-exc-note"></a></p>
<h2 id="toc177"><span><a href="#def-exc">define exception</a></span></h2>
<p>How to define a new exception type.</p>
<p><a name="re-raise-exc-note" id="re-raise-exc-note"></a></p>
<h2 id="toc178"><span><a href="#re-raise-exc">re-raise exception</a></span></h2>
<p>How to handle and re-raise an exception.</p>
<p><a name="catch-all-handler-note" id="catch-all-handler-note"></a></p>
<h2 id="toc179"><span><a href="#catch-all-handler">catch-all handler</a></span></h2>
<p>How to write a handler witch catches any exception.</p>
<p><a name="multiple-handlers-note" id="multiple-handlers-note"></a></p>
<h2 id="toc180"><span><a href="#multiple-handlers">multiple handlers</a></span></h2>
<p><a name="error-msg-note" id="error-msg-note"></a></p>
<h2 id="toc181"><span><a href="#error-msg">error message</a></span></h2>
<p><a name="errno-note" id="errno-note"></a></p>
<h2 id="toc182"><span><a href="#errno">system call errno</a></span></h2>
<p><a name="finally-clause-note" id="finally-clause-note"></a></p>
<h2 id="toc183"><span><a href="#finally-clause">finally clause</a></span></h2>
<p><strong>C++</strong></p>
<div class="code">
<pre>
<code>Class Finally {

  void (*finally)();

  Finally(void (*f)()) : finally(f) {

  }

  ~Finally() {
    do_cleanup();
  }
};

{
  Cleanup c();

  risky();
}</code>
</pre></div>
<p><a name="exc-specification-note" id="exc-specification-note"></a></p>
<h2 id="toc184"><span><a href="#exc-specification">exception specification</a></span></h2>
<p><strong>Java</strong></p>
<p>If a method throws a subclass of java.lang.Exception, it must declare the exception in its throws clause. This includes exceptions originating in code called by the method. On the other hand, if the method throws a subclass of java.lang.Error, no declaration in the throws clause is necessary.</p>
<p><a name="concurrency-note" id="concurrency-note"></a></p>
<h1 id="toc185"><span><a href="#concurrency">Concurrency</a></span></h1>
<p><a name="file-handles-note" id="file-handles-note"></a></p>
<h1 id="toc186"><span><a href="#file-handles">File Handles</a></span></h1>
<p><a name="printf-note" id="printf-note"></a></p>
<h2 id="toc187"><span><a href="#printf">printf</a></span></h2>
<p>How to print a formatted string to standard out.</p>
<p><a name="read-file" id="read-file"></a></p>
<h2 id="toc188"><span>read from file</span></h2>
<p><strong>C</strong></p>
<p>If there is an error, the global variable <em>errno</em> will be set to a nonzero value, and <em>strerror(errno)</em> will return an error message for the error.</p>
<p><a name="write-file" id="write-file"></a></p>
<h2 id="toc189"><span>write to file</span></h2>
<p><a name="files-note" id="files-note"></a></p>
<h1 id="toc190"><span><a href="#files">Files</a></span></h1>
<p><a name="file-fmt-note" id="file-fmt-note"></a></p>
<h1 id="toc191"><span><a href="#file-fmt">File Formats</a></span></h1>
<p><a name="directories-note" id="directories-note"></a></p>
<h1 id="toc192"><span><a href="#directories">Directories</a></span></h1>
<p><a name="processes-environment-note" id="processes-environment-note"></a></p>
<h1 id="toc193"><span><a href="#processes-environment">Processes and Environment</a></span></h1>
<p><a name="main" id="main"></a></p>
<h2 id="toc194"><span>signature of main</span></h2>
<p><a name="first-argument" id="first-argument"></a></p>
<h2 id="toc195"><span>first argument</span></h2>
<p><strong>C</strong></p>
<p>The first argument is the pathname to the executable. Whether the pathname is absolute or relative depends on how the executable was invoked. If the executable was invoked via a symlink, then the first argument is the pathname of the symlink, not the executable the symlink points to.</p>
<p><a name="environment-variable" id="environment-variable"></a></p>
<h2 id="toc196"><span>environment variable</span></h2>
<p><a name="iterate-through-environment-variables" id="iterate-through-environment-variables"></a></p>
<h2 id="toc197"><span>iterate through environment variables</span></h2>
<p><a name="libraries-namespaces-note" id="libraries-namespaces-note"></a></p>
<h1 id="toc198"><span><a href="#libraries-namespaces">Library and Namespaces</a></span></h1>
<p><a name="std-lib-name-note" id="std-lib-name-note"></a></p>
<h2 id="toc199"><span><a href="#std-lib-name">standard library name</a></span></h2>
<p>The name of the standard library.</p>
<p><strong>C++</strong></p>
<p><a href="http://www.sgi.com/tech/stl/">Standard Template Library (STL)</a></p>
<p>The STL might not be installed by default.</p>
<p><strong>Objective C</strong></p>
<p><a href="http://developer.apple.com/mac/library/documentation/cocoa/reference/foundation/objc_classic/index.html">Foundation Framework</a></p>
<p>The Foundation Framework is the core of Cocoa, a set of libraries for Objective C development on Mac OS X and the iPhone. The Foundation Framework descends from NextStep, hence the NS prefix in the class names. NextStep was made available to operating systems other than Next as OpenStep and the GNU implementation is called GNUStep.</p>
<p><strong>Java</strong></p>
<p><a href="http://java.sun.com/javase/6/docs/api/">Java 1.6 API</a></p>
<p><strong>C#</strong></p>
<p><a href="http://msdn.microsoft.com/en-us/library/ms229335(v=VS.100).aspx">.NET Framework 4 Class Library</a><br /><a href="http://www.go-mono.com/docs/">Mono Documentation</a></p>
<p>The core of the .NET framework is called the Base Class Library. Mono implements the BCL, but not all of the .NET framework.</p>
<p><a name="user-defined-types-note" id="user-defined-types-note"></a></p>
<h1 id="toc200"><span><a href="#user-defined-types">User-Defined Types</a></span></h1>
<p><a name="typedef-note" id="typedef-note"></a></p>
<h2 id="toc201"><span><a href="#typedef">typedef</a></span></h2>
<p><strong>C</strong></p>
<p>Because C integer types don't have well defined sizes, <em>typedef</em> is sometimes employed to as an aid to writing portable code. One might include the following in a header file:</p>
<div class="code">
<pre>
<code>typedef int int32_t;</code>
</pre></div>
<p>The rest of the code would declare integers that need to be 32 bits in size using <em>int32_t</em> and if the code needed to be ported to a platform with a 16 bit <em>int</em>, only a single place in the code requires change. In practice the <em>typedef</em> abstraction is leaky because functions in the standard library such as <em>atoi</em>, <em>strtol</em>, or the format strings used by <em>printf</em> depend on the underlying type used.</p>
<p><strong>Java</strong></p>
<p>Java has well defined integer sizes so <em>typedef</em> is not needed as a portability aid. In other situations where a C programmer would use a <em>typedef</em> for data abstraction, a Java programmer must either define a class or retain the raw primitive type throughout the code.</p>
<p><a name="enum-note" id="enum-note"></a></p>
<h2 id="toc202"><span><a href="#enum">enum</a></span></h2>
<p><strong>C</strong></p>
<p>Enums were added to the C standard when the language was standardized by ANSI in 1989.</p>
<p>An enum defines a family of integer constants. If an integer value is not explicitly provided for a constant, it is given a value one greater than the previous constant in the list. If the first constant in the list is not given an explicit value, it is assigned a value of zero. it is possible for constants in a list to share values. For example, in the following enum, <em>a</em> and <em>c</em> are both zero and <em>b</em> and <em>d</em> are both one.</p>
<div class="code">
<pre>
<code>enum { a=0, b, c=0, d };</code>
</pre></div>
<p>A <em>typedef</em> can be used to make the <em>enum</em> keyword unnecessary in variable declarations:</p>
<div class="code">
<pre>
<code>typedef enum { mon, tue, wed, thu, fri, sat, sun } day_of_week;
day_of_week d = tue;</code>
</pre></div>
<p>From the point of view of the C compiler, an enum is an <em>int</em>. The C compiler does not prevent assigning values to an enum type that are not in the enumerated list. Thus, the following code compiles:</p>
<div class="code">
<pre>
<code>enum day_of_week { mon, tue, wed, thu, fri, sat, sun };
day_of_week d = 10;

typedef enum { mon, tue, wed, thu, fri, sat, sun } day_of_week2;
day_of_week2 d2 = 10;</code>
</pre></div>
<p><strong>C++</strong></p>
<p>C++ enums are more strongly typed the C enums. The compiler rejects attempts to assign a value to an enum variable that is not in the enumerated list. The following code:</p>
<div class="code">
<pre>
<code>enum day_of_week { mon, tue, wed, thu, fri, sat, sun };
day_of_week d = 10;</code>
</pre></div>
<p>produces an error like the following:</p>
<div class="code">
<pre>
<code>main.cpp: In function ‘int main()’:
main.cpp:21: error: invalid conversion from ‘int’ to ‘main()::day_of_week’</code>
</pre></div>
<p><strong>Java</strong></p>
<p>Java added enums in 1.5.</p>
<p>Java enums are strongly typed like C++ enums. Unlike C++ enums, it is an error to use an enum value in an integer context. The value has a method <em>ordinal()</em> which returns the integer value, however.</p>
<p>When used in a string context, an enum will evaluate as the string corresponding to its identifier: i.e. "TUE" for DayOfWeek.TUE. This string can be accessed explicitly with DayOfWeek.TUE.toString(). Conversely, DayOfWeek.valueOf("TUE") returns DayofWeek.TUE.</p>
<p>Java enums are subclasses of java.lang.Enum. In particular, an enum is a class, and if the last value if the enum definition is followed by a semicolon, what follows is a class body which can contain methods and constructors. An enum class is final and cannot be subclassed, but an enum can implement an interface.</p>
<p><strong>C#</strong></p>
<p>Like Java enums, C# enums will return the string corresponding to their identifier. Unlike Java enums, C# enums will evaluate as integers in a numeric context.</p>
<p>When used as an argument in a C# style format string, an enum value returns the string corresponding to its identifier.</p>
<p><a name="struct-definition" id="struct-definition"></a></p>
<h2 id="toc203"><span>struct definition</span></h2>
<p>A struct provides names for elements in a predefined set of data and permits the data to be accessed directly without the intermediation of getters and setters. C++, Java, and C# classes can be used to define structs by making the data members public. However, public data members violates the <a href="http://en.wikipedia.org/wiki/Uniform_access_principle">uniform access principle</a>.</p>
<p><strong>C++:</strong></p>
<p>From <em>The C++ Programming Language: 3rd Edition</em>:</p>
<div class="code">
<pre>
<code>by definition, a struct is a class in which members are by default public; that is,

    struct s { ...

is simply shorthand for

    class s { public: ...</code>
</pre></div>
<p><a name="struct-declaration" id="struct-declaration"></a></p>
<h2 id="toc204"><span>struct declaration</span></h2>
<p><a name="struct-initialization" id="struct-initialization"></a></p>
<h2 id="toc205"><span>struct initialization</span></h2>
<p><strong>C</strong></p>
<p>The literal format for a struct can only be used during initialization. If the member names are not provided, the values must occur in the order used in the definition.</p>
<p><a name="struct-member-assignment" id="struct-member-assignment"></a></p>
<h2 id="toc206"><span>struct member assignment</span></h2>
<p><a name="struct-member-access" id="struct-member-access"></a></p>
<h2 id="toc207"><span>struct member access</span></h2>
<p><strong>C</strong></p>
<p>The period operator used for member access has higher precedence than the pointer operator. Thus parens must be used<br />
to get at the member of a struct referenced by a pointer:</p>
<div class="code">
<pre>
<code>struct medal_count {
char* country;
int gold;
int silver;
int bronze;
}

struct medal_count spain = { "Spain", 3, 7 4 };
struct medal_count *winner = &amp;spain;
printf("The winner is %s with %d gold medals", (*winner).country, (*winner).gold);</code>
</pre></div>
<p><em>ptr-&gt;mem</em> is a shortcut for <em>(*ptr).mem</em>:</p>
<div class="code">
<pre>
<code>printf("The winner (%s) earned %d silver medals", winner-&gt;country, winner-&gt;silver);</code>
</pre></div>
<p><a name="generic-types-note" id="generic-types-note"></a></p>
<h1 id="toc208"><span><a href="#generic-types">Generic Types</a></span></h1>
<p><a name="define-generic" id="define-generic"></a></p>
<h2 id="toc209"><span>define generic type</span></h2>
<p><a name="instantiate-generic" id="instantiate-generic"></a></p>
<h2 id="toc210"><span>instantiate generic type</span></h2>
<p><a name="objects-note" id="objects-note"></a></p>
<h1 id="toc211"><span><a href="#objects">Objects</a></span></h1>
<p><a name="define-class" id="define-class"></a></p>
<h2 id="toc212"><span>define class</span></h2>
<p><a name="constructor" id="constructor"></a></p>
<h2 id="toc213"><span>constructor</span></h2>
<p><a name="create-object" id="create-object"></a></p>
<h2 id="toc214"><span>create object</span></h2>
<p><a name="destructor" id="destructor"></a></p>
<h2 id="toc215"><span>destructor</span></h2>
<p><strong>C++</strong></p>
<p>The C++ compiler will normally see to it that the destructor for a class and all its superclasses is called. The compiler may not be aware of the true class of the object if it was upcast to one of its base class. If the destructor was not declared virtual, then the derived class destructor and any other base class constructors will not get called. Thus many developers declare all destructors virtual.</p>
<p><strong>Java</strong></p>
<p>Java does not chain finalize() methods, so the derived class should explicitly call the parent.</p>
<p><a name="destroy-object" id="destroy-object"></a></p>
<h2 id="toc216"><span>destroy object</span></h2>
<p><strong>Java</strong></p>
<p>finalize() is called by the Java garbage collector.</p>
<p><a name="define-method" id="define-method"></a></p>
<h2 id="toc217"><span>define method</span></h2>
<p><a name="invoke-method" id="invoke-method"></a></p>
<h2 id="toc218"><span>invoke method</span></h2>
<p><a name="define-class-method" id="define-class-method"></a></p>
<h2 id="toc219"><span>define class method</span></h2>
<p><a name="invoke-class-method" id="invoke-class-method"></a></p>
<h2 id="toc220"><span>invoke class method</span></h2>
<p><a name="receiver" id="receiver"></a></p>
<h2 id="toc221"><span>name of receiver</span></h2>
<p><a name="access-control" id="access-control"></a></p>
<h2 id="toc222"><span>access control</span></h2>
<p><strong>objective c:</strong></p>
<p>Access control only applies to members; all methods are public. gcc 4.0 does not enforce the access restrictions; it merely gives warnings.</p>
<p><a name="anonymous-class" id="anonymous-class"></a></p>
<h2 id="toc223"><span>anonymous class</span></h2>
<p><a name="polymorphism-note" id="polymorphism-note"></a></p>
<h1 id="toc224"><span><a href="#polymorphism">Polymorphism</a></span></h1>
<p><a name="dynamic-dispatch" id="dynamic-dispatch"></a></p>
<h2 id="toc225"><span>dynamic dispatch</span></h2>
<p><a name="static-dispatch" id="static-dispatch"></a></p>
<h2 id="toc226"><span>static dispatch</span></h2>
<p>Method dispatch is <em>static</em> if the method is determined by the variable type, and <em>dynamic</em> if it is determined by the value type. These techniques of method dispatch yield different results when both the base class and the derived class have implementations for a method, and an instance of the derived class is being stored in a variable with type of the base class.</p>
<p>When dispatch is static, the compiler can determine the code that will be executed for the method call. When dispatch is dynamic, the code that will be executed is a runtime decision. C++ implementations usually achieve this by storing function pointers in the object: qv <a href="http://en.wikipedia.org/wiki/Virtual_method_table">virtual method table</a>.</p>
<p>The use of the keyword <em>static</em> in the declaration of a class method in C++, Java, and C# is perhaps unfortunate. Class methods are always statically dispatched, so the concepts are not unrelated.</p>
<p><a name="subclass" id="subclass"></a></p>
<h2 id="toc227"><span>subclass</span></h2>
<p><a name="superclass-constructor" id="superclass-constructor"></a></p>
<h2 id="toc228"><span>superclass constructor</span></h2>
<p><a name="underivable-class" id="underivable-class"></a></p>
<h2 id="toc229"><span>mark class underivable or method overrideable</span></h2>
<p><a name="root-class" id="root-class"></a></p>
<h2 id="toc230"><span>root class</span></h2>
<p>Name of the root class, if there is one.</p>
<p><strong>objective c:</strong></p>
<p>It is possible to define a root class other than NSObject.</p>
<p><a name="root-class-methods" id="root-class-methods"></a></p>
<h2 id="toc231"><span>root class methods</span></h2>
<p>A selection of methods available on the root class.</p>
<p><a name="reflection-note" id="reflection-note"></a></p>
<h1 id="toc232"><span><a href="#reflection">Reflection</a></span></h1>
<p><a name="type-class" id="type-class"></a></p>
<h2 id="toc233"><span>get type class of object</span></h2>
<p><a name="get-type-class-string" id="get-type-class-string"></a></p>
<h2 id="toc234"><span>get type class from string</span></h2>
<p><a name="get-type-class-identifier" id="get-type-class-identifier"></a></p>
<h2 id="toc235"><span>get type class from type identifier</span></h2>
<p><strong>c++:</strong></p>
<p><em>typeid</em> returns a value of type <em>type_info</em>. The assignment method and copy constructor of <em>type_info</em> are private.</p>
<p><a name="class-name" id="class-name"></a></p>
<h2 id="toc236"><span>class name</span></h2>
<p>*c++:**</p>
<p>The string returned by <em>type_info.name()</em> contains more than the class name. The code below displayed the string "Z4mainE3Foo" when run on my system.</p>
<div class="code">
<pre>
<code>class Foo {
  int i;
};
puts(typeid(Foo).name());</code>
</pre></div>
<p><a name="get-methods" id="get-methods"></a></p>
<h2 id="toc237"><span>get methods</span></h2>
<p><a name="has-method" id="has-method"></a></p>
<h2 id="toc238"><span>has method</span></h2>
<p><a name="invoke-method-object" id="invoke-method-object"></a></p>
<h2 id="toc239"><span>invoke method object</span></h2>
<p><a name="net-web-note" id="net-web-note"></a></p>
<h1 id="toc240"><span><a href="#net-web">Net and Web</a></span></h1>
<p><a name="url-encode-note" id="url-encode-note"></a></p>
<h2 id="toc241"><span><a href="#url-encode">url encode/decode</a></span></h2>
<p>How to URL encode and URL decode a string.</p>
<p>URL encoding is also called percent encoding. It is used to escape special characters in GET query string parameters.</p>
<p>Reserved characters according to <a href="http://www.ietf.org/rfc/rfc3986.txt">RFC 3986</a> are replaced by a percent sign % followed by a two hex digit representation of the ASCII code. The reserved characters are:</p>
<div class="code">
<pre>
<code>! * ' ( ) ; : @ &amp; = + $ , / ? # [ ]</code>
</pre></div>
<p>Spaces can optionally be represented by a plus sign +.</p>
<p><a name="unit-tests-note" id="unit-tests-note"></a></p>
<h1 id="toc242"><span><a href="#unit-tests">Unit Tests</a></span></h1>
<p><a name="debugging-profiling-note" id="debugging-profiling-note"></a></p>
<h1 id="toc243"><span><a href="#debugging-profiling">Debugging and Profiling</a></span></h1>
<p><a name="cpp" id="cpp"></a></p>
<h1 id="toc244"><span><a href="#top">C++</a></span></h1>
<p><a href="http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3337.pdf">C++11 Standard (pdf)</a><br /><a href="http://www.cplusplus.com/reference/">Standard C++ Library Reference</a><br /><a href="http://gcc.gnu.org/onlinedocs/libstdc++/">The GNU C++ Library</a><br /><a href="http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml">Google C++ Style Guide</a><br /><a href="http://doc.qt.digia.com/qq/qq13-apis.html">Designing Qt-Style C++ APIs</a></p>
<p><strong>C++11 and gcc</strong></p>
<p><tt>gcc</tt> provides a C++11 compiler which will run on Linux, Mac OS X, and Windows. For a complete implementation of the C++11 standard one should use <tt>gcc</tt> 4.8 or later, but <tt>gcc</tt> 4.6 is sufficient for the examples in this sheet. Support for C++11 features must be requested with the <tt>-std=c++0x</tt> flag.</p>
<p><strong>C++11 on Mac OS X</strong></p>
<p>The version of <tt>gcc</tt> that comes with XCode in Mac OS X 10.8 as part of the command line tools package is 4.2. This version of <tt>gcc</tt> does not support C++11, but the command line tools package also provides the <tt>clang</tt> compiler which does:</p>
<div class="code">
<pre>
<code>clang++ -std=c++11 -stdlib=libc++ -o hello hello.cpp</code>
</pre></div>
<p>Like <tt>gcc</tt>, <tt>clang</tt> does not compile C++11 by default, hence the <tt>-std=c++11</tt> flag. One must also specify the C++ standard library, since the <tt>libc++</tt> library which comes with <tt>clang</tt> will support C++11, but the <tt>libstdc++</tt> library provided with <tt>gcc</tt> 4.2 will not, and <tt>clang</tt> uses the <tt>gcc</tt> library by default.</p>
<p><strong>C++11 Windows</strong></p>
<p>The Visual Studio 2012 C++ compiler does not completely support C++11, but it has support for the features mentioned in this sheet. For a complete C++11 compiler, install MinGW and <tt>gcc</tt> 4.8.</p>
<p><strong>Compatibility with C</strong></p>
<p><strong>What's New in C++11</strong></p>
<p><a name="objective-c" id="objective-c"></a></p>
<h1 id="toc245"><span><a href="#top">Objective-C</a></span></h1>
<p><a href="https://developer.apple.com/library/mac/#documentation/Cocoa/Conceptual/ProgrammingWithObjectiveC/Introduction/Introduction.html">Programming with Objective-C</a> Apple<br /><a href="http://www.gnu.org/software/gnustep/resources/documentation/Developer/Base/ProgrammingManual/manual_toc.html">GNUstep</a><br /><a href="http://developer.apple.com/mac/library/documentation/cocoa/reference/foundation/objc_classic/index.html">Mac OS X Foundation Framework</a></p>
<p><a name="java" id="java"></a></p>
<h1 id="toc246"><span><a href="#top">Java</a></span></h1>
<p><a href="http://java.sun.com/javase/6/docs/api/">Java 1.6 API</a><br /><a href="https://jdk7.java.net/">JDK 7 Project</a><br /><a href="http://java.sun.com/docs/books/jvms/second_edition/html/VMSpecTOC.doc.html">JVM Specification 2nd Ed</a><br /><a href="http://java.sun.com/docs/books/jls/">The Java Language Specification 3rd Ed</a></p>
<p><a name="c-sharp" id="c-sharp"></a></p>
<h1 id="toc247"><span><a href="#top">C#</a></span></h1>
<p><a href="http://standards.iso.org/ittf/PubliclyAvailableStandards/c042926_ISO_IEC_23270_2006(E).zip">C# Standard: ECMA-334</a><br /><a href="http://www.go-mono.com/docs/">Mono API</a><br /><a href="http://msdn.microsoft.com/en-us/library/67ef8sbd.aspx">C# Programming Guide</a> Microsoft</p>

                    </div>
        </div>
      </div>
      <div id="license-area" class="license-area">
        content of this page licensed under
        <a rel="license" href="http://creativecommons.org/licenses/by-sa/3.0/">
        creative commons attribution-sharealike 3.0</a>
      </div>
    </div>
  </div>
</div>

<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-17129977-2']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>

</body>
</html>
