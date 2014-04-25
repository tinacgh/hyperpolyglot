<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html lang="en" xml:lang="en" xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="content-type" content="text/html;charset=UTF-8"/>
<link rel="icon" type="image/gif" href="/favicon.gif"/>
<link rel="apple-touch-icon" sizes="120x120" href="touch-icon-iphone-retina.png" />
<link rel="apple-touch-icon" sizes="152x152" href="touch-icon-ipad-retina.png" />
<title>Pascal Style Languages: Pascal, Ada, PL/pgSQL - Hyperpolyglot</title>
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
                            Pascal Style Languages: Pascal, Ada, PL/pgSQL
                        </div>
<div id="page-content">
                        

<p><em>a side-by-side reference sheet</em></p>
<p><a name="top" id="top"></a><a href="#grammar-invocation">grammar and invocation</a> | <a href="#variables-expressions">variables and expressions</a> | <a href="#arithmetic-logic">arithmetic and logic</a> | <a href="#strings">strings</a> | <a href="#regexes">regexes</a> | <a href="#dates-time">dates and time</a> | <a href="#arrays">arrays</a> | <a href="#user-defined-types">user-defined types</a> | <a href="#functions">functions</a> | <a href="#execution-control">execution control</a> | <a href="#exceptions">exceptions</a> | <a href="#file-handles">file handles</a> | <a href="#files">files</a> | <a href="#sql">sql</a> | <a href="#directories">directories</a> | <a href="#processes-environment">processes and environment</a> | <a href="#libraries-namespaces">libraries and namespaces</a></p>
<table class="wiki-content-table"><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><td><a name="version-used" id="version-used"></a><a href="#version-used-note">version used</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>Free Pascal 2.4</em></span></td>
<td><span style="color: gray"><em>GNAT GCC 4.1</em></span></td>
<td><span style="color: gray"><em>Postgres 9.1</em></span></td>
</tr><tr><td><a name="show-version" id="show-version"></a><a href="#show-version-note">show version</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>$ fpc -v</td>
<td>$ gnatgcc <span style="white-space: pre-wrap;">--</span>version</td>
<td>$ psql <span style="white-space: pre-wrap;">--</span>version</td>
</tr><tr><th colspan="4"><a name="grammar-invocation" id="grammar-invocation"></a><a href="#grammar-invocation-note">grammar and invocation</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><td><a name="hello-world" id="hello-world"></a><a href="#hello-world-note">hello word</a></td>
<td>$ cat hello.pas<br />
program Hello;<br />
begin<br /><span style="white-space: pre-wrap;">  </span>WriteLn('hello world!');<br />
end.<br /><br />
$ fpc hello.pas<br /><br />
$ ./hello</td>
<td>$ cat hello.adb<br />
with Text_IO; use Text_IO;<br />
procedure Hello is<br />
begin<br /><span style="white-space: pre-wrap;">  </span>Put_Line ("Hello World!");<br />
end Hello;<br /><br />
$ gnatgcc -c hello.adb<br /><br />
$ gnatbind hello<br /><br />
$ gnatlink hello<br /><br />
$ ./hello<br />
Hello World!</td>
<td><span style="color: gray"><em>at psql prompt:</em></span><br /><span style="white-space: pre-wrap;">&gt;</span> create or replace function hello()<br />
returns varchar as $$<br />
begin<br /><span style="white-space: pre-wrap;">  </span>return 'Hello World!';<br />
end;<br />
$$ language plpgsql;<br />
CREATE FUNCTION<br /><br /><span style="white-space: pre-wrap;">&gt;</span> select hello();<br />
hello<br /><span style="white-space: pre-wrap;">--------------</span><br />
Hello World!<br />
(1 row)</td>
</tr><tr><td><a name="file-suffixes" id="file-suffixes"></a><a href="#file-suffixes-note">file suffixes</a></td>
<td>foo.pas<br />
foo.o<br />
foo</td>
<td></td>
<td></td>
</tr><tr><td><a name="eol-comment" id="eol-comment"></a><a href="#eol-comment-note">end-of-line comment</a></td>
<td><span style="color: gray"><em>not ISO Pascal:</em></span><br /><span style="white-space: pre-wrap;">//</span> <span style="color: gray"><em>comment line</em></span><br /><span style="white-space: pre-wrap;">//</span> <span style="color: gray"><em>another line</em></span></td>
<td><span style="white-space: pre-wrap;">--</span> <span style="color: gray"><em>comment line</em></span><br /><span style="white-space: pre-wrap;">--</span> <span style="color: gray"><em>another line</em></span></td>
<td><span style="white-space: pre-wrap;">--</span> <span style="color: gray"><em>comment line</em></span><br /><span style="white-space: pre-wrap;">--</span> <span style="color: gray"><em>another line</em></span></td>
</tr><tr><td><a name="multiple-line-comment" id="multiple-line-comment"></a><a href="#multiple-line-comment-note">multiple line comment</a></td>
<td>(* <span style="color: gray"><em>comment line</em></span><br /><span style="color: gray"><em>another line</em></span> *)<br /><br />
{ <span style="color: gray"><em>comment line</em></span><br /><span style="color: gray"><em>another line</em></span> }</td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><th colspan="4"><a name="variables-expressions" id="variables-expressions"></a><a href="#variables-expressions-note">variables and expressions</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><td><a name="case-sensitive" id="case-sensitive"></a><a href="#case-sensitive-note">case sensitive</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>no</em></span></td>
<td><span style="color: gray"><em>no</em></span></td>
<td><span style="color: gray"><em>no</em></span></td>
</tr><tr><td><a name="declarations" id="declarations"></a><a href="#declarations-note">declare constant, type, and variable</a></td>
<td>program Foo;<br />
const<br /><span style="white-space: pre-wrap;">  </span>PI: Real = 3.14159;<br />
type<br /><span style="white-space: pre-wrap;">  </span>Customer = record<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>Id: Integer;<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>Name: String;<br /><span style="white-space: pre-wrap;">  </span>end;<br />
var<br /><span style="white-space: pre-wrap;">  </span>I: Integer;<br /><span style="white-space: pre-wrap;">  </span>C: Customer;<br />
begin<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>body of program</em></span></td>
<td>procedure Foo is<br /><span style="white-space: pre-wrap;">  </span>Pi : constant FLOAT := 3.14;<br /><span style="white-space: pre-wrap;">  </span>i : INTEGER;<br /><span style="white-space: pre-wrap;">  </span>type Customer is record<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>Id : INTEGER;<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>Name : String(1..4);<br /><span style="white-space: pre-wrap;">  </span>end record;<br /><span style="white-space: pre-wrap;">  </span>C: Customer;<br />
begin<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>body of program</em></span></td>
<td>create type customer as (<br /><span style="white-space: pre-wrap;">  </span>id integer,<br /><span style="white-space: pre-wrap;">  </span>name text<br />
);<br /><br />
create or replace function foo() returns void as $$<br />
declare<br /><span style="white-space: pre-wrap;">  </span>pi numeric(10,4) = 3.14;<br /><span style="white-space: pre-wrap;">  </span>i integer = 42;<br /><span style="white-space: pre-wrap;">  </span>c customer%rowtype;<br />
begin<br /><span style="white-space: pre-wrap;">  </span>return;<br />
end $$ language plpgsql;</td>
</tr><tr><td><a href="#block">block with local scope</a></td>
<td></td>
<td></td>
<td>declare<br /><span style="white-space: pre-wrap;">  </span>i integer := 3;<br />
begin<br /><span style="white-space: pre-wrap;">  </span>raise notice 'i is %', i;<br />
end;</td>
</tr><tr><td><a name="assignment" id="assignment"></a><a href="#assignment-note">assignment</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>X := 1;</td>
<td>x := 1;</td>
<td>x = 1;</td>
</tr><tr><td><a name="pointer-declaration" id="pointer-declaration"></a><a href="#pointer-declaration-note">pointer declaration</a></td>
<td>IP: ^Integer;</td>
<td>type Integer_Pointer is access Integer;<br />
Ip : Integer_Pointer;</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="allocate-memory" id="allocate-memory"></a><a href="#allocate-memory-note">allocate memory</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>new(IP);</td>
<td>Ip := new Integer;</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="free-memory" id="free-memory"></a><a href="#free-memory-note">free memory</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>dispose(IP);</td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="deference-pointer" id="deference-pointer"></a><a href="#dereference-pointer-note">dereference pointer</a></td>
<td>IP^ := 7;<br />
Ans := 6 * IP^;</td>
<td>Ip.all := 7;<br />
ans := 6 * Ip.all;</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="null" id="null"></a><a href="#null-note">null literal</a></td>
<td><span style="color: gray"><em>can only be assigned to pointers:</em></span><br />
nil</td>
<td><span style="color: gray"><em>can only be assigned to access types:</em></span><br />
null</td>
<td>NULL</td>
</tr><tr><td><a name="null-test" id="null-test"></a><a href="#null-test-note">null test</a></td>
<td>X = nil</td>
<td>x = null</td>
<td>x is NULL<br /><span style="color: gray">x = NULL <em>is always false</em></span></td>
</tr><tr><td><a name="coalesce" id="coalesce"></a><a href="#coalesce-note">coalesce</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
<td>7 + coalesce(x, 0)</td>
</tr><tr><td><a name="nullif" id="nullif"></a><a href="#nullif-note">nullif</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
<td>nullif(x, 0)</td>
</tr><tr><td><a name="conditional-expr" id="conditional-expr"></a><a href="#conditional-expr-note">conditional expression</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
<td>case when x &gt; 0 then x else -x end</td>
</tr><tr><th colspan="4"><a name="arithmetic-logic" id="arithmetic-logic"></a><a href="#arithmetic-logic-note">arithmetic and logic</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><td><a name="boolean-type" id="boolean-type"></a><a href="#boolean-type-note">boolean type</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>Boolean</td>
<td>BOOLEAN</td>
<td>BOOL BOOLEAN</td>
</tr><tr><td><a name="true-false" id="true-false"></a><a href="#true-false-note">true and false</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>true false</td>
<td>TRUE FALSE</td>
<td>TRUE FALSE</td>
</tr><tr><td><a name="falsehoods" id="falsehoods"></a><a href="#falsehoods-note">falsehoods</a></td>
<td>false<br /><span style="color: gray"><em>non booleans cause error in boolean context</em></span></td>
<td>FALSE<br /><span style="color: gray"><em>non booleans cause error in boolean context</em></span></td>
<td>FALSE NULL 0<br /><span style="color: gray"><em>strings and floats cause error in boolean context</em></span></td>
</tr><tr><td><a name="logical-op" id="logical-op"></a><a href="#logical-op-note">logical operators</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>and or xor not</td>
<td>and or xor not</td>
<td>AND OR <span style="color: gray"><em>none</em></span> NOT</td>
</tr><tr><td><a name="short-circuit-op" id="short-circuit-op"></a><a href="#short-circuit-op-note">short circuit operators</a></td>
<td><span style="color: gray">{ in Free Pascal 'and' and 'or' also short circuit }</span><br />
and_then<br />
or_else</td>
<td>and then<br />
or else</td>
<td>AND<br />
OR</td>
</tr><tr><td><a name="int-type" id="int-type"></a><a href="#int-type-note">integer type</a></td>
<td>Integer</td>
<td></td>
<td>smallint: <span style="color: gray"><em>2 bytes</em></span><br />
integer: <span style="color: gray"><em>4 bytes</em></span><br />
bigint: <span style="color: gray"><em>8 bytes</em></span></td>
</tr><tr><td><a name="float-type" id="float-type"></a><a href="#float-type-note">float type</a></td>
<td>Real</td>
<td></td>
<td>real: <span style="color: gray"><em>4 bytes</em></span><br />
double precision: <span style="color: gray"><em>8 bytes</em></span></td>
</tr><tr><td><a name="fixed-type" id="fixed-type"></a><a href="#fixed-type-note">fixed type</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>four fractional digits:</em></span><br />
Currency</td>
<td></td>
<td>numeric(<span style="color: gray"><em>digits</em></span>, <span style="color: gray"><em>fractional_digits</em></span>)</td>
</tr><tr><td><a name="relational-op" id="relational-op"></a><a href="#relational-op-note">relational operators</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="white-space: pre-wrap;">=</span> &lt;&gt; &lt; &gt; &lt;= &gt;=</td>
<td><span style="white-space: pre-wrap;">=</span> /= &lt; &gt; &lt;= &gt;=</td>
<td><span style="white-space: pre-wrap;">=</span> != <span style="color: gray"><em>also:</em></span> &lt;&gt; &lt; &gt; &lt;= &gt;=</td>
</tr><tr><td><a name="min-max" id="min-max"></a><a href="#min-max-note">min and max</a></td>
<td>uses Math;<br /><br />
Min(1, 2)<br />
Max(1, 2)<br />
MinIntValue([1, 2, 3])<br />
MaxIntValue([1, 2, 3])<br />
MinValue([1.0, 2.0, 3.0])<br />
MaxValue([1.0, 2.0, 3.0])</td>
<td></td>
<td>least(1,2,3)<br />
greatest(1,2,3)</td>
</tr><tr><td><a name="arith-op" id="arith-op"></a><a href="#arith-op-note">arithmetic operators</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>+ - * / div mod</td>
<td>+ - * <span style="color: gray"><em>none</em></span> / mod <span style="color: gray"><em>or</em></span> rem</td>
<td>+ - * <span style="color: gray"><em>none</em></span> / %</td>
</tr><tr><td><a name="int-div" id="int-div"></a><a href="#int-div-note">integer division</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>7 div 3</td>
<td></td>
<td>7 / 3</td>
</tr><tr><td><a name="int-div-zero" id="int-div-zero"></a><a href="#int-div-zero-note">integer division by zero</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>raises</em></span> EDivByZero</td>
<td><span style="color: gray"><em>raises</em></span> CONSTRAINT_ERROR</td>
<td><span style="color: gray"><em>raises</em></span> division_by_zero</td>
</tr><tr><td><a name="float-div" id="float-div"></a><a href="#float-div-note">float division</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>7 / 3</td>
<td>Float(7)/Float(3)</td>
<td>7 * 1.0 / 3</td>
</tr><tr><td><a name="float-div-zero" id="float-div-zero"></a><a href="#float-div-zero-note">float division by zero</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>+Inf</td>
<td><span style="color: gray"><em>raises</em></span> CONSTRAINT_ERROR</td>
<td><span style="color: gray"><em>raises</em></span> division_by_zero</td>
</tr><tr><td><a name="power" id="power"></a><a href="#power-note">power</a></td>
<td>uses Math;<br /><br />
Power(2, 16);</td>
<td>**</td>
<td>2 ^ 16</td>
</tr><tr><td><a name="sqrt" id="sqrt"></a><a href="#sqrt-note">sqrt</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>Sqrt(2)</td>
<td></td>
<td>sqrt(2)</td>
</tr><tr><td><a name="sqrt-negative-one" id="sqrt-negative-one"></a><a href="#sqrt-negative-one-note">sqrt -1</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>raises</em></span> EInvalidOp</td>
<td><span style="color: gray"><em>raises</em></span> ADA.NUMERICS.ARGUMENT_ERROR</td>
<td><span style="color: gray"><em>raises</em></span> invalid_argument_for_power_function</td>
</tr><tr><td><a name="transcendental-func" id="transcendental-func"></a><a href="#transcendental-func-note">transcendental functions</a></td>
<td>uses Math;<br /><br />
Exp Ln Sin Cos Tan ArcSin ArcCos ArcTan ArcTan2</td>
<td>with Ada.Numerics.Elementary_Functions;<br />
use Ada.Numerics.Elementary_Functions;<br /><br />
Exp Log Sin Cos Tan Arcsin Arccos <span style="color: gray"><em>none</em></span> Arctan</td>
<td>exp ln sin cos tan asin acos atan atan2</td>
</tr><tr><td><a name="float-truncation" id="float-truncation"></a><a href="#float-truncation-note">float truncation</a><br /><span style="color: gray"><em>towards zero, to nearest integer, down, up</em></span></td>
<td>uses Math;<br /><br />
Trunc Round Floor Ceil</td>
<td><span style="color: gray"><em>return Float:</em></span><br /><span style="color: gray"><em>??</em></span> Float'Rounding Float'Floor Float'Ceiling</td>
<td>trunc round floor ceil</td>
</tr><tr><td><a name="absolute-val" id="absolute-val"></a><a href="#absolute-val-note">absolute value</a><br /><span style="color: gray"><em>and sign</em></span></td>
<td>Abs(-7)<br /><span style="color: gray"><em>none</em></span></td>
<td></td>
<td>abs(-7)<br />
sign(-7)</td>
</tr><tr><td><a name="int-overflow" id="int-overflow"></a><a href="#int-overflow-note">integer overflow</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>modular arithmetic</em></span></td>
<td><span style="color: gray"><em>modular arithmetic</em></span></td>
<td><span style="color: gray"><em>raises</em></span> numeric_value_out_of_range</td>
</tr><tr><td><a name="float-overflow" id="float-overflow"></a><a href="#float-overflow-note">float overflow</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>raises</em></span> EOverflow</td>
<td>+Inf<span style="white-space: pre-wrap;">*******</span></td>
<td><span style="color: gray"><em>raises</em></span> numeric_value_out_of_range</td>
</tr><tr><td><a name="random-num" id="random-num"></a><a href="#random-num-note">random number</a><br /><span style="color: gray"><em>integer, float</em></span></td>
<td>Random(100)<br />
Random</td>
<td>with Ada.Numerics.Float_Random;<br />
with Ada.Numerics.Discrete_Random;<br />
use Ada.Numerics;<br />
procedure Foo is<br /><span style="white-space: pre-wrap;">  </span>type Rand_Range is range 0..99;<br /><span style="white-space: pre-wrap;">  </span>package Rand_Int is new Discrete_Random(Rand_Range);<br /><span style="white-space: pre-wrap;">  </span>IG : Rand_Int.Generator;<br /><span style="white-space: pre-wrap;">  </span>FG : Float_Random.Generator;<br />
begin<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>use</em></span> Rand_Int.Random(IG)<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>use</em></span> Float_Random.Random(FG)</td>
<td>floor(100 * random())<br />
random()</td>
</tr><tr><td><a name="bit-op" id="bit-op"></a><a href="#bit-op-note">bit operators</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>shl shr and or xor not</td>
<td></td>
<td><span style="white-space: pre-wrap;"> &lt;&lt; &gt;&gt; </span> &amp; | ^ ~</td>
</tr><tr><th colspan="4"><a name="strings" id="strings"></a><a href="#strings-note">strings</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><td><a href="#string-literal">string literal</a></td>
<td>'Don''t say "foo"'</td>
<td>"Don't say ""foo"""</td>
<td>'Don''t say "foo"'</td>
</tr><tr><td><a href="#fixed-string-type">fixed length string type</a></td>
<td></td>
<td><span style="color: gray"><em>error unless string length is</em> n</span><br />
STRING(1..<span style="color: gray"><em>n</em></span>)<br /><span style="color: gray"><em>length can be omitted if initialized with literal in declaration</em></span></td>
<td><span style="color: gray"><em>pads length to</em> n <em>with spaces:</em></span><br />
char(<span style="color: gray"><em>n</em></span>)</td>
</tr><tr><td><a href="#bounded-string-type">bounded length string type</a></td>
<td></td>
<td></td>
<td><span style="color: gray"><em>error if</em> n <em>exceeded:</em></span><br />
varchar(<span style="color: gray"><em>n</em></span>)</td>
</tr><tr><td><a href="#unbounded-string-type">unbounded length string type</a></td>
<td></td>
<td></td>
<td>text</td>
</tr><tr><td><a href="#character-type">character type</a></td>
<td></td>
<td>CHARACTER</td>
<td>char(1)</td>
</tr><tr><td><a href="#chr-ord">chr and ord</a></td>
<td>Chr(65)<br />
Ord('A')</td>
<td></td>
<td>chr(65)<br />
ascii('A')</td>
</tr><tr><td><a href="#string-concatenate">concatenate</a></td>
<td>'hello' + ' world'</td>
<td>"hello" &amp; " world"</td>
<td>'hello' <span style="white-space: pre-wrap;">||</span> ' world'</td>
</tr><tr><td><a href="#string-length">length</a></td>
<td>Length('hello')</td>
<td></td>
<td>length('hello')</td>
</tr><tr><td><a href="#extract-substring">extract substring</a></td>
<td>Copy(S, 1, 4)</td>
<td></td>
<td>substr('hello', 1, 4)</td>
</tr><tr><td><a href="#index-substring">index of substring</a></td>
<td>Pos('hell', 'hello')</td>
<td></td>
<td>strpos('hello', 'hell')</td>
</tr><tr><td><a href="#case-manipulation">case manipulation</a></td>
<td>uses SysUtils;<br /><br />
UpperCase('hello')<br />
LowerCase('HELLO')</td>
<td></td>
<td>upper('hello')<br />
lower('HELLO')</td>
</tr><tr><td><a href="#strip">strip</a></td>
<td>Trim(' foo ')<br />
TrimLeft(' foo')<br />
TrimRight('foo ')</td>
<td></td>
<td>trim(' foo ')<br />
ltrim(' foo')<br />
rtrim('foo ')</td>
</tr><tr><td><a href="#pad">pad on left, pad on right</a></td>
<td></td>
<td></td>
<td>lpad('foo', 10)<br />
rpad('foo', 10)</td>
</tr><tr><td><a href="#string-number-conversion">convert string to number</a></td>
<td>uses SysUtils;<br /><br />
7 + StrToInt('12')<br />
73.9 + StrToFloat('.037')</td>
<td></td>
<td><span style="color: gray"><em>arithmetic operators automatically convert strings to numbers</em></span><br />
cast('12' as int)<br />
cast('3.14') as real)</td>
</tr><tr><td><a href="#number-string-conversion">convert number to string</a></td>
<td>uses SysUtils;<br /><br />
'value: ' + IntToStr(8)<br />
'value: ' + FloatToStr(3.14)</td>
<td></td>
<td><span style="color: gray"><em>double pipe operator</em> <span style="white-space: pre-wrap;">||</span> <em>converts numbers operands to strings</em></span><br />
cast(8 to text)<br />
cast(3.14 to text)</td>
</tr><tr><th colspan="4"><a name="regexes" id="regexes"></a><a href="#regexes-note">regular expressions</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><td><a name="match" id="match"></a><a href="#match-note">match</a></td>
<td></td>
<td></td>
<td>select *<br />
from pwt<br />
where name similar to 'r[a-z]+';</td>
</tr><tr><td><a name="substitute" id="substitute"></a><a href="#substitute-note">substitute</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
<td>select regexp_replace('foo bar', 'bar$', 'baz');</td>
</tr><tr><td><a name="extract-subgroup" id="extract-subgroup"></a><a href="#extract-subgroup-note">extract subgroup</a></td>
<td></td>
<td></td>
<td>select (regexp_matches('foobar', '(f..)bar'))[1];</td>
</tr><tr><th colspan="4"><a name="dates-time" id="dates-time"></a><a href="#dates-time-note">dates and time</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><td><a name="current-date-time" id="current-date-time"></a><a href="#current-date-time-note">current date and time</a></td>
<td></td>
<td></td>
<td>now()</td>
</tr><tr><td><a name="date-time-to-str" id="date-time-to-str"></a><a href="#date-time-to-str-note">datetime to string</a></td>
<td></td>
<td></td>
<td>to_char(now(), 'YYYY-MM-DD HH24:MI:SS')</td>
</tr><tr><td><a name="str-to-date-time" id="str-to-date-time"></a><a href="#str-to-date-time-note">string to datetime</a></td>
<td></td>
<td></td>
<td>to_timestamp('2011-09-26 00:00:47', 'YYYY-MM-DD HH24:MI:SS')</td>
</tr><tr><th colspan="4"><a name="arrays" id="arrays"></a><a href="#arrays-note">arrays</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><td><a href="#declare-array">declare array</a></td>
<td>A: array[1..5] of Integer;</td>
<td>A : array(1..5) of Integer;</td>
<td>a int[];</td>
</tr><tr><td><a href="#array-length">array length</a></td>
<td></td>
<td>A'Last</td>
<td>array_length(a, 1)</td>
</tr><tr><td><a href="#array-access">array element access</a></td>
<td>A[1] := 3;</td>
<td>A(1) := 3;</td>
<td>a[1] = 3;</td>
</tr><tr><td><a href="#array-initialization">array initialization</a></td>
<td></td>
<td>A : array(1..5) of Integer := (1,3,5,2,4);</td>
<td>a int[] = array[1,3,5,2,4];</td>
</tr><tr><td><a href="#array-slice">array slice</a></td>
<td></td>
<td>A(3..4) := A(1..2);</td>
<td>a[1:2]<br /><span style="color: gray"><em>can assign to slice in</em> UPDATE <em>statement but not in assignment</em></span></td>
</tr><tr><td><a href="#array-out-of-bounds">array out of bounds behavior</a></td>
<td><span style="color: gray"><em>undefined; free pascal permits out of bounds memory access</em></span></td>
<td><span style="color: gray"><em>compiler warning; raises</em></span> CONSTRAINT_ERROR <span style="color: gray"><em>at runtime</em></span></td>
<td>NULL</td>
</tr><tr><td><a href="#declare-multidimensional-array">declare multidimensional array</a></td>
<td></td>
<td></td>
<td>a integer[][];</td>
</tr><tr><td><a href="#multidimensional-array-access">multidimensional array access</a></td>
<td></td>
<td></td>
<td>a[2][3] = 7;</td>
</tr><tr><th colspan="4"><a name="user-defined-types" id="user-defined-types"></a><a href="#user-defined-types-note">user-defined types</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><td><a name="type-synonym" id="type-synonym"></a><a href="#type-synonym-note">type synonym</a></td>
<td>type<br /><span style="white-space: pre-wrap;">  </span>CustomerId = Integer;</td>
<td></td>
<td></td>
</tr><tr><td><a name="enumerated-type" id="enumerated-type"></a><a href="#enumerated-type-note">enumerated type</a></td>
<td>type<br /><span style="white-space: pre-wrap;">  </span>Direction = (North, South, East, West);<br />
var<br /><span style="white-space: pre-wrap;">  </span>Wind: Direction = North;<br />
begin<br /><span style="white-space: pre-wrap;">  </span>WriteLn(Wind); <span style="color: gray">{ prints 'North' }</span></td>
<td></td>
<td>create type direction as enum ( 'north', 'south', 'east', 'west');<br /><br />
create table wind ( origin direction, speed_mph real );<br /><br />
insert into wind values ( 'north', 12 );</td>
</tr><tr><td><a href="#define-record-type">define record type</a></td>
<td><span style="color: gray"><em>in type section:</em></span><br />
Customer = record<br /><span style="white-space: pre-wrap;">  </span>Id: Integer;<br /><span style="white-space: pre-wrap;">  </span>Name: String;<br />
end;</td>
<td>type Customer is record<br /><span style="white-space: pre-wrap;">  </span>Id : Integer;<br /><span style="white-space: pre-wrap;">  </span>Name : String(1..4);<br />
end record;</td>
<td>create type customer as (<br /><span style="white-space: pre-wrap;">  </span>id integer,<br /><span style="white-space: pre-wrap;">  </span>name text<br />
);</td>
</tr><tr><td><a href="#declare-record">declare record</a></td>
<td>C: Customer;</td>
<td>C : Customer := ( 17, "John" );</td>
<td>declare<br /><span style="white-space: pre-wrap;">  </span>c customer;<br />
begin<br /><span style="white-space: pre-wrap;">  </span>c = (17,'John');<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>code which uses</em> c</span></td>
</tr><tr><td><a href="#record-member-access">record member access</a></td>
<td>C.Name := 'Fred';</td>
<td>C.Name := 'Fred';</td>
<td>c.name = 'Fred'</td>
</tr><tr><td><a href="#record-block">record block</a></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="4"><a name="functions" id="functions"></a><a href="#functions-note">functions</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><td><a name="def-func" id="def-func"></a><a href="#def-func-note">define function</a></td>
<td>function Foo(M: Integer; N: Integer): Integer;<br />
begin<br /><span style="white-space: pre-wrap;">  </span>Result := M + N;<br />
end;</td>
<td></td>
<td>create function foo(i int, j int)<br />
returns int as $$<br />
begin<br /><span style="white-space: pre-wrap;">  </span>return i + j;<br />
end;<br />
$$ language plpgsql;</td>
</tr><tr><td><a name="invoke-func" id="invoke-func"></a><a href="#invoke-func-note">invoke function</a></td>
<td>Retval := Foo(7, 3);</td>
<td></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">--</span> in select clause:</span><br />
select foo(1, 2);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">--</span> in where clause:</span><br />
select * from cust where id = foo(1, 2);<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">--</span> inside PL/pgSQL functions can be used wherever<br /><span style="white-space: pre-wrap;">--</span> expressions are permitted. Can be used as a statement<br /><span style="white-space: pre-wrap;">--</span> with perform:</span><br />
perform foo(1, 2);</td>
</tr><tr><td><a name="undef-func" id="undef-func"></a><a href="#undef-func-note">undefine function</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">--</span> parameter types are required:</span><br />
drop function foo(int, int);</td>
</tr><tr><td><a name="no-retval" id="no-retval"></a><a href="#no-retval-note">no return value</a></td>
<td>procedure Message(Msg: String);<br />
begin<br /><span style="white-space: pre-wrap;">  </span>WriteLn(Msg);<br />
end;</td>
<td></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">--</span> declare return type as void:</span><br />
create or replace function message(msg text)<br />
returns void as $$<br />
begin<br /><span style="white-space: pre-wrap;">  </span>raise notice '%', msg;<br />
end;<br />
$$ language plpgsql;</td>
</tr><tr><td><a name="pass-by-ref" id="pass-by-ref"></a><a href="#pass-by-ref-note">pass by reference</a></td>
<td><span style="color: gray">{ declare parameter with var }</span><br />
procedure Incr(var N: Integer);<br />
begin<br /><span style="white-space: pre-wrap;">  </span>N := N + 1;<br />
end;<br /><br />
var<br /><span style="white-space: pre-wrap;">  </span>I: Integer;<br />
begin<br /><span style="white-space: pre-wrap;">  </span>I := 3;<br /><span style="white-space: pre-wrap;">  </span>Incr(I);<br /><span style="white-space: pre-wrap;">  </span>WriteLn(I); <span style="color: gray">{ prints 4 }</span><br />
end.</td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="nested-func" id="nested-func"></a><a href="#nested-func-note">nested function</a></td>
<td></td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="overloaded-func" id="overloaded-func"></a><a href="#overloaded-func-note">overloaded function</a></td>
<td></td>
<td></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">--</span>integer version:</span><br />
create or replace function add(m int, n int)<br />
returns int as $$<br />
begin<br /><span style="white-space: pre-wrap;">  </span>return m + n;<br />
end;<br />
$$ language plpgsql;<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">--</span>float version:</span><br />
create or replace function add(x real, y real)<br />
returns real as $$<br />
begin<br /><span style="white-space: pre-wrap;">  </span>return x + y;<br />
end;<br />
$$ language plpgsql;</td>
</tr><tr><td><a name="forward-decl" id="forward-decl"></a><a href="#forward-decl-note">forward declaration</a></td>
<td>function Odd(N: Integer): Boolean;<br />
Forward;<br /><br />
function Even(N: Integer): Boolean;<br />
begin<br /><span style="white-space: pre-wrap;">  </span>if N = 0 then<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>Result := true<br /><span style="white-space: pre-wrap;">  </span>else<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>Result := Odd(N - 1);<br />
end;<br /><br />
function Odd(N: Integer): Boolean;<br />
begin<br /><span style="white-space: pre-wrap;">  </span>if N = 0 then<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>Result := false<br /><span style="white-space: pre-wrap;">  </span>else<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>Result := Even(N - 1);<br />
end;</td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td>out parameter</td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="4"><a name="execution-control" id="execution-control"></a><a href="#execution-control-note">execution control</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><td><a name="if" id="if"></a><a href="#if-note">if</a></td>
<td>if I = 0 then<br />
begin<br /><span style="white-space: pre-wrap;">  </span>WriteLn('no hits');<br />
end<br />
else<br /><span style="white-space: pre-wrap;">  </span>if I = 1 then<br /><span style="white-space: pre-wrap;">  </span>begin<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>WriteLn('one hit');<br /><span style="white-space: pre-wrap;">  </span>end<br /><span style="white-space: pre-wrap;">  </span>else<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>WriteLn(IntToStr(I) + ' hits');</td>
<td>if I = 0 then<br /><span style="white-space: pre-wrap;">  </span>Put_Line("no hits");<br />
elsif I = 1 then<br /><span style="white-space: pre-wrap;">  </span>Put_Line("one hit");<br />
else<br /><span style="white-space: pre-wrap;">  </span>Put_Line(Integer'Image(I) &amp; " hits");<br />
end if;</td>
<td>if i = 0 then<br /><span style="white-space: pre-wrap;">  </span>return 'no hits';<br />
elsif i = 1 then<br /><span style="white-space: pre-wrap;">  </span>return 'one hit';<br />
else<br /><span style="white-space: pre-wrap;">  </span>return i <span style="white-space: pre-wrap;">||</span> ' hits';<br />
end if;</td>
</tr><tr><td><a name="while" id="while"></a><a href="#while-note">while</a></td>
<td>I := 0;<br />
while I &lt; 10 do<br />
begin<br /><span style="white-space: pre-wrap;">  </span>WriteLn(IntToStr(I));<br /><span style="white-space: pre-wrap;">  </span>I := I + 1;<br />
end</td>
<td>I := 0;<br />
while I &lt; 10 loop<br /><span style="white-space: pre-wrap;">  </span>Put_Line(Integer'Image(I));<br /><span style="white-space: pre-wrap;">  </span>I := I + 1;<br />
end loop;</td>
<td>i = 1;<br />
sum = 0;<br />
while i &lt;= n loop<br /><span style="white-space: pre-wrap;">  </span>sum = sum + i;<br /><span style="white-space: pre-wrap;">  </span>i = i + 1;<br />
end loop;</td>
</tr><tr><td><a name="for" id="for"></a><a href="#for-note">for</a></td>
<td>for I := 0 to 9 do<br /><span style="white-space: pre-wrap;">  </span>WriteLn(IntToStr(I));</td>
<td>for I in 1..9 loop<br /><span style="white-space: pre-wrap;">  </span>Put_Line(Integer'Image(I));<br />
end loop;</td>
<td>sum = 0;<br />
for i in 1..n loop<br /><span style="white-space: pre-wrap;">  </span>sum = sum + i;<br />
end loop;</td>
</tr><tr><td><a name="break-continue" id="break-continue"></a><a href="#break-continue-note">break and continue</a></td>
<td></td>
<td></td>
<td>exit continue</td>
</tr><tr><th colspan="4"><a name="exceptions" id="exceptions"></a><a href="#exceptions-note">exceptions</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><td><a name="raise-exc" id="raise-exc"></a><a href="#raise-exc-note">raise exception</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>{$mode delphi}<br /><br />
raise Exception.Create('bad int: ' + IntToStr(7));</td>
<td></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">--</span> raises exception with condition raise_exception:</span><br />
raise exception 'bad int: %', i;<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">--</span> also possible to use predefined condition:</span><br />
raise data_exception using message = 'bam!</td>
</tr><tr><td><a name="re-raise-exc" id="re-raise-exc"></a><a href="#re-raise-exc-note">re-raise exception</a></td>
<td>{$mode delphi}<br /><br />
try<br /><span style="white-space: pre-wrap;">  </span>risky();<br />
except on E: Exception do begin<br /><span style="white-space: pre-wrap;">  </span>WriteLn('risky failed');<br /><span style="white-space: pre-wrap;">  </span>raise;<br />
end;</td>
<td></td>
<td>begin<br /><span style="white-space: pre-wrap;">  </span>perform risky();<br />
exception when others then<br /><span style="white-space: pre-wrap;">  </span>raise notice 'risky() failed.';<br /><span style="white-space: pre-wrap;">  </span>raise;<br />
end;</td>
</tr><tr><td><a name="def-exc" id="def-exc"></a><a href="#def-exc-note">define exception</a></td>
<td>{$mode delphi}<br /><br />
type Err42 = class(Exception);</td>
<td></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">--</span> code string must be five digits or uppercase letters:</span><br />
begin<br /><span style="white-space: pre-wrap;">  </span>raise 'User defined error 42' using errcode = 'ERR42';<br />
exception when sqlstate 'ERR42' then<br /><span style="white-space: pre-wrap;">  </span>raise notice 'caught ERR42';<br />
end;</td>
</tr><tr><td><a name="handle-any-exc" id="handle-any-exc"></a><a href="#handle-any-exc-note">handle any exception</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>{$mode delphi}<br /><br />
try<br /><span style="white-space: pre-wrap;">  </span>raise Exception.Create('bad int: ' + IntToStr(7));<br />
except<br /><span style="white-space: pre-wrap;">  </span>on E: Exception do WriteLn(E.Message);</td>
<td></td>
<td>begin<br /><span style="white-space: pre-wrap;">  </span>raise exception 'bad int: %', i;<br />
exception when others then<br /><span style="white-space: pre-wrap;">  </span>raise notice 'caught bad int';<br />
end;</td>
</tr><tr><td><a name="handle-exc-by-type" id="handle-exc-by-type"></a><a href="#handle-exc-by-type-note">handle exception by type</a></td>
<td>{$mode delphi}<br /><br />
try<br /><span style="white-space: pre-wrap;">  </span>raise Err42.Create('bad int: ' + IntToStr(7));<br />
except<br /><span style="white-space: pre-wrap;">  </span>on E: Err42 do WriteLn(E.Message);</td>
<td></td>
<td>begin<br /><span style="white-space: pre-wrap;">  </span>n := 1 / 0;<br />
exception when division_by_zero then<br /><span style="white-space: pre-wrap;">  </span>raise notice 'ignoring div by zero';<br />
end;</td>
</tr><tr><td><a name="multiple-exc-handlers" id="multiple-exc-handlers"></a><a href="#multiple-exc-handlers-note">multiple exception handlers</a></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>finally</td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="4"><a name="file-handles" id="file-handles"></a><a href="#file-handles-note">file handles</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><td><a name="read-line-stdin" id="read-line-stdin"></a><a href="#read-line-stdin-note">read line from stdin</a></td>
<td></td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="write-line-stdout" id="write-line-stdout"></a><a href="#write-line-stdout-note">write line to stdout</a></td>
<td></td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="write-line-stderr" id="write-line-stderr"></a><a href="#write-line-stderr-note">write line to stderr</a></td>
<td></td>
<td></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">--</span> stderr stream goes to both client and server log.<br /><span style="white-space: pre-wrap;">--</span><br /><span style="white-space: pre-wrap;">--</span> levels are: debug, log, info, notice, warning<br /><span style="white-space: pre-wrap;">--</span></span><br />
raise notice 'i is %', i;</td>
</tr><tr><th colspan="4"><a name="files" id="files"></a><a href="#files-note">files</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><th colspan="4"><a name="sql" id="sql"></a><a href="#sql-note">sql</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><td>execute statement with no result</td>
<td></td>
<td></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">--</span> create table foo (s text, i int);</span><br /><br />
create or replace function insert_foo(s text, i int)<br />
returns void as $$<br />
begin<br /><span style="white-space: pre-wrap;">  </span>insert into foo values (s, i);<br />
end; )<br />
$$ language plpgsql;<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">--</span> insert, update, and delete statements raise an<br /><span style="white-space: pre-wrap;">--</span> exception if they fail</span></td>
</tr><tr><td>select one row</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>select multiple rows</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td>execute sql in string</td>
<td></td>
<td></td>
<td>create or replace function drop_table(tbl text)<br />
returns void as $$<br />
begin<br /><span style="white-space: pre-wrap;">  </span>execute 'drop table ' <span style="white-space: pre-wrap;">||</span> quote_ident(tbl);<br />
end;<br />
$$ language plpgsql;</td>
</tr><tr><td>functions to prevent sql injection</td>
<td></td>
<td></td>
<td>quote_literal<br />
quote_nullable<br />
quote_ident</td>
</tr><tr><th colspan="4"><a name="directories" id="directories"></a><a href="#directories-note">directories</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><th colspan="4"><a name="processes-environment" id="processes-environment"></a><a href="#processes-environment-note">processes and environment</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><th colspan="4"><a name="libraries-namespaces" id="libraries-namespaces"></a><a href="#libraries-namespaces-note">libraries and namespaces</a></th>
</tr><tr><th></th>
<th><a href="#pascal">pascal</a></th>
<th><a href="#ada">ada</a></th>
<th><a href="#plpgsql">plpgsql</a></th>
</tr><tr><th></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">________________________________________________________</span></span></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">________________________________________________________</span></span></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">________________________________________________________</span></span></th>
</tr></table><p><a name="general-note" id="general-note"></a></p>
<h1 id="toc0"><span><a href="#top">General Notes</a></span></h1>
<p><a name="version-used-note" id="version-used-note"></a></p>
<h2 id="toc1"><span><a href="#version-used">version used</a></span></h2>
<p>The version used in this reference sheet.</p>
<p><a name="show-version-note" id="show-version-note"></a></p>
<h2 id="toc2"><span><a href="#show-version">show version</a></span></h2>
<p>How to get the version.</p>
<p><a name="grammar-invocation-note" id="grammar-invocation-note"></a></p>
<h1 id="toc3"><span><a href="#grammar-invocation">Grammar and Invocation</a></span></h1>
<p><a name="hello-world-note" id="hello-world-note"></a></p>
<h2 id="toc4"><span><a href="#hello-world">hello word</a></span></h2>
<p>A "Hello, World!" example.</p>
<p><a name="file-suffixes-note" id="file-suffixes-note"></a></p>
<h2 id="toc5"><span><a href="#file-suffixes">file suffixes</a></span></h2>
<p><a name="eol-comment-note" id="eol-comment-note"></a></p>
<h2 id="toc6"><span><a href="#eol-comment">end-of-line comment</a></span></h2>
<p>The syntax for a comment which ends at the end of the line.</p>
<p><strong>pascal:</strong></p>
<p>The <span style="white-space: pre-wrap;">//</span> style comment is supported by Borland compilers and Free Pascal.</p>
<p><a name="multiple-line-comment-note" id="multiple-line-comment-note"></a></p>
<h2 id="toc7"><span><a href="#multiple-line-comment">multiple line comment</a></span></h2>
<p>The syntax for a comment which can span multiple lines.</p>
<p><a name="variables-expressions-note" id="variables-expressions-note"></a></p>
<h1 id="toc8"><span><a href="#variables-expressions">Variables and Expressions</a></span></h1>
<p><a name="case-sensitive-note" id="case-sensitive-note"></a></p>
<h2 id="toc9"><span><a href="#case-sensitive">case sensitive</a></span></h2>
<p>Are identifiers case sensitive?</p>
<p><strong>pascal:</strong></p>
<p><a href="http://www.freepascal.org/docs-html/ref/refse3.html">Free Pascal Reserved Words and Modifiers</a></p>
<p>A word in Pascal is reserved if it cannot be redefined by the programmer. The names for the built-in types: Integer, Boolean, etc. are not reserved. They are defined in the System unit and can be redefined by the programmer.</p>
<p>Although Pascal is case insensitive, reserved words and modifiers are customarily written in lower case. Other identifiers are customarily written in upper camel case, also known as Pascal case.</p>
<p><a name="declarations-note" id="declarations-note"></a></p>
<h2 id="toc10"><span><a href="#declarations">declare constant, type, variable</a></span></h2>
<p>How to declare a constant, type, or variable.</p>
<p><a name="assignment-note" id="assignment-note"></a></p>
<h2 id="toc11"><span><a href="#assignment">assignment</a></span></h2>
<p>The syntax for assigning a value to a variable.</p>
<p><a name="pointer-declaration-note" id="pointer-declaration-note"></a></p>
<h2 id="toc12"><span><a href="#pointer-declaration">pointer declaration</a></span></h2>
<p>How to declare a pointer.</p>
<p><a name="arithmetic-logic-note" id="arithmetic-logic-note"></a></p>
<h1 id="toc13"><span><a href="#arithmetic-logic">Arithmetic and Logic</a></span></h1>
<p><a name="boolean-type-note" id="boolean-type-note"></a></p>
<h2 id="toc14"><span><a href="#boolean-type">boolean type</a></span></h2>
<p>The boolean type.</p>
<p><a name="true-false-note" id="true-false-note"></a></p>
<h2 id="toc15"><span><a href="#true-false">true and false</a></span></h2>
<p>The literals for true and false.</p>
<p><a name="falsehoods-note" id="falsehoods-note"></a></p>
<h2 id="toc16"><span><a href="#falsehoods">falsehoods</a></span></h2>
<p>Values which evaluate as false in a boolean context.</p>
<p><a name="logical-op-note" id="logical-op-note"></a></p>
<h2 id="toc17"><span><a href="#logical-op">logical operators</a></span></h2>
<p>The logical operators for conjunction, disjunction, exclusive or, and negation.</p>
<p><a name="short-circuit-op-note" id="short-circuit-op-note"></a></p>
<h2 id="toc18"><span><a href="#short-circuit-op">short circuit operators</a></span></h2>
<p>Short circuit versions of the logical operators.</p>
<p>The short circuit version of <em>and</em> will not evaluate its second argument if the first is false. The short circuit version of <em>or</em> will not evaluate its second argument if the first is true.</p>
<p><a name="int-type-note" id="int-type-note"></a></p>
<h2 id="toc19"><span><a href="#int-type">integer type</a></span></h2>
<p><a name="float-type-note" id="float-type-note"></a></p>
<h2 id="toc20"><span><a href="#float-type">float type</a></span></h2>
<p><a name="fixed-type-note" id="fixed-type-note"></a></p>
<h2 id="toc21"><span><a href="#fixed-type">fixed type</a></span></h2>
<p><a name="relational-op-note" id="relational-op-note"></a></p>
<h2 id="toc22"><span><a href="#relational-op">relational operators</a></span></h2>
<p><a name="min-max-note" id="min-max-note"></a></p>
<h2 id="toc23"><span><a href="#min-max">min and max</a></span></h2>
<p><a name="arith-op-note" id="arith-op-note"></a></p>
<h2 id="toc24"><span><a href="#arith-op">arithmetic operators</a></span></h2>
<p><a name="int-div-note" id="int-div-note"></a></p>
<h2 id="toc25"><span><a href="#int-div">integer division</a></span></h2>
<p><a name="int-div-zero-note" id="int-div-zero-note"></a></p>
<h2 id="toc26"><span><a href="#int-div-zero">integer division by zero</a></span></h2>
<p><a name="float-div-note" id="float-div-note"></a></p>
<h2 id="toc27"><span><a href="#float-div">float division</a></span></h2>
<p><a name="float-div-zero-note" id="float-div-zero-note"></a></p>
<h2 id="toc28"><span><a href="#float-div-zero">float division by zero</a></span></h2>
<p><a name="power-note" id="power-note"></a></p>
<h2 id="toc29"><span><a href="#power">power</a></span></h2>
<p><a name="sqrt-note" id="sqrt-note"></a></p>
<h2 id="toc30"><span><a href="#sqrt">sqrt</a></span></h2>
<p><a name="sqrt-negative-one-note" id="sqrt-negative-one-note"></a></p>
<h2 id="toc31"><span><a href="#sqrt-negative-one">sqrt -1</a></span></h2>
<p><a name="transcendental-func-note" id="transcendental-func-note"></a></p>
<h2 id="toc32"><span><a href="#transcendental-func">transcendental functions</a></span></h2>
<p><a name="float-truncation-note" id="float-truncation-note"></a></p>
<h2 id="toc33"><span><a href="#float-truncation">float truncation</a></span></h2>
<p><a name="absolute-val-note" id="absolute-val-note"></a></p>
<h2 id="toc34"><span><a href="#absolute-val">absolute value</a></span></h2>
<p><a name="int-overflow-note" id="int-overflow-note"></a></p>
<h2 id="toc35"><span><a href="#int-overflow">integer overflow</a></span></h2>
<p><a name="float-overflow-note" id="float-overflow-note"></a></p>
<h2 id="toc36"><span><a href="#float-overflow">float overflow</a></span></h2>
<p><a name="random-num-note" id="random-num-note"></a></p>
<h2 id="toc37"><span><a href="#random-num">random number</a></span></h2>
<p><a name="bit-op-note" id="bit-op-note"></a></p>
<h2 id="toc38"><span><a href="#bit-op">bit operators</a></span></h2>
<p><a name="strings-note" id="strings-note"></a></p>
<h1 id="toc39"><span><a href="#strings">Strings</a></span></h1>
<p><a name="string-literal" id="string-literal"></a></p>
<h2 id="toc40"><span>string literal</span></h2>
<p><a name="string-concatenate" id="string-concatenate"></a></p>
<h2 id="toc41"><span>string concatenate</span></h2>
<p><a name="regexes-note" id="regexes-note"></a></p>
<h1 id="toc42"><span><a href="#regexes">Regular Expressions</a></span></h1>
<p><a name="dates-time-note" id="dates-time-note"></a></p>
<h1 id="toc43"><span><a href="#dates-time">Dates and Time</a></span></h1>
<p><a name="arrays-note" id="arrays-note"></a></p>
<h1 id="toc44"><span><a href="#arrays">Arrays</a></span></h1>
<p><a name="user-defined-types-note" id="user-defined-types-note"></a></p>
<h1 id="toc45"><span><a href="#user-defined-types">User-Defined Types</a></span></h1>
<p><a name="functions-note" id="functions-note"></a></p>
<h1 id="toc46"><span><a href="#functions">Functions</a></span></h1>
<p><a name="def-func-note" id="def-func-note"></a></p>
<h2 id="toc47"><span><a href="#def-func">define function</a></span></h2>
<p>How to define a function.</p>
<p><strong>postgresql:</strong></p>
<p>If "or replace" is omitted from the function definition and the function already exists, the statement fails with an error.</p>
<p>Before PostgreSQL 8.0 parameters could not be assigned names in the function signature. The following syntax which is still valid was used:</p>
<div class="code">
<pre>
<code>create or replace function foo(int, int)
returns int as $$
declare
@&lt;&amp;nbsp;&amp;nbsp;&gt;@i alias for $1;
@&lt;&amp;nbsp;&amp;nbsp;&gt;@j alias for $2;
begin
@&lt;&amp;nbsp;&amp;nbsp;&gt;@return i + j;
end;
$$ language plpgsql;</code>
</pre></div>
<p><a name="invoke-func-note" id="invoke-func-note"></a></p>
<h2 id="toc48"><span><a href="#invoke-func">invoke function</a></span></h2>
<p>How to invoke a function.</p>
<p><a name="undef-func-note" id="undef-func-note"></a></p>
<h2 id="toc49"><span><a href="#undef-func">undefine function</a></span></h2>
<p>How to undefine a function.</p>
<p><a name="no-retval-note" id="no-retval-note"></a></p>
<h2 id="toc50"><span><a href="#no-retval">no return value</a></span></h2>
<p>How to define a function with no return value. Sometimes such functions are called procedure. Such a function is not useful unless it has a side effect.</p>
<p><a name="pass-by-ref-note" id="pass-by-ref-note"></a></p>
<h2 id="toc51"><span><a href="#pass-by-ref">pass by reference</a></span></h2>
<p>How to pass a variable by reference. This permits the callee to modify the value in the variable.</p>
<p><a name="nested-func-note" id="nested-func-note"></a></p>
<h2 id="toc52"><span><a href="#nested-func">nested function</a></span></h2>
<p>How to define a function inside another function.</p>
<p><strong>plpgsql:</strong></p>
<p>Nested functions are a feature of Oracle's PL/SQL. A nested function has access to the local variables of the containing function; it is not visible or callable from outside of the containing function.</p>
<p><a name="overloaded-func-note" id="overloaded-func-note"></a></p>
<h2 id="toc53"><span><a href="#overloaded-func">overloaded function</a></span></h2>
<p>How to define multiple versions of a function, with the correct version chosen by the type of the arguments used at invocation.</p>
<p><a name="forward-decl-note" id="forward-decl-note"></a></p>
<h2 id="toc54"><span><a href="#forward-decl">forward declaration</a></span></h2>
<p>How to declare a function before it is defined.</p>
<p><a name="execution-control-note" id="execution-control-note"></a></p>
<h1 id="toc55"><span><a href="#execution-control">Execution Control</a></span></h1>
<p><a name="if-note" id="if-note"></a></p>
<h2 id="toc56"><span><a href="#if">if</a></span></h2>
<p>The syntax for an if statement.</p>
<p><a name="while-note" id="while-note"></a></p>
<h2 id="toc57"><span><a href="#while">while</a></span></h2>
<p>The syntax for a while statement.</p>
<p><a name="for-note" id="for-note"></a></p>
<h2 id="toc58"><span><a href="#for">for</a></span></h2>
<p>The syntax for a for loop.</p>
<p><a name="break-continue-note" id="break-continue-note"></a></p>
<h2 id="toc59"><span><a href="#break-continue">break and continue</a></span></h2>
<p>How to break from a loop; how to jump to the next iteration of a loop.</p>
<p><a name="exceptions-note" id="exceptions-note"></a></p>
<h1 id="toc60"><span><a href="#exceptions">Exceptions</a></span></h1>
<p><a name="raise-exc-note" id="raise-exc-note"></a></p>
<h2 id="toc61"><span><a href="#raise-exc">raise exception</a></span></h2>
<p>How to raise an exception.</p>
<p><strong>postgresql:</strong></p>
<p>The raise statement can also be used to write info and warning messages. See <a href="#write-line-stderr">write line to stderr</a>.</p>
<p><a name="re-raise-exc-note" id="re-raise-exc-note"></a></p>
<h2 id="toc62"><span><a href="#re-raise-exc">re-raise exception</a></span></h2>
<p>How to re-raise a caught exception.</p>
<p><strong>postgresql:</strong></p>
<p>PostgreSQL exceptions do not have a stack trace or preserve the line number at which the error originated, so re-raising an exception just preserves the exception type and message.</p>
<p><a name="def-exc-note" id="def-exc-note"></a></p>
<h2 id="toc63"><span><a href="#def-exc">define exception</a></span></h2>
<p>How to define a new exception type.</p>
<p><strong>postgresql:</strong></p>
<p>Any 5 character string of digits or uppercase letters may be used as an error code. Many error codes are already in use:</p>
<p><a href="http://www.postgresql.org/docs/9.1/static/errcodes-appendix.html">PostgreSQL Error Codes</a></p>
<p><a name="handle-any-exc-note" id="handle-any-exc-note"></a></p>
<h2 id="toc64"><span><a href="#handle-any-exc">handle any exception</a></span></h2>
<p>How to handle any exception.</p>
<p><a name="handle-exc-by-type-note" id="handle-exc-by-type-note"></a></p>
<h2 id="toc65"><span><a href="#handle-exc-by-type">handle exception by type</a></span></h2>
<p>How to handle exceptions of a specific type.</p>
<p><a name="multiple-exc-handlers-note" id="multiple-exc-handlers-note"></a></p>
<h2 id="toc66"><span><a href="#multiple-exc-handlers">multiple exception handlers</a></span></h2>
<p><a name="file-handles-note" id="file-handles-note"></a></p>
<h1 id="toc67"><span><a href="#file-handles">File Handles</a></span></h1>
<p><a name="read-line-stdin-note" id="read-line-stdin-note"></a></p>
<h2 id="toc68"><span><a href="#read-line-stdin">read line from stdin</a></span></h2>
<p>How to read a line from standard input.</p>
<p><strong>plpgsql:</strong></p>
<p>In a SQL session the stream on which the server receives SQL commands from the client can be regarded as the standard input. Furthermore the COPY command provides a mechanism for providing unquoted data on the input stream for insertion into a table. PL/pgSQL code does not have access to this stream, however; a COPY command cannot be run from within PL/pgSQL. Note that some PL/pgSQL code runs as triggers in which case no such stream exists.</p>
<p><a name="write-line-stdout-note" id="write-line-stdout-note"></a></p>
<h2 id="toc69"><span><a href="#write-line-stdout">write line stdout</a></span></h2>
<p>How to write a line to stdout.</p>
<p><strong>plpgsql:</strong></p>
<p>In an interactive SQL session the server writes the results of SQL select statements to a stream which can be regarded as standard out. PL/pgSQL code cannot write to this stream, however. The only thing PL/pgSQL code can do with selected data is read it into local variables.</p>
<p><a name="write-line-stderr-note" id="write-line-stderr-note"></a></p>
<h2 id="toc70"><span><a href="#write-line-stderr">write line stderr</a></span></h2>
<p>How to write a line to stderr.</p>
<p><strong>plpgsql:</strong></p>
<p>The RAISE statement is used to write to stderr. Each message must be assigned one of five log levels: debug, log, info, notice, warning. The message can be reported to the client, written to the server log, or both depending upon how the server is configured.</p>
<p><a name="files-note" id="files-note"></a></p>
<h1 id="toc71"><span><a href="#files">Files</a></span></h1>
<p><a name="sql-note" id="sql-note"></a></p>
<h1 id="toc72"><span><a href="#sql">SQL</a></span></h1>
<p><a name="directories-note" id="directories-note"></a></p>
<h1 id="toc73"><span><a href="#directories">Directories</a></span></h1>
<p><a name="processes-environment-note" id="processes-environment-note"></a></p>
<h1 id="toc74"><span><a href="#processes-environment">Processes and Environment</a></span></h1>
<p><a name="libraries-namespaces-note" id="libraries-namespaces-note"></a></p>
<h1 id="toc75"><span><a href="#libraries-namespaces">Libraries and Namespaces</a></span></h1>
<p><a name="pascal" id="pascal"></a></p>
<h1 id="toc76"><span><a href="#top">Pascal</a></span></h1>
<p><a href="http://www.freepascal.org/docs-html/ref/ref.html">Free Pascal: Reference Guide</a><br /><a href="http://www.freepascal.org/docs-html/rtl/index.html">Free Pascal: Run-Time Language Reference</a></p>
<p><a href="http://www.standardpascal.org/The_Programming_Language_Pascal_1973.pdf">The Programming Language Pascal</a> Wirth 1973<br /><a href="http://www.standardpascal.org/iso7185.html">ISO 7185</a> 1983,1990<br /><a href="http://www.cs.virginia.edu/~evans/cs655-S00/readings/bwk-on-pascal.html">Why Pascal is Not My Favorite Language</a> Kernighan 1981<br /><a href="http://pascal-central.com/ppl/chapter3.html">Summary of ISO 7185 (1983) and ISO 10206 (1991)</a></p>
<p><a name="ada" id="ada"></a></p>
<h1 id="toc77"><span><a href="#top">Ada</a></span></h1>
<p><a href="http://www.infres.enst.fr/~pautet/Ada95/a95list.htm">Ada Tutorial</a><br /><a href="http://archive.adaic.com/standards/83rat/html/ratl-TOC.html">Rationale for the Design of the Ada Programming Language</a> 1983<br /><a href="http://archive.adaic.com/standards/83lrm/html/Welcome.html">Ada 83 Reference Manual</a><br /><a href="http://www.adahome.com/rm95/">Ada 95 Reference Manual</a><br /><a href="http://www.adaic.org/standards/05rm/RM.pdf">Ada 2005 Reference Manual (pdf)</a><br /><a href="http://gcc.gnu.org/onlinedocs/gcc-4.1.2/gnat_rm/">GNAT 4.1.2 Reference Manual</a><br /><a href="http://www.cs.fit.edu/~ryan/ada/ada-hist.html">History of the Ada Programming Language</a></p>
<p><a name="plpgsql" id="plpgsql"></a></p>
<h1 id="toc78"><span><a href="#top">PL/SQL</a></span></h1>
<p><a href="http://download.oracle.com/docs/cd/B28359_01/appdev.111/b28370/toc.htm">Oracle 11g PL/SQL Language Reference</a><br /><a href="http://download.oracle.com/docs/cd/B28359_01/appdev.111/b28419/toc.htm">Oracle 11g PL/SQL Packages and Types Reference</a><br /><a href="http://www.postgresql.org/docs/9.1/interactive/plpgsql.html">PostgreSQL 9.1 Documention: PL/pgSQL</a><br /><a href="http://www.postgresql.org/docs/9.1/interactive/plpgsql-porting.html">Porting from PL/SQL to PL/pgSQL</a></p>

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
