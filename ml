<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html lang="en" xml:lang="en" xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="content-type" content="text/html;charset=UTF-8"/>
<link rel="icon" type="image/gif" href="/favicon.gif"/>
<link rel="apple-touch-icon" sizes="120x120" href="touch-icon-iphone-retina.png" />
<link rel="apple-touch-icon" sizes="152x152" href="touch-icon-ipad-retina.png" />
<title>ML Dialects and Friends: OCaml, F#, Scala, Haskell - Hyperpolyglot</title>
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
                            ML Dialects and Friends: OCaml, F#, Scala, Haskell
                        </div>
<div id="page-content">
                        

<p><em>a side-by-side reference sheet</em></p>
<p><a href="#grammar-invocation">grammar and invocation</a> | <a href="#var-expr">variables and expressions</a> | <a href="#arithmetic-logic">arithmetic and logic</a> | <a href="#strings">strings</a> | <a href="#dates-time">dates and time</a> | <a href="#arrays">arrays</a> | <a href="#lists">lists</a> | <a href="#tuples">tuples</a> | <a href="#dictionaries">dictionaries</a> | <a href="#functions">functions</a> | <a href="#execution-control">execution control</a> | <a href="#exceptions">exceptions</a> | <a href="#concurrency">concurrency</a> | <a href="#file-handles">file handles</a> | <a href="#files">files</a> | <a href="#directories">directories</a> | <a href="#processes-environment">processes and environment</a> | <a href="#libraries-namespaces">libraries and namespaces</a> | <a href="#user-defined-types">user-defined types</a> | <a href="#objects">objects</a> | <a href="#polymorphism">polymorphism</a> | <a href="#net-web">net and web</a> | <a href="#unit-tests">unit tests</a> | <a href="#debugging-profiling">debugging and profiling</a> | <a href="#repl">repl</a></p>
<table class="wiki-content-table"><tr><th></th>
<th><a href="#ocaml">ocaml</a></th>
<th><a href="#fsharp">f#</a></th>
<th><a href="#scala">scala</a></th>
<th><a href="#haskell">haskell</a></th>
</tr><tr><td><a name="version-used" id="version-used"></a><a href="#version-used-note">version used</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>4.0</em></span></td>
<td><span style="color: gray"><em>F# 3.0</em></span><br /><span style="color: gray"><em>Mono 3.2</em></span></td>
<td><span style="color: gray"><em>2.9</em></span></td>
<td><span style="color: gray"><em>7.4</em></span></td>
</tr><tr><td><a name="version" id="version"></a><a href="#version-note">show version</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>$ ocaml -version</td>
<td>$ fsharpi <span style="white-space: pre-wrap;">--</span>help</td>
<td>$ scala -version</td>
<td>$ ghc <span style="white-space: pre-wrap;">--</span>version</td>
</tr><tr><th colspan="5"><a name="grammar-invocation" id="grammar-invocation"></a><a href="#grammar-invocation-note">grammar and invocation</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td><a name="interpreter" id="interpreter"></a><a href="#interpreter-note">interpreter</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>$ echo 'print_endline "hello"' &gt; hello.ml<br /><br />
$ ocaml hello.ml</td>
<td>$ cat <span style="white-space: pre-wrap;">&lt;&lt;</span>EOF &gt; hello.fs<br />
module hello<br />
let main = printfn "hello"<br />
EOF<br /><br />
$ fsharpi <span style="white-space: pre-wrap;">--</span>quiet <span style="white-space: pre-wrap;">--</span>exec hello.fs</td>
<td>$ echo 'println("hello")' &gt; hello.scala<br /><br />
$ scala hello.scala</td>
<td>$ echo 'main = putStrLn "hello"' &gt; hello.hs<br /><br />
$ runghc hello.hs</td>
</tr><tr><td><a name="shebang" id="shebang"></a><a href="#shebang-note">shebang</a></td>
<td>$ cat <span style="white-space: pre-wrap;">&lt;&lt;</span>EOF &gt; hello.ml<br />
#!/usr/bin/env ocaml<br /><br />
print_endline "hello";;<br />
EOF<br /><br />
$ chmod +x hello.ml<br />
$ ./hello.ml</td>
<td>$ cat <span style="white-space: pre-wrap;">&lt;&lt;</span>EOF &gt; hello.fs<br />
#light (*<br /><span style="white-space: pre-wrap;">  </span>exec fsharpi <span style="white-space: pre-wrap;">--</span>exec $0 <span style="white-space: pre-wrap;">--</span>quiet<br />
*)<br /><br />
module hello<br /><br />
printfn "hello"<br />
EOF<br /><br />
$ chmod +x hello.fs<br />
$ ./hello.fs</td>
<td>$ cat <span style="white-space: pre-wrap;">&lt;&lt;</span>EOF &gt; hello.scala<br />
#!/bin/sh<br />
exec scala $0 $@<br />
!#<br /><br />
println("hello")<br />
EOF<br /><br />
$ chmod +x hello.scala<br />
$ ./hello.scala</td>
<td>$ cat <span style="white-space: pre-wrap;">&lt;&lt;</span>EOF &gt; hello.hs<br />
#!/usr/bin/env runghc<br /><br />
main = putStrLn "hello"<br />
EOF<br /><br />
$ chmod +x hello.hs<br />
$ ./hello.hs</td>
</tr><tr><td><a name="bytecode-compiler-interpreter" id="bytecode-compiler-interpreter"></a><a href="#bytecode-compiler-interpreter-note">bytecode compiler and interpreter</a></td>
<td>$ echo 'print_endline "hello";;' &gt; hello.ml<br />
$ ocamlc -o hello hello.ml<br />
$ ocamlrun hello</td>
<td>$ echo 'printfn "hello"' &gt; hello.fs<br />
$ fsharpc hello.fs<br />
$ mono hello.exe</td>
<td>$ cat <span style="white-space: pre-wrap;">&lt;&lt;</span>EOF &gt; Hello.scala<br />
object Hello {<br /><span style="white-space: pre-wrap;">  </span>def main(args: Array[String]) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>println("hello")<br /><span style="white-space: pre-wrap;">  </span>}<br />
}<br />
EOF<br /><br />
$ scalac Hello.scala<br />
$ scala Hello</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="native-compiler" id="native-compiler"></a><a href="#native-compiler-note">native compiler</a></td>
<td>$ echo 'print_endline "hello";;' &gt; hello.ml<br />
$ ocamlopt hello.ml -o hello<br />
$ ./hello</td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>$ echo 'main = putStrLn "hello"' &gt; hello.hs<br />
$ ghc -o hello hello.hs<br />
$ ./hello</td>
</tr><tr><td><a name="library-always-imported" id="library-always-imported"></a><a href="#library-always-imported-note">library which is always imported</a></td>
<td>Pervasives</td>
<td>Core</td>
<td>java.lang<br />
scala</td>
<td>Prelude</td>
</tr><tr><td><a name="statement-terminator" id="statement-terminator"></a><a href="#statement-terminator-note">statement terminator</a></td>
<td>;;</td>
<td>;;</td>
<td>; <span style="color: gray"><em>or sometimes newline</em></span></td>
<td><span style="color: gray"><em>next line has equal or less indentation, or</em></span> ;</td>
</tr><tr><td><a name="blocks" id="blocks"></a><a href="#blocks-note">blocks</a></td>
<td>( <span style="color: gray"><em>expr</em></span> ; <span style="color: gray"><em>…</em></span> )<br />
begin <span style="color: gray"><em>expr</em></span> ; <span style="color: gray"><em>…</em></span> end</td>
<td>( <span style="color: gray"><em>expr</em></span> ; <span style="color: gray"><em>…</em></span> )<br />
begin <span style="color: gray"><em>expr</em></span> ; <span style="color: gray"><em>…</em></span> end</td>
<td>{ }</td>
<td><span style="color: gray"><em>offside rule or</em></span> { }</td>
</tr><tr><td><a name="end-of-line-comment" id="end-of-line-comment"></a><a href="#end-of-line-comment-note">end-of-line comment</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="white-space: pre-wrap;">//</span> <span style="color: gray"><em>comment</em></span></td>
<td><span style="white-space: pre-wrap;">//</span> <span style="color: gray"><em>comment</em></span></td>
<td><span style="white-space: pre-wrap;">--</span> <span style="color: gray"><em>comment</em></span></td>
</tr><tr><td><a name="multiple-line-comment" id="multiple-line-comment"></a><a href="#multiple-line-comment-note">multiple line comment</a></td>
<td>(* <span style="color: gray"><em>comment<br />
another comment</em></span> *)</td>
<td>(* <span style="color: gray"><em>comment<br />
another comment</em></span> *)</td>
<td>/* <span style="color: gray"><em>comment<br />
another comment</em></span> */</td>
<td>{- <span style="color: gray"><em>comment<br />
another comment</em></span> -}</td>
</tr><tr><th colspan="5"><a name="var-expr" id="var-expr"></a><a href="#var-expr-note">variables and expressions</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td><a name="value" id="value"></a><a href="#value-note">write-once variable</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>let n = 1 + 2;;</td>
<td>let n = 1 + 2</td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> evaluates 1 + 2 once:</span><br />
val n = 1 + 2<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> evaluates 1 + 2 each time n is used:</span><br />
def n = 1 + 2</td>
<td>n = 3</td>
</tr><tr><td><a name="variable" id="variable"></a><a href="#variable-note">modifiable variable</a></td>
<td>let n = ref 3;;<br />
n := 4;;<br />
!n + 7;;</td>
<td>let n = ref 3<br />
n := 4<br />
!n + 7</td>
<td>var n = 3<br />
n = 4<br />
n + 7</td>
<td>n &lt;- return 3</td>
</tr><tr><td><a name="unit" id="unit"></a><a href="#unit-note">unit type and value</a></td>
<td>unit<br />
()</td>
<td>unit<br />
()</td>
<td>Unit<br />
()</td>
<td>()<br />
()</td>
</tr><tr><td><a name="conditional-expression" id="conditional-expression"></a><a href="#conditional-expression-note">conditional expression</a></td>
<td>let n = -3;;<br />
let absn = if n &lt; 0 then -n else n;;</td>
<td>let n = -3<br />
let absn = if n &lt; 0 then -n else n</td>
<td>val n = -3<br />
if (n &lt; 0) -n else n</td>
<td>n = -3<br />
let absn = if n &lt; 0 then -n else n</td>
</tr><tr><td><a name="branch-type-mismatch" id="branch-type-mismatch"></a><a href="#branch-type-mismatch-note">branch type mismatch</a></td>
<td><span style="color: gray">(* compilation error: *)</span><br />
if true then "hello" else 3;;</td>
<td><span style="color: gray">(* compilation error: *)</span><br />
if true then "hello" else 3</td>
<td><span style="color: gray">// expression has type Any:</span><br />
if (true) { "hello" } else { 3 }</td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">--</span> compilation error:</span><br />
if True then "hello" else 3</td>
</tr><tr><td><a name="null" id="null"></a><a href="#null-note">null</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>None</td>
<td>None<br /><br /><span style="color: gray"><em>Also this value returned by .NET library functions. It has a type distinct from</em> None:</span><br />
null</td>
<td>null</td>
<td>Nothing</td>
</tr><tr><td><a name="nullable-type" id="nullable-type"></a><a href="#nullable-type-note">nullable type</a></td>
<td>type list_option_int = int option list;;<br /><br />
let list = [Some 3; None; Some (-4)];;</td>
<td></td>
<td>val list = List(Some(3), null, Some(-4))</td>
<td>list = [Just(3), Nothing, Just(-4)]</td>
</tr><tr><td><a name="null-test" id="null-test"></a><a href="#null-test-note">null test</a></td>
<td>match foo with<br /><span style="white-space: pre-wrap;">  </span>| None -&gt; true<br /><span style="white-space: pre-wrap;">  </span>| _ -&gt; false;;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="coalesce" id="coalesce"></a><a href="#coalesce-note">coalesce</a></td>
<td>match foo with<br /><span style="white-space: pre-wrap;">  </span>| None -&gt; 0<br /><span style="white-space: pre-wrap;">  </span>| Some n -&gt; n;;</td>
<td></td>
<td></td>
<td>import Data.Maybe<br /><br />
let foo = Just(3)<br /><span style="color: gray"><em>raises exception if Nothing:</em></span><br />
fromJust foo<br /><br />
let intId x = x<br /><span style="color: gray"><em>evaluates to 0 if Nothing:</em></span><br />
maybe 0 intId foo</td>
</tr><tr><td><a name="nullif" id="nullif"></a><a href="#nullif-note">nullif</a></td>
<td>match foo with<br /><span style="white-space: pre-wrap;">  </span>| -999 -&gt; None<br /><span style="white-space: pre-wrap;">  </span>| n -&gt; Some n;;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="expr-type-declaration" id="expr-type-declaration"></a><a href="#expr-type-decl-note">expression type declaration</a></td>
<td>float 1</td>
<td>float 1</td>
<td>1: Double</td>
<td>1 :: Double</td>
</tr><tr><td><a name="let-in" id="let-in"></a><a href="#let-in-note">let ... in ...</a></td>
<td>let z =<br /><span style="white-space: pre-wrap;">  </span>let x = 3.0 in<br /><span style="white-space: pre-wrap;">  </span>let y = 2.0 *. x in<br /><span style="white-space: pre-wrap;">  </span>x *. y;;</td>
<td>let z =<br /><span style="white-space: pre-wrap;">  </span>let x = 3.0 in<br /><span style="white-space: pre-wrap;">  </span>let y = 2.0 * x in<br /><span style="white-space: pre-wrap;">  </span>x * y</td>
<td>val z = {<br /><span style="white-space: pre-wrap;">  </span>val x = 3.0<br /><span style="white-space: pre-wrap;">  </span>val y = 2.0 * x<br /><span style="white-space: pre-wrap;">  </span>x * y<br />
}</td>
<td>z = let x = 3.0<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>y = 2.0 * x<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>in x * y</td>
</tr><tr><td><a name="where" id="where"></a><a href="#where-note">where</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>z = x * y<br /><span style="white-space: pre-wrap;">  </span>where x = 3.0<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>y = 2.0 * x</td>
</tr><tr><th colspan="5"><a name="arithmetic-logic" id="arithmetic-logic"></a><a href="#arithmetic-logic-note">arithmetic and logic</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td><a name="boolean-type" id="boolean-type"></a><a href="#boolean-type-note">boolean type</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>bool</td>
<td>bool</td>
<td>Boolean</td>
<td>Bool</td>
</tr><tr><td><a name="true-false" id="true-false"></a><a href="#true-false-note">true and false</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>true false</td>
<td>true false</td>
<td>true false</td>
<td>True False</td>
</tr><tr><td><a name="logical-op" id="logical-op"></a><a href="#logical-op-note">logical operators</a></td>
<td>&amp;&amp; <span style="white-space: pre-wrap;">||</span> not</td>
<td>&amp;&amp; <span style="white-space: pre-wrap;">||</span> not</td>
<td>&amp;&amp; <span style="white-space: pre-wrap;">||</span> !</td>
<td>&amp;&amp; <span style="white-space: pre-wrap;">||</span> not</td>
</tr><tr><td><a name="relational-op" id="relational-op"></a><a href="#relational-op-note">relational operators</a></td>
<td><span style="white-space: pre-wrap;">=</span> &lt;&gt; &lt; &gt; &lt;= &gt;=</td>
<td><span style="white-space: pre-wrap;">=</span> &lt;&gt; &lt; &gt; &lt;= &gt;=</td>
<td>== != &lt; &gt; &lt;= &gt;=</td>
<td>== /= &lt; &gt; &lt;= &gt;=</td>
</tr><tr><td><a name="min-max" id="min-max"></a><a href="#min-max-note">min and max</a></td>
<td>min 1 2<br />
max 1 2</td>
<td>min 1 2<br />
max 1 2</td>
<td>math.min 1 2<br />
math.max 1 2</td>
<td>min 1 2<br />
max 1 2</td>
</tr><tr><td><a name="int-type" id="int-type"></a><a href="#int-type-note">integer type</a></td>
<td>int<br /><br /><span style="color: gray"><em>other integer types:</em></span><br />
int32 int64 nativeint</td>
<td>int<br /><br /><span style="color: gray"><em>other integer types:</em></span><br />
int32 int64 nativeint</td>
<td><span style="color: gray"><em>type of integer literals:</em></span><br />
Int<br /><span style="color: gray"><em>other modular types:</em></span><br />
Byte Short Long<br /><span style="color: gray"><em>arbitrary precision type:</em></span><br />
BigInt</td>
<td>Integer</td>
</tr><tr><td><a name="int-literal" id="int-literal"></a><a href="#int-literal-note">integer literal</a></td>
<td><span style="color: gray">int, int64, and nativeint literals:</span><br />
12 12L 12n<br /><br /><span style="color: gray"><em>literals can contain underscores:</em></span><br />
1_000_000<br /><br /><span style="color: gray"><em>this parses as an expression:</em></span><br />
-4</td>
<td>-4</td>
<td>-4</td>
<td><span style="color: gray"><em>an expression, not a literal:</em></span><br />
-4</td>
</tr><tr><td><a name="float-type" id="float-type"></a><a href="#float-type-note">float type</a></td>
<td>float</td>
<td>float</td>
<td><span style="color: gray"><em>type of float literals:</em></span><br />
Double<br /><span style="color: gray"><em>other types:</em></span><br />
Float</td>
<td>Double</td>
</tr><tr><td><a name="int-op" id="int-op"></a><a href="#int-op-note">integer operators</a></td>
<td>+ - * / mod<br /><span style="color: gray">mod <em>is an infix operator</em></span></td>
<td>+ - * / %</td>
<td>+ - * / %</td>
<td>+ - * div rem<br /><span style="color: gray">div <em>and</em> rem <em>are functions, not infix operators</em></span></td>
</tr><tr><td><a name="float-op" id="float-op"></a><a href="#float-op-note">float operators</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>+. -. *. /.</td>
<td><span style="white-space: pre-wrap;">+</span> - * /</td>
<td>+ - * /</td>
<td>+ - * /</td>
</tr><tr><td><a name="add-int-float" id="add-int-float"></a><a href="#add-int-float-note">add integer and float</a></td>
<td>float 3 +. 7.0</td>
<td>float 3 + 7.0</td>
<td>3 + 7.0</td>
<td>3 + 7.0</td>
</tr><tr><td><a name="int-div" id="int-div"></a><a href="#int-div-note">integer division</a><br /><span style="color: gray"><em>and remainder</em></span></td>
<td>7 / 3<br />
7 mod 3</td>
<td>7 / 3<br />
7 % 3</td>
<td>7 / 3<br />
7 % 3</td>
<td>div 7 3<br />
rem 7 3</td>
</tr><tr><td><a name="int-div-zero" id="int-div-zero"></a><a href="#int-div-zero-note">integer division by zero</a></td>
<td><span style="color: gray"><em>raises</em></span> Division_by_zero</td>
<td>System.DivideByZeroException</td>
<td>java.lang.ArithmeticException</td>
<td><span style="color: gray"><em>Exception: divide by zero</em></span></td>
</tr><tr><td><a name="float-div" id="float-div"></a><a href="#float-div-note">float division</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>float 7 /. float 3</td>
<td>float 7 / float 3</td>
<td>(7: Double) / 3</td>
<td>7 / 3</td>
</tr><tr><td><a name="float-div-zero" id="float-div-zero"></a><a href="#float-div-zero-note">float division by zero</a></td>
<td>infinity nan <span style="color: gray"><em>or</em></span> neg_infinity</td>
<td>infinity nan <span style="color: gray"><em>or</em></span> neg_infinity</td>
<td><span style="color: gray"><em>evaluates to</em> Infinity, NaN, <em>or</em> -Infinity, <em>values which do not have literals</em></span></td>
<td><span style="color: gray"><em>evaluates to</em> Infinity, NaN, <em>or</em> -Infinity, <em>values which do not have literals</em></span></td>
</tr><tr><td><a name="power" id="power"></a><a href="#power-note">power</a></td>
<td>2.0 ** 32.0</td>
<td>2.0 ** 32.0</td>
<td>math.pow(2, 32)</td>
<td>2 ** 32<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">--</span> syntax error if exponent not an integer:</span><br />
2 ^ 32</td>
</tr><tr><td><a name="sqrt" id="sqrt"></a><a href="#sqrt-note">sqrt</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>sqrt 2.0</td>
<td>sqrt 2.0</td>
<td>math.sqrt(2)</td>
<td>sqrt 2</td>
</tr><tr><td><a name="sqrt-negative-one" id="sqrt-negative-one"></a><a href="#sqrt-negative-one-note">sqrt -1</a></td>
<td><span style="color: gray">sqrt (-1.0):</span><br />
nan</td>
<td>nan</td>
<td><span style="color: gray">math.sqrt(-1) <em>evaluates to</em> NaN, <em>a value which has no literal</em></span></td>
<td><span style="color: gray">sqrt (-1) <em>evaluates to</em> NaN, <em>a value which has no literal</em></span></td>
</tr><tr><td><a name="transcendental-func" id="transcendental-func"></a><a href="#transcendental-func-note">transcendental functions</a></td>
<td>exp log<br />
sin cos tan<br />
asin acos atan atan2</td>
<td>exp log<br />
sin cos tan<br />
asin acos atan atan2</td>
<td>math.exp math.log<br />
math.sin math.cos math.tan<br />
math.asin math.acos math.atan math.atan2</td>
<td>exp log<br />
sin cos tan<br />
asin acos atan atan2</td>
</tr><tr><td><a name="transcendental-const" id="transcendental-const"></a><a href="#transcendental-const-note">transcendental constants</a></td>
<td>4.0 *. atan 1.0<br />
exp 1.0</td>
<td>System.Math.PI<br />
System.Math.E</td>
<td>math.Pi<br />
math.E</td>
<td>pi<br />
exp 1</td>
</tr><tr><td><a name="float-truncation" id="float-truncation"></a><a href="#float-truncation-note">float truncation</a></td>
<td>truncate 3.14<br /><span style="color: gray"><em>none</em></span><br />
floor 3.14 <span style="color: gray"><em>returns float</em></span><br />
ceil 3.14 <span style="color: gray"><em>returns float</em></span></td>
<td>truncate 3.14<br />
round 3.14<br />
floor 3.14 <span style="color: gray"><em>returns float</em></span><br />
ceil 3.14 <span style="color: gray"><em>returns float</em></span></td>
<td><span style="color: gray"><em>??</em></span><br />
3.14.round<br />
3.14.floor <span style="color: gray"><em>returns Double</em></span><br />
3.14.ceil <span style="color: gray"><em>returns Double</em></span></td>
<td>truncate 3.14<br />
round 3.14<br />
floor 3.14<br />
ceiling 3.14</td>
</tr><tr><td><a name="abs-val" id="abs-val"></a><a href="#abs-val-note">absolute value</a><br /><span style="color: gray"><em>and signum</em></span></td>
<td>abs (-7)<br />
abs_float (-7.0)<br /><span style="color: gray"><em>no signum</em></span></td>
<td>abs -7<br />
abs -7.0<br />
sign -7<br />
sign -7.0</td>
<td>math.abs(-7)<br />
math.signum(-7)</td>
<td>abs (-7)<br />
signum (-7)</td>
</tr><tr><td><a name="int-overflow" id="int-overflow"></a><a href="#int-overflow-note">integer overflow</a></td>
<td><span style="color: gray"><em>modular arithmetic</em></span></td>
<td><span style="color: gray"><em>modular arithmetic</em></span></td>
<td><span style="color: gray"><em>modular arithmetic for all types except</em></span> BigInt</td>
<td><span style="color: gray"><em>has arbitrary length integers</em></span></td>
</tr><tr><td><a name="float-overflow" id="float-overflow"></a><a href="#float-overflow-note">float overflow</a></td>
<td>infinity</td>
<td>infinity</td>
<td><span style="color: gray"><em>evaluates to</em> Infinity, <em>a value which has no literal</em></span></td>
<td><span style="color: gray"><em>evaluates to</em> Infinity, <em>a value which has no literal</em></span></td>
</tr><tr><td><a name="arbitrary-len-int" id="arbitrary-len-int"></a><a href="#arbitrary-len-int-note">arbitrary length integer</a></td>
<td>open Big_int;;<br /><br />
let n = big_int_of_int 7;;<br />
let m = big_int_of_int 12;;</td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> System.Numerics.BigInteger:</span><br />
let n = 7I<br />
let m = 12I</td>
<td>val n = BigInt(7)<br />
val m = BigInt(12)</td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">--</span> Integer is arbitrary length type:</span><br />
let n = 7<br />
let m = 12</td>
</tr><tr><td><a name="arbitrary-len-int-op" id="arbitrary-len-int-op"></a><a href="#arbitrary-len-int-op-note">arbitrary length integer operators</a></td>
<td>add_big_int n m<br />
sub_big_int n m<br />
mult_big_int n m<br />
div_big_int n m <span style="color: gray">(* quotient *)</span><br />
mod_big_int n m<br /><br />
eq_big_int n m<br />
lt_big_int n m<br />
gt_big_int n m<br />
le_big_int n m<br />
ge_big_int n m</td>
<td>n + m<br />
n - m<br />
n * m<br />
n / m<br />
n % m<br /><br />
n = m<br />
n &lt; m<br />
n &lt; m<br />
n &lt;= m<br />
n &gt;= m</td>
<td>n + m<br />
n - m<br />
n * m<br />
n / m<br />
n % m<br /><br />
n == m<br />
n &lt; m<br />
n &lt; m<br />
n &lt;= m<br />
n &gt;= m</td>
<td>n + m<br />
n - m<br />
n * m<br />
div n m<br />
mod n m<br /><br />
n == m<br />
n &lt; m<br />
n &lt; m<br />
n &lt;= m<br />
n &gt;= m</td>
</tr><tr><td><a name="rational-type" id="rational-type"></a><a href="#rational-type-note">rational type</a></td>
<td></td>
<td></td>
<td></td>
<td>Ratio Integer</td>
</tr><tr><td><a name="rational-construction" id="rational-construction"></a><a href="#rational-construction-note">rational construction</a></td>
<td></td>
<td></td>
<td></td>
<td>import Data.Ratio<br /><br />
1 % 7</td>
</tr><tr><td><a name="rational-decomposition" id="rational-decomposition"></a><a href="#rational-decomposition-note">rational decomposition</a></td>
<td></td>
<td></td>
<td></td>
<td>import Data.Ratio<br /><br />
numerator (1 % 7)<br />
denominator (1 % 7)</td>
</tr><tr><td><a name="complex-type" id="complex-type"></a><a href="#complex-type-note">complex type</a></td>
<td>Complex.t</td>
<td></td>
<td></td>
<td>Complex Double</td>
</tr><tr><td><a name="complex-const" id="complex-const"></a><a href="#complex-const-note">complex constants</a></td>
<td>Complex.zero<br />
Complex.one<br />
Complex.i</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="complex-op" id="complex-op"></a><a href="#complex-op-note">complex operators</a></td>
<td>Complex.add z w;;<br />
Complex.sub z w;;<br />
Complex.mul z w;;<br />
Complex.div z w;;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="complex-construction" id="complex-construction"></a><a href="#complex-construction-note">complex construction</a></td>
<td>{Complex.re=1.0; Complex.im=2.0}</td>
<td>System.Numerics.Complex(1.0, 2.0)</td>
<td></td>
<td>import Data.Complex<br /><br />
1 :+ 2.0</td>
</tr><tr><td><a name="complex-decomposition" id="complex-decomposition"></a><a href="#complex-decomposition-note">complex decomposition</a></td>
<td>let z = {Complex.re=1.0; Complex.im=2.0};;<br /><br />
z.Complex.re;;<br />
z.Complex.im;;<br />
Complex.arg z;;<br />
Complex.norm z;;<br />
Complex.conj z;;</td>
<td></td>
<td></td>
<td>import Data.Complex<br /><br />
realPart (1 :+ 2)<br />
imagPart (1 :+ 2)<br />
phase (1 :+ 2)<br />
magnitude (1 :+ 2)<br />
conjugate (1 :+ 2)</td>
</tr><tr><td><a name="random-num" id="random-num"></a><a href="#random-num-note">random number</a><br /><span style="color: gray"><em>uniform int, uniform float, normal float</em></span></td>
<td>Random.int 100<br />
Random.float 1.0<br /><span style="color: gray"><em>none</em></span></td>
<td>let rnd = System.Random()<br /><br />
rnd.Next(0, 100)<br />
rnd.NextDouble()<br /><span style="color: gray"><em>none</em></span></td>
<td>import scala.util.Random<br /><br />
val rnd = Random<br /><br />
rnd.nextInt(100)<br />
rnd.nextDouble<br />
rnd.nextGaussian</td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">--</span> $ cabal install random</span><br />
import System.Random<br /><br />
getStdRandom (randomR (0, 99))<br />
getStdRandom (randomR (0.0, 1.0))<br /><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="random-seed" id="random-seed"></a><a href="#random-seed-note">random seed</a><br /><span style="color: gray"><em>set, get, restore</em></span></td>
<td>Random.init 17;;<br />
let seed = Random.get_state();;<br />
Random.set_state seed;;</td>
<td>let rnd = System.Random(17)<br /><span style="color: gray"><em>none</em></span><br /><span style="color: gray"><em>none</em></span></td>
<td>import scala.util.Random<br /><br />
val rnd = Random<br /><br />
rnd.setSeed(17)<br /><span style="color: gray"><em>none</em></span><br /><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">--</span> $ cabal install random</span><br />
import System.Random<br /><br />
setStdGen $ mkStdGen 17<br />
seed &lt;- getStdGen<br />
setStdGen seed</td>
</tr><tr><td><a name="bit-op" id="bit-op"></a><a href="#bit-op-note">bit operators</a></td>
<td>1 lsl 4<br />
1 lsr 4<br />
1 land 3<br />
1 lor 3<br />
1 lxor 3<br />
lnot 1</td>
<td>1 <span style="white-space: pre-wrap;">&lt;&lt;&lt;</span> 4<br />
1 <span style="white-space: pre-wrap;">&gt;&gt;&gt;</span> 4<br />
1 <span style="white-space: pre-wrap;">&amp;&amp;&amp;</span> 3<br />
1 <span style="white-space: pre-wrap;">|||</span> 3<br />
1 <span style="white-space: pre-wrap;">^^^</span> 3<br /><span style="white-space: pre-wrap;">~~~</span> 1</td>
<td>1<span style="white-space: pre-wrap;"> &lt;&lt; </span> 4<br />
1 <span style="white-space: pre-wrap;"> &gt;&gt; </span> 4<br />
1 &amp; 3<br />
1 | 3<br />
1 ^ 3<br />
~ 1</td>
<td>import Data.Bits<br /><br />
x = 1 :: Integer<br />
y = 3 :: Integer<br /><br />
shiftL x 4<br />
shiftR x 4<br />
x .&amp;. y<br />
x .|. y<br />
xor x y<br />
complement x</td>
</tr><tr><td><a name="binary-octal-hex-literals" id="binary-octal-hex-literals"></a><a href="#binary-octal-hex-literals-note">binary, octal, and hex literals</a></td>
<td>0b101010<br />
0o52<br />
0x2a</td>
<td>0b101010<br />
0o52<br />
0x2a</td>
<td><span style="color: gray"><em>none</em></span><br />
052<br />
0x2a</td>
<td><span style="color: gray"><em>none</em></span><br />
052<br />
0x2a</td>
</tr><tr><td><a name="radix" id="radix"></a><a href="#radix-note">radix</a></td>
<td></td>
<td></td>
<td>Integer.toString(42, 7)<br />
Integer.parseInt("60", 7)</td>
<td></td>
</tr><tr><th colspan="5"><a name="strings" id="strings"></a><a href="#strings-note">strings</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td><a name="str-type" id="str-type"></a><a href="#str-type-note">string type</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>string</td>
<td>string</td>
<td>java.lang.String</td>
<td>String</td>
</tr><tr><td><a name="str-literal" id="str-literal"></a><a href="#str-literal-note">string literal</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>"Hello, World!"</td>
<td>"Hello, World!"</td>
<td>"Hello, World!"<br /><br />
"""Hello, World!"""</td>
<td>"Hello, World!"</td>
</tr><tr><td><a name="newline-in-str-literal" id="newline-in-str-literal"></a><a href="#newline-in-str-literal-note">newline in literal</a></td>
<td><span style="color: gray"><em>no</em></span></td>
<td><span style="color: gray"><em>yes</em></span></td>
<td><span style="color: gray"><em>in triple quote literal only</em></span></td>
<td><span style="color: gray"><em>no</em></span></td>
</tr><tr><td><a name="str-esc" id="str-esc"></a><a href="#str-esc-note">literal escapes</a></td>
<td>\b \n \r \t \" \' \\<br />
\<span style="color: gray"><em>ooo</em></span> \x<span style="color: gray"><em>hh</em></span></td>
<td>\b \n \r\ t \" \' \\<br />
\u<span style="color: gray"><em>hhhh</em></span> \U<span style="color: gray"><em>hhhhhhhh</em></span></td>
<td>\b \f \n \r \t \" \'<br />
\u<span style="color: gray"><em>hhhh</em></span> \<span style="color: gray"><em>o</em></span> \<span style="color: gray"><em>oo</em></span> \<span style="color: gray"><em>ooo</em></span></td>
<td>\a \b \f \n \r \t \v \" \&amp; \' \\<br />
\o<span style="color: gray"><em>o<span style="white-space: pre-wrap;">...</span></em></span> \<span style="color: gray"><em>d<span style="white-space: pre-wrap;">...</span></em></span> \x<span style="color: gray"><em>h<span style="white-space: pre-wrap;">...</span></em></span><br /><br /><span style="color: gray"><em>Octal, decimal, and hex escapes denote Unicode characters and can contain anywhere from 1 to 7 digits. The max values are \o4177777, \1114111, and \x10ffff. The \&amp; escape does not represent a character, but can separate a numeric backslash escape sequence from a following digit.</em></span></td>
</tr><tr><td><a name="format-str" id="format-str"></a><a href="#format-str-note">format string</a></td>
<td></td>
<td>sprintf "foo %s %d %.2f" "bar" 7 3.1415</td>
<td>"foo %s %d %.2f".format("bar", 7, 3.1415)</td>
<td>import Text.Printf<br /><br />
printf "foo %s %d %.2f" "bar" 7 3.1415</td>
</tr><tr><td><a name="str-concat" id="str-concat"></a><a href="#str-concat-note">concatenate</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>"Hello" ^ ", " ^ "World!"</td>
<td>"Hello" + ", " + "World!"</td>
<td>"Hello" + ", " + "World!"</td>
<td>"Hello" ++ ", " ++ "World!"</td>
</tr><tr><td><a name="str-replicate" id="str-replicate"></a><a href="#str-replicate-note">replicate</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>String.make 80 '-'</td>
<td>String.replicate 80 "-"</td>
<td>val hbar = "-" * 80</td>
<td>concat ( replicate 80 "-" )</td>
</tr><tr><td><a name="translate-case" id="translate-case"></a><a href="#translate-case-note">translate case</a><br /><span style="color: gray"><em>to upper, to lower</em></span></td>
<td>String.uppercase "hello"<br />
String.lowercase "HELLO"</td>
<td>"hello".ToUpper()<br />
"HELLO".ToLower()</td>
<td>"hello".toUpperCase<br />
"HELLO".toLowerCase</td>
<td>import Data.Char<br /><br />
map toUpper "hello"<br />
map toLower "HELLO"</td>
</tr><tr><td><a name="capitalize" id="capitalize"></a><a href="#capitalize-note">capitalize</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>String.capitalize "hello"</td>
<td></td>
<td>"hello".capitalize</td>
<td></td>
</tr><tr><td><a name="trim" id="trim"></a><a href="#trim-note">trim</a><br /><span style="color: gray"><em>both sides, left, right</em></span></td>
<td>String.trim " hello "</td>
<td>" hello ".Trim()<br />
" hello".TrimStart()<br />
"hello ".TrimEnd()</td>
<td>" hello ".trim</td>
<td></td>
</tr><tr><td><a name="pad" id="pad"></a><a href="#pad-note">pad</a><br /><span style="color: gray"><em>on left, on right</em></span></td>
<td></td>
<td>"hello".PadLeft(10, ' ')<br />
"hello".PadRight(10, ' ')</td>
<td><span style="color: gray"><em>??</em></span><br />
"hello".padTo(10, " ").mkString</td>
<td></td>
</tr><tr><td><a name="num-to-str" id="num-to-str"></a><a href="#num-to-str-note">number to string</a></td>
<td>"two: " ^ string_of_int 2<br />
"pi: " ^ float_of_string 3.14</td>
<td>"two: " + string 2<br />
"pi: " + string 3.14</td>
<td>"two: " + 2.toString<br />
"pi: " + 3.14.toString</td>
<td>"two: " ++ (show 2)<br />
"pi: " ++ (show 3.14)</td>
</tr><tr><td><a name="str-to-num" id="str-to-num"></a><a href="#str-to-num-note">string to number</a></td>
<td>7 + int_of_string "12"<br />
73.9 +. float_of_string ".037"</td>
<td>7 + int "12"<br />
73.9 + float ".037</td>
<td>7 + "12".toInt<br />
73.9 + ".037".toFloat<br /><span style="color: gray"><em>raises</em> NumberFormatException <em>if string doesn't completely parse</em></span></td>
<td>7 + (read "12")::Integer<br />
73.9 + (read "0.037")::Double<br /><span style="color: gray"><em>raises exception if string doesn't completely parse</em></span></td>
</tr><tr><td><a name="join" id="join"></a><a href="#join-note">join</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td>System.String.Join(" ", ["do"; "re"; "mi"])</td>
<td>List("do", "re", "mi").mkString(" ")</td>
<td></td>
</tr><tr><td><a name="split" id="split"></a><a href="#split-note">split</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td>"do re mi".Split(' ')</td>
<td>"do re mi".split(" ")</td>
<td></td>
</tr><tr><td><a name="char-type" id="char-type"></a><a href="#char-type-note">character type</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>char</td>
<td>char</td>
<td>Char</td>
<td>Char</td>
</tr><tr><td><a name="char-literal" id="char-literal"></a><a href="#char-literal-note">character literal</a></td>
<td>'h'</td>
<td>'h'</td>
<td>'h'</td>
<td>'h'</td>
</tr><tr><td><a name="str-len" id="str-len"></a><a href="#str-len-note">length</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>String.length "hello"</td>
<td>"hello".Length</td>
<td>"hello".length</td>
<td>length "hello"</td>
</tr><tr><td><a name="index-substr" id="index-substr"></a><a href="#index-substr-note">index of substring</a></td>
<td></td>
<td>"hello".IndexOf("hell")</td>
<td>"hello".indexOf("hell")</td>
<td></td>
</tr><tr><td><a name="substr" id="substr"></a><a href="#substr-note">extract substring</a></td>
<td>String.sub "hello" 0 4</td>
<td>"hello".Substring(0, 4)</td>
<td>"hello".substring(0, 4)</td>
<td>drop 0 (take 4 "hello")</td>
</tr><tr><td><a name="extract-char" id="extract-char"></a><a href="#extract-char-note">extract character</a></td>
<td>"hello".[0]</td>
<td>"hello".[0]</td>
<td>"hello"(0)</td>
<td>"hello" !! 0</td>
</tr><tr><td><a name="chr-ord" id="chr-ord"></a><a href="#chr-ord-note">chr and ord</a></td>
<td>Char.code 'a'<br />
Char.chr 97</td>
<td>int 'a'<br />
char 97</td>
<td>'a'.toInt<br />
97.toChar</td>
<td>Char.ord 'a'<br />
Char.chr 97</td>
</tr><tr><th colspan="5"><a name="dates-time" id="dates-time"></a><a href="#dates-time-note">dates and time</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td><a name="dates-time-types" id="dates-time-types"></a><a href="#dates-time-types-note">date and time types</a></td>
<td></td>
<td></td>
<td></td>
<td>ClockTime CalendarTime TimeDiff</td>
</tr><tr><td><a name="current-date-time" id="current-date-time"></a><a href="#current-date-time-note">current date and time</a></td>
<td></td>
<td></td>
<td></td>
<td>import Time<br /><br />
t &lt;- getClockTime</td>
</tr><tr><td><a name="current-unix-epoch" id="current-unix-epoch"></a><a href="#current-unix-epoch-note">current unix epoch</a></td>
<td>open Unix;;<br /><br /><span style="color: gray">(* float: *)</span><br />
time();;</td>
<td></td>
<td></td>
<td>import System.Time<br /><br />
getClockTime <span style="white-space: pre-wrap;">&gt;&gt;</span>= (\(TOD sec _) -&gt; return sec)</td>
</tr><tr><th colspan="5"><a name="arrays" id="arrays"></a><a href="#arrays-note">arrays</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td>literal</td>
<td></td>
<td></td>
<td>val a = Array(1, 2, 3)</td>
<td></td>
</tr><tr><td>size</td>
<td></td>
<td></td>
<td>a.size</td>
<td></td>
</tr><tr><td>lookup</td>
<td></td>
<td></td>
<td>val n = a(0)</td>
<td></td>
</tr><tr><td>update</td>
<td></td>
<td></td>
<td>a(2) = 4</td>
<td></td>
</tr><tr><td>out-of-bounds</td>
<td></td>
<td></td>
<td><span style="color: gray"><em>raises</em></span> java.lang.ArrayIndexOutOfBounds</td>
<td></td>
</tr><tr><th colspan="5"><a name="lists" id="lists"></a><a href="#lists-note">lists</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td><a name="list-literal" id="list-literal"></a><a href="#list-literal-note">literal</a></td>
<td>[1; 2; 3]</td>
<td>[1; 2; 3]</td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> none; use constructor:</span><br />
List(1, 2, 3)</td>
<td>[1, 2, 3]</td>
</tr><tr><td><a name="empty-list" id="empty-list"></a><a href="#empty-list-note">empty list</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>[]</td>
<td></td>
<td>Nil<br />
List()</td>
<td>[]</td>
</tr><tr><td><a name="empty-list-test" id="empty-list-test"></a><a href="#empty-list-test-note">empty list test</a></td>
<td>let list = [1; 2; 3];;<br /><br />
list == []</td>
<td></td>
<td>val list = List(1, 2, 3)<br /><br />
list == Nil<br />
list.isEmpty</td>
<td>let list = [1, 2, 3]<br /><br />
list == []<br />
null list</td>
</tr><tr><td><a name="cons" id="cons"></a><a href="#cons-note">cons</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>1 :: [2; 3]</td>
<td>1 :: [2; 3]</td>
<td>1 :: List(2, 3)</td>
<td>1 : [2, 3]</td>
</tr><tr><td><a name="head" id="head"></a><a href="#head-note">head</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>List.hd [1; 2; 3]</td>
<td>List.head [1; 2; 3]</td>
<td>List(1, 2, 3).head</td>
<td>head [1, 2, 3]</td>
</tr><tr><td><a name="tail" id="tail"></a><a href="#tail-note">tail</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>List.tl [1; 2; 3]</td>
<td>List.tail [1; 2; 3]</td>
<td>List(1, 2, 3).tail</td>
<td>tail [1, 2, 3]</td>
</tr><tr><td><a name="head-tail-empty-list" id="head-tail-empty-list"></a><a href="#head-tail-empty-list-note">head and tail of empty list</a></td>
<td><span style="color: gray"><em>exceptions</em></span></td>
<td></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> NoSuchElementException:</span><br />
Nil.head<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> UnsupportedOperationException:</span><br />
Nil.tail</td>
<td><span style="color: gray"><em>exceptions</em></span></td>
</tr><tr><td><a name="list-length" id="list-length"></a><a href="#list-length-note">length</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>List.length [1; 2; 3]</td>
<td>List.length [1; 2; 3]</td>
<td>List(1, 2, 3).length</td>
<td>length [1, 2, 3]</td>
</tr><tr><td><a name="nth-elem-of-list" id="nth-elem-of-list"></a><a href="#nth-elem-of-list-note">nth element</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>List.nth [1; 2; 3] 0</td>
<td>List.nth [1; 2; 3] 0</td>
<td>List(1, 2, 3)(0)</td>
<td>[1, 2, 3] !! 0</td>
</tr><tr><td><a name="list-elem-index" id="list-elem-index"></a><a href="#list-elem-index-note">element index</a></td>
<td></td>
<td></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> evaluates to 1:</span><br />
List(7, 8, 9).indexOf(8)<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> evaluates to -1:</span><br />
List(7, 8, 9).indexOf(10)</td>
<td>import Data.list<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">--</span> Just 1:</span><br />
elemIndex 8 [7, 8, 9]<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">--</span> Nothing:</span><br />
elemIndex 10 [7, 8, 9]</td>
</tr><tr><td><a name="update-list" id="update-list"></a><a href="#update-list-note">update</a></td>
<td></td>
<td></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> evaluates to List(1, 4, 3):</span><br />
List(1, 2, 3).updated(1, 4)</td>
<td></td>
</tr><tr><td><a name="concat-list" id="concat-list"></a><a href="#concat-list-note">concatenate</a><br /><span style="color: gray"><em>two lists, list of lists</em></span></td>
<td>[1; 2] @ [3; 4]<br />
List.append [1; 2] [3; 4]<br /><br />
List.concat [[1; 2]; [3; 4]]</td>
<td>[1; 2] @ [3; 4]<br />
List.append [1; 2] [3; 4]<br /><br />
List.concat [[1; 2]; [3; 4]]</td>
<td>List(1, 2) ::: List(3, 4)<br />
List(1, 2) ++ List(3, 4)<br /><br />
List(List(1, 2), List(3, 4)).flatten</td>
<td>[1, 2] ++ [3, 4]<br /><br />
concat [[1, 2], [3, 4]]</td>
</tr><tr><td><a name="list-last" id="list-last"></a><a href="#list-last-note">last</a><br /><span style="color: gray"><em>and butlast</em></span></td>
<td></td>
<td></td>
<td>List(1, 2, 3).last<br />
List(1, 2, 3).init</td>
<td>last [1, 2, 3]<br />
init [1, 2, 3]</td>
</tr><tr><td><a name="list-take" id="list-take"></a><a href="#list-take-note">take</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
<td>List(1, 2, 3).take(2)</td>
<td>take 2 [1, 2, 3]</td>
</tr><tr><td><a name="list-drop" id="list-drop"></a><a href="#list-drop-note">drop</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
<td>List(1, 2, 3).drop(2)</td>
<td>drop 2 [1, 2, 3]</td>
</tr><tr><td><a name="iterate-over-list" id="iterate-over-list"></a><a href="#iterate-over-list-note">iterate</a></td>
<td>let f i =<br /><span style="white-space: pre-wrap;">  </span>print_endline (string_of_int i);;<br /><br />
List.iter f [1; 2; 3];;</td>
<td>let f i =<br /><span style="white-space: pre-wrap;">  </span>System.Console.WriteLine(string i)<br /><br />
List.iter f [1; 2; 3]</td>
<td>List(1, 2, 3).foreach(i =&gt; println(i))</td>
<td>mapM_ print [1, 2, 3]</td>
</tr><tr><td><a name="reverse-list" id="reverse-list"></a><a href="#reverse-list-note">reverse</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>List.rev [1; 2; 3]</td>
<td>List.rev [1; 2; 3]</td>
<td>List(1, 2, 3).reverse</td>
<td>reverse [1, 2, 3]</td>
</tr><tr><td><a name="sort-list" id="sort-list"></a><a href="#sort-list-note">sort</a></td>
<td>List.sort min [1; 3; 2; 4]<br />
List.sort max [1; 3; 2; 4]</td>
<td>List.sort [1; 3; 2; 4]</td>
<td>List(1, 3, 2, 4).sortWith((x, y) =&gt; x &lt; y)<br />
List(1, 3, 2, 4).sortWith(_ &lt; _)<br />
List(1, 3, 2, 4).sortWith((x, y) =&gt; x &gt; y)<br />
List(1, 3, 2, 4).sortWith(_ &gt; _)</td>
<td>import Data.List<br /><br />
sort [1, 3, 2, 4]</td>
</tr><tr><td><a name="map-list" id="map-list"></a><a href="#map-list-note">map</a></td>
<td>List.map (( * ) 2) [1; 2; 3]</td>
<td>List.map (( * ) 2) [1; 2; 3]</td>
<td>List(1, 2, 3).map(x =&gt; 2 * x)<br />
List(1, 2, 3).map(2 * _)</td>
<td>map (\x -&gt; x * x) [1, 2, 3]</td>
</tr><tr><td><a name="filter-list" id="filter-list"></a><a href="#filter-list-note">filter</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>List.filter ((&lt;) 2) [1; 2; 3]</td>
<td>List.filter ((&lt;) 2) [1; 2; 3]</td>
<td>List(1, 2, 3).filter(x =&gt; x &gt; 2)</td>
<td>filter (\x -&gt; x &gt; 2) [1, 2, 3]</td>
</tr><tr><td><a name="fold-list-left" id="fold-list-left"></a><a href="#fold-list-left-note">fold from left</a></td>
<td>List.fold_left (+) 0 [1; 2; 3]</td>
<td>List.fold (-) 0 [1; 2; 3]</td>
<td>List(1, 2, 3).foldLeft(0)(_ + _)<br />
List(1, 2, 3).foldLeft(0)((x, y) =&gt; x + y)</td>
<td>foldl (+) 0 [1, 2, 3]</td>
</tr><tr><td><a name="fold-list-right" id="fold-list-right"></a><a href="#fold-list-right-note">fold from right</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>List.fold_right (-) [1; 2; 3] 0</td>
<td></td>
<td>List(1, 2, 3).foldRight(0)(_ - _)</td>
<td>foldr (-) 0 [1, 2, 3]</td>
</tr><tr><td><a name="list-member" id="list-member"></a><a href="#list-member-note">membership</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
<td>List(1, 2, 3).contains(3)</td>
<td>elem 3 [1, 2, 3]</td>
</tr><tr><td><a name="universal-test-list" id="universal-test-list"></a><a href="#universal-test-list-note">universal test</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>List.for_all (fun x -&gt; x &gt; 2) [1; 2; 3];;</td>
<td>List.forall (fun x -&gt; x &gt; 2) [1; 2; 3]</td>
<td>List(1, 2, 3).forall(_ &gt; 2)</td>
<td>all (\x -&gt; x &gt; 2) [1, 2, 3]</td>
</tr><tr><td><a name="existential-test-list" id="existential-test-list"></a><a href="#existential-test-list-note">existential test</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>List.exists (fun x -&gt; x &gt; 2) [1; 2; 3];;</td>
<td>List.exists (fun x -&gt; x &gt; 2) [1; 2; 3]</td>
<td>List(1, 2, 3).exists(_ &gt; 2)</td>
<td>any (\x -&gt; x &gt; 2) [1, 2, 3]</td>
</tr><tr><td><a name="zip-list" id="zip-list"></a><a href="#zip-list-note">zip lists</a></td>
<td></td>
<td></td>
<td></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">--</span> list of tuples:</span><br />
zip [1, 2, 3] ['a', 'b', 'c']</td>
</tr><tr><th colspan="5"><a name="tuples" id="tuples"></a><a href="#tuples-note">tuples</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td><a href="#tuple">tuple</a></td>
<td>(1, "hello", true)</td>
<td>(1, "hello", true)</td>
<td>(1, "hello", true)</td>
<td>(1, "hello", True)</td>
</tr><tr><td><a href="#tuple-element">tuple element access</a></td>
<td>match (1, "hello", true) with _, x, _ -&gt; x</td>
<td>match (1, "hello", true) with _, x, _ -&gt; x</td>
<td>(1, "hello", true)._1</td>
<td>(\(a, _, _) -&gt; a) (1, "hello", True)</td>
</tr><tr><td><a href="#pair-element">pair element access</a></td>
<td>fst (12, "December")<br />
snd (12, "December")</td>
<td>fst (12, "December")<br />
snd (12, "December")</td>
<td>(12, "December")._1<br />
(12, "December")._2</td>
<td>fst (12, "December")<br />
snd (12, "December")</td>
</tr><tr><th colspan="5"><a name="dictionaries" id="dictionaries"></a><a href="#dictionaries-note">dictionaries</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><th colspan="5"><a name="functions" id="functions"></a><a href="#functions-note">functions</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td><a name="def-func" id="def-func"></a><a href="#def-func-note">define function</a></td>
<td>let average a b = ( a +. b ) /. 2.0;;</td>
<td>let average a b = ( a + b ) / 2.0</td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> argument types must be declared:</span><br />
def average(a: Double, b: Double)<br /><span style="white-space: pre-wrap;">  </span>= (a + b) / 2.0<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> return value type must be declared if<br /><span style="white-space: pre-wrap;">//</span> function is recursive:</span><br />
def factorial(n: Int): Int =<br /><span style="white-space: pre-wrap;">  </span>if (n &lt; 1)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>1<br /><span style="white-space: pre-wrap;">  </span>else<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>n * factorial(n - 1)</td>
<td>average a b = (a + b) / 2.0</td>
</tr><tr><td><a name="invoke-func" id="invoke-func"></a><a href="#invoke-func-note">invoke function</a></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">(*</span> 4.5: *)</span><br />
average 1.0 2.0 +. 3.0;;<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">(*</span> 3.0: *)</span><br />
average 1.0 (2.0 +. 3.0);;</td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 4.5:</span><br />
average 1.0 2.0 + 3.0<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 3.0:</span><br />
average 1.0 (2.0 + 3.0)</td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 3.0:</span><br />
average(1, 2 + 3)<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> 4.5:</span><br />
average(1, 2) + 3<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> parens can be omitted when a function<br /><span style="white-space: pre-wrap;">//</span> takes no arguments; by convention parens<br /><span style="white-space: pre-wrap;">//</span> are omitted when the function has no<br /><span style="white-space: pre-wrap;">//</span> side effects</span></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">--</span> 4.5:</span><br />
average 1 2 + 3<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">--</span> 3.0:</span><br />
average 1 (2 + 3)<br />
average 1 $ 2 + 3</td>
</tr><tr><td>define function with block body</td>
<td></td>
<td></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> braces must be used if body<br /><span style="white-space: pre-wrap;">//</span> not an expression:</span><br />
def print_numbers() = {<br /><span style="white-space: pre-wrap;">  </span>println("one")<br /><span style="white-space: pre-wrap;">  </span>println("two")<br />
}</td>
<td></td>
</tr><tr><td><a href="#named-parameter">named parameter</a></td>
<td>let subtract ~m ~s = m - s;;<br /><br />
subtract ~s: 3 ~m: 7;;</td>
<td></td>
<td>def subtract(m: Int, s: Int) = m - s<br /><br />
subtract(s = 3, m = 7)</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#default-value">named parameter default value</a></td>
<td>let logarithm ?(base = (exp 1.0)) x = log x /. (log base);;<br /><br />
logarithm 2.718;;<br />
logarithm ~base: 2.0 10.0;;</td>
<td></td>
<td>def logarithm(x: Double,<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>base: Double = math.exp(1)) =<br /><span style="white-space: pre-wrap;">  </span>math.log(x) / math.log(base)<br /><br />
logarithm(2.718)<br />
logarithm(10, base = 2)</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#piecewise-defined-function">piecewise defined function</a></td>
<td>let to_s = function Red -&gt; "red"<br /><span style="white-space: pre-wrap;">  </span>| Green -&gt; "green"<br /><span style="white-space: pre-wrap;">  </span>| Blue -&gt; "blue";;</td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>to_s Red = "red"<br />
to_s Green = "green"<br />
to_s Blue = "blue"</td>
</tr><tr><td><a href="#recursive-function">recursive function</a></td>
<td>let rec range a b =<br />
if a &gt; b then []<br />
else a :: range (a+1) b;;</td>
<td></td>
<td>def range(a:Int, b:Int): List[Int] =<br /><span style="white-space: pre-wrap;">  </span>if (a &gt; b)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>List()<br /><span style="white-space: pre-wrap;">  </span>else<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>a :: range(a + 1, b)</td>
<td>range a b = if a &gt; b then [] else a : range (a+1) b</td>
</tr><tr><td><a href="#mutually-recursive-functions">mutually-recursive-functions</a></td>
<td>let rec even n = if n = 0 then true else odd (n-1)<br />
and odd n = if n = 0 then false else even (n-1);;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#anonymous-func">anonymous function</a></td>
<td>fun x -&gt; fun y -&gt; (x +. y) /. 2.0</td>
<td>fun x -&gt; fun y -&gt; (x + y) / 2.0</td>
<td>(x: Double, y: Double) =&gt; (x + y) / 2.0</td>
<td>\x y -&gt; (x+y) / 2.0</td>
</tr><tr><td><a href="#infix-prefix">infix operator in prefix position</a></td>
<td>( * ) 3 4;;</td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>( * ) 3 4</td>
</tr><tr><td><a href="#function-infix">function in infix position</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
<td><span style="color: gray"><em>unary methods can be used as binary operators</em></span></td>
<td>add x y = x + y<br />
3 ‘add` 4</td>
</tr><tr><td><a href="#currying">currying</a></td>
<td>let plus2 = (+) 2;;</td>
<td></td>
<td>def plus(x: Int)(y: Int) = x + y<br />
plus(3)(7)<br />
def plus2 = plus(2)<br />
plus2(7)</td>
<td>plus2 = (+) 2</td>
</tr><tr><td><a href="#composition">composition</a></td>
<td></td>
<td></td>
<td></td>
<td>f x = x + 2<br />
g x = x * 3<br />
(f . g ) 4</td>
</tr><tr><td><a href="#function-composition">function composition operator</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>double x = 2 * x<br />
quadruple x = double . double</td>
</tr><tr><td><a href="#lazy-evaluation">lazy evaluation</a></td>
<td>let arg1 x y = x;;<br /><br />
arg1 7 (lazy (1/0) );;</td>
<td></td>
<td>def arg1(x: =&gt; Int, y: =&gt; Int): Int = x<br /><br />
arg1(7, 1 / 0)</td>
<td><span style="color: gray"><em>lazy evaluation is default:</em></span><br />
arg1 x y = x<br /><br />
arg1 7 (error "bam!")</td>
</tr><tr><td><a href="#strict-evaluation">strict evaluation</a></td>
<td><span style="color: gray"><em>default behavior</em></span></td>
<td><span style="color: gray"><em>default behavior</em></span></td>
<td><span style="color: gray"><em>default behavior</em></span></td>
<td>arg1 x y = seq y x<br /><br />
arg1 7 (error "bam!")</td>
</tr><tr><th colspan="5"><a name="execution-control" id="execution-control"></a><a href="#execution-control-note">execution control</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td><a href="#if">if</a></td>
<td>if x &gt; 0 then<br /><span style="white-space: pre-wrap;">  </span>print_endline "pos";;</td>
<td>if x &gt; 0 then<br /><span style="white-space: pre-wrap;">  </span>printfn "pos"</td>
<td>if ( x &gt; 0 )<br /><span style="white-space: pre-wrap;">  </span>println("pos")</td>
<td>if x &gt; 0<br /><span style="white-space: pre-wrap;">  </span>then putStrLn "pos"<br /><span style="white-space: pre-wrap;">  </span>else return ()</td>
</tr><tr><td><a href="#if-else-if-else">if else-if else</a></td>
<td>if x &gt; 0 then<br /><span style="white-space: pre-wrap;">  </span>print_endline "pos"<br />
else<br /><span style="white-space: pre-wrap;">  </span>if x &lt; 0 then<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>print_endline "neg"<br /><span style="white-space: pre-wrap;">  </span>else<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>print_endline "zero";;</td>
<td>if x &gt; 0 then<br /><span style="white-space: pre-wrap;">  </span>printfn "pos"<br />
else<br /><span style="white-space: pre-wrap;">  </span>if x &lt; 0 then<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>printfn "neg"<br /><span style="white-space: pre-wrap;">  </span>else<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>printfn "zero"</td>
<td>if (x &gt; 0)<br /><span style="white-space: pre-wrap;">  </span>println("pos")<br />
else if (x &lt; 0)<br /><span style="white-space: pre-wrap;">  </span>println("neg")<br />
else<br /><span style="white-space: pre-wrap;">  </span>println("zero")</td>
<td>if x &gt; 0<br /><span style="white-space: pre-wrap;">  </span>then putStrLn "pos"<br /><span style="white-space: pre-wrap;">  </span>else if x &lt; 0<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>then putStrLn "neg"<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>else putStrLn "zero"</td>
</tr><tr><td><a href="#sequencing">sequencing</a></td>
<td>print_endline "one";<br />
print_endline "two";<br />
print_endline "three";;</td>
<td>printfn "one"<br />
printfn "two"<br />
printfn "three"</td>
<td>println("one")<br />
println("two")<br />
println("three")</td>
<td>do<br /><span style="white-space: pre-wrap;">  </span>putStrLn "one"<br /><span style="white-space: pre-wrap;">  </span>putStrLn "two"<br /><span style="white-space: pre-wrap;">  </span>putStrLn "three"</td>
</tr><tr><td><a href="#while">while</a></td>
<td>let i = ref 0;;<br /><br />
while !i &lt; 10 do<br /><span style="white-space: pre-wrap;">  </span>print_endline (string_of_int !i);<br /><span style="white-space: pre-wrap;">  </span>i := !i + 1<br />
done;;</td>
<td>let i = ref 0<br /><br />
while !i &lt; 10 do<br /><span style="white-space: pre-wrap;">  </span>printfn "%d" !i<br /><span style="white-space: pre-wrap;">  </span>i := !i + 1</td>
<td>var i = 0<br />
while (i&lt;10) {<br /><span style="white-space: pre-wrap;">  </span>printf("%d\n", i)<br /><span style="white-space: pre-wrap;">  </span>i = i+1<br />
}</td>
<td></td>
</tr><tr><td><a href="#for">for</a></td>
<td>for i = 1 to 10 do<br /><span style="white-space: pre-wrap;">  </span>let s = string_of_int i in<br /><span style="white-space: pre-wrap;">  </span>print_endline s<br />
done;;</td>
<td></td>
<td>for (i &lt;- 1 to 10)<br /><span style="white-space: pre-wrap;">  </span>println(i)</td>
<td></td>
</tr><tr><td><a href="#reverse-for">for in reverse</a></td>
<td>for i = 10 downto 1 do<br /><span style="white-space: pre-wrap;">  </span>let s = string_of_int i in<br /><span style="white-space: pre-wrap;">  </span>print_endline s<br />
done;;</td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
</tr><tr><td><a href="#list-iteration">list iteration</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
<td>for (i &lt;- List.range(1, 11).reverse)<br /><span style="white-space: pre-wrap;">  </span>println(i)</td>
<td></td>
</tr><tr><td><a href="#loop">loop</a></td>
<td>let rec loop i =<br /><span style="white-space: pre-wrap;">  </span>if i &lt;= 10 then begin<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>print_endline (string_of_int i);<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>loop (i+1)<br /><span style="white-space: pre-wrap;">  </span>end in<br />
loop 0;;</td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
</tr><tr><th colspan="5"><a name="exceptions" id="exceptions"></a><a href="#exceptions-note">exceptions</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td><a href="#raise-error">raise error</a></td>
<td>raise (Failure "bam!");;<br /><span style="color: gray"><em>or</em></span><br />
failwith "bam!";;</td>
<td></td>
<td>throw new Exception("bam!")</td>
<td>error "bam!"</td>
</tr><tr><td><a href="#handle-error">handle error</a></td>
<td>let x = try 1 / 0 with Division_by_zero -&gt; 0;;</td>
<td></td>
<td>import java.lang._<br /><span style="white-space: pre-wrap;"> </span><br />
val x = try {<br /><span style="white-space: pre-wrap;">  </span>1 / 0<br />
}<br />
catch {<br /><span style="white-space: pre-wrap;">  </span>case e: ArithmeticException =&gt; 0<br />
}</td>
<td></td>
</tr><tr><td><a href="#exception-type">type of exceptions</a></td>
<td>exn</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#user-exception">user defined exception</a></td>
<td>exception Foo of string;;<br />
raise (Foo "invalid input");;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#standard-exceptions">standard exceptions</a></td>
<td>Division_by_zero<br />
Failure <span style="color: gray"><em>string</em></span><br />
Not_found<br />
Invalid_argument <span style="color: gray"><em>string</em></span><br />
Match_failure (<span style="color: gray"><em>string</em></span>, <span style="color: gray"><em>int</em></span>, <span style="color: gray"><em>int</em></span>)<br />
Assert_failure (<span style="color: gray"><em>string</em></span>, <span style="color: gray"><em>int</em></span>, <span style="color: gray"><em>int</em></span>)<br />
Out_of_memory<br />
Stack_overflow</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#assert">assert</a></td>
<td>assert(1 = 0);;</td>
<td></td>
<td>assert(1 == 0)</td>
<td></td>
</tr><tr><th colspan="5"><a name="concurrency" id="concurrency"></a><a href="#concurrency-note">concurrency</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><th colspan="5"><a name="file-handles" id="file-handles"></a><a href="#file-handles-note">file handles</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td>standard file handles</td>
<td>stdin stdout stderr</td>
<td>stdin stdout stderr</td>
<td>System.in System.out System.err</td>
<td>import System.Posix.IO<br /><br />
stdInput stdOutput stdError</td>
</tr><tr><td>read line from stdin</td>
<td>let line = read_line();;</td>
<td></td>
<td>val line = readLine()</td>
<td>line &lt;- getLine</td>
</tr><tr><td>end-of-file behavior</td>
<td><span style="color: gray"><em>raises</em> End_of_file</span></td>
<td></td>
<td></td>
<td><span style="color: gray"><em>when last data is returned,</em> hIsEOF <em>will return True. Reading after end-of-file throws an exception.</em></span></td>
</tr><tr><td>chomp</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#write-line-stdout">write line to stdout</a></td>
<td>print_endline "lorem ipsum";;</td>
<td>printfn "lorem ipsum"</td>
<td>println("lorem ipsum")</td>
<td>putStrLn "lorem ipsum"</td>
</tr><tr><td>write formatted string to stdout</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>open file for reading</td>
<td>let f = open_in "/etc/passwd";;</td>
<td></td>
<td>import scala.io.Source<br /><br />
val path = "/etc/hosts"<br />
val f = Source.fromFile(path)</td>
<td>import System.IO<br /><br />
f &lt;- openFile "/etc/hosts" ReadMode</td>
</tr><tr><td>open file for writing</td>
<td>let f = open_out "/tmp/ocaml.out";;</td>
<td></td>
<td></td>
<td>import System.IO<br /><br />
f &lt;- openFile "/tmp/test" WriteMode</td>
</tr><tr><td>open file for appending</td>
<td></td>
<td></td>
<td></td>
<td>import System.IO<br /><br />
f &lt;- openFile "/tmp/err.log" AppendMode</td>
</tr><tr><td>close file</td>
<td></td>
<td></td>
<td>import scala.io.Source<br /><br />
f.close</td>
<td>import System.IO<br /><br />
hClose f</td>
</tr><tr><td>i/o errors</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#read-line">read line</a></td>
<td>let ic = open_in "/etc/passwd" in<br />
let line = input_line ic in<br />
print_endline line;;</td>
<td></td>
<td>import scala.io.Source<br />
val src = Source.fromFile("/etc/passwd")<br />
for (line &lt;- src.getLines)<br /><span style="white-space: pre-wrap;">  </span>print(line)</td>
<td>import IO<br /><br />
readAndPrintLines h = do<br /><span style="white-space: pre-wrap;">  </span>eof &lt;- hIsEOF h<br /><span style="white-space: pre-wrap;">  </span>if eof<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>then return ()<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>else do<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>line &lt;- hGetLine h<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>putStrLn line<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>readAndPrintLines h<br /><br />
main = do<br /><span style="white-space: pre-wrap;">  </span>h &lt;- openFile "/etc/passwd" ReadMode<br /><span style="white-space: pre-wrap;">  </span>readAndPrintLines h</td>
</tr><tr><td>iterate over file by line</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>read file into array of strings</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>read file into string</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>write string</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#write-file">write line</a></td>
<td>open Printf<br />
let oc = open_out "/tmp/test-ocaml" in<br />
fprintf oc "hello out\n";<br />
close_out oc;;</td>
<td></td>
<td>val out = new java.io.FileWriter("/tmp/test-scala")<br />
out.write("hello out\n")<br />
out.close</td>
<td>s = "hello out\n"<br />
f = "/tmp/test-haskell"<br />
main = writeFile f s</td>
</tr><tr><td>flush file handle</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>end-of-file test</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>get and set filehandle position</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="files" id="files"></a><a href="#files-note">files</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td>file test, regular file test</td>
<td>open Unix<br /><br />
try Some (stat "/etc/hosts") with<br /><span style="white-space: pre-wrap;">  </span>Unix_error (ENOENT, _, _) -&gt; None<br /><br />
(stat "/etc/hosts").st_kind = S_REG</td>
<td></td>
<td></td>
<td>import System<br /><br />
Directory.doesFileExist "/etc/hosts"<br /><br />
import Control.Monad<br />
import System.Posix.Files<br /><br />
liftM isRegularFile (getFileStatus "/etc/hosts")</td>
</tr><tr><td>file size</td>
<td>(stat "/etc/hosts").st_size</td>
<td></td>
<td></td>
<td>import Control.Monad<br />
import System.Posix.Files<br /><br />
liftM fileSize (getFileStatus "/etc/hosts")</td>
</tr><tr><td>is file readable, writable, executable</td>
<td>open Unix<br /><br />
try access "/tmp/bar" [R_OK]; true with<br /><span style="white-space: pre-wrap;">  </span>Unix.Unix_error (EACCES, _, _) -&gt; false;;<br />
try access "/tmp/bar" [W_OK]; true with<br /><span style="white-space: pre-wrap;">  </span>Unix.Unix_error (EACCES, _, _) -&gt; false;;<br />
try access "/tmp/bar" [X_OK]; true with<br /><span style="white-space: pre-wrap;">  </span>Unix.Unix_error (EACCES, _, _) -&gt; false;;</td>
<td></td>
<td></td>
<td>import Control.Monad<br /><br />
liftM readable<br /><span style="white-space: pre-wrap;">  </span>(getPermissions "/etc/hosts")<br />
liftM writable<br /><span style="white-space: pre-wrap;">  </span>(getPermissions "/etc/hosts")<br />
liftM executable<br /><span style="white-space: pre-wrap;">  </span>(getPermissions "/etc/hosts")</td>
</tr><tr><td>set file permissions</td>
<td>open Unix<br /><br />
chmod "/tmp/foo" 0o755</td>
<td></td>
<td></td>
<td>import System.Posix.Files<br /><br />
setFileMode "/tmp/foo" ownerModes<br />
setFileMode "/tmp/foo" groupReadMode<br />
setFileMode "/tmp/foo" groupExecuteMode<br />
setFileMode "/tmp/foo" otherReadMode<br />
setFileMode "/tmp/foo" otherExecuteMode</td>
</tr><tr><td>copy file, remove file, rename file</td>
<td>open Unix<br /><br /><span style="color: gray"><em>??</em></span><br />
unlink "/tmp/foo"<br />
rename "/tmp/bar" "/tmp/foo"</td>
<td></td>
<td></td>
<td>import System.Directory<br /><br />
copyFile "/tmp/foo" "/tmp/bar"<br />
removeFile "/tmp/foo"<br />
renameFile "/tmp/bar" "/tmp/foo"</td>
</tr><tr><td>create symlink, symlink test, readlink</td>
<td>open Unix<br /><br />
symlink "/etc/hosts" "/tmp/hosts"<br />
(lstat "/tmp/hosts").st_kind = S_LNK<br />
readlink "/tmp/hosts"</td>
<td></td>
<td></td>
<td>import System.Posix.Files<br /><br />
createSymbolicLink "/etc/hosts" "/tmp/hosts"<br /><span style="color: gray"><em>??</em></span><br />
readSymbolicLink "/tmp/hosts"</td>
</tr><tr><td>generate unused file name</td>
<td>open Filename<br /><br /><span style="color: gray">(* prefix and suffix: *)</span><br />
temp_file "foo" ".txt"</td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="directories" id="directories"></a><a href="#directories-note">directories</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td>build pathname</td>
<td>open Filename<br /><br />
concat "/etc" "hosts"</td>
<td></td>
<td></td>
<td>import System.FilePath ((&lt;/&gt;))<br /><br />
let path = "/etc" &lt;/&gt; "hosts"</td>
</tr><tr><td>dirname and basename</td>
<td>open Filename<br /><br />
dirname "/etc/hosts"<br />
basename "/etc/hosts"</td>
<td></td>
<td></td>
<td>import System.FilePath<br /><br />
takeFileName "/etc/hosts"<br />
takeDirectory "/etc/hosts"</td>
</tr><tr><td>iterate over directory by file</td>
<td></td>
<td></td>
<td></td>
<td>import System<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">--</span> returns IO [FilePath]</span><br />
Directory.getDirectoryContents "/etc"</td>
</tr><tr><td>make directory</td>
<td><span style="color: gray">(* opam install fileutils *)</span><br />
open FileUtil<br /><br />
mkdir ~parent:true "/tmp/foo/bar"</td>
<td></td>
<td></td>
<td>import System.Directory<br /><br />
createDirectoryIfMissing True<br /><span style="white-space: pre-wrap;">  </span>"/tmp/foo/bar"</td>
</tr><tr><td>remove empty directory</td>
<td>open Unix<br /><br />
rmdir "/tmp/foodir"</td>
<td></td>
<td></td>
<td>import System.Directory<br /><br />
removeDirectory "/tmp/foodir"</td>
</tr><tr><td>remove directory and contents</td>
<td></td>
<td></td>
<td></td>
<td>import System.Directory<br /><br />
removeDirectoryRecursive "/tmp/foodir"</td>
</tr><tr><td>directory test</td>
<td></td>
<td></td>
<td></td>
<td>import System<br /><br />
Directory.doesDirectoryExist "/tmp"</td>
</tr><tr><td>temporary directory</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="processes-environment" id="processes-environment"></a><a href="#processes-environment-note">processes and environment</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td><a href="#command-line-arg">command line arguments</a></td>
<td>for i = 0 to Array.length Sys.argv - 1 do<br /><span style="white-space: pre-wrap;">  </span>print_endline i Sys.argv.(i)<br />
done</td>
<td></td>
<td>object Test {<br /><span style="white-space: pre-wrap;">  </span>def main(args: Array[String]) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>for (arg &lt;- args)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>println(arg)<br /><span style="white-space: pre-wrap;">  </span>}<br />
}</td>
<td>import System<br /><br />
printArgs args = do<br /><span style="white-space: pre-wrap;">  </span>if length args == 0<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>then return ()<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>else do<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>putStrLn (head args)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>printArgs (tail args)<br />
main = do<br /><span style="white-space: pre-wrap;">  </span>a &lt;- getArgs<br /><span style="white-space: pre-wrap;">  </span>printArgs a</td>
</tr><tr><td><a name="program-name" id="program-name"></a><a href="#program-name-note">program name</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
<td></td>
<td>import System<br /><br />
s &lt;- getProgName</td>
</tr><tr><td><a name="getopt" id="getopt"></a><a href="#getopt-note">getopt</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="env-var" id="env-var"></a><a href="#env-var-note">get and set environment variable</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>open Unix<br /><br />
s = getenv "HOME"<br />
putenv "PATH" "/bin"</td>
<td></td>
<td></td>
<td>import System.Posix.Env<br /><br />
s &lt;- getEnv "HOME"<br />
putEnv "PATH=/bin"</td>
</tr><tr><td><a name="pid" id="pid"></a><a href="#pid-note">get pid, parent pid</a></td>
<td>open Unix<br /><br />
let pid = getpid()<br />
let ppid = getppid()</td>
<td></td>
<td></td>
<td>import System.Posix.Process<br /><br />
pid &lt;- getProcessID<br />
ppid &lt;- getParentProcessID</td>
</tr><tr><td><a name="user-id-name" id="user-id-name"></a><a href="#user-id-name-note">get user id and name</a></td>
<td>let uid = getuid()<br />
let username =<br /><span style="white-space: pre-wrap;">  </span>(getpwuid (getuid())).pw_name</td>
<td></td>
<td></td>
<td>import System.Posix.User<br /><br />
uid &lt;- getRealUserID<br />
username &lt;- getLoginName</td>
</tr><tr><td><a name="exit" id="exit"></a><a href="#exit-note">exit</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>exit 0<br /><br />
exit 1</td>
<td></td>
<td></td>
<td>import System.Exit<br /><br />
exitWith ExitSuccess<br /><br /><span style="color: gray"><em>to return nonzero status:</em></span><br />
exitWith (ExitFailure 1)</td>
</tr><tr><td><a name="signal-handler" id="signal-handler"></a><a href="#signal-handler-note">set signal handler</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="external-cmd" id="external-cmd"></a><a href="#external-cmd-note">external command</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
<td></td>
<td>import System.Cmd<br /><br />
rawSystem "ls" ["-l", "/tmp"]</td>
</tr><tr><td><a name="escaped-external-cmd" id="escaped-external-cmd"></a><a href="#escaped-external-cmd-note">escaped external command</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="backticks" id="backticks"></a><a href="#backticks-note">backticks</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="libraries-namespaces" id="libraries-namespaces"></a><a href="#libraries-namespaces-note">libraries and namespaces</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td><a href="#namespace-example">namespace example</a></td>
<td></td>
<td></td>
<td><span style="color: gray"><em>Baz.scala</em></span><br />
package Foo.Bar;<br /><br />
class Baz {<br /><span style="white-space: pre-wrap;">  </span>def say() { println("hello"); }<br />
}<br /><br /><span style="color: gray"><em>Main.scala</em></span><br />
import Foo.Bar.Baz;<br /><br />
object Main {<br /><span style="white-space: pre-wrap;">  </span>def main(args : Array[String]) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>val baz = new Baz;<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>baz.say();<br /><span style="white-space: pre-wrap;">  </span>}<br />
}<br /><br /><span style="color: gray"><em>to compile and run</em></span><br />
$ scalac Baz.scala<br />
$ scalac Main.scala<br />
$ scala Main<br />
hello</td>
<td><span style="color: gray"><em>Foo/Bar.hs</em></span><br />
module Foo.Bar where<br /><span style="white-space: pre-wrap;">  </span>data Baz = Baz<br /><span style="white-space: pre-wrap;">  </span>say Baz = putStrLn "hello"<br /><br /><span style="color: gray"><em>Main.hs</em></span><br />
module Main where<br />
import Foo.Bar<br />
baz = Baz<br />
main = say baz<br /><br /><span style="color: gray"><em>to compile and run</em></span><br />
$ ghc -c Foo/Bar.hs<br />
$ ghc Main.hs<br />
$ ./Main<br />
hello</td>
</tr><tr><td><a href="#namespaces">namespaces</a></td>
<td></td>
<td></td>
<td></td>
<td>values, constructors, type variables, type constructors, type classes, modules</td>
</tr><tr><td><a href="#file-name">file name restrictions</a></td>
<td><span style="color: gray"><em>module</em> Foo.Bar <em>must be in</em> Foo.ml</span></td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>module</em> Foo.Bar <em>must be in</em> Foo/Bar.hs</span></td>
</tr><tr><td><a href="#import">namespace</a></td>
<td>open Graphics;;</td>
<td></td>
<td></td>
<td>import Data.Bytestring</td>
</tr><tr><td><a href="#namespace-creation">namespace creation</a></td>
<td><span style="color: gray"><em>put code in file</em> MODULE_NAME<em>.ml</em></span></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#namespace-alias">namespace alias</a></td>
<td>module Gr = Graphics;;</td>
<td></td>
<td></td>
<td>import qualified Data.Bytestring as B</td>
</tr><tr><td><a href="#namespace-separator">namespace separator</a></td>
<td>.</td>
<td></td>
<td></td>
<td>.</td>
</tr><tr><td><a href="#subnamespace">subnamespace</a></td>
<td><span style="color: gray"><em>in A.ml:</em></span><br />
module B =<br />
sig<br /><span style="white-space: pre-wrap;">  </span>val display_instruction : unit -&gt; unit<br />
end =<br />
struct<br /><span style="white-space: pre-wrap;">  </span>let msg = "attack"<br /><span style="white-space: pre-wrap;">  </span>let display_instruction () = print_endline msg<br />
end<br /><span style="color: gray"><em>in client source:</em></span><br />
A.B.display_instruction;;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="pkg-manager-setup" id="pkg-manager-setup"></a><a href="#pkg-manager-setup-note">package manager setup</a></td>
<td><span style="color: gray"><em>do this once:</em></span><br />
$ opam init<br /><br /><span style="color: gray"><em>for each shell session:</em></span><br />
$ eval $(opam config env)</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="pkg-manager" id="pkg-manager"></a><a href="#pkg-manager-note">package manager</a><br /><span style="color: gray"><em>search; install; list installed</em></span></td>
<td>$ opam search utop<br />
$ opam install utop<br />
$ opam list <span style="white-space: pre-wrap;">--</span>installed</td>
<td></td>
<td></td>
<td>$ cabal list parsec<br />
$ cabal install parsec<br />
$ cabal list <span style="white-space: pre-wrap;">--</span>installed</td>
</tr><tr><td><a name="pkg-compile" id="pkg-compile"></a><a href="#pkg-compile-note">compile app using package</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="user-defined-types" id="user-defined-types"></a><a href="#user-defined-types-note">user-defined types</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td><a name="type-synonym" id="type-synonym"></a><a href="#type-synonym-note">type synonym</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>type name = string;;</td>
<td>type name = string</td>
<td>type Name = String</td>
<td>type Name = String</td>
</tr><tr><td><a name="sum-type" id="sum-type"></a><a href="#sum-type-note">sum type</a></td>
<td>type color = Red | Green | Blue;;<br /><br />
let col = Red;;<br /><br /><span style="color: gray">(* evaluates to true: *)</span><br />
col &lt; Green;;</td>
<td>type color = Red | Green | Blue<br /><br />
let col = Red<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> evaluates to true:</span><br />
col &lt; Green</td>
<td>abstract class Color<br /><br />
case object Red extends Color<br />
case object Blue extends Color<br />
case object Green extends Color<br /><br />
val col = Red<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> this won’t compile:</span><br />
col &lt; Green</td>
<td>data Color = Red | Green | Blue<br /><br />
col = Red<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">--</span> this won't compile:</span><br />
col &lt; Green</td>
</tr><tr><td>tuple product type with one field</td>
<td>type special_int = SpecialInt of int;;<br /><br />
let n = SpecialInt 7;;</td>
<td>type special_int = SpecialInt of int<br /><br />
let n = SpecialInt 7</td>
<td>class SpecialInt(x: Int)<br /><br />
val n = new SpecialInt(7)</td>
<td>data SpecialIntType = SpecialInt Integer<br /><br />
n = SpecialInt 7</td>
</tr><tr><td>tuple product type with two fields</td>
<td>type int_pair = IntPair of int * int;;<br /><br />
let p = IntPair (7, 11);;</td>
<td>type int_pair = IntPair of int * int<br /><br />
let p = IntPair (7, 11)</td>
<td>class IntPair(a: Int, b: Int)<br /><br />
val p = new IntPair(7, 11)</td>
<td>data IntPairType = IntPair Integer Integer<br /><br />
p = IntPair 7 11</td>
</tr><tr><td>record product type</td>
<td>type customer = {<br /><span style="white-space: pre-wrap;">  </span>id: int;<br /><span style="white-space: pre-wrap;">  </span>name: string;<br /><span style="white-space: pre-wrap;">  </span>address: string<br />
};;</td>
<td>type customer = {<br /><span style="white-space: pre-wrap;">  </span>id: int;<br /><span style="white-space: pre-wrap;">  </span>name: string;<br /><span style="white-space: pre-wrap;">  </span>address: string<br />
}</td>
<td>case class Customer(<br /><span style="white-space: pre-wrap;">  </span>id: Int,<br /><span style="white-space: pre-wrap;">  </span>name: String,<br /><span style="white-space: pre-wrap;">  </span>address: String<br />
)</td>
<td>data CustomerType = Customer {<br /><span style="white-space: pre-wrap;">  </span>customerId :: Integer,<br /><span style="white-space: pre-wrap;">  </span>name :: String,<br /><span style="white-space: pre-wrap;">  </span>address :: String<br />
}</td>
</tr><tr><td>record product type literal</td>
<td>let cust = {<br /><span style="white-space: pre-wrap;">  </span>id=7;<br /><span style="white-space: pre-wrap;">  </span>name="John";<br /><span style="white-space: pre-wrap;">  </span>address="Topeka, KS"<br />
};;</td>
<td>{id=7; name="John"; address="Topeka, KS"}</td>
<td>Customer(7,"John","Topeka, KS")<br /><br />
Customer(id=7, name="John", address="Topeka, KS")</td>
<td>Customer {<br /><span style="white-space: pre-wrap;">  </span>customerId=7,<br /><span style="white-space: pre-wrap;">  </span>name="John",<br /><span style="white-space: pre-wrap;">  </span>address="Topeka, KS" }</td>
</tr><tr><td><a name="generic-type" id="generic-type"></a><a href="#generic-type-note">generic type</a></td>
<td>type ('a, 'b) twosome =<br /><span style="white-space: pre-wrap;">  </span>Twosome of 'a * 'b;;<br /><br />
let p = Twosome ("pi", 3.14);;</td>
<td>type ('a, 'b) twosome =<br /><span style="white-space: pre-wrap;">  </span>Twosome of 'a * 'b<br /><br />
let p = Twosome ("pi", 3.14)</td>
<td>class Twosome[A, B](a: A, b: B)<br /><br />
val p = new Twosome("pi", 3.14)</td>
<td>data TwosomeType a b = Twosome a b<br /><br />
p = Twosome ("pi", 3.14)</td>
</tr><tr><td><a href="#recursive-type">recursive type</a></td>
<td>type binary_tree =<br /><span style="white-space: pre-wrap;">  </span>| Leaf of int<br /><span style="white-space: pre-wrap;">  </span>| Tree of binary_tree * binary_tree;;</td>
<td>type binary_tree =<br /><span style="white-space: pre-wrap;">  </span>| Leaf of int<br /><span style="white-space: pre-wrap;">  </span>| Tree of binary_tree * binary_tree</td>
<td>abstract class BinaryTree<br />
case class Tree(left: BinaryTree, right: BinaryTree) extends BinaryTree<br />
case class Leaf(x: Int) extends BinaryTree</td>
<td>data BinaryTree = Leaf Integer | Tree BinaryTree BinaryTree</td>
</tr><tr><td>pattern match sum type</td>
<td>let col = Red;;<br /><br />
let s = match col with<br /><span style="white-space: pre-wrap;">  </span>| Red -&gt; "red"<br /><span style="white-space: pre-wrap;">  </span>| Blue -&gt; "blue"<br /><span style="white-space: pre-wrap;">  </span>| Green -&gt; "green";;</td>
<td></td>
<td>val c:Color = Red;<br />
c match { case Red =&gt; "red"; case Green =&gt; "green"; case Blue =&gt; "blue" }</td>
<td>c = Red<br />
case c of Red -&gt; "red"<br /><span style="white-space: pre-wrap;">  </span>Green -&gt; "green"<br /><span style="white-space: pre-wrap;">  </span>Blue -&gt; "blue"</td>
</tr><tr><td>pattern match product type</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#match-guard">pattern match guard</a></td>
<td>match i with j when i &lt; 0 -&gt; -j | j -&gt; j;;</td>
<td></td>
<td>match { case i: Int if i &lt; 0 =&gt; - i; case i: Int =&gt; i }</td>
<td><span style="color: gray"><em>none, use if or piecewise function definition</em></span></td>
</tr><tr><td><a href="#match-catchall">pattern match catchall</a></td>
<td>let to_s c = match c with Red -&gt; "red" | _ -&gt; "not red";;<br />
to_s Green;;</td>
<td></td>
<td>val c : Color = Green<br />
c match { case Red =&gt; "red"; case _ =&gt; "not red" }</td>
<td>c = Green<br />
case c of Red -&gt; "red"; _ -&gt; "not red"</td>
</tr><tr><th colspan="5"><a name="objects" id="objects"></a><a href="#objects-note">objects</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td><a href="#class-definition">class definition</a></td>
<td>class counter = object<br /><span style="white-space: pre-wrap;">  </span>val mutable n = 0<br /><span style="white-space: pre-wrap;">  </span>method incr = n &lt;- n+1<br /><span style="white-space: pre-wrap;">  </span>method get = n<br />
end;;</td>
<td></td>
<td>class Counter {<br /><span style="white-space: pre-wrap;">  </span>private var n = 0<br /><span style="white-space: pre-wrap;">  </span>def incr(): Unit = { n = n+1 }<br /><span style="white-space: pre-wrap;">  </span>def get(): Int = { n }<br />
}</td>
<td></td>
</tr><tr><td><a href="#object-creation">object creation</a></td>
<td>let c = new counter;;</td>
<td></td>
<td>val c = new Counter</td>
<td></td>
</tr><tr><td><a href="#method-invocation">method invocation</a></td>
<td>c#incr;;<br />
c#get;;</td>
<td></td>
<td>c.incr<br />
c.get</td>
<td></td>
</tr><tr><td><a href="#field-access">field access</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="polymorphism" id="polymorphism"></a><a href="#polymorphism-note">polymorphism</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td>overload function</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#inheritance">inheritance</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="net-web" id="net-web"></a><a href="#net-web-note">net and web</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><th colspan="5"><a name="unit-tests" id="unit-tests"></a><a href="#unit-tests-note">unit test</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><th colspan="5"><a name="debugging-profiling" id="debugging-profiling"></a><a href="#debugging-profiling-note">debugging and profiling</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><th colspan="5"><a name="repl" id="repl"></a><a href="#repl-note">repl</a></th>
</tr><tr><th></th>
<th>ocaml</th>
<th>f#</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td><a href="#invoke-repl">invoke repl</a></td>
<td>$ ocaml<br /><br /><span style="color: gray"><em>Use this if you want history:</em></span><br />
$ rlwrap ocaml<br /><br /><span style="color: gray"><em>The utop toplevel, which can be installed via opam, also provides history.</em></span></td>
<td><span style="color: gray"><em>Mono:</em></span><br />
$ fsharpi<br /><br /><span style="color: gray"><em>In visual studio, highlight code and press ALT+ENTER.</em></span></td>
<td>$ scala</td>
<td>$ ghci</td>
</tr><tr><td><a href="#repl-limitations">repl limitations</a></td>
<td></td>
<td></td>
<td></td>
<td><span style="color: gray"><em>Must use let to define values and functions; when defining functions with multiple equations the equations must be separated by semicolons; the clauses of case/of statements must be separated by semicolons; it is not possible to define data types.</em></span></td>
</tr><tr><td><a href="#repl-last-value">repl last value</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>it</td>
<td>res0, res1, …</td>
<td>it</td>
</tr><tr><td><a href="#help">help</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
<td>:help</td>
<td>:?</td>
</tr><tr><td><a href="#quit">quit</a></td>
<td>^D</td>
<td>#quit;;</td>
<td></td>
<td></td>
</tr><tr><td><a href="#inspect-type">inspect type</a></td>
<td><span style="color: gray"><em>repl displays the type of any expression entered</em></span></td>
<td></td>
<td><span style="color: gray"><em>repl displays the type of any expression entered</em></span></td>
<td>let a = 3<br />
:type a</td>
</tr><tr><td><a href="#inspect-namespace">inspect namespace</a></td>
<td>module Unix = Unix;;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#load-source">load source file</a></td>
<td>#use "hello";;</td>
<td></td>
<td></td>
<td>:edit hello.hs<br />
:load hello</td>
</tr><tr><td><a href="#load-pkg-note">load package</a></td>
<td><span style="color: gray"><em>consider adding to</em> .ocamlinit:</span><br />
#use "topfind";;<br />
# thread;;<br />
#require "core";;<br />
open Core.Std;;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#search-path">search path</a></td>
<td>#directory "libdir";;</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#search-path-command-line">set search path on command line</a></td>
<td>ocaml -Ilibdir</td>
<td></td>
<td></td>
<td></td>
</tr><tr><th></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">_______________________________________________</span></span></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">_______________________________________________</span></span></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">_______________________________________________</span></span></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">_______________________________________________</span></span></th>
</tr></table><p><a name="version-used-note" id="version-used-note"></a></p>
<h2 id="toc0"><span><a href="#version-used">version used</a></span></h2>
<p>Versions used to test the code samples in this sheet.</p>
<p><a name="version-note" id="version-note"></a></p>
<h2 id="toc1"><span><a href="#version">show version</a></span></h2>
<p>How to get the version.</p>
<p><a name="grammar-invocation-note" id="grammar-invocation-note"></a></p>
<h2 id="toc2"><span><a href="#grammar-invocation">Grammar and Invocation</a></span></h2>
<p><a name="interpreter-note" id="interpreter-note"></a></p>
<h2 id="toc3"><span><a href="#interpreter">interpreter</a></span></h2>
<p>How to run the interpreter on a file of source code.</p>
<p><strong>scala:</strong></p>
<p>Scala can be run "Perl style" like this:</p>
<div class="code">
<pre>
<code>scala foo.scala</code>
</pre></div>
<p>or "Java style" like this:</p>
<div class="code">
<pre>
<code>scala Foo</code>
</pre></div>
<p>When the code is run "Java style", the code to be executed must be in the <em>main</em> method of an object with the same name as the file. When the code is run "Perl style" the statements o be executed should be at the top level outside of any object, class, or method.</p>
<p><a name="shebang-note" id="shebang-note"></a></p>
<h2 id="toc4"><span><a href="#shebang">shebang</a></span></h2>
<p>How to use the interpreter in a shebang.</p>
<p><strong>scala</strong></p>
<p>To use scala as a shebang, it is necessary to terminate the shell script portion of the script with !#</p>
<div class="code">
<pre>
<code>#!/bin/sh
exec scala $0 $@
!#
println("hello world")</code>
</pre></div>
<p><a name="bytecode-compiler-interpreter-note" id="bytecode-compiler-interpreter-note"></a></p>
<h2 id="toc5"><span><a href="#bytecode-compiler-interpreter">bytecode compiler and interpreter</a></span></h2>
<p>How to compile source to bytecode and run it.</p>
<p><strong>ocaml:</strong></p>
<p>It is not necessary to invoke <em>ocamlrun</em> on the bytecode; the bytecode can be executed directly because the bytecode compiler puts a shebang invocation at the top of the file.</p>
<p><a name="native-compiler-note" id="native-compiler-note"></a></p>
<h2 id="toc6"><span><a href="#native-compiler">native compiler</a></span></h2>
<p>How to compile source to native code and run it.</p>
<p><a name="library-always-imported-note" id="library-always-imported-note"></a></p>
<h2 id="toc7"><span><a href="#library-always-imported">library which is always imported</a></span></h2>
<p>The name of the library containing the types and functions which are always available.</p>
<p><a name="statement-terminator-note" id="statement-terminator-note"></a></p>
<h2 id="toc8"><span><a href="#statement-terminator">statement terminator</a></span></h2>
<p><strong>ocaml:</strong></p>
<p>;; is the ocaml statement separator. It is not necessary at the end of the line if the following line starts with an <em>open</em> or <em>let</em> keyword or at the end of the file.</p>
<p><strong>scala:</strong></p>
<p>Scala infers the existence of a semicolon at the end of a newline terminated line if none of the following conditions hold:</p>
<ul><li>the line ends with a infix operator, including a period</li>
<li>the following line begins with a word that is not legal at the start of a statement</li>
<li>the line ends inside parens or square brackets, neither of which can contain multiple statements</li>
</ul><p><a name="blocks-note" id="blocks-note"></a></p>
<h2 id="toc9"><span><a href="#blocks">blocks</a></span></h2>
<p>How to define a block of statements.</p>
<p><a name="end-of-line-comment-note" id="end-of-line-comment-note"></a></p>
<h2 id="toc10"><span><a href="#end-of-line-comment">end-of-line comment</a></span></h2>
<p>A comment terminated by the end of the line.</p>
<p><a name="multiple-line-comment-note" id="multiple-line-comment-note"></a></p>
<h2 id="toc11"><span><a href="#multiple-line-comment">multiple line comment</a></span></h2>
<p>A comment with a start and end delimiter which can span multiple lines.</p>
<p><strong>ocaml:</strong></p>
<p>(* *) style comments can be nested.</p>
<p><a name="var-expr-note" id="var-expr-note"></a></p>
<h1 id="toc12"><span><a href="#var-expr">Variables and Expressions</a></span></h1>
<p><a name="value-note" id="value-note"></a></p>
<h2 id="toc13"><span><a href="#value">write-once variable</a></span></h2>
<p>How to define a variable which can be set at run-time but cannot be modified after it is set.</p>
<p><a name="variable-note" id="variable-note"></a></p>
<h2 id="toc14"><span><a href="#variable">modifiable variable</a></span></h2>
<p>How to define a modifiable variable.</p>
<p><a name="unit-note" id="unit-note"></a></p>
<h2 id="toc15"><span><a href="#unit">unit type and value</a></span></h2>
<p>The notation for the unit type and the unit value. In all languages the notation for the unit value is the same as the notation for an empty tuple.</p>
<p>The unit value is a common return value of functions which perform side effects.</p>
<p><a name="conditional-expression-note" id="conditional-expression-note"></a></p>
<h2 id="toc16"><span><a href="#conditional-expression">conditional expression</a></span></h2>
<p>The syntax for a conditional expression.</p>
<p><a name="branch-type-mismatch-note" id="branch-type-mismatch-note"></a></p>
<h2 id="toc17"><span><a href="#branch-type-mismatch">branch type mismatch</a></span></h2>
<p>What happens if the two branches of a conditional expression don't have the same type.</p>
<p><a name="null-note" id="null-note"></a></p>
<h2 id="toc18"><span><a href="#null">null</a></span></h2>
<p>A value used somewhat paradoxically to indicate the absence of a value.</p>
<p>Types which can contain a null value are called <em>option types</em>.</p>
<p><a name="nullable-type-note" id="nullable-type-note"></a></p>
<h2 id="toc19"><span><a href="#nullable-type">nullable type</a></span></h2>
<p><a name="null-test-note" id="null-test-note"></a></p>
<h2 id="toc20"><span><a href="#null-test">null test</a></span></h2>
<p><a name="coalesce-note" id="coalesce-note"></a></p>
<h2 id="toc21"><span><a href="#coalesce">coalesce</a></span></h2>
<p><a name="expr-type-decl-note" id="expr-type-decl-note"></a></p>
<h2 id="toc22"><span><a href="#expr-type-decl">expression type declaration</a></span></h2>
<p>How to explicitly declare the type of an expression.</p>
<p><a name="let-in-note" id="let-in-note"></a></p>
<h2 id="toc23"><span><a href="#let-in">let ... in ...</a></span></h2>
<p>How to define local variables.</p>
<p><strong>ocaml:</strong></p>
<p>OCaml uses <em>let</em> to define a value and <em>let</em> with <em>in</em> to define values in a local scope. OCaml follows the usage of the original dialect of ML in this respect.</p>
<p>OCaml can define multiple values with a single <em>let</em> and <em>in</em> by conjoining the definitions with <em>and</em>. The definitions are performed in parallel, so later definitions cannot use the earlier definitions:</p>
<div class="code">
<pre>
<code>let z = 
let x = 3
and y = 4 in
x * y;;</code>
</pre></div>
<p><strong>scala:</strong></p>
<p>Blocks can be used in Scala exclusively to define scope. Furthermore blocks are expressions and evaluate to their last statement.</p>
<p><strong>haskell:</strong></p>
<p>Haskell uses <em>let</em> with <em>in</em> to define local scope. In addition, <em>ghci</em> uses <em>let</em> without <em>in</em> to define values.</p>
<p><a name="where-note" id="where-note"></a></p>
<h2 id="toc24"><span><a href="#where">where</a></span></h2>
<p>How to define local variables with definitions after the expression that uses them.</p>
<p><a name="arithmetic-logic-note" id="arithmetic-logic-note"></a></p>
<h1 id="toc25"><span><a href="#arithmetic-logic">Arithmetic and Logic</a></span></h1>
<p><a name="boolean-type-note" id="boolean-type-note"></a></p>
<h2 id="toc26"><span><a href="#boolean-type">boolean type</a></span></h2>
<p>The type for boolean values.</p>
<p><a name="true-false-note" id="true-false-note"></a></p>
<h2 id="toc27"><span><a href="#true-false">true and false</a></span></h2>
<p>The literals for true and false.</p>
<p><a name="logical-op-note" id="logical-op-note"></a></p>
<h2 id="toc28"><span><a href="#logical-op">logical operators</a></span></h2>
<p>The logical operators: <em>and</em>, <em>or</em>, and <em>not</em>.</p>
<p><a name="relational-op-note" id="relational-op-note"></a></p>
<h2 id="toc29"><span><a href="#relational-op">relational operators</a></span></h2>
<p>Operators for performing comparisons.</p>
<p><a name="min-max-note" id="min-max-note"></a></p>
<h2 id="toc30"><span><a href="#min-max">min and max</a></span></h2>
<p>The binary functions <em>min</em> and <em>max</em>.</p>
<p><a name="int-type-note" id="int-type-note"></a></p>
<h2 id="toc31"><span><a href="#int-type">integer types</a></span></h2>
<p>The most commonly used numeric types.</p>
<p><strong>scala:</strong></p>
<p>Arithmetic operators can be used on values of type <em>Char</em>, which then behaves as a 16 bit unsigned integer. Integer literals are of type <em>Int</em> unless suffixed with <em>L</em>:</p>
<div class="code">
<pre>
<code>scala&gt; 9223372036854775807L
res24: Long = 9223372036854775807

scala&gt; 9223372036854775807 
&lt;console&gt;:1: error: integer number too large</code>
</pre></div>
<p><a name="int-literal-note" id="int-literal-note"></a></p>
<h2 id="toc32"><span><a href="#int-literal">integer literal</a></span></h2>
<p>Integer literals.</p>
<p><strong>haskell:</strong></p>
<p>Haskell does not have negative integer literal syntax. The negative sign parses as a unary prefix operator. It may be necessary to put parens around a negative integer constant:</p>
<div class="code">
<pre>
<code>-- syntax error:
1 + -3

-- ok:
1 + (-3)</code>
</pre></div>
<p><a name="float-type-note" id="float-type-note"></a></p>
<h2 id="toc33"><span><a href="#float-type">float type</a></span></h2>
<p>Floating point types.</p>
<p><a name="int-op-note" id="int-op-note"></a></p>
<h2 id="toc34"><span><a href="#int-op">integer operators</a></span></h2>
<p>The integer operators.</p>
<p><a name="float-op-note" id="float-op-note"></a></p>
<h2 id="toc35"><span><a href="#float-op">float operators</a></span></h2>
<p>The floating point operators. Note that in the OCaml the floating point operators are different from the integer operators.</p>
<p><a name="add-int-float-note" id="add-int-float-note"></a></p>
<h2 id="toc36"><span><a href="#add-int-float">add integer and float</a></span></h2>
<p>How to add an integer and a float.</p>
<p><strong>ocaml:</strong></p>
<p>OCaml also can convert a integer to float with <em>float_of_int</em>.</p>
<p><a name="int-div-note" id="int-div-note"></a></p>
<h2 id="toc37"><span><a href="#int-div">integer division</a></span></h2>
<p>How to find the quotient of two integers; how to find the remainder of two integers.</p>
<p><a name="int-div-zero-note" id="int-div-zero-note"></a></p>
<h2 id="toc38"><span><a href="#int-div-zero">integer division by zero</a></span></h2>
<p>The result of dividing an integer by zero.</p>
<p><a name="float-div-note" id="float-div-note"></a></p>
<h2 id="toc39"><span><a href="#float-div">float division</a></span></h2>
<p><a name="float-div-zero-note" id="float-div-zero-note"></a></p>
<h2 id="toc40"><span><a href="#float-div-zero">float division by zero</a></span></h2>
<p>The result of division by zero.</p>
<p><a name="float-exponentiation-note" id="float-exponentiation-note"></a></p>
<h2 id="toc41"><span><a href="#float-exponentiation">float exponentiation</a></span></h2>
<p>How to exponentiate a float.</p>
<p><a name="float-func-note" id="float-func-note"></a></p>
<h2 id="toc42"><span><a href="#float-func">float functions</a></span></h2>
<p>The square root function; the natural exponential and natural logarithm functions; the trigonometric functions.</p>
<p><a name="arith-truncation-note" id="arith-truncation-note"></a></p>
<h2 id="toc43"><span><a href="#arith-truncation">arithmetic truncation</a></span></h2>
<p>Ways to convert a float to a nearby integer.</p>
<p><strong>ocaml:</strong></p>
<p>This definition of <em>round</em> handles negative numbers correctly:</p>
<div class="code">
<pre>
<code>let round x = int_of_float (floor (x +. 0.5))</code>
</pre></div>
<p><a name="power-note" id="power-note"></a></p>
<h2 id="toc44"><span><a href="#power">power</a></span></h2>
<p>How to perform exponentiation.</p>
<p><strong>ocaml:</strong></p>
<p>How to define a function which computes the power of an integer:</p>
<div class="code">
<pre>
<code>let integer_exponent b e =
  let rec aux x i =
    if i = e then x else aux (x * b) (i + 1)
  in
  aux 1 0;;</code>
</pre></div>
<p><a name="sqrt-negative-one-note" id="sqrt-negative-one-note"></a></p>
<h2 id="toc45"><span><a href="#sqrt-negative-one">sqrt -1</a></span></h2>
<p>The result of taking the square root of a negative number.</p>
<p><a name="transcendental-func-note" id="transcendental-func-note"></a></p>
<h2 id="toc46"><span><a href="#transcendental-func">transcendental functions</a></span></h2>
<p><a name="transcendental-const-note" id="transcendental-const-note"></a></p>
<h2 id="toc47"><span><a href="#transcendental-func">transcendental constants</a></span></h2>
<p><a name="int-overflow-note" id="int-overflow-note"></a></p>
<h2 id="toc48"><span><a href="#int-overflow">integer overflow</a></span></h2>
<p>What happens when expression evaluates to an integer that is larger than what can be stored.</p>
<p><strong>scala:</strong></p>
<p>The largest integers are available in the constants <em>Int.MaxValue</em> and <em>Long.MaxValue</em>.</p>
<p><a name="float-overflow-note" id="float-overflow-note"></a></p>
<h2 id="toc49"><span><a href="#float-overflow">float overflow</a></span></h2>
<p>The result of float overflow.</p>
<p>Ocaml has literals for infinity and negative infinity, but Scala and Haskell do not.</p>
<p><a name="rational-type-note" id="rational-type-note"></a></p>
<h2 id="toc50"><span><a href="#rational-type">rational type</a></span></h2>
<p><a name="rational-construction-note" id="rational-construction-note"></a></p>
<h2 id="toc51"><span><a href="#rational-construction">rational construction</a></span></h2>
<p><a name="rational-decomposition-note" id="rational-decomposition-note"></a></p>
<h2 id="toc52"><span><a href="#rational-decomposition">rational decomposition</a></span></h2>
<p><a name="complex-type-note" id="complex-type-note"></a></p>
<h2 id="toc53"><span><a href="#complex-type">complex type</a></span></h2>
<p><a name="complex-construction-note" id="complex-construction-note"></a></p>
<h2 id="toc54"><span><a href="#complex-construction">complex construction</a></span></h2>
<p><a name="complex-decomposition-note" id="complex-decomposition-note"></a></p>
<h2 id="toc55"><span><a href="#complex-decomposition">complex decomposition</a></span></h2>
<p><a name="random-num-note" id="random-num-note"></a></p>
<h2 id="toc56"><span><a href="#random-num">random number</a></span></h2>
<p>How to generate a uniformly distributed random integer; how to generate a uniformly distributed float; how to generate a normally distributed float.</p>
<p><strong>scala:</strong></p>
<p>One can also use <tt>java.util.Random</tt>, which does not have to be imported.</p>
<p><a name="random-seed-note" id="random-seed-note"></a></p>
<h2 id="toc57"><span><a href="#random-seed">random seed</a></span></h2>
<p>How to set a random seed. How to get and restore the state of a random number generator.</p>
<p><strong>scala:</strong></p>
<p>It looks like Scala 2.10 has modified the <tt>Random</tt> constructor so that it will accept an <tt>Int</tt> or <tt>Long</tt> as a seed argument.</p>
<p><a name="bit-op-note" id="bit-op-note"></a></p>
<h2 id="toc58"><span><a href="#bit-op">bit operators</a></span></h2>
<p>The bit operators.</p>
<p><strong>ocaml:</strong></p>
<p>Also has operators which perform arithmetic shift: <em>asl</em> and <em>asr</em>. When performing an arithmetic shift, the sign of the integer is preserved.</p>
<p><strong>haskell:</strong></p>
<p>Haskell does not assign a default size or type to numeric literals. Hence numeric literals must have their type declared for bit operations to be performed on them.</p>
<p><a name="binary-octal-hex-literals-note" id="binary-octal-hex-literals-note"></a></p>
<h2 id="toc59"><span><a href="#binary-octal-hex-literals">binary, octal, and hex literals</a></span></h2>
<p><a name="radix-note" id="radix-note"></a></p>
<h2 id="toc60"><span><a href="#radix">radix</a></span></h2>
<p><a name="strings-note" id="strings-note"></a></p>
<h1 id="toc61"><span><a href="#strings">Strings</a></span></h1>
<p><a name="str-type-note" id="str-type-note"></a></p>
<h2 id="toc62"><span><a href="#str-type">string type</a></span></h2>
<p>The types for strings and characters.</p>
<p><a name="str-literal-note" id="str-literal-note"></a></p>
<h2 id="toc63"><span><a href="#str-literal">string literal</a></span></h2>
<p>The syntax for a string literal.</p>
<p><a name="newline-in-str-literal-note" id="newline-in-str-literal-note"></a></p>
<h2 id="toc64"><span><a href="#newline-in-str-literal">newline in literal</a></span></h2>
<p><a name="str-esc-note" id="str-esc-note"></a></p>
<h2 id="toc65"><span><a href="#str-esc">literal escapes</a></span></h2>
<p><strong>scala:</strong></p>
<p>Unicode escapes might not work when scala is installed on a Mac because the encoding is set by default to MacRoman:</p>
<div class="code">
<pre>
<code>scala&gt; System.getProperty("file.encoding")
res0: java.lang.String = MacRoman</code>
</pre></div>
<p>This can be fixed by passing the following flag to <em>java</em> in the <em>scala</em> shell script:</p>
<div class="code">
<pre>
<code>-Dfile.encoding=UTF-8</code>
</pre></div>
<p><a name="format-str-note" id="format-str-note"></a></p>
<h2 id="toc66"><span><a href="#format-str">format string</a></span></h2>
<p><a name="str-concat-note" id="str-concat-note"></a></p>
<h2 id="toc67"><span><a href="#str-concat">concatenate</a></span></h2>
<p>How to concatenate strings.</p>
<p><strong>f#:</strong></p>
<p>F# supports (with a warning) the ^ operator for compatibility with OCaml.</p>
<p><a name="str-replicate-note" id="str-replicate-note"></a></p>
<h2 id="toc68"><span><a href="#str-replicate">replicate</a></span></h2>
<p><a name="translate-case-note" id="translate-case-note"></a></p>
<h2 id="toc69"><span><a href="#translate-case">translate case</a></span></h2>
<p>How to convert a string to uppercase; how to convert a string to lowercase; how to capitalize the first character.</p>
<p><a name="capitalize-note" id="capitalize-note"></a></p>
<h2 id="toc70"><span><a href="#capitalize">capitalize</a></span></h2>
<p><a name="trim-note" id="trim-note"></a></p>
<h2 id="toc71"><span><a href="#trim">trim</a></span></h2>
<p><a name="pad-note" id="pad-note"></a></p>
<h2 id="toc72"><span><a href="#pad">pad</a></span></h2>
<p><a name="num-to-str-note" id="num-to-str-note"></a></p>
<h2 id="toc73"><span><a href="#num-to-str">number to string</a></span></h2>
<p><a name="str-to-num-note" id="str-to-num-note"></a></p>
<h2 id="toc74"><span><a href="#str-to-num">string to number</a></span></h2>
<p>How to parse numeric types from string; how to convert numeric types to strings.</p>
<p><strong>ocaml:</strong></p>
<p>To convert a string to a float:</p>
<div class="code">
<pre>
<code>float_of_string "3.14"</code>
</pre></div>
<p><strong>scala:</strong></p>
<p>The + operator will convert a numeric type to a string if the other operand is a string. Hence the following works:</p>
<div class="code">
<pre>
<code>"value: " + 8</code>
</pre></div>
<p><a name="join-note" id="join-note"></a></p>
<h2 id="toc75"><span><a href="#join">join</a></span></h2>
<p><a name="split-note" id="split-note"></a></p>
<h2 id="toc76"><span><a href="#split">split</a></span></h2>
<p><a name="char-type-note" id="char-type-note"></a></p>
<h2 id="toc77"><span><a href="#char-type">character type</a></span></h2>
<p><a name="char-literal-note" id="char-literal-note"></a></p>
<h2 id="toc78"><span><a href="#char-literal">character literal</a></span></h2>
<p><a name="str-len-note" id="str-len-note"></a></p>
<h2 id="toc79"><span><a href="#str-len">length</a></span></h2>
<p>How to get the length of a string.</p>
<p><a name="index-substr-note" id="index-substr-note"></a></p>
<h2 id="toc80"><span><a href="#index-substr">index of substring</a></span></h2>
<p>How to get the index of a substring.</p>
<p><a name="substr-note" id="substr-note"></a></p>
<h2 id="toc81"><span><a href="#substr">extract substring</a></span></h2>
<p>How to extract a substring.</p>
<p><a name="extract-char-note" id="extract-char-note"></a></p>
<h2 id="toc82"><span><a href="#extract-char">extract character</a></span></h2>
<p>How to get the character at a specified index of a string.</p>
<p>The syntax for a character literal.</p>
<p><a name="chr-ord-note" id="chr-ord-note"></a></p>
<h2 id="toc83"><span><a href="#chr-ord">chr and ord</a></span></h2>
<p>How to convert a character to its ASCII code or Unicode point; how to convert an ASCII code or Unicode point to a character.</p>
<p><a name="dates-time-note" id="dates-time-note"></a></p>
<h1 id="toc84"><span><a href="#dates-time">Dates and Time</a></span></h1>
<p><a name="arrays-note" id="arrays-note"></a></p>
<h1 id="toc85"><span><a href="#arrays">Arrays</a></span></h1>
<p><a name="lists-note" id="lists-note"></a></p>
<h1 id="toc86"><span><a href="#lists">Lists</a></span></h1>
<p><a name="list-literal-note" id="list-literal-note"></a></p>
<h2 id="toc87"><span>list literal</span></h2>
<p><a name="list-element" id="list-element"></a></p>
<h2 id="toc88"><span>list element element</span></h2>
<p><a name="list-head" id="list-head"></a></p>
<h2 id="toc89"><span>list head</span></h2>
<p><strong>f#:</strong></p>
<p>Supports <em>List.hd</em> (with a warning) to be compatible with OCaml.</p>
<p><a name="list-tail" id="list-tail"></a></p>
<h2 id="toc90"><span>list-tail</span></h2>
<p>Supports <em>List.tl</em> (with a warning) to be compatible with OCaml.</p>
<p><a name="tuples-note" id="tuples-note"></a></p>
<h1 id="toc91"><span><a href="#tuples">Tuples</a></span></h1>
<p><a name="tuple" id="tuple"></a></p>
<h2 id="toc92"><span>tuple</span></h2>
<p><a name="tuple-element" id="tuple-element"></a></p>
<h2 id="toc93"><span>tuple element</span></h2>
<p><a name="functions-note" id="functions-note"></a></p>
<h1 id="toc94"><span><a href="#functions">Functions</a></span></h1>
<p><a name="function" id="function"></a></p>
<h2 id="toc95"><span>function</span></h2>
<p>How to define a function.</p>
<p><strong>scala</strong></p>
<p>Recursive functions must have their return type declared because the Scala compiler cannot infer it.</p>
<p><a name="lambda" id="lambda"></a></p>
<h2 id="toc96"><span>lambda</span></h2>
<p>How to define an anonymous function.</p>
<p><a name="piecewise-defined-function" id="piecewise-defined-function"></a></p>
<h2 id="toc97"><span>piecewise defined function</span></h2>
<p>How to define a function with multiple equations and matching on the arguments.</p>
<p><a name="recursive-function" id="recursive-function"></a></p>
<h2 id="toc98"><span>recursive function</span></h2>
<p>How to define a recursive function.</p>
<p><a name="mutually-recursive-functions" id="mutually-recursive-functions"></a></p>
<h2 id="toc99"><span>mutually recursive functions</span></h2>
<p>How to define two functions which call each other. Mutual recursion can be eliminated by inlining the second function inside the first function. The first function is then recursive and can be defined independently of the second function.</p>
<p><a name="named-parameter" id="named-parameter"></a></p>
<h2 id="toc100"><span>named parameter</span></h2>
<p>How to define and invoke a function with named parameters.</p>
<p><strong>ocaml:</strong></p>
<p>Multiple parameters can share a name. In the function definition colons are used to rename the parameters for use in the function body.</p>
<div class="code">
<pre>
<code>let add_xs ~x:x1 ~x:x2 = x1 + x2;;
add_xs ~x:3 ~x:7;;</code>
</pre></div>
<p><a name="default-value" id="default-value"></a></p>
<h2 id="toc101"><span>named parameter default value</span></h2>
<p>How to make named parameters optional by providing a default value in the definition.</p>
<p><strong>ocaml:</strong></p>
<p>For a named parameter to be optional, it must be following by an unnamed parameter in the definition. This permits the parser to unambiguously determine if the optional parameter has been provided or not. If the optional parameter is not followed by an unnamed parameter in the definition, then named parameter is not optional. If the function is invoked without the parameter, it returns a curried version of the function which expects the missing named parameter as an argument.</p>
<p><a name="infix-prefix" id="infix-prefix"></a></p>
<h2 id="toc102"><span>infix operator in prefix position</span></h2>
<p>How to invoke an infix operator in prefix position.</p>
<p><a name="function-infix" id="function-infix"></a></p>
<h2 id="toc103"><span>function in infix position</span></h2>
<p>How to invoke a function in infix position.</p>
<p><a name="currying" id="currying"></a></p>
<h2 id="toc104"><span>currying</span></h2>
<p>How to create a curried function by providing values for some of the arguments of a function.</p>
<p><strong>scala:</strong></p>
<p>Functions can only be curried if they are defined with special syntax. Functions defined with this syntax must be invoked with a pair of parens for each argument.</p>
<p><a name="function-composition" id="function-composition"></a></p>
<h2 id="toc105"><span>function composition operator</span></h2>
<p>An operator which takes two functions as arguments and returns a function constructed from them by composition.</p>
<p><a name="lazy-evaluation" id="lazy-evaluation"></a></p>
<h2 id="toc106"><span>lazy evaluation</span></h2>
<p>How to evaluate the arguments to a function in a lazy manner.</p>
<p>Lazy evaluation is also called <em>call-by-name</em>.</p>
<p><strong>ocaml:</strong></p>
<p>OCaml provides the <tt>lazy</tt> function. It is up to the caller to specify that the argument is to evaluated lazily.</p>
<p><strong>scala:</strong></p>
<p>Functions can be defined to evaluate their arguments lazily by putting a <tt>=&gt;</tt> operator between the colon and the type of the parameter in the function signature.</p>
<p>We can define <tt>arg1</tt> so that the first argument is strict and the second argument is lazy:</p>
<div class="code">
<pre>
<code>def arg1(x: Int, y: =&gt; Int): Int = x

arg1(7, 1 / 0)</code>
</pre></div>
<p><strong>haskell:</strong></p>
<p>Haskell evaluates arguments lazily by default.</p>
<p><a name="strict-evaluation" id="strict-evaluation"></a></p>
<h2 id="toc107"><span>strict evaluation</span></h2>
<p>How to evaluate arguments before they are passed to a function.</p>
<p>Strict evaluation is also called <em>call by-value</em>.</p>
<p><strong>haskell:</strong></p>
<p>The <tt>seq</tt> function evaluates its first argument and then returns the second argument.</p>
<p><a name="execution-control-note" id="execution-control-note"></a></p>
<h1 id="toc108"><span><a href="#execution-control">Execution Control</a></span></h1>
<p><a name="if" id="if"></a></p>
<h2 id="toc109"><span>if</span></h2>
<p><a name="if-else-if-else" id="if-else-if-else"></a></p>
<h2 id="toc110"><span>if else-if else</span></h2>
<p><a name="sequencing" id="sequencing"></a></p>
<h2 id="toc111"><span>sequencing</span></h2>
<p><a name="while" id="while"></a></p>
<h2 id="toc112"><span>while</span></h2>
<p><strong>ocaml:</strong></p>
<p>There is no break or continue statement. In addition to using references, it is possible to use exceptions to break out of a while loop.</p>
<p><a name="for" id="for"></a></p>
<h2 id="toc113"><span>for</span></h2>
<p>How to loop over a range of integers.</p>
<p><strong>sml:</strong></p>
<p>How to define a <tt>for</tt> loop in SML:</p>
<div class="code">
<pre>
<code>datatype for = to of int * int
             | downto of int * int

infix to downto

val for =
    fn lo to up =&gt;
       (fn f =&gt; let fun loop lo = if lo &gt; up then ()
                                  else (f lo; loop (lo+1))
                in loop lo end)
     | up downto lo =&gt;
       (fn f =&gt; let fun loop up = if up &lt; lo then ()
                                  else (f up; loop (up-1))
                in loop up end)</code>
</pre></div>
<p>How to use the for loop:</p>
<div class="code">
<pre>
<code>for (1 to 9)
    (fn i =&gt; print (Int.toString i))

for (9 downto 1)
    (fn i =&gt; print (Int.toString i))</code>
</pre></div>
<p><a name="reverse-for" id="reverse-for"></a></p>
<h2 id="toc114"><span>for in reverse</span></h2>
<p>How to iterate over a reversed range of integers.</p>
<p><a name="list-iteration" id="list-iteration"></a></p>
<h2 id="toc115"><span>list iteration</span></h2>
<p>How to iterate over the members of a list.</p>
<p><a name="loop" id="loop"></a></p>
<h2 id="toc116"><span>loop</span></h2>
<p>An infinite loop.</p>
<p><a name="exceptions-note" id="exceptions-note"></a></p>
<h1 id="toc117"><span><a href="#exceptions">Exceptions</a></span></h1>
<p><a name="raise-error" id="raise-error"></a></p>
<h2 id="toc118"><span>raise error</span></h2>
<p>How to raise an error.</p>
<p><a name="handle-error" id="handle-error"></a></p>
<h2 id="toc119"><span>handle error</span></h2>
<p>How to handle an error.</p>
<p><a name="concurrency-note" id="concurrency-note"></a></p>
<h1 id="toc120"><span><a href="#concurrency">Concurrency</a></span></h1>
<p><a name="file-handles-note" id="file-handles-note"></a></p>
<h1 id="toc121"><span><a href="#file-handles">Filehandles</a></span></h1>
<p><a name="files-note" id="files-note"></a></p>
<h1 id="toc122"><span><a href="#files">Files</a></span></h1>
<p><a name="directories-note" id="directories-note"></a></p>
<h1 id="toc123"><span><a href="#directories">Directories</a></span></h1>
<p><a name="processes-environment-note" id="processes-environment-note"></a></p>
<h1 id="toc124"><span><a href="#processes-environment">Processes and Environment</a></span></h1>
<p><a name="libraries-namespaces-note" id="libraries-namespaces-note"></a></p>
<h1 id="toc125"><span><a href="#libraries-namespaces">Libraries and Namespaces</a></span></h1>
<p><a name="namespace-example" id="namespace-example"></a></p>
<h2 id="toc126"><span>namespace example</span></h2>
<p><a name="namespaces" id="namespaces"></a></p>
<h2 id="toc127"><span>namespaces</span></h2>
<p><a name="file-name" id="file-name"></a></p>
<h2 id="toc128"><span>file name restrictions</span></h2>
<p><a name="import" id="import"></a></p>
<h2 id="toc129"><span>import</span></h2>
<p><a name="namespace-creation" id="namespace-creation"></a></p>
<h2 id="toc130"><span>namespace creation</span></h2>
<p><a name="namespace-alias" id="namespace-alias"></a></p>
<h2 id="toc131"><span>namespace alias</span></h2>
<p><a name="namespace-separator" id="namespace-separator"></a></p>
<h2 id="toc132"><span>namespace separator</span></h2>
<p><a name="subnamespace" id="subnamespace"></a></p>
<h2 id="toc133"><span>subnamespace</span></h2>
<p><a name="inspect-namespace" id="inspect-namespace"></a></p>
<h2 id="toc134"><span>inspect namespace</span></h2>
<p><a name="user-defined-types-note" id="user-defined-types-note"></a></p>
<h1 id="toc135"><span><a href="#user-defined-types">User-Defined Types</a></span></h1>
<table class="wiki-content-table"><tr><th colspan="7">keywords used to define types by language</th>
</tr><tr><th></th>
<th>pascal</th>
<th>c</th>
<th>c++</th>
<th>ocaml</th>
<th>scala</th>
<th>haskell</th>
</tr><tr><td>type synonym</td>
<td>type</td>
<td>typedef</td>
<td>typedef</td>
<td>type</td>
<td>type</td>
<td>type</td>
</tr><tr><td>sum type</td>
<td>type</td>
<td>enum <span style="color: gray"><em>or</em></span> union</td>
<td></td>
<td>type</td>
<td>abstract class</td>
<td>data</td>
</tr><tr><td>tuple product type</td>
<td></td>
<td></td>
<td></td>
<td>type</td>
<td></td>
<td>data</td>
</tr><tr><td>record product type</td>
<td>record</td>
<td>struct</td>
<td>struct <span style="color: gray"><em>or</em></span> class</td>
<td>type <span style="color: gray"><em>…</em></span> of</td>
<td>class</td>
<td>data</td>
</tr></table><p>Examples of algebraic sum types are the enumerated type of Pascal and the enum of C. The definition of the type lists a set of values which variables which have the type can contain. The values are called variants.</p>
<p>The enumerated type of Pascal and the enum of C are implemented as integers, and one can recover the underlying integer value associated with each variant. In Pascal one uses the <tt>ord</tt> function to do this. One can use the equality test operator to determine whether two variables hold the same variant. One can also use the less than (&lt;) operator to determine if a variable holds a variant which occurs earlier in the type definition list than another.</p>
<p>An enumerated type is thus similar to defining a sequence of integer constants like this:</p>
<div class="code">
<pre>
<code>  typedef int month;

  const month JANUARY = 1;
  const month FEBRUARY = 2;
  .
  .
  .
  const month DECEMBER = 12;</code>
</pre></div>
<p>An enumerated type gives the compiler the ability to ensure that only variants listed in the type definition list are actually stored in variables with the enumerated type however.</p>
<p>BETTER EXPLANATION AND MOTIVATION OF UNARY TYPES. OTHER THAN VARIANTS: UNIT. ARE<br />
UNARY TYPES USEFUL?</p>
<p>Algebraic sum types are more general than enumerated types, because the variants are not restricted to being unary types. By a unary type we mean a type whose variables can only contain a single value. EXAMPLE OF SUCH AND ALGEBRAIC SUM TYPE. Because of this generality, one cannot assume that a general algebraic sum type variant has an integer representation. Some languages nevertheless define an order on the variants.</p>
<p>SUM TYPE: NUMBER OF VALUES IS THE SUM OF THE VALUES OF EACH OF THE VARIANTS</p>
<p>C UNION TYPE AS ALGEBRAIC SUM TYPE</p>
<p>Examples of algebraic product types are the record of Pascal and the struct of C. An algebraic product type wraps several values into a single "super" value. The components of an algebraic product type are called fields, and each has a type which constrains the values which can be stored in it. The type of each field is normally a pre-existing type, but see the note on recursive types below.</p>
<p>To extract a field from a product value, each field must be identified. In the case of the Pascal and the C struct the fields are given names. Product types can also be defined in which the fields are identified by position like a tuple. OCaml and Haskell support both types of product type.</p>
<p>Since OCaml and Haskell have both tuples and tuple product types, it is worthwhile to consider the differences. One could represent represent coordinates on plane with a simple pair tuple with this type:</p>
<div class="code">
<pre>
<code>  (float, float)</code>
</pre></div>
<p>However, all 2-tuples in which the components are both floats are the same type. With tuple product types, we could define two distinct types:</p>
<div class="code">
<pre>
<code>  type cartesian = Cartestion of float * float;
  type polar = Polar of float * float;</code>
</pre></div>
<p>The compiler will now prevent us from using cartesian coordinates in a place where polar coordinates are expected.</p>
<p>It is also instructive to consider the difference between a type synonym and a product type with a single field. In the former case the two types are interchangeable. Type synonyms are useful as a shorthand for a long type, such as a 10-tuple or a function type. Functions which operate on variables of the original type will also operate on variables with the type synonym. In fact, it should be noted that type synonyms don't create a constructor, so the constructor for the original type must be used.</p>
<p>A product type with a single field creates a new type and provides a constructor for it which accepts the original type as an argument. Functions which take the original type as an argument cannot be used on the new type.</p>
<p>COMBINED ALGEBRAIC TYPES.</p>
<p>Algebraic product types first appeared in 1966 in Algol W. Algol W extended Algol 60 by adding a record type. The idea was due to Niklaus Wirth and C. A. R. Hoare. Pascal, which appeared in 1970, had both a record type and an enumerated type as already noted, and the Pascal enumerated type seems to be the first example of a type that could be called an algebraic sum type.</p>
<p>Algebraic types first appeared in their full generality in the programming language called Hope, circa 1980. Algebraic types were soon borrowed into ML. Hope introduced the terms algebraic data type, product type, and sum type. It also introduced pattern matching.</p>
<p>PATTERN MATCHING.</p>
<p><a name="type-synonym-note" id="type-synonym-note"></a></p>
<h2 id="toc136"><span><a href="#type-synonym">type synonym</a></span></h2>
<p><a name="sum-type-note" id="sum-type-note"></a></p>
<h2 id="toc137"><span><a href="#sum-type">sum type</a></span></h2>
<p><a name="generic-type-note" id="generic-type-note"></a></p>
<h2 id="toc138"><span><a href="#generic-type">generic type</a></span></h2>
<p><a name="recursive-type-note" id="recursive-type-note"></a></p>
<h2 id="toc139"><span><a href="#recursive-type">recursive type</a></span></h2>
<p><a name="objects-note" id="objects-note"></a></p>
<h1 id="toc140"><span><a href="#objects">Objects</a></span></h1>
<p><a name="polymorphism-note" id="polymorphism-note"></a></p>
<h1 id="toc141"><span><a href="#polymorphism">Polymorphism</a></span></h1>
<p><a name="repl-note" id="repl-note"></a></p>
<h1 id="toc142"><span><a href="#repl">REPL</a></span></h1>
<p><a name="invoke-repl" id="invoke-repl"></a></p>
<h2 id="toc143"><span>repl</span></h2>
<p><a name="repl-limitations" id="repl-limitations"></a></p>
<h2 id="toc144"><span>repl limitations</span></h2>
<p><a name="repl-last-value" id="repl-last-value"></a></p>
<h2 id="toc145"><span>repl last value</span></h2>
<p><a name="help" id="help"></a></p>
<h2 id="toc146"><span>help</span></h2>
<p><strong>ocaml</strong></p>
<p>The OCaml top level provides <a href="http://caml.inria.fr/pub/docs/manual-ocaml/manual023.html#toc90">these directives</a>:</p>
<div class="code">
<pre>
<code>#cd "DIRNAME";;
#directory "DIRNAME";;
#install_printer PRINTER_NAME;;
#label BOOL;;
#load "FILENAME";;
#print_depth N;;
#print_length N;;
#quit;;
#remove_printer PRINTER_NAME;;
#trace FUNCTION_NAME;;
#untrace FUNCTION_NAME;;
#untrace_all;;
#use "FILENAME";;
#warnings "WARNINGS_LIST";;</code>
</pre></div>
<p><a name="inspect-type" id="inspect-type"></a></p>
<h2 id="toc147"><span>inspect type</span></h2>
<p><a name="load-source" id="load-source"></a></p>
<h2 id="toc148"><span>load source file</span></h2>
<p><a name="search-path" id="search-path"></a></p>
<h2 id="toc149"><span>search path</span></h2>
<p><a name="search-path-command-line" id="search-path-command-line"></a></p>
<h2 id="toc150"><span>set search path on command line</span></h2>
<p><a name="ocaml" id="ocaml"></a></p>
<h1 id="toc151"><span>OCaml</span></h1>
<p><a href="http://opam.ocamlpro.com/doc/Quick_Install.html">Install OPAM in 2 minutes</a> <span style="color: gray">(ocamlpro.com)</span><br /><a href="http://caml.inria.fr/pub/docs/manual-ocaml/index.html">The Objective-Caml system</a> <span style="color: gray">(inria.fr)</span><br /><a href="http://shop.oreilly.com/product/0636920024743.do">Real World OCaml</a> <span style="color: gray">(oreilly.com)</span><br /><a href="http://www.mpi-sws.org/~rossberg/sml-vs-ocaml.html">Standard ML and Objective Caml, Side by Side</a></p>
<p><a name="fsharp" id="fsharp"></a></p>
<h1 id="toc152"><span>F#</span></h1>
<p><a href="http://mono-project.com/Main_Page">Mono</a> <span style="color: gray">(mono-project.com)</span></p>
<p><a name="scala" id="scala"></a></p>
<h1 id="toc153"><span>Scala</span></h1>
<p><a href="http://www.scala-lang.org/sites/default/files/linuxsoft_archives/docu/files/ScalaReference.pdf">The Scala Language Specification (pdf)</a><br /><a href="http://www.scala-lang.org/docu/files/api/index.html">Scala 2.7.7 API</a><br /><a href="http://java.sun.com/javase/6/docs/api/">Java 1.6 API</a></p>
<p><a name="haskell" id="haskell"></a></p>
<h1 id="toc154"><span>Haskell</span></h1>
<p><a href="http://www.haskell.org/onlinereport/haskell2010/">Haskell 2010 Language Report</a><br /><a href="http://www.haskell.org/ghc/docs/latest/html/libraries/index.html">Haskell Hierarchical Libraries</a><br /><a href="http://book.realworldhaskell.org/read/">Real World Haskell</a></p>

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
