<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html lang="en" xml:lang="en" xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="content-type" content="text/html;charset=UTF-8"/>
<link rel="icon" type="image/gif" href="/favicon.gif"/>
<link rel="apple-touch-icon" sizes="120x120" href="touch-icon-iphone-retina.png" />
<link rel="apple-touch-icon" sizes="152x152" href="touch-icon-ipad-retina.png" />
<title>Languages in the Key of C: C, Go - Hyperpolyglot</title>
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
                            Languages in the Key of C: C, Go
                        </div>
<div id="page-content">
                        

<p><a name="top" id="top"></a><em>a side-by-side reference sheet</em></p>
<p><a href="#grammar-invocation">grammar and invocation</a> | <a href="#variables-expressions">variables and expressions</a> | <a href="#arithmetic-logic">arithmetic and logic</a> | <a href="#strings">strings</a> | <a href="#regexes">regexes</a> | <a href="#dates-time">dates and time</a> | <a href="#arrays">arrays</a> | <a href="#dictionaries">dictionaries</a> | <a href="#functions">functions</a> | <a href="#execution-control">execution control</a> | <a href="#concurrency">concurrency</a> | <a href="#file-handles">file handles</a> | <a href="#files">files</a> | <a href="#file-fmt">file formats</a> | <a href="#directories">directories</a> | <a href="#processes-environment">processes and environment</a> | <a href="#libraries-namespaces">libraries and namespaces</a> | <a href="#user-defined-types">user-defined types</a> | <a href="#macros">macros</a> | <a href="#net-web">net and web</a> | <a href="#unit-tests">unit tests</a> | <a href="#debugging-profiling">debugging and profiling</a><br /><br /><a href="#multidimensional-arrays">multidimensional arrays</a> | <a href="#vectors">vectors</a> | <a href="#matrices">matrices</a></p>
<table class="wiki-content-table"><tr><th><a name="general" id="general"></a></th>
<th><a href="#c">c</a></th>
<th><a href="#go">go</a></th>
</tr><tr><td><a name="version-used" id="version-used"></a><a href="#version-used-note">version used</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>gcc 4.6 in POSIX environment</em></span></td>
<td><span style="color: gray"><em>6g version release.r56</em></span></td>
</tr><tr><td><a name="show-version" id="show-version"></a><a href="#show-version-note">show version</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>$ gcc <span style="white-space: pre-wrap;">--</span>version</td>
<td>$ 6g -V</td>
</tr><tr><td><a name="implicit-prologue" id="implicit-prologue"></a><a href="#implicit-prologue-note">implicit prologue</a></td>
<td>#include &lt;errno.h&gt;<br />
#include &lt;stdlib.h&gt;<br />
#include &lt;stdio.h&gt;<br />
#include &lt;string.h&gt;<br />
#include &lt;time.h&gt;</td>
<td></td>
</tr><tr><th colspan="3"><a name="grammar-invocation" id="grammar-invocation"></a><a href="#grammar-invocation-note">grammar and invocation</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a name="hello-world" id="hello-world"></a><a href="#hello-world-note">hello word</a></td>
<td>$ cat hello.c<br />
#include &lt;stdio.h&gt;<br /><br />
int main(int argc, char <span style="white-space: pre-wrap;">**</span>argv) {<br /><span style="white-space: pre-wrap;">  </span>printf("Hello, World!\n");<br />
}<br /><br />
$ gcc hello.c<br /><br />
$ ./a.out<br />
Hello, World!</td>
<td>$ cat hello.go<br />
package main<br />
import "fmt"<br /><br />
func main() {<br /><span style="white-space: pre-wrap;">  </span>fmt.Printf("Hello, World!\n")<br />
}<br /><br />
$ go build hello.go<br /><br />
$ ./hello<br />
Hello, World!</td>
</tr><tr><td><a name="file-suffixes" id="file-suffixes"></a><a href="#file-suffixes-note">file suffixes</a><br /><span style="color: gray"><em>source, header, object file</em></span></td>
<td>.c .h .o</td>
<td></td>
</tr><tr><td><a name="block-delimiters" id="block-delimiters"></a><a href="#block-delimiters-note">block delimiters</a></td>
<td>{ <span style="color: gray"><em>…</em></span> }</td>
<td>{ <span style="color: gray"><em>…</em></span> }</td>
</tr><tr><td><a name="stmt-terminator" id="stmt-terminator"></a><a href="#stmt-terminator-note">statement terminator</a></td>
<td>;</td>
<td>; <span style="color: gray"><em>or sometimes newline</em></span><br /><br /><span style="color: gray"><em>a new line terminates a statement when the last token on the line is<br /><span style="white-space: pre-wrap;">  </span>(1) an identifier,<br /><span style="white-space: pre-wrap;">  </span>(2) a numeric, character, or string literal,<br /><span style="white-space: pre-wrap;">  </span>(3) one of the keywords</em> break, continue,<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>fallthrough, <em>or</em> return, <em><br /><span style="white-space: pre-wrap;">  </span>(4) one of</em> ++, <span style="white-space: pre-wrap;">--</span>, ), ], <em>or</em> }</span></td>
</tr><tr><td><a name="eol-comment" id="eol-comment"></a><a href="#eol-comment-note">end-of-line comment</a></td>
<td><span style="white-space: pre-wrap;">//</span> <span style="color: gray"><em>comment</em></span></td>
<td><span style="white-space: pre-wrap;">//</span> <span style="color: gray"><em>comment</em></span></td>
</tr><tr><td><a name="multiple-line-comment" id="multiple-line-comment"></a><a href="#multiple-line-comment-note">multiple line comment</a></td>
<td>/* <span style="color: gray"><em>comment line</em></span><br /><span style="color: gray"><em>another line</em></span> */</td>
<td>/* <span style="color: gray"><em>comment line</em></span><br /><span style="color: gray"><em>another line</em></span> */</td>
</tr><tr><th colspan="3"><a name="variables-expressions" id="variables-expressions"></a><a href="#variables-expressions-note">variables and expressions</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a name="var-types" id="var-types"></a><a href="#var-types-note">variable types</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="var-declaration" id="var-declaration"></a><a href="#var-declaration-note">variable declaration</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="case-sensitive" id="case-sensitive"></a><a href="#case-sensitive-note">are identifiers case sensitive</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="primitive-type-stack" id="primitive-type-stack"></a><a href="#primitive-type-stack-note">declare primitive type on stack</a></td>
<td>int i;<br />
int j = 3;</td>
<td>var i int<br />
j := 3</td>
</tr><tr><td><a name="allocate" id="allocate"></a><a href="#allocate-note">allocate primitive type on heap</a></td>
<td>int *ip = malloc(sizeof(int));<br />
*ip = 7;</td>
<td>ip := new(int)<br />
*ip = 7</td>
</tr><tr><td><a name="free" id="free"></a><a href="#free-note">free primitive type on heap</a></td>
<td>free(ip);</td>
<td><span style="color: gray"><em>none; language provides garbage collection</em></span></td>
</tr><tr><td><a name="global" id="global"></a><a href="#global-note">global primitive type</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="unitialized-val" id="unitialized-val"></a><a href="#unitialized-val-note">value of uninitialized primitive types</a></td>
<td><span style="color: gray"><em>stack variables and heap variables allocated with</em> malloc <em>have indeterminate values. Global and static variables and heap variables allocated with</em> calloc <em>are zero-initialized.</em></span></td>
<td><span style="color: gray"><em>every type has a zero value. For numeric types it is zero and for strings it is the empty string.</em></span></td>
</tr><tr><td><a name="const" id="const"></a><a href="#const-note">constant</a></td>
<td><span style="color: gray">/* usually preprocessor is used: */</span><br />
#define PI 3.14</td>
<td>const Pi = 3.14</td>
</tr><tr><td><a name="assignment" id="assignment"></a><a href="#assignment-note">assignment</a></td>
<td>i = 3;</td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> defines variable of appropriate type:</span><br />
i := 3<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span>variable must already be declared:</span><br />
i = 3</td>
</tr><tr><td><a name="parallel-assignment" id="parallel-assignment"></a><a href="#parallel-assignment-note">parallel assignment</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span>define variables of appropriate type:</span><br />
m, n := 3, 7<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> x and y must already be declared:</span><br />
x, y = 2, 8</td>
</tr><tr><td><a name="swap" id="swap"></a><a href="#swap-note">swap</a></td>
<td>int x = 1, y = 2, tmp;<br /><br />
tmp = x;<br />
x = y;<br />
y = tmp;</td>
<td>x, y = y, x</td>
</tr><tr><td><a name="compound-assignment-op" id="compound-assignment-op"></a><a href="#compound-assignment-op-note">compound assignment operators</a></td>
<td><span style="color: gray"><em>arithmetic:</em></span><br />
+= -= *= /= %=<br /><br /><span style="color: gray"><em>bit:</em></span><br /><span style="white-space: pre-wrap;">&lt;&lt;= &gt;&gt;= &amp;= |= ^=</span></td>
<td><span style="color: gray"><em>arithmetic:</em></span><br />
+= -= *= /= %=<br /><br /><span style="color: gray"><em>bit:</em></span><br /><span style="white-space: pre-wrap;">&lt;&lt;= &gt;&gt;= &amp;= |= ^=</span></td>
</tr><tr><td><a name="incr-decr" id="incr-decr"></a><a href="#incr-decr-note">increment and decrement operators</a></td>
<td><span style="color: gray"><em>premodifiers:</em></span><br />
++i <span style="white-space: pre-wrap;">--</span>i<br /><br /><span style="color: gray"><em>postmodifiers:</em></span><br />
i++ i<span style="white-space: pre-wrap;">--</span></td>
<td><span style="color: gray"><em>cannot be used as expressions:</em></span><br />
i++ i<span style="white-space: pre-wrap;">--</span></td>
</tr><tr><td><a name="null" id="null"></a><a href="#null-note">null</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>NULL</td>
<td>nil</td>
</tr><tr><td><a name="coalesce" id="coalesce"></a><a href="#coalesce-note">coalesce</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>char *s1 = s2 <span style="white-space: pre-wrap;">||</span> "was null";</td>
<td></td>
</tr><tr><td><a name="undefined-var-access" id="undefined-var-access"></a><a href="#undefined-var-access-note">undefined variable access</a></td>
<td></td>
<td></td>
</tr><tr><th colspan="3"><a name="arithmetic-logic" id="arithmetic-logic"></a><a href="#arithmetic-logic-note">arithmetic and logic</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a name="boolean-type" id="boolean-type"></a><a href="#boolean-type-note">boolean type</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>int</td>
<td>bool</td>
</tr><tr><td><a name="true-false" id="true-false"></a><a href="#true-false-note">true and false</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>1 0</td>
<td>true false</td>
</tr><tr><td><a name="falsehoods" id="falsehoods"></a><a href="#falsehoods-note">falsehoods</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>0 0.0 NULL</td>
<td>false</td>
</tr><tr><td><a name="logical-op" id="logical-op"></a><a href="#logical-op-note">logical operators</a></td>
<td>&amp;&amp; <span style="white-space: pre-wrap;">||</span> !</td>
<td>&amp;&amp; <span style="white-space: pre-wrap;">||</span> !</td>
</tr><tr><td><a name="relational-op" id="relational-op"></a><a href="#relational-op-note">relational operators</a></td>
<td>== != &lt; &gt; &lt;= &gt;=</td>
<td>== != &lt; &gt; &lt;= &gt;=</td>
</tr><tr><td><a name="int-type" id="int-type"></a><a href="#int-type-note">integer type</a></td>
<td>signed char <span style="color: gray"><em>1+ byte</em></span><br />
short int <span style="color: gray"><em>2+ bytes</em></span><br />
int <span style="color: gray"><em>2+ bytes</em></span><br />
long int <span style="color: gray"><em>4+ bytes</em></span><br />
long long int <span style="color: gray"><em>4+ bytes</em></span></td>
<td>int<br />
int8<br />
int16<br />
int32<br />
int64</td>
</tr><tr><td><a name="unsigned-type" id="unsigned-type"></a><a href="#unsigned-type-note">unsigned type</a></td>
<td>unsigned char: 8+<br />
unsigned short int <span style="color: gray"><em>2 bytes+</em></span><br />
unsigned int <span style="color: gray"><em>2 bytes+</em></span><br />
unsigned long int <span style="color: gray"><em>4+ bytes</em></span><br />
unsigned long long int <span style="color: gray"><em>4+ bytes</em></span></td>
<td>uint<br />
uint8 (byte)<br />
uint16<br />
uint32<br />
uint64</td>
</tr><tr><td><a name="float-type" id="float-type"></a><a href="#float-type-note">float type</a></td>
<td>float<br />
double<br />
long double</td>
<td>float32<br />
float64</td>
</tr><tr><td><a name="arith-op" id="arith-op"></a><a href="#arith-op-note">arithmetic operators</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="white-space: pre-wrap;">+</span> - * / %</td>
<td><span style="white-space: pre-wrap;">+</span> - * / %</td>
</tr><tr><td><a name="int-div" id="int-div"></a><a href="#int-div-note">integer division</a></td>
<td>3 / 7</td>
<td>3 / 7</td>
</tr><tr><td><a name="int-div-zero" id="int-div-zero"></a><a href="#int-div-zero-note">integer division by zero</a></td>
<td><span style="color: gray"><em>system dependent; process often sent a</em> SIGFPE <em>signal</em></span></td>
<td></td>
</tr><tr><td><a name="float-div" id="float-div"></a><a href="#float-div-note">float division</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>3 / (float)7</td>
<td>3 / float32(7)</td>
</tr><tr><td><a name="float-div-zero" id="float-div-zero"></a><a href="#float-div-zero-note">float division by zero</a></td>
<td>inf</td>
<td></td>
</tr><tr><td><a name="power" id="power"></a><a href="#power-note">power</a></td>
<td>#include &lt;math.h&gt;<br /><br />
pow(2.0, 3.0)</td>
<td>import "math"<br /><br />
math.Pow(2.0, 3.0)</td>
</tr><tr><td><a name="sqrt" id="sqrt"></a><a href="#sqrt-note">sqrt</a></td>
<td>#include &lt;math.h&gt;<br /><br />
sqrt(2);</td>
<td>include "math"<br /><br />
math.Sqrt(2)</td>
</tr><tr><td><a name="sqrt-negative-one" id="sqrt-negative-one"></a><a href="#sqrt-negative-one-note">sqrt -1</a></td>
<td>#include &lt;math.h&gt;<br /><br /><span style="color: gray">/* nan */</span><br />
double x = sqrt(-2.0);</td>
<td>import "math"<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> NaN</span><br />
x := math.Sqrt(-2.0)<br /><br />
import "math/cmplx"<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> (0+1.41421356i)</span><br />
z := cmplx.Sqrt(-2.0)</td>
</tr><tr><td><a name="transcendental-func" id="transcendental-func"></a><a href="#transcendental-func-note">transcendental functions</a></td>
<td>#include &lt;math.h&gt;<br /><br />
exp log log2 log10<br />
sin cos tan<br />
asin acos atan<br />
atan2</td>
<td>include "math"<br /><br />
math.Exp math.Log math.Log2 math.Log10<br />
math.Sin math.Cos math.Tan<br />
math.Asin math.Acos math.Atan<br />
math.Atan2</td>
</tr><tr><td><a name="float-truncation" id="float-truncation"></a><a href="#float-truncation-note">float truncation</a></td>
<td>#include &lt;math.h&gt;<br /><span style="white-space: pre-wrap;"> </span><br />
double d = 3.77;<br /><span style="white-space: pre-wrap;"> </span><br />
long trunc = (long)d;<br />
long rnd = round(d);<br />
long flr = floorl(d);<br />
long cl = ceill(d);</td>
<td>include "math"<br /><br />
x = 3.77<br /><br />
trunc := int(x)<br /><span style="color: gray"><em>none</em></span><br />
flr := int(math.Floor(x))<br />
cl := int(math.Ceil(x))</td>
</tr><tr><td><a name="absolute-val" id="absolute-val"></a><a href="#absolute-val-note">absolute value</a></td>
<td>#include &lt;math.h&gt;<span style="white-space: pre-wrap;">  </span><span style="color: gray">/* fabs() */</span><br /><br />
int i = abs(-7);<br />
float x = fabs(-7.77);</td>
<td>include "math"<br /><br /><span style="color: gray"><em>none</em></span><br />
math.Abs(-7.77)</td>
</tr><tr><td><a name="complex-type" id="complex-type"></a><a href="#complex-type-note">complex type</a></td>
<td></td>
<td>complex64<br />
complex128</td>
</tr><tr><td><a name="complex-construction" id="complex-construction"></a><a href="#complex-construction-note">complex construction</a></td>
<td>#include &lt;complex.h&gt;<br /><br />
double complex z;<br />
z = 1 * I;<br />
z = 2 * I;<br />
z = 3 * I;</td>
<td></td>
</tr><tr><td><a name="complex-decomposition" id="complex-decomposition"></a><a href="#complex-decomposition-note">complex decomposition</a></td>
<td>#include &lt;complex.h&gt;<br /><br />
double x;<br />
x = creal(z);<br />
x = cimag(z);<br />
x = carg(z);</td>
<td></td>
</tr><tr><td><a name="random-num" id="random-num"></a><a href="#random-num-note">random number</a><br /><span style="color: gray"><em>uniform integer, uniform float</em></span></td>
<td><span style="color: gray">/* returns value between 0 and RAND_MAX inclusive */</span><br />
int i = rand();<br /><span style="color: gray"><em>??</em></span></td>
<td>import "math/rand"<br /><br />
i := rand.Int()<br /><span style="color: gray"><em>??</em></span></td>
</tr><tr><td><a name="random-seed" id="random-seed"></a><a href="#random-seed-note">random seed</a></td>
<td>srand(17);</td>
<td>import "math/rand"<br /><br />
rand.Seed(17)</td>
</tr><tr><td><a name="bit-op" id="bit-op"></a><a href="#bit-op-note">bit operators</a></td>
<td><span style="white-space: pre-wrap;"> &lt;&lt; &gt;&gt; &amp; | ^ ~ </span></td>
<td><span style="white-space: pre-wrap;">&lt;&lt; &gt;&gt; &amp; |</span> <span style="color: gray"><em>none</em></span> ^</td>
</tr><tr><th colspan="3"><a name="strings" id="strings"></a><a href="#strings-note">strings</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a name="str-type" id="str-type"></a><a href="#str-type-note">string type</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>char *</td>
<td>string</td>
</tr><tr><td><a name="char-type" id="char-type"></a><a href="#char-type-note">char type</a></td>
<td>char</td>
<td>rune</td>
</tr><tr><td><a name="str-literal" id="str-literal"></a><a href="#str-literal-note">string literal</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>"hello"</td>
<td>"hello"</td>
</tr><tr><td><a name="newline-in-str-literal" id="newline-in-str-literal"></a><a href="#newline-in-str-literal-note">newline in string literal</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="str-literal-esc" id="str-literal-esc"></a><a href="#str-literal-esc-note">string escapes</a></td>
<td>\a \b \f \n \r \t \v \x<span style="color: gray"><em>hh</em></span> \u<span style="color: gray"><em>hhhh</em></span> \U<span style="color: gray"><em>hhhhhhhh</em></span><br />
\" \' \? \\ \<span style="color: gray"><em>o</em></span> \<span style="color: gray"><em>oo</em></span> \<span style="color: gray"><em>ooo</em></span></td>
<td></td>
</tr><tr><td><a href="#allocate-string">allocate string</a></td>
<td>char *s = strdup("hello");</td>
<td></td>
</tr><tr><td><a href="#string-comparison">comparison</a></td>
<td>strcmp("hello", "world")</td>
<td>"hello" == "world"</td>
</tr><tr><td><a href="#string-equal">semantics of ==</a></td>
<td><span style="color: gray"><em>object identity comparison</em></span></td>
<td><span style="color: gray"><em>string comparison</em></span></td>
</tr><tr><td><a href="#string-to-number">convert string to numeric</a></td>
<td>strtoimax strtol strtoll<br />
strtoumax strtoul strtoull<br />
strtof strtod strtold</td>
<td>import "strconv"<br /><br /><span style="color: gray"><em>2nd arg is base, 3rd arg is size of integer in bits:</em></span><br />
i, _ := strconv.ParseInt("17", 10, 32)<br /><br /><span style="color: gray"><em>2nd arg is size of float in bits:</em></span><br />
x, _ := strconv.ParseFloat("3.14", 32)</td>
</tr><tr><td><a href="#number-to-string">convert numeric to string</a></td>
<td></td>
<td>import "strconv"<br /><br /><span style="color: gray"><em>3rd arg is precision after decimal point, 4th arg is size of float in bits:</em></span><br />
strconv.FormatFloat(3.14, 'f', 4, 32)<br /><br /><span style="color: gray"><em>2nd arg is base</em></span><br />
strconv.FormatInt(7, 10)</td>
</tr><tr><td><a href="#split">split</a></td>
<td></td>
<td>import "strings"<br /><br />
s := "foo bar baz"<br />
parts := strings.Split(s, " ")</td>
</tr><tr><td><a href="#join">join</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
</tr><tr><td><a href="#string-concatenate">concatenate</a></td>
<td>char *s1 = "hello";<br />
char *s2 = " world";<br />
char *s3 = (char *)calloc(strlen(s1) + strlen(s2) + 1,sizeof(char));<br />
strcpy(s3, s1);<br />
strcat(s3, s2);</td>
<td>"hello" + " world"</td>
</tr><tr><td><a href="#str-replicate">replicate</a></td>
<td></td>
<td></td>
</tr><tr><td><a href="#substring">substring</a></td>
<td>char target[3];<br />
char *source = "hello";<br />
strncpy(target, source + 2, 2);</td>
<td>"hello"[2:4]</td>
</tr><tr><td><a href="#index">index</a></td>
<td>const char *s = "hello";<br />
const char *p = strstr("hello", "ll");<br />
p ? p - s : -1;</td>
<td></td>
</tr><tr><td><a href="#sprintf">sprintf</a></td>
<td>char buf[100];<br />
snprintf(buf, 100, "%s: %d", "Spain", 7);</td>
<td></td>
</tr><tr><td><a href="#uppercase">uppercase</a></td>
<td>char *s = strdup("hello");<br />
int i;<br /><br />
for (i=0; i &lt; strlen(s); ++i) {<br /><span style="white-space: pre-wrap;">  </span>s[i] = toupper(s[i]);<br />
}</td>
<td>import "strings"<br /><br />
strings.ToUpper("hello")</td>
</tr><tr><td><a href="#lowercase">lowercase</a></td>
<td>char *s = strdup("HELLO");<br />
int i;<br /><br />
for (i=0; i &lt; strlen(s); i++) {<br /><span style="white-space: pre-wrap;">  </span>s[i] = tolower(s[i]);<br />
}</td>
<td></td>
</tr><tr><td><a href="#trim">trim</a></td>
<td></td>
<td></td>
</tr><tr><td><a href="#pad">pad on right</a></td>
<td>char buf[100];<br />
snprintf(buf, 100, "%-10s", "hello");</td>
<td></td>
</tr><tr><td><a href="#string-length">length</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>strlen("hello")</td>
<td>len("hello")</td>
</tr><tr><td><a href="#char-access">character access</a></td>
<td></td>
<td></td>
</tr><tr><td><a href="#chr-ord">chr and ord</a></td>
<td></td>
<td></td>
</tr><tr><th colspan="3"><a name="regexes" id="regexes"></a><a href="#regexes-note">regular expressions</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a name="regex-metachar" id="regex-metachar"></a><a href="#regex-metachar-note">metacharacters</a></td>
<td><span style="color: gray">/* REG_BASIC: */</span><br />
. [ ] \ * ^ $<br /><br /><span style="color: gray">/* REG_EXTENDED: */</span><br />
. [ ] \ ( ) * + ? { } | ^ $</td>
<td></td>
</tr><tr><td><a name="char-class-abbrev" id="char-class-abbrev"></a><a href="#char-class-abbrev-note">character class abbrevations</a></td>
<td><span style="color: gray">/* matches any character; does not match newline if<br /><span style="white-space: pre-wrap;">   </span>REG_NEWLINE is used: */</span><br />
.<br /><br /><span style="color: gray">/* more character classes available in pcre library */</span></td>
<td></td>
</tr><tr><td><a name="regex-anchors" id="regex-anchors"></a><a href="#regex-anchors-note">anchors</a></td>
<td><span style="color: gray">/* match beginning and end of string; match beginning and<br /><span style="white-space: pre-wrap;">   </span>end of line if REG_NEWLINE is used: */</span><br />
^ $</td>
<td></td>
</tr><tr><td><a name="regex-test" id="regex-test"></a><a href="#regex-test-note">match test</a></td>
<td>#include &lt;regex.h&gt;<br /><br />
regex_t rx;<br />
int retval;<br />
char *pat = "1999";<br />
char *s = "It's 1999";<br /><br /><span style="color: gray">/* Use REG_NOSUB if 4th arg to regexec() is NULL */</span><br />
if (retval = regcomp(&amp;rx, pat, REG_EXTENDED | REG_NOSUB)) {<br /><br /><span style="white-space: pre-wrap;">  </span>char buf[200];<br /><br /><span style="white-space: pre-wrap;">  </span>regerror(retval, &amp;rx, buf, 200);<br /><span style="white-space: pre-wrap;">  </span>fprintf(stderr, "regex error: %s\n", buf);<br />
}<br />
else {<br /><br /><span style="white-space: pre-wrap;">  </span>if (regexec(&amp;rx, "s, 0, NULL, 0) == 0) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>printf("Party!\n");<br /><span style="white-space: pre-wrap;">  </span>}<br /><br /><span style="white-space: pre-wrap;">  </span>regfree(&amp;rx);<br />
}</td>
<td></td>
</tr><tr><td><a name="case-insensitive-regex" id="case-insensitive-regex"></a><a href="#case-insensitive-regex-note">case insensitive match test</a></td>
<td>#include &lt;regex.h&gt;<br /><br />
regex_t rx;<br />
int retval;<br />
char *pat = "lorem";<br />
char *s = "Lorem";<br /><br />
if (retval = regcomp(&amp;rx, pat, REG_EXTENDED | REG_ICASE)) {<br /><br /><span style="white-space: pre-wrap;">  </span>char buf[200];<br /><br /><span style="white-space: pre-wrap;">  </span>regerror(retval, &amp;rx, buf, 200);<br /><span style="white-space: pre-wrap;">  </span>fprintf(stderr, "Regex error: %s\n", buf);<br />
}<br />
else {<br /><br /><span style="white-space: pre-wrap;">  </span>if (regexec(&amp;rx, s, 0, NULL, 0) == 0) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>printf("case insensitive match\n");<br /><span style="white-space: pre-wrap;">  </span>}<br /><br /><span style="white-space: pre-wrap;">  </span>regfree(&amp;rx);<br />
}</td>
<td></td>
</tr><tr><td><a name="regex-modifiers" id="regex-modifiers"></a><a href="#regex-modifiers-note">modifiers</a></td>
<td><span style="color: gray">/* bit flags used in 3rd arg of regcomp(): */</span><br />
REG_BASIC<br />
REG_EXTENDED<br />
REG_ICASE<br />
REG_NOSUB<br />
REG_NEWLINE</td>
<td></td>
</tr><tr><td><a name="subst" id="subst"></a><a href="#subst-note">substitution</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="group-capture" id="group-capture"></a><a href="#group-capture-note">group capture</a></td>
<td>#include &lt;regex.h&gt;<br /><br />
regex_t rx;<br />
int retval;<br /><br />
char *pat = "([0-9]{4})-([0-9]{2})-([0-9]{2})";<br />
char *s = "2010-06-03";<br /><br />
if (retval = regcomp(&amp;rx, pat, REG_EXTENDED)) {<br /><br /><span style="white-space: pre-wrap;">  </span>char buf[200];<br /><br /><span style="white-space: pre-wrap;">  </span>regerror(retval, &amp;rx, buf, 200);<br /><span style="white-space: pre-wrap;">  </span>fprintf(stderr, "Regex error: %s\n", buf);<br />
}<br />
else {<br /><br /><span style="white-space: pre-wrap;">  </span><span style="color: gray">/* first match is entire pattern */</span><br /><span style="white-space: pre-wrap;">  </span>regmatch_t matches[4];<br /><br /><span style="white-space: pre-wrap;">  </span>if (regexec(&amp;rx, s, 4, matches, 0) == 0) {<br /><br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>char yr[5];<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>regmatch_t rm = matches[1];<br /><br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: gray">/* rm_so and rm_eo contain index of start and end of<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">   </span>match; they are set to -1 if unused */</span><br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>strncpy(yr, s + rm.rm_so, rm.rm_eo - rm.rm_so);<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>yr[5] = '\0';<br /><br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>printf("year is %s\n", yr);<br /><span style="white-space: pre-wrap;">  </span>}<br /><br /><span style="white-space: pre-wrap;">  </span>regfree(&amp;rx);<br />
}</td>
<td></td>
</tr><tr><th colspan="3"><a name="dates-time" id="dates-time"></a><a href="#dates-time-note">dates and time</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a name="unix-epoch-type" id="unix-epoch-type"></a><a href="#unix-epoch-type-note">unix epoch type</a></td>
<td>time_t</td>
<td></td>
</tr><tr><td><a name="broken-down-date-time-type" id="broken-down-date-time-type"></a><a href="#broken-down-date-time-type-note">broken down type</a></td>
<td>struct tm</td>
<td>Time</td>
</tr><tr><td><a name="current-unix-epoch" id="current-unix-epoch"></a><a href="#current-unix-epoch-note">current unix epoch</a></td>
<td>time_t now;<br /><br />
if (time(&amp;now) == -1) {<br /><span style="white-space: pre-wrap;">  </span>perror("time failed");<br />
}</td>
<td>import "time"<br /><br />
t := time.Now()</td>
</tr><tr><td>current broken-down date/time</td>
<td></td>
<td></td>
</tr><tr><td><a name="date-time-to-str" id="date-time-to-str"></a><a href="#date-time-to-str-note">date and time to string</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="format-date" id="format-date"></a><a href="#format-date-note">format date</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="parse-date" id="parse-date"></a><a href="#parse-date-note">parse date</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="date-to-str" id="date-to-str"></a><a href="#date-to-str-note">convert to string</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>char *s;<br /><br /><span style="color: gray">/* ctime returns pointer to statically allocated memory */</span><br />
if ((s = ctime(&amp;now)) == NULL) {<br /><span style="white-space: pre-wrap;">  </span>fputs("ctime failed.");<br />
}</td>
<td></td>
</tr><tr><td><a name="date-subtraction" id="date-subtraction"></a><a href="#date-subtraction-note">date subtraction</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="add-duration" id="add-duration"></a><a href="#add-duration-note">add duration</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="date-parts" id="date-parts"></a><a href="#date-parts-note">date parts</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="time-parts" id="time-parts"></a><a href="#time-parts-note">time parts</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="build-date-time" id="build-date-time"></a><a href="#build-date-time-note">build broken-down date and time</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="local-tmz-determination" id="local-tmz-determination"></a><a href="#local-tmz-determination-note">how localtime is determined</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="tmz-info" id="tmz-info"></a><a href="#tmz-info-note">time zone info</a><br /><span style="color: gray"><em>name and utc offset in hours</em></span></td>
<td></td>
<td></td>
</tr><tr><td><a name="daylight-savings-test" id="daylight-savings-test"></a><a href="#daylight-savings-test-note">daylight savings test</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="nonlocal-tmz" id="nonlocal-tmz"></a><a href="#nonlocal-tmz-note">nonlocal time zone</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="microseconds" id="microseconds"></a><a href="#microseconds-note">microseconds</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="sleep" id="sleep"></a><a href="#sleep-note">sleep</a></td>
<td>#include &lt;unistd.h&gt;<br /><br /><span style="color: gray">/* seconds */</span><br />
int retval = sleep(10);<br />
if (retval != 0) {<br /><span style="white-space: pre-wrap;">  </span>printf("interupted with %d s to go", retval);<br />
}<br /><br /><span style="color: gray">/* microseconds */</span><br />
if (usleep(10000)) {<br /><span style="white-space: pre-wrap;">  </span>perror("usleep failed");<br />
}</td>
<td></td>
</tr><tr><td><a name="timeout" id="timeout"></a><a href="#timeout-note">timeout</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="cpu-usage" id="cpu-usage"></a><a href="#cpu-usage-note">cpu usage</a></td>
<td>#include &lt;sys/times.h&gt;<br />
#include &lt;unistd.h&gt;<span style="white-space: pre-wrap;">  </span><span style="color: gray">/* sysconf */</span><br /><br />
struct tms start, end;<br /><br />
double ticks_per_s = (double)sysconf(_SC_CLK_TCK);<br /><br />
clock_t start_wall = times(&amp;start);<br /><br />
if (start_wall &lt; 0) {<br /><span style="white-space: pre-wrap;">  </span>fputs("times failed", stderr);<br /><span style="white-space: pre-wrap;">  </span>return (1);<br />
}<br /><br />
int i;<br />
for (i = 0; i &lt; 1000 * 1000 * 1000; ++i) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray">/* empty loop */</span><br />
}<br /><br />
clock_t end_wall = times(&amp;end);<br /><br />
if (end_wall &lt; 0) {<br /><span style="white-space: pre-wrap;">  </span>fputs("times failed", stderr);<br /><span style="white-space: pre-wrap;">  </span>return (1);<br />
}<br /><br />
clock_t wall = end_wall - start_wall;<br />
clock_t user = end.tms_utime - start.tms_utime;<br />
clock_t system = end.tms_stime - start.tms_stime;<br /><br />
printf("wall: %f s\n", wall / ticks_per_s);<br />
printf("user: %f s\n", user / ticks_per_s);<br />
printf("system: %f s\n", system / ticks_per_s);</td>
<td></td>
</tr><tr><th colspan="3"><a name="arrays" id="arrays"></a><a href="#arrays-note">arrays</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a name="declare-array" id="declare-array"></a><a href="#declare-array-note">declare</a></td>
<td>int a[10];</td>
<td></td>
</tr><tr><td><a name="allocate-array-on-stack" id="allocate-array-on-stack"></a><a href="#allocate-array-on-stack-note">allocate on stack</a></td>
<td>int a[10];</td>
<td></td>
</tr><tr><td><a name="allocate-array-on-heap" id="allocate-array-on-heap"></a><a href="#allocate-array-on-heap-note">allocate on heap</a></td>
<td>#include &lt;stdlib.h&gt;<br /><br />
int *a = calloc(10, sizeof(int));</td>
<td></td>
</tr><tr><td><a name="free-array-on-heap" id="free-array-on-heap"></a><a href="#free-array-on-heap-note">free heap</a></td>
<td>free(a);</td>
<td></td>
</tr><tr><td><a name="array-literal" id="array-literal"></a><a href="#array-literal-note">literal</a></td>
<td>int a[] = {1, 2, 3};</td>
<td>a := []int{1, 2, 3}</td>
</tr><tr><td><a name="array-size" id="array-size"></a><a href="#array-size-note">size</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>len(a)</td>
</tr><tr><td><a name="array-lookup" id="array-lookup"></a><a href="#array-lookup-note">lookup</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>a[0]</td>
<td>a[0]</td>
</tr><tr><td><a name="array-update" id="array-update"></a><a href="#array-update-note">update</a></td>
<td>a[0] = 4;</td>
<td></td>
</tr><tr><td><a name="array-out-of-bounds" id="array-out-of-bounds"></a><a href="#array-out-of-bounds-note">out-of-bounds behavior</a></td>
<td><span style="color: gray"><em>undefined, possible SIGSEGV</em></span></td>
<td><span style="color: gray">panic: index out of range</span><br /><br /><span style="color: gray"><em>if compiler detects a problem the code won't compile</em></span></td>
</tr><tr><td><a name="array-element-index" id="array-element-index"></a><a href="#array-element-index-note">element index</a></td>
<td>char *a[3] = {"foo", "bar", "baz"};<br />
int loc = -1, i;<br /><br />
for (i = 0; i &lt; 3; ++i) {<br /><span style="white-space: pre-wrap;">  </span>if (strcmp("bar", a[i]) == 0) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>loc = i;<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>break;<br /><span style="white-space: pre-wrap;">  </span>}<br />
}</td>
<td></td>
</tr><tr><td><a name="slice-array" id="slice-array"></a><a href="#slice-array-note">slice</a></td>
<td>int *a2;<br /><br />
a2 = a[2];</td>
<td></td>
</tr><tr><td><a name="slice-array-to-end" id="slice-array-to-end"></a><a href="#slice-array-to-end-note">slice to end</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="array-back" id="array-back"></a><a href="#array-back-note">manipulate back</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="array-front" id="array-front"></a><a href="#array-front-note">manipulate front</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="concatenate-array" id="concatenate-array"></a><a href="#concatenate-array-note">concatenate</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="copy-array" id="copy-array"></a><a href="#copy-array-note">copy</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="array-as-func-arg" id="array-as-func-arg"></a><a href="#array-as-func-arg-note">array as function argument</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="iterate-over-array" id="iterate-over-array"></a><a href="#iterate-over-array-note">iterate</a></td>
<td>int a[10];<br /><br />
for (i = 0; i &lt; 10; ++i ) {<br /><span style="white-space: pre-wrap;">  </span>a[i] = i * i;<br />
}</td>
<td></td>
</tr><tr><td><a name="sort-array" id="sort-array"></a><a href="#sort-array-note">sort</a></td>
<td>int<br />
compare(const void *a, const void *b) {<br /><br /><span style="white-space: pre-wrap;">  </span>if (*(int *)a &lt; *(int *)b) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>return -1;<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>else if (*(int *)a == *(int *)b) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>return 0;<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>else {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>return 1;<br /><span style="white-space: pre-wrap;">  </span>}<br />
}<br /><br />
int a[5] = {6, 8, 10, 9, 7};<br /><br /><span style="color: gray">/* 2nd arg is array length; 3rd arg is element size */</span><br />
qsort(a, 5, sizeof(int), &amp;compare);</td>
<td></td>
</tr><tr><th colspan="3"><a name="dictionaries" id="dictionaries"></a><a href="#dictionaries-note">dictionaries</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a href="#map">map declaration</a></td>
<td></td>
<td>gold := make(map[string]int)</td>
</tr><tr><td><a href="#map-literal">map literal</a></td>
<td></td>
<td>gold := map[string]int{<br /><span style="white-space: pre-wrap;">  </span>"France": 7,<br /><span style="white-space: pre-wrap;">  </span>"Spain": 3,<br />
}</td>
</tr><tr><td><a href="#map-access">map access</a></td>
<td></td>
<td>gold["France"] = 7<br />
fmt.Printf("France: %d\n", gold["France"])</td>
</tr><tr><td><a href="#map-is-key-present">is key present</a></td>
<td></td>
<td><span style="color: gray"><em>if key not present,</em> val <em>will contain zero value for type and</em> ok <em>will contain false:</em></span><br />
val, ok = gold["Norway"]</td>
</tr><tr><td><a href="#map-remove">map remove element</a></td>
<td></td>
<td>delete(gold, "France")</td>
</tr><tr><td><a href="#map-iterator">map iterate</a></td>
<td></td>
<td></td>
</tr><tr><th colspan="3"><a name="functions" id="functions"></a><a href="#functions-note">functions</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a name="def-func" id="def-func"></a><a href="#def-func-note">define function</a></td>
<td>int add(int n, int m) {<br /><span style="white-space: pre-wrap;">  </span>return n + m;<br />
}</td>
<td>func add(n int, m int) int {<br /><span style="white-space: pre-wrap;">  </span>return n + m<br />
}<br /><br /><span style="color: gray"><span style="white-space: pre-wrap;">//</span> parameters can share type declaration:</span><br />
func add(n, m int) int {<br /><span style="white-space: pre-wrap;">  </span>return n + m<br />
}</td>
</tr><tr><td><a name="invoke-func" id="invoke-func"></a><a href="#invoke-func-note">invoke function</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>add(3, 7)</td>
<td>add(3, 7)</td>
</tr><tr><td><a name="forward-decl-func" id="forward-decl-func"></a><a href="#forward-decl-func-note">forward declaration of function</a></td>
<td>float add(float x, float y);<br /><br /><span style="color: gray">/* if a function invocation is encountered before a<br /><span style="white-space: pre-wrap;">  </span>declaration or a definition, the arguments and the<br /><span style="white-space: pre-wrap;">  </span>return value are assumed to have type 'int' */</span><br />
printf("%f\n", add(2.2, 3.5));<br /><br />
float add(float x, float y) {<br /><span style="white-space: pre-wrap;">  </span>return x + y;<br />
}</td>
<td><span style="color: gray"><span style="white-space: pre-wrap;">//</span> function can be invoked before definition</span><br />
fmt.Printf("%f\n", add(2.2, 3.5))<br /><br />
func add(n float32, m float32) float32 {<br /><span style="white-space: pre-wrap;">  </span>return n + m<br />
}</td>
</tr><tr><td><a name="overload-func" id="overload-func"></a><a href="#overload-func-note">overload function</a></td>
<td><span style="color: gray"><em>not permitted</em></span></td>
<td><span style="color: gray"><em>not permitted</em></span></td>
</tr><tr><td><a name="nest-func" id="nest-func"></a><a href="#nest-func-note">nest function</a></td>
<td><span style="color: gray"><em>not permitted</em></span></td>
<td><span style="color: gray"><em>not permitted</em></span></td>
</tr><tr><td><a name="missing-arg" id="missing-arg"></a><a href="#missing-arg-note">missing argument behavior</a></td>
<td><span style="color: gray"><em>doesn't compile</em></span></td>
<td><span style="color: gray"><em>doesn't compile</em></span></td>
</tr><tr><td><a name="extra-arg" id="extra-arg"></a><a href="#extra-arg-note">extra argument behavior</a></td>
<td><span style="color: gray"><em>doesn't compile</em></span></td>
<td><span style="color: gray"><em>doesn't compile</em></span></td>
</tr><tr><td><a name="default-val-param" id="default-val-param"></a><a href="#default-val-param-note">default value for parameter</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="variable-num-arg" id="variable-num-arg"></a><a href="#variable-num-arg-note">variable number of arguments</a></td>
<td>#include &lt;stdarg.h&gt;<br /><br />
char* concat(int cnt, <span style="white-space: pre-wrap;">...</span>) {<br /><br /><span style="white-space: pre-wrap;">  </span>int i, len;<br /><span style="white-space: pre-wrap;">  </span>va_list ap;<br /><span style="white-space: pre-wrap;">  </span>char *retval, *arg;<br /><br /><span style="white-space: pre-wrap;">  </span>va_start(ap, cnt);<br /><span style="white-space: pre-wrap;">  </span>for (i = 0, len = 0; i &lt; cnt; i++) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>len += strlen(va_arg(ap, char*));<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>va_end(ap);<br /><br /><span style="white-space: pre-wrap;">  </span>retval = calloc(len + 1, sizeof(char));<br /><br /><span style="white-space: pre-wrap;">  </span>va_start(ap, cnt);<br /><span style="white-space: pre-wrap;">  </span>for (i = 0, len = 0; i &lt; cnt; i++) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>arg = va_arg(ap, char*);<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>strcpy(retval + len, arg);<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>len += strlen(arg);<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>va_end(ap);<br /><br /><span style="white-space: pre-wrap;">  </span>return retval;<br />
}<br /><br />
char *s = concat(4, "Hello", ", ", "World", "!");</td>
<td></td>
</tr><tr><td><a name="named-param" id="named-param"></a><a href="#named-param-note">named parameters</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
</tr><tr><td><a name="pass-by-val" id="pass-by-val"></a><a href="#pass-by-val-note">pass by value</a></td>
<td>void use_integer(int i) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>function body</em></span><br />
}<br /><br />
int i = 7;<br /><br />
use_integer(i);</td>
<td></td>
</tr><tr><td><a name="pass-by-addr" id="pass-by-addr"></a><a href="#pass-by-addr-note">pass by address</a></td>
<td>void use_iptr(int *i) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><em>function body</em></span><br />
}<br /><br />
int i = 7;<br /><br />
use_iptr(&amp;i);</td>
<td></td>
</tr><tr><td><a name="pass-by-ref" id="pass-by-ref"></a><a href="#pass-by-ref-note">pass by reference</a></td>
<td><span style="color: gray"><em>not possible</em></span></td>
<td></td>
</tr><tr><td><a name="retval" id="retval"></a><a href="#retval-note">return value</a></td>
<td><span style="color: gray">return <em>arg</em></span></td>
<td><span style="color: gray">return <em>arg. If return values have names and no arguments are provided to</em> return <em>the values assigned to the return variables are used.</em></span></td>
</tr><tr><td><a name="no-retval" id="no-retval"></a><a href="#no-retval-note">no return value</a></td>
<td><span style="color: gray">/* declare function void: */</span><br />
void print_err(char *msg) {<br /><span style="white-space: pre-wrap;">  </span>fprintf(stderr, msg);<br />
}</td>
<td></td>
</tr><tr><td><a name="multiple-retval" id="multiple-retval"></a><a href="#multiple-retval-note">multiple return values</a></td>
<td><span style="color: gray"><em>not permitted</em></span></td>
<td>func divmod(m, n int) (int, int) {<br /><span style="white-space: pre-wrap;">  </span>return m / n, m % n<br />
}<br /><br />
q, r := divmod(7, 3)</td>
</tr><tr><td><a name="named-retval" id="named-retval"></a><a href="#named-retval-note">named return values</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>func divmod(m, n int) (q, r int) {<br /><span style="white-space: pre-wrap;">  </span>q = m / n<br /><span style="white-space: pre-wrap;">  </span>r = m % n<br /><span style="white-space: pre-wrap;">  </span>return<br />
}<br /><br />
q, r := divmod(7, 3)</td>
</tr><tr><td><a name="anonymous-func-literal" id="anonymous-func-literal"></a><a href="#anonymous-func-literal-note">anonymous function literal</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td></td>
</tr><tr><td><a name="func-private-state" id="func-private-state"></a><a href="#func-private-state-note">function with private state</a></td>
<td>int<br />
counter() {<br /><span style="white-space: pre-wrap;">  </span>static int n = 0;<br /><br /><span style="white-space: pre-wrap;">  </span>return ++n;<br />
}</td>
<td></td>
</tr><tr><td><a name="func-as-val" id="func-as-val"></a><a href="#func-as-val-note">function as value</a></td>
<td>int<br />
add(int m, int n) {<br /><span style="white-space: pre-wrap;">  </span>return m + n;<br />
}<br /><br /><span style="color: gray">/* a function cannot be stored in a variable, but<br /><span style="white-space: pre-wrap;">  </span>its address can */</span><br />
int (* fp)(int, int) = &amp;add;<br /><br />
printf("1 + 2: %d\n", (*fp)(1, 2));</td>
<td></td>
</tr><tr><th colspan="3"><a name="execution-control" id="execution-control"></a><a href="#execution-control-note">execution control</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a name="for" id="for"></a><a href="#for-note">for</a></td>
<td>int i, n;<br /><br />
for (i = 1, n = 1; i &lt;= 10; ++i) {<br /><span style="white-space: pre-wrap;">  </span>n *= i;<br />
}</td>
<td>n := 1<br /><br />
for i := 1; i &lt;= 10; i++ {<br /><span style="white-space: pre-wrap;">  </span>n *= i;<br />
}</td>
</tr><tr><td><a name="if" id="if"></a><a href="#if-note">if</a></td>
<td>if (i &gt; 0) {<br /><span style="white-space: pre-wrap;">  </span>signum = 1;<br />
} else if (i == 0) {<br /><span style="white-space: pre-wrap;">  </span>signum = 0;<br />
} else {<br /><span style="white-space: pre-wrap;">  </span>signum = -1;<br />
}</td>
<td>if x &gt; 0 {<br /><span style="white-space: pre-wrap;">  </span>signum = 1<br />
} else if x == 0 {<br /><span style="white-space: pre-wrap;">  </span>signum = 0<br />
} else {<br /><span style="white-space: pre-wrap;">  </span>signum = -1<br />
}</td>
</tr><tr><td><a name="while" id="while"></a><a href="#while-note">while</a></td>
<td>int i = 0;<br /><br />
while (i &lt; 10) {<br /><span style="color: gray">…</span><br /><span style="white-space: pre-wrap;">  </span>++i;<br />
}</td>
<td>i := 0<br /><br />
for i &lt; 10 {<br /><span style="white-space: pre-wrap;">  </span>i++<br />
}</td>
</tr><tr><td><a name="switch" id="switch"></a><a href="#switch-note">switch</a></td>
<td>switch(i) {<br />
case 0:<br /><span style="white-space: pre-wrap;">  </span>0;<br /><span style="white-space: pre-wrap;">  </span>break;<br />
case 1:<br /><span style="white-space: pre-wrap;">  </span>1;<br /><span style="white-space: pre-wrap;">  </span>break;<br />
default:<br /><span style="white-space: pre-wrap;">  </span>-1;<br /><span style="white-space: pre-wrap;">  </span>break;<br />
}</td>
<td></td>
</tr><tr><td><a name="break-continue" id="break-continue"></a><a href="#break-continue-note">break/continue</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
</tr><tr><th colspan="3"><a name="concurrency" id="concurrency"></a><a href="#concurrency-note">concurrency</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td>start thread</td>
<td>#include &lt;pthread.h&gt;<br /><br />
typedef struct {<br /><span style="white-space: pre-wrap;">  </span>int id;<br />
} payload;<br /><br />
void*<br />
thread(void* arg) {<br /><span style="white-space: pre-wrap;">  </span>payload* pl = (payload*)arg;<br /><span style="white-space: pre-wrap;">  </span>printf("the value is %d\n", pl-&gt;id);<br />
}<br /><br />
pthread_t thr;<br />
payload pl = {3};<br /><br />
if (pthread_create(&amp;thr, NULL, &amp;thread, (void*)&amp;pl)) {<br /><span style="white-space: pre-wrap;">  </span>printf("failed to create thead\n");<br /><span style="white-space: pre-wrap;">  </span>exit(1);<br />
}</td>
<td></td>
</tr><tr><td>terminate current thread</td>
<td>#include &lt;pthread.h&gt;<br /><br />
payload pl = {7};<br /><br />
pthread_exit((void*)&amp;pl);</td>
<td></td>
</tr><tr><td>terminate other thread</td>
<td>#include &lt;pthread&gt;<br /><br />
pthread_t thr;<br />
payload pl = {3};<br /><br />
if (pthread_create(&amp;thr, NULL, &amp;thread, (void*)&amp;pl)) {<br /><span style="white-space: pre-wrap;">  </span>printf("failed to create thead\n");<br /><span style="white-space: pre-wrap;">  </span>exit(1);<br />
}<br /><br />
sleep(5);<br /><br />
if (pthread_cancel(thr)) {<br /><span style="white-space: pre-wrap;">  </span>printf("failed to cancel thread\n");<br /><span style="white-space: pre-wrap;">  </span>exit (1);<br />
}</td>
<td></td>
</tr><tr><td>list threads</td>
<td><span style="color: gray"><em>no portable way</em></span></td>
<td></td>
</tr><tr><td>wait on thread</td>
<td></td>
<td></td>
</tr><tr><td>lock</td>
<td></td>
<td></td>
</tr><tr><td>create message queue</td>
<td></td>
<td></td>
</tr><tr><td>send message</td>
<td></td>
<td></td>
</tr><tr><td>receive message</td>
<td></td>
<td></td>
</tr><tr><th colspan="3"><a name="file-handles" id="file-handles"></a><a href="#file-handles-note">file handles</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a name="std-file-handles" id="std-file-handles"></a><a href="#std-file-handles-note">standard file handles</a></td>
<td>stdin stdout stderr</td>
<td>import "os"<br /><br />
os.Stdin os.Stdout os.Stderr</td>
</tr><tr><td><a name="read-line-stdin" id="read-line-stdin"></a><a href="#read-line-stdin-note">read line from stdin</a></td>
<td>char *line = NULL;<br />
size_t cap = 0;<br />
ssize_t len;<br /><br /><span style="color: gray">/* if line is not NULL, it should be memory allocated by<br /><span style="white-space: pre-wrap;">   </span>malloc and the size should be in cap. If size is not<br /><span style="white-space: pre-wrap;">   </span>sufficient getline will call realloc on line */</span><br />
len = getline(&amp;line, &amp;cap, stdin);<br /><br />
if (len == -1) {<br /><span style="white-space: pre-wrap;">  </span>if (ferror(stdin)) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>perror("getline err");<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>else if (feof(stdin)) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>fprintf(stderr, "end of file\n");<br /><span style="white-space: pre-wrap;">  </span>}<br />
} else {<br /><br /><span style="white-space: pre-wrap;">  </span><span style="color: gray">/* use line here */</span><br /><br /><span style="white-space: pre-wrap;">  </span>free(line);<br />
}</td>
<td>import "bufio"<br />
import "os"<br /><br />
var line string<br />
var err error<br /><br />
b := bufio.NewReader(os.Stdin)<br /><br />
line, err = b.ReadString('\n')<br /><br />
if err != nil {<br /><span style="white-space: pre-wrap;">  </span>os.Stderr.WriteString("error!")<br />
} else {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray"><span style="white-space: pre-wrap;">//</span> use line here</span><br />
}</td>
</tr><tr><td><a name="write-line-stdout" id="write-line-stdout"></a><a href="#write-line-stdout-note">write line to stdout</a></td>
<td><span style="color: gray">/* returns EOF on error */</span><br />
int retval = puts("Hello, World!");</td>
<td>import "os"<br /><br />
os.Stdout.WriteString("Hello, World!\n")</td>
</tr><tr><td><a name="printf" id="printf"></a><a href="#printf-note">write formatted string to stdout</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>printf("count: %d\n", 7);</td>
<td>fmt.Printf("count: %d\n", 7)</td>
</tr><tr><td><a name="open-file" id="open-file"></a><a href="#open-file-note">open file for reading</a></td>
<td><span style="color: gray">/* returns NULL on error */</span><br />
FILE *f = fopen("/etc/hosts", "r");</td>
<td></td>
</tr><tr><td><a name="open-file-write" id="open-file-write"></a><a href="#open-file-write-note">open file for writing</a></td>
<td><span style="color: gray">/* returns NULL on error */</span><br />
FILE *f = fopen("/tmp/test", "w");</td>
<td></td>
</tr><tr><td><a name="open-file-append" id="open-file-append"></a><a href="#open-file-append-note">open file for appending</a></td>
<td><span style="color: gray">/* returns NULL on error */</span><br />
FILE *f = fopen("/tmp/err.log", "a");</td>
<td></td>
</tr><tr><td><a name="close-file" id="close-file"></a><a href="#close-file-note">close file</a></td>
<td><span style="color: gray">/* returns EOF on error */</span><br />
int retval = fclose(f);</td>
<td></td>
</tr><tr><td><a name="close-file-implicitly" id="close-file-implicitly"></a><a href="#close-file-implicitly-note">close file implicitly</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>defer</em></span></td>
</tr><tr><td><a name="io-err" id="io-err"></a><a href="#io-err-note">i/o errors</a></td>
<td><span style="color: gray"><em>functions return values such as</em> EOF, NULL, <em>or</em> -1 <em>to indicate error. In some cases errors are not distinguished from end-of-file. The functions</em> ferror() <em>and</em> feof() <em>can be used to test a file handle.<br /><br />
The type of error is stored in</em> errno. strerror(errno) <em>converts the errors code to a string and</em> perror() <em>writes its argument to</em> stderr <em>with</em> sterror(errno).</span></td>
<td></td>
</tr><tr><td><a name="read-line" id="read-line"></a><a href="#read-line-note">read line</a></td>
<td>char line[BUFSIZ];<br /><br />
if (fgets(line, BUFSIZ, f) == NULL) {<br /><span style="white-space: pre-wrap;">  </span>if (ferror(stdin)) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>perror("getline err");<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>else if (feof(stdin)) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>fprintf(stderr, "end of file\n");<br /><span style="white-space: pre-wrap;">  </span>}<br /><br />
} else {<br /><span style="white-space: pre-wrap;">  </span>if ('\n' == line[strlen(line) - 1]) {<br /><br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: gray">/* use line here */</span><br /><br />
} else {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>fprintf(stderr, "long line truncated\n");<br />
}</td>
<td></td>
</tr><tr><td><a name="file-line-iterate" id="file-line-iterate"></a><a href="#file-line-iterate-note">iterate over file by line</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="read-file-array" id="read-file-array"></a><a href="#read-file-array-note">read file into array of strings</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="read-file-str" id="read-file-str"></a><a href="#read-file-str-note">read file into string</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="write-str" id="write-str"></a><a href="#write-str-note">write string</a></td>
<td><span style="color: gray">/* returns EOF on error */</span><br />
int retval = fputs("Hello, World!", f);</td>
<td></td>
</tr><tr><td><a name="write-line" id="write-line"></a><a href="#write-line-note">write line</a></td>
<td><span style="color: gray">/* returns EOF on error */</span><br />
int retval = fputs("Hello, World!\n", f);</td>
<td></td>
</tr><tr><td><a name="flush" id="flush"></a><a href="#flush-note">flush file handle</a></td>
<td>if (fflush(f) == EOF) {<br /><span style="white-space: pre-wrap;">  </span>perror("fflush failed");<br />
}</td>
<td></td>
</tr><tr><td><a name="eof-test" id="eof-test"></a><a href="#eof-test-note">end-of-file test</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>feof(f)</td>
<td></td>
</tr><tr><td><a name="seek" id="seek"></a><a href="#seek-note">get and set file handle position</a></td>
<td>long pos;<br />
if ((pos = ftell(f)) == -1) {<br /><span style="white-space: pre-wrap;">  </span>perror("ftell failed");<br />
}<br /><br /><span style="color: gray">/* 3rd arg can also be SEEK_CUR or SEEK_END */</span><br />
if (fseek(f, 0, SEEK_SET) == -1) {<br /><span style="white-space: pre-wrap;">  </span>perror("fseek failed");<br />
}</td>
<td></td>
</tr><tr><td><a name="tmp-file" id="tmp-file"></a><a href="#tmp-file-note">open unused file</a></td>
<td>#include &lt;limits.h&gt;<span style="white-space: pre-wrap;">  </span><span style="color: gray">/* PATH_MAX */</span><br />
#include &lt;unistd.h&gt;<br /><br />
char buf[PATH_MAX];<br /><br />
strcpy(buf, "/tmp/foo.XXXXXX");<br /><br /><span style="color: gray">/* terminal Xs will be replaced: */</span><br />
int fd = mkstemp(buf);<br /><br />
if (fd != -1) {<br /><span style="white-space: pre-wrap;">  </span>FILE *f = fdopen(fd, "w");<br /><br /><span style="white-space: pre-wrap;">  </span>if (NULL == f) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>perror("fdopen failed");<br /><span style="white-space: pre-wrap;">  </span>} else {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="color: gray">/* use f */</span><br /><span style="white-space: pre-wrap;">  </span>}<br /><br />
} else {<br /><span style="white-space: pre-wrap;">  </span>perror("mkstemp failed");<br />
}</td>
<td></td>
</tr><tr><th colspan="3"><a name="files" id="files"></a><a href="#files-note">files</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a name="file-test" id="file-test"></a><a href="#file-test-note">file test, regular file test</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>#include &lt;sys/stat.h&gt;<br />
#include &lt;unistd.h&gt;<span style="white-space: pre-wrap;">  </span><span style="color: gray">/* access() */</span><br /><br />
struct stat buf;<br /><br />
if (access("/tmp/foo", F_OK) &gt;= 0) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray">/* file exists */</span><br />
}<br /><br />
if (stat("/tmp/foo", &amp;buf) != 0) {<br /><span style="white-space: pre-wrap;">  </span>perror("stat failed");<br />
} else if (S_ISREG(buf.st_mode)) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray">/* file is regular */</span><br />
}</td>
<td></td>
</tr><tr><td><a name="file-size" id="file-size"></a><a href="#file-size-note">file size</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>#include &lt;sys/stat.h&gt;<br /><br />
struct stat buf;<br /><br />
if (stat("/tmp/foo", &amp;buf) != 0) {<br /><span style="white-space: pre-wrap;">  </span>perror("stat failed");<br />
} else {<br /><span style="white-space: pre-wrap;">  </span>printf("size: %llu\n", buf.st_size);<br />
}</td>
<td></td>
</tr><tr><td><a name="readable-writable-executable" id="readable-writable-executable"></a><a href="#readable-writable-executable-note">is file readable, writable, executable</a></td>
<td>#include &lt;unistd.h&gt;<br /><br />
if (access("/etc/hosts", R_OK) != 0) {<br /><span style="white-space: pre-wrap;">  </span>printf("not readable\n");<br />
}<br />
if (access("/etc/hosts", W_OK) != 0) {<br /><span style="white-space: pre-wrap;">  </span>printf("not writable\n");<br />
}<br />
if (access("/etc/hosts", X_OK) != 0) {<br /><span style="white-space: pre-wrap;">  </span>printf("not executable\n");<br />
}</td>
<td></td>
</tr><tr><td><a name="chmod" id="chmod"></a><a href="#chmod-note">set file permissions</a></td>
<td>#include &lt;sys/stat.h&gt;<br /><br />
if (chmod("/tmp/foo", 0755) == -1) {<br /><span style="white-space: pre-wrap;">  </span>perror("chmod failed");<br />
}</td>
<td></td>
</tr><tr><td><a name="file-cp-rm-mv" id="file-cp-rm-mv"></a><a href="#file-cp-rm-mv-note">copy file, remove file, rename file</a></td>
<td><span style="color: gray">/* no copy function in standard library */</span><br /><br />
if (remove("/tmp/foo")) {<br /><span style="white-space: pre-wrap;">  </span>perror("remove failed");<br />
}<br /><br />
if (rename("/tmp/bar", "/tmp/foo")) {<br /><span style="white-space: pre-wrap;">  </span>perror("rename failed");<br />
}</td>
<td></td>
</tr><tr><td><a name="symlink" id="symlink"></a><a href="#symlink-note">create symlink, symlink test, readlink</a></td>
<td>#include &lt;limits.h&gt;<span style="white-space: pre-wrap;">  </span><span style="color: gray">/* PATH_MAX */</span><br />
#include &lt;sys/stat.h&gt;<br />
#include &lt;unistd.h&gt;<br /><br />
if (symlink("/etc/hosts", "/tmp/hosts") == -1) {<br /><span style="white-space: pre-wrap;">  </span>perror("symlink failed");<br />
}<br /><br />
struct stat sbuf;<br /><br />
if (stat("/tmp/hosts", &amp;buf) != 0) {<br /><span style="white-space: pre-wrap;">  </span>perror("stat failed");<br />
} else if (S_ISLNK(buf.st_mode)) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray">/* file is symlink */</span><br />
}<br /><br />
char pbuf[PATH_MAX + 1];<br /><br />
ssize_t size = readlink("/tmp/hosts", pbuf, PATH_MAX);<br /><br />
if (size &gt;= 0 ) {<br /><span style="white-space: pre-wrap;">  </span>pbuf[size] = 0;<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray">/* pbuf now contains null-terminated string<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">   </span>with target path */</span><br />
}</td>
<td></td>
</tr><tr><td><a name="unused-file-name" id="unused-file-name"></a><a href="#unused-file-name-note">generate unused file name</a></td>
<td><span style="color: gray">/* if first argument is NULL, path is in system temp<br /><span style="white-space: pre-wrap;">   </span>directory. Caller should free() return value. */</span><br />
char *path = tempnam("/tmp", "foo");</td>
<td></td>
</tr><tr><th colspan="3"><a name="file-fmt" id="file-fmt"></a><a href="#file-fmt-note">file formats</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><th colspan="3"><a name="directories" id="directories"></a><a href="#directories-note">directories</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a name="build-pathname" id="build-pathname"></a><a href="#build-pathname-note">build pathname</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="dirname-basename" id="dirname-basename"></a><a href="#dirname-basename-note">dirname and basename</a></td>
<td>#include &lt;libgen.h&gt;<br /><br /><span style="color: gray">/* return pointers to statically allocated memory<br /><span style="white-space: pre-wrap;">   </span>which is overwritten by subsequent calls */</span><br />
char *s1 = dirname("/etc/hosts");<br />
char *s2 = basename("/etc/hosts");</td>
<td>import "path"<br /><br />
path.Dir("/etc/hosts")<br />
path.Base("/etc/hosts")</td>
</tr><tr><td><a name="absolute-pathname" id="absolute-pathname"></a><a href="#absolute-pathname-note">absolute pathname</a></td>
<td>#include &lt;limits.h&gt;<br /><br />
char buf[PATH_MAX];<br /><br />
if (realpath("..", buf) == NULL) {<br /><span style="white-space: pre-wrap;">  </span>perror("realpath failed");<br />
}<br />
else {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray">/* use buf */</span><br />
}</td>
<td></td>
</tr><tr><td><a name="dir-iterate" id="dir-iterate"></a><a href="#dir-iterate-note">iterate over directory by file</a></td>
<td>#include &lt;dirent.h&gt;<br /><br />
DIR *dir = opendir("/etc");<br />
struct dirent *de;<br /><br />
while (de = readdir(dir)) {<br /><span style="white-space: pre-wrap;">  </span>printf("%s\n", de-&gt;d_name);<br />
}<br /><br />
closedir(dir);</td>
<td></td>
</tr><tr><td><a name="glob" id="glob"></a><a href="#glob-note">glob paths</a></td>
<td>#include &lt;glob.h&gt;<br /><br />
glob_t pglob;<br />
int i;<br /><br />
glob("/etc/*", 0, NULL, &amp;pglob);<br /><br />
for (i = 0; i &lt; pglob.gl_pathc; ++i) {<br /><span style="white-space: pre-wrap;">  </span>printf("%s\n", pglob.gl_pathv[i]);<br />
}<br /><br />
globfree(&amp;pglob);</td>
<td></td>
</tr><tr><td><a name="mkdir" id="mkdir"></a><a href="#mkdir-note">make directory</a></td>
<td>#include &lt;sys/stat.h&gt;<br /><br />
if (mkdir("/tmp/foo")) {<br /><span style="white-space: pre-wrap;">  </span>fprintf(stderr, "mkdir err: %s\n", strerror(errno));<br />
}</td>
<td></td>
</tr><tr><td><a name="recursive-cp" id="recursive-cp"></a><a href="#recursive-cp-note">recursive copy</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="rmdir" id="rmdir"></a><a href="#rmdir-note">remove empty directory</a></td>
<td>#include &lt;unistd.h&gt;<br /><br />
if (rmdir("/tmp/foo") == -1) {<br /><span style="white-space: pre-wrap;">  </span>perror("rmdir failed");<br />
}</td>
<td></td>
</tr><tr><td><a name="rm-rf" id="rm-rf"></a><a href="#rm-rf-note">remove directory and contents</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="dir-test" id="dir-test"></a><a href="#dir-test-note">directory test</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>#include &lt;sys/stat.h&gt;<br /><br />
struct stat buf;<br /><br />
if (stat("/tmp/foo", &amp;buf) != 0) {<br /><span style="white-space: pre-wrap;">  </span>perror("stat failed");<br />
} else if (S_ISDIR(buf.st_mode)) {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray">/* file is directory */</span><br />
}</td>
<td></td>
</tr><tr><td><a name="unused-dir" id="unused-dir"></a><a href="#unused-dir-note">generate unused directory</a></td>
<td>#include &lt;limits.h&gt;<br /><br />
char buf[PATH_MAX];<br /><br />
strcpy(buf, "/tmp/fooXXXXXX");<br /><br /><span style="color: gray">/* terminal Xs will be replaced: */</span><br />
if (mkdtemp(buf) == NULL) {<br /><span style="white-space: pre-wrap;">  </span>perror("mkdtemp failed");<br />
} else {<br /><span style="white-space: pre-wrap;">  </span><span style="color: gray">/* use buf */</span><br />
}</td>
<td></td>
</tr><tr><td><a name="system-tmp-dir" id="system-tmp-dir"></a><a href="#system-tmp-dir-note">system temporary file directory</a></td>
<td><span style="color: gray">/* defined in &lt;stdio.h&gt; */</span><br />
P_tmpdir</td>
<td></td>
</tr><tr><th colspan="3"><a name="processes-environment" id="processes-environment"></a><a href="#processes-environment-note">processes and environment</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a href="#main">signature of main</a></td>
<td>int main(int argc, char **argv) {</td>
<td></td>
</tr><tr><td><a href="#first-argument">first argument</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>pathname of executable</em></span></td>
<td></td>
</tr><tr><td><a name="getopt" id="getopt"></a><a href="#getopt-note">getopt</a></td>
<td>#include &lt;getopt.h&gt;<br /><br /><span style="color: gray">/* 2nd value indicates whether option takes an argument */</span><br />
static struct option long_opts[] = {<br /><span style="white-space: pre-wrap;">  </span>{"debug", 0, NULL, 'd'},<br /><span style="white-space: pre-wrap;">  </span>{"threshold", 1, NULL, 't'},<br /><span style="white-space: pre-wrap;">  </span>{0, 0, 0, 0}<br />
};<br /><br />
int debug = 0;<br />
double threshold = 0.0;<br />
char *file = NULL;<br /><br />
int ch;<br />
int opti;<br />
char *endptr;<br /><br />
while (1) {<br /><span style="white-space: pre-wrap;">  </span>ch = getopt_long(argc, argv, "dt:", long_opts, &amp;opti);<br /><span style="white-space: pre-wrap;">  </span>if (-1 == ch) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>break;<br /><span style="white-space: pre-wrap;">  </span>}<br /><br /><span style="white-space: pre-wrap;">  </span>switch (ch) {<br /><span style="white-space: pre-wrap;">  </span>case 'd':<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>debug = 1;<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>break;<br /><span style="white-space: pre-wrap;">  </span>case 't':<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>threshold = strtod(optarg, &amp;endptr);<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>if (*endptr != 0) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>fprintf(stderr, "expected float: %s\n", optarg);<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>exit(1);<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>break;<br /><span style="white-space: pre-wrap;">  </span>default:<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>fprintf(stderr, "unexpected arg: %d\n", ch);<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>exit(1);<br /><span style="white-space: pre-wrap;">  </span>}<br />
}<br /><br /><span style="color: gray">/* optind is index of 1st arg not consumed by getopt */</span><br />
if (optind != argc - 1) {<br /><span style="white-space: pre-wrap;">  </span>fputs("USAGE: foo [<span style="white-space: pre-wrap;">--</span>multi] [<span style="white-space: pre-wrap;">--</span>threshold=NUM] FILE\n",<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>stderr);<br /><span style="white-space: pre-wrap;">  </span>exit(1);<br />
}<br />
else {<br /><span style="white-space: pre-wrap;">  </span>file = argv[optind];<br />
}</td>
<td></td>
</tr><tr><td><a href="#environment-variable">environment variable</a></td>
<td>#include &lt;stdlib.h&gt;<br /><br />
char *home = getenv("HOME");<br />
setenv("EDITOR", "emacs", 1);<br />
unsetenv("EDITOR");</td>
<td></td>
</tr><tr><td><a href="#iterate-environment-variable">iterate thru environment variables</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="user-id-name" id="user-id-name"></a><a href="#user-id-name-note">get user id and name</a></td>
<td>#include &lt;unistd.h&gt;<span style="white-space: pre-wrap;">  </span><span style="color: gray">/* getlogin */</span><br /><br />
printf("uid: %d\n", getuid());<br />
printf("username: %s\n", getlogin());</td>
<td></td>
</tr><tr><td><a name="exit" id="exit"></a><a href="#exit-note">exit</a></td>
<td><span style="color: gray">/* use 0 for success; 1 through 127 for failure */</span><br />
exit(1);</td>
<td></td>
</tr><tr><td><a name="executable-test" id="executable-test"></a><a href="#executable-test-note">executable test</a></td>
<td>#include &lt;unistd.h&gt;<br /><br />
if (access("/bin/ls", X_OK) != 0) {<br /><span style="white-space: pre-wrap;">  </span>printf("not executable\n");<br />
}</td>
<td></td>
</tr><tr><td><a name="external-cmd" id="external-cmd"></a><a href="#external-cmd-note">external command</a></td>
<td><span style="color: gray">/* retval of -1 indicates fork or wait failed.<br /><span style="white-space: pre-wrap;">   </span>127 indicates shell failed */</span><br />
int retval = system("ls -l *");</td>
<td></td>
</tr><tr><td><a name="fork" id="fork"></a><a href="#fork-note">fork</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="exec" id="exec"></a><a href="#exec-note">exec</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="pipe" id="pipe"></a><a href="#pipe-note">pipe</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="wait" id="wait"></a><a href="#wait-note">wait</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="pid" id="pid"></a><a href="#pid-note">get pid, parent pid</a></td>
<td>#include &lt;unistd.h&gt;<br /><br /><span style="color: gray">/* getpid() and getppid() have return type pid_t */</span><br />
printf("%d\n", getpid());<br />
printf("%d\n", getppid())</td>
<td></td>
</tr><tr><td><a name="signal-handler" id="signal-handler"></a><a href="#signal-handler-note">set signal handler</a></td>
<td>#include &lt;signal.h&gt;<br /><br />
void<br />
handle_signal(int signo) {<br /><span style="white-space: pre-wrap;">  </span>switch(signo) {<br /><span style="white-space: pre-wrap;">  </span>case SIGUSR1:<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>puts("caught SIGUSR1");<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>break;<br /><span style="white-space: pre-wrap;">  </span>default:<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>printf("unexpected signal: %s", strsignal(signo));<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>break;<br /><span style="white-space: pre-wrap;">  </span>}<br />
}<br /><br /><span style="color: gray">/*2nd arg can also be SIG_IGN or SIG_DFL */</span><br />
sig_t prev_handler = signal(SIGUSR1, &amp;handle_signal);<br /><br />
if (prev_handler == SIG_ERR) {<br /><span style="white-space: pre-wrap;">  </span>perror("signal failed");<br /><span style="white-space: pre-wrap;">  </span>exit(1);<br />
}</td>
<td></td>
</tr><tr><td><a name="send-signal" id="send-signal"></a><a href="#send-signal-note">send signal</a></td>
<td>#include &lt;signal.h&gt;<br />
#include &lt;unistd.h&gt;<span style="white-space: pre-wrap;">  </span><span style="color: gray">/* getppid */</span><br /><br />
if (kill(getppid(), SIGUSR1) == -1) {<br /><span style="white-space: pre-wrap;">  </span>perror("kill failed");<br />
}</td>
<td></td>
</tr><tr><th colspan="3"><a name="libraries-namespaces" id="libraries-namespaces"></a><a href="#libraries-namespaces-note">libraries and namespaces</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><th colspan="3"><a name="user-defined-types" id="user-defined-types"></a><a href="#user-defined-types-note">user-defined types</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a name="typedef" id="typedef"></a><a href="#typedef-note">typedef</a></td>
<td>typedef int customer_id;<br />
customer_id cid = 3;</td>
<td></td>
</tr><tr><td><a name="enum" id="enum"></a><a href="#enum-note">enum</a></td>
<td>enum day_of_week {<br /><span style="white-space: pre-wrap;">  </span>mon, tue, wed, thu, fri, sat, sun<br />
};<br /><br />
enum day_of_week dow = tue;</td>
<td></td>
</tr><tr><td><a href="#struct-definition">struct definition</a></td>
<td>struct medal_count {<br /><span style="white-space: pre-wrap;">  </span>const char* country;<br /><span style="white-space: pre-wrap;">  </span>int gold;<br /><span style="white-space: pre-wrap;">  </span>int silver;<br /><span style="white-space: pre-wrap;">  </span>int bronze;<br />
};</td>
<td>type MedalCount struct {<br /><span style="white-space: pre-wrap;">  </span>country string<br /><span style="white-space: pre-wrap;">  </span>gold int<br /><span style="white-space: pre-wrap;">  </span>silver int<br /><span style="white-space: pre-wrap;">  </span>bronze int<br />
}</td>
</tr><tr><td><a href="#struct-declaration">struct declaration</a></td>
<td>struct medal_count spain;</td>
<td></td>
</tr><tr><td><a href="#struct-initialization">struct initialization</a></td>
<td>struct medal_count spain = { "Spain", 3, 7, 4};<br /><br />
struct medal_count france = {<br /><span style="white-space: pre-wrap;">  </span>.gold = 8,<br /><span style="white-space: pre-wrap;">  </span>.silver = 7,<br /><span style="white-space: pre-wrap;">  </span>.bronze = 9,<br /><span style="white-space: pre-wrap;">  </span>.country = "France"<br />
};</td>
<td>spain := MedalCount{"Spain", 3, 2, 1}<br /><br />
france := MedalCount{<br /><span style="white-space: pre-wrap;">  </span>bronze: 9,<br /><span style="white-space: pre-wrap;">  </span>silver: 7,<br /><span style="white-space: pre-wrap;">  </span>gold: 8,<br /><span style="white-space: pre-wrap;">  </span>country: "France"}</td>
</tr><tr><td><a href="#struct-member-assignment">struct member assignment</a></td>
<td>spain.country = "Spain";<br />
spain.gold = 3;<br />
spain.silver = 7;<br />
spain.bronze = 4;</td>
<td>france := MedalCount{}<br />
france.country = "France"<br />
france.gold = 7<br />
france.silver = 6<br />
france.bronze = 5</td>
</tr><tr><td><a href="#struct-member-access">struct member access</a></td>
<td>int spain_total = spain.gold + spain.silver + spain.bronze;</td>
<td>france_total = france.gold +<br /><span style="white-space: pre-wrap;">  </span>france.silver +<br /><span style="white-space: pre-wrap;">  </span>france.bronze</td>
</tr><tr><td><a href="#union-definition">union definition</a></td>
<td>union perl_scalar {<br /><span style="white-space: pre-wrap;">  </span>char *string;<br /><span style="white-space: pre-wrap;">  </span>long integer;<br /><span style="white-space: pre-wrap;">  </span>double number;<br /><span style="white-space: pre-wrap;">  </span>void *reference;<br />
}</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#union-declaration">union declaration</a></td>
<td>union perl_scalar x;</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#union-access">union access</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>x.integer = 7;</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><th colspan="3"><a name="macros" id="macros"></a><a href="#macros-note">macros</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><th colspan="3"><a name="net-web" id="net-web"></a><a href="#net-web-note">net and web</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><th colspan="3"><a name="unit-tests" id="unit-tests"></a><a href="#unit-tests-note">unit tests</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td>unit test example</td>
<td>$ sudo apt-get install check<br /><br />
$ cat &gt; check_foo.c<br />
#include &lt;check.h&gt;<br /><br />
START_TEST(test_foo) {<br /><span style="white-space: pre-wrap;">  </span>fail_unless(0, "not true");<br />
}<br />
END_TEST<br /><br />
Suite *<br />
suite_foo(void) {<br /><span style="white-space: pre-wrap;">  </span>Suite *ste = suite_create("suite: foo");<br /><span style="white-space: pre-wrap;">  </span>TCase *tc = tcase_create("case: foo");<br /><br /><span style="white-space: pre-wrap;">  </span>tcase_add_test(tc, test_foo);<br /><span style="white-space: pre-wrap;">  </span>suite_add_tcase(ste, tc);<br /><br /><span style="white-space: pre-wrap;">  </span>return ste;<br />
}<br /><br />
int<br />
main(void) {<br /><span style="white-space: pre-wrap;">  </span>int number_failed;<br /><span style="white-space: pre-wrap;">  </span>Suite *ste = suite_foo();<br /><span style="white-space: pre-wrap;">  </span>SRunner *sr = srunner_create(ste);<br /><br /><span style="white-space: pre-wrap;">  </span>srunner_run_all(sr, CK_NORMAL);<br /><span style="white-space: pre-wrap;">  </span>number_failed = srunner_ntests_failed(sr);<br /><span style="white-space: pre-wrap;">  </span>srunner_free(sr);<br /><br /><span style="white-space: pre-wrap;">  </span>return (number_failed);<br />
}<br /><br />
$ gcc -o check_foo check_foo.c -lcheck<br /><br />
$ ./check_foo<br />
Running suite(s): foo<br />
0%: Checks: 1, Failures: 1, Errors: 0<br />
check_foo.c:4:F:foo:test_foo:0: not equal</td>
<td></td>
</tr><tr><td>equality assertion</td>
<td>fail_unless(1 == 2, "integers not equal");<br /><br />
char *s = "lorem";<br />
fail_unless(strcmp(s, "ipsum"), "strings not equal");</td>
<td></td>
</tr><tr><td>setup and teardown</td>
<td></td>
<td></td>
</tr><tr><td>unit test coverage</td>
<td></td>
<td></td>
</tr><tr><th colspan="3"><a name="debugging-profiling" id="debugging-profiling"></a><a href="#debugging-profiling-note">debugging and profiling</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a name="check-syntax" id="check-syntax"></a><a href="#check-syntax-note">check syntax</a></td>
<td>$ gcc -fsyntax-only foo.c</td>
<td></td>
</tr><tr><td><a name="stronger-warnings" id="stronger-warnings"></a><a href="#stronger-warnings-note">flag for stronger warnings</a></td>
<td>$ gcc -Wall foo.c</td>
<td></td>
</tr><tr><td><a name="suppress-warnings" id="suppress-warnings"></a><a href="#suppress-warnings-note">suppress warnings</a></td>
<td>$ gcc -w foo.c</td>
<td></td>
</tr><tr><td><a name="warnings-as-err" id="warnings-as-err"></a><a href="#warnings-as-err-note">treat warnings as errors</a></td>
<td>$ gcc -Werror foo.c</td>
<td></td>
</tr><tr><td><a name="lint" id="lint"></a><a href="#lint-note">lint</a></td>
<td>$ sudo apt-get install splint<br />
$ splint foo.c</td>
<td></td>
</tr><tr><td><a name="src-cleanup" id="src-cleanup"></a><a href="#src-cleanup-note">source cleanup</a></td>
<td></td>
<td></td>
</tr><tr><td><a name="debugger" id="debugger"></a><a href="#debugger-note">run debugger</a></td>
<td>$ gcc -g -o foo foo.c<br />
$ gdb foo</td>
<td></td>
</tr><tr><td><a name="debugger-cmds" id="debugger-cmds"></a><a href="#debugger-cmds-note">debugger commands</a><br /><span style="color: gray"><em>help, list source, (re)load executable, next, step, set breakpoint, show breakpoints, delete breakpoint, continue, backtrace, up stack, down stack, print, run, quit</em></span></td>
<td><span style="white-space: pre-wrap;">&gt;</span> h<br /><span style="white-space: pre-wrap;">&gt;</span> l <span style="color: gray">[FIRST_LINENO, LAST_LINENO]</span><br /><span style="white-space: pre-wrap;">&gt;</span> file <span style="color: gray">PATH</span><br /><span style="white-space: pre-wrap;">&gt;</span> n<br /><span style="white-space: pre-wrap;">&gt;</span> s<br /><span style="white-space: pre-wrap;">&gt;</span> b <span style="color: gray">[FILE:]LINENO</span><br /><span style="white-space: pre-wrap;">&gt;</span> i<br /><span style="white-space: pre-wrap;">&gt;</span> d <span style="color: gray">NUM</span><br /><span style="white-space: pre-wrap;">&gt;</span> c<br /><span style="white-space: pre-wrap;">&gt;</span> bt<br /><span style="white-space: pre-wrap;">&gt;</span> up<br /><span style="white-space: pre-wrap;">&gt;</span> do<br /><span style="white-space: pre-wrap;">&gt;</span> p <span style="color: gray">EXPR</span><br /><span style="white-space: pre-wrap;">&gt;</span> r <span style="color: gray">[ARG1[, [ARG2 <span style="white-space: pre-wrap;">...</span>]]</span><br /><span style="white-space: pre-wrap;">&gt;</span> q</td>
<td></td>
</tr><tr><td><a name="profile" id="profile"></a><a href="#profile-note">profile code</a></td>
<td><span style="color: gray"><em>does not work on Mac OS X</em></span><br />
$ gcc -pg -o foo foo.c<br />
$ ./foo<br />
$ gprof foo</td>
<td></td>
</tr><tr><td><a name="memory-tool" id="memory-tool"></a><a href="#memory-tool-note">memory tool</a></td>
<td>$ sudo apt-get install valgrind<br />
$ gcc -o foo foo.c<br />
$ valgrind foo</td>
<td></td>
</tr><tr><th colspan="3"><a name="multidimensional-arrays" id="multidimensional-arrays"></a><a href="#multidimensional-arrays-note">multidimensional arrays</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td>2d array literal</td>
<td></td>
<td></td>
</tr><tr><th colspan="3"><a name="vectors" id="vectors"></a><a href="#vectors-note">vectors</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a href="#vector-literal">vector literal</a></td>
<td></td>
<td></td>
</tr><tr><td><a href="#vector-element-wise">element-wise arithmetic operators</a></td>
<td></td>
<td></td>
</tr><tr><td><a href="#vector-length-mismatch">result of vector length mismatch</a></td>
<td></td>
<td></td>
</tr><tr><td><a href="#vector-scalar">scalar multiplication</a></td>
<td></td>
<td></td>
</tr><tr><td><a href="#vector-dot">dot product</a></td>
<td></td>
<td></td>
</tr><tr><th colspan="3"><a name="matrices" id="matrices"></a><a href="#matrices-note">matrices</a></th>
</tr><tr><th></th>
<th>c</th>
<th>go</th>
</tr><tr><td><a href="#matrix-literal-constructor">matrix literal or constructor</a></td>
<td></td>
<td></td>
</tr><tr><td><a href="#matrix-multiplication">multiplication</a></td>
<td></td>
<td></td>
</tr><tr><th></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">_________________________________________________________</span></span></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">________________________________________________________</span></span></th>
</tr></table><p><a name="general-note" id="general-note"></a></p>
<h2 id="toc0"><span><a href="#general">General</a></span></h2>
<p><a name="version-used-note" id="version-used-note"></a></p>
<h2 id="toc1"><span><a href="#version-used">version used</a></span></h2>
<p>The compiler version used for this cheatsheat.</p>
<p><a name="show-version-note" id="show-version-note"></a></p>
<h2 id="toc2"><span><a href="#show-version">show version</a></span></h2>
<p>How to get the compiler version.</p>
<p><a name="implicit-prologue-note" id="implicit-prologue-note"></a></p>
<h2 id="toc3"><span><a href="#implicit-prologue">implicit prologue</a></span></h2>
<p>Code which the examples in this sheet assume to have been executed.</p>
<p><strong>c:</strong></p>
<p>A selection of commonly used symbols and macros from the standard C library and the headers in which they are defined according to POSIX:</p>
<table class="wiki-content-table"><tr><th><a href="http://pubs.opengroup.org/onlinepubs/9699919799/functions/errno.html">errno.h</a></th>
<th><a href="http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/stdlib.h.html">stdlib.h</a></th>
<th><a href="http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/stdio.h.html">stdio.h</a></th>
<th><a href="http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/string.h.html">string.h</a></th>
<th><a href="http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/time.h.html">time.h</a></th>
</tr><tr><td>errno<br /><br />
ENOENT<br />
ENOMEM<br />
EACCES<br />
EINVAL<br />
EPIPE</td>
<td>abs<br />
drand48<br />
exit<br />
free<br />
getenv<br />
malloc<br />
mkdtemp<br />
putenv<br />
qsort<br />
rand<br />
realpath<br />
srand<br />
strtod<br />
strtol<br />
system<br />
unsetenv</td>
<td>fclose<br />
feof<br />
fflush<br />
fgets<br />
fopen<br />
fprintf<br />
fputs<br />
getc<br />
getline<br />
printf<br />
putc<br />
remove<br />
rename<br />
scanf<br /><br />
BUFSIZ<br />
EOF<br />
NULL</td>
<td>strcat<br />
strchr<br />
strcmp<br />
strcpy<br />
strdup<br />
strerror<br />
strncat<br />
strncmp<br />
strncpy<br />
strndup<br />
strrchr<br />
strstr<br />
strtok</td>
<td>time<br />
time_t</td>
</tr></table><p><a name="grammar-invocation-note" id="grammar-invocation-note"></a></p>
<h1 id="toc4"><span><a href="#grammar-invocation">Grammar and Invocation</a></span></h1>
<p><a name="hello-world-note" id="hello-world-note"></a></p>
<h2 id="toc5"><span><a href="#hello-world">hello world</a></span></h2>
<p>How to write, compile, and run a "Hello, World!" program.</p>
<p><a name="file-suffixes-note" id="file-suffixes-note"></a></p>
<h2 id="toc6"><span><a href="#file-suffixes">file suffixes</a></span></h2>
<p>The suffixes used for source files, header files, and compiled object files.</p>
<p><a name="block-delimiters-note" id="block-delimiters-note"></a></p>
<h2 id="toc7"><span><a href="#block-delimiters">block delimiters</a></span></h2>
<p><a name="stmt-terminator-note" id="stmt-terminator-note"></a></p>
<h2 id="toc8"><span><a href="#stmt-terminator">statement terminator</a></span></h2>
<p><a name="eol-comment-note" id="eol-comment-note"></a></p>
<h2 id="toc9"><span><a href="#eol-comment">end-of-line comment</a></span></h2>
<p>The syntax for a comment which is terminated by the end of the line.</p>
<p><strong>c:</strong></p>
<p>The <tt>//</tt> style comment first appeared in the C99 standard.</p>
<p><a name="multiple-line-comment-note" id="multiple-line-comment-note"></a></p>
<h2 id="toc10"><span><a href="#multiple-line-comment">multiple line comment</a></span></h2>
<p>The syntax for a comment which can span multiple lines.</p>
<p><a name="variables-expressions-note" id="variables-expressions-note"></a></p>
<h1 id="toc11"><span><a href="#variables-expressions">Variables and Expressions</a></span></h1>
<p><a name="null-note" id="null-note"></a></p>
<h2 id="toc12"><span><a href="#null">null</a></span></h2>
<p><strong>c:</strong></p>
<p>A typical definition:</p>
<div class="code">
<pre>
<code>#define NULL (void *)0</code>
</pre></div>
<p><a name="coalesce-note" id="coalesce-note"></a></p>
<h2 id="toc13"><span><a href="#coalesce">coalesce</a></span></h2>
<p>The equivalent of the COALESCE function from SQL.</p>
<p><strong>c:</strong></p>
<p>The short circuit or operator <span style="white-space: pre-wrap;">||</span> can be used as a coalesce operator. However, in C, C++, and Objective C, NULL is identical to zero, whereas in databases they are two distinct values.</p>
<p><a name="primitive-type-stack-note" id="primitive-type-stack-note"></a></p>
<h2 id="toc14"><span><a href="#primitive-type-stack">declare primitive type on stack</a></span></h2>
<p>How to declare a primitive type on the stack.</p>
<p><a name="allocate-note" id="allocate-note"></a></p>
<h2 id="toc15"><span><a href="#allocate">allocate primitive type on heap</a></span></h2>
<p>How to allocate memory for a primitive type on the heap.</p>
<p><a name="free-note" id="free-note"></a></p>
<h2 id="toc16"><span><a href="#free">free primitive type on heap</a></span></h2>
<p>How to free the memory for a primitive type that was allocated on the heap.</p>
<p><a name="unitialized-val-note" id="unitialized-val-note"></a></p>
<h2 id="toc17"><span><a href="#unitialized-val">value of uninitialized types</a></span></h2>
<p>The value assigned to primitive types that are not explicitly initialized.</p>
<p><a name="const-note" id="const-note"></a></p>
<h2 id="toc18"><span><a href="#const">constant</a></span></h2>
<p>How to define a constant.</p>
<p><strong>go:</strong></p>
<p>Multiple constants can be declared in this manner:</p>
<div class="code">
<pre>
<code>const (
  Pi = 3.14
  E = 2.718
)</code>
</pre></div>
<p><a name="assignment-note" id="assignment-note"></a></p>
<h2 id="toc19"><span><a href="#assignment">assignment</a></span></h2>
<p>The syntax for assigning a value to a variable.</p>
<p><a name="parallel-assignment-note" id="parallel-assignment-note"></a></p>
<h2 id="toc20"><span><a href="#parallel-assignment">assignment</a></span></h2>
<p>The syntax for parallel assignment.</p>
<p><a name="swap-note" id="swap-note"></a></p>
<h2 id="toc21"><span><a href="#swap">swap</a></span></h2>
<p>How to swap the values in two variables.</p>
<p><a name="compound-assignment-op-note" id="compound-assignment-op-note"></a></p>
<h2 id="toc22"><span><a href="#compound-assignment-op">compound assignment operators</a></span></h2>
<p><a name="arithmetic-logic-note" id="arithmetic-logic-note"></a></p>
<h1 id="toc23"><span><a href="#arithmetic-logic">Arithmetic and Logic</a></span></h1>
<p><a name="boolean-type-note" id="boolean-type-note"></a></p>
<h2 id="toc24"><span><a href="#boolean-type">boolean type</a></span></h2>
<p><strong>c:</strong></p>
<p>The following definitions are common:</p>
<div class="code">
<pre>
<code>typedef int BOOL;
#define TRUE 1
#define FALSE 0</code>
</pre></div>
<p><a name="true-false-note" id="true-false-note"></a></p>
<h2 id="toc25"><span><a href="#true-false">true and false</a></span></h2>
<p>Literals for the boolean values true and false.</p>
<p><strong>c:</strong></p>
<p>The following definitions are common:</p>
<div class="code">
<pre>
<code>typedef int BOOL;
#define TRUE 1
#define FALSE 0</code>
</pre></div>
<p><a name="falsehoods-note" id="falsehoods-note"></a></p>
<h2 id="toc26"><span><a href="#falsehoods">falsehoods</a></span></h2>
<p>Values which evaluate as false in the conditional expression of an <tt>if</tt> statement.</p>
<p><a name="logical-op-note" id="logical-op-note"></a></p>
<h2 id="toc27"><span><a href="#logical-op">logical operators</a></span></h2>
<p>The logical operators.</p>
<p>In all languages on this sheet the &amp;&amp; and <span style="white-space: pre-wrap;">||</span> operators short circuit: i.e. &amp;&amp; will not evaluate the 2nd argument if the 1st argument is false, and <span style="white-space: pre-wrap;">||</span> will not evaluate the 2nd argument if the 1st argument is true. If the 2nd argument is not evaluated, side-effects that it contains are not executed.</p>
<p><a name="relational-op-note" id="relational-op-note"></a></p>
<h2 id="toc28"><span><a href="#relational-op">relational operators</a></span></h2>
<p>Binary operators which return boolean values.</p>
<p><a name="int-type-note" id="int-type-note"></a></p>
<h2 id="toc29"><span><a href="#int-type">integer type</a></span></h2>
<p>Signed integer types.</p>
<p><strong>c:</strong></p>
<p>Whether <em>char</em> is a signed or unsigned type depends on the implementation.</p>
<p><a name="unsigned-type-note" id="unsigned-type-note"></a></p>
<h2 id="toc30"><span><a href="#unsigned-type">unsigned type</a></span></h2>
<p>Unsigned integer types.</p>
<p><strong>c:</strong></p>
<p>Whether <em>char</em> is a signed or unsigned type depends on the implmentation.</p>
<p><a name="float-type-note" id="float-type-note"></a></p>
<h2 id="toc31"><span><a href="#float-type">float type</a></span></h2>
<p>Floating point types.</p>
<p><a name="arith-op-note" id="arith-op-note"></a></p>
<h2 id="toc32"><span><a href="#arith-op">arithmetic operators</a></span></h2>
<p>The arithmetic binary operators.</p>
<p><a name="int-div-note" id="int-div-note"></a></p>
<h2 id="toc33"><span><a href="#int-div">integer division</a></span></h2>
<p>How to find the quotient of two integers.</p>
<p><a name="int-div-zero-note" id="int-div-zero-note"></a></p>
<h2 id="toc34"><span><a href="#int-div-zero">integer division by zero</a></span></h2>
<p>The result of attempting to divide an integer by zero.</p>
<p><strong>c:</strong></p>
<p>The behavior for division by zero is system dependent; the behavior described is common on Unix.</p>
<p><a name="float-div-note" id="float-div-note"></a></p>
<h2 id="toc35"><span><a href="#float-div">float division</a></span></h2>
<p>How to perform float division on integers.</p>
<p><a name="float-div-zero-note" id="float-div-zero-note"></a></p>
<h2 id="toc36"><span><a href="#float-div-zero">float division by zero</a></span></h2>
<p>The result of attempting to divide a float by zero.</p>
<p><a name="power-note" id="power-note"></a></p>
<h2 id="toc37"><span><a href="#power">power</a></span></h2>
<p>How to perform exponentiation.</p>
<p><a name="sqrt-note" id="sqrt-note"></a></p>
<h2 id="toc38"><span><a href="#sqrt">sqrt</a></span></h2>
<p>The square root function.</p>
<p><a name="sqrt-negative-one-note" id="sqrt-negative-one-note"></a></p>
<h2 id="toc39"><span><a href="#sqrt-negative-one">sqrt -1</a></span></h2>
<p>The result of attempting to find the square root of a negative nubmer.</p>
<p><a name="transcendental-func-note" id="transcendental-func-note"></a></p>
<h2 id="toc40"><span><a href="#transcendental-func">transcendental functions</a></span></h2>
<p>The square root function and the transcendental functions.</p>
<p><a name="float-truncation-note" id="float-truncation-note"></a></p>
<h2 id="toc41"><span><a href="#float-truncation">float truncation</a></span></h2>
<p>Functions for converting a float to a nearby integer value.</p>
<p><strong>c:</strong></p>
<p>The <tt>math.h</tt> library also provides <tt>floor</tt> and <tt>ceil</tt> which return <tt>double</tt> values.</p>
<p><a name="absolute-val-note" id="absolute-val-note"></a></p>
<h2 id="toc42"><span><a href="#absolute-val">absolute value</a></span></h2>
<p>The absolute value of a numeric.</p>
<p><a name="complex-type-note" id="complex-type-note"></a></p>
<h2 id="toc43"><span><a href="#complex-type">complex type</a></span></h2>
<p>Complex floating point types.</p>
<p><a name="complex-construction-note" id="complex-construction-note"></a></p>
<h2 id="toc44"><span><a href="#complex-construction">complex construction</a></span></h2>
<p>How to create a complex number.</p>
<p><a name="complex-decomposition-note" id="complex-decomposition-note"></a></p>
<h2 id="toc45"><span><a href="#complex-decomposition">complex decomposition</a></span></h2>
<p>How to decompose a complex number into its real and imaginary parts; how to get the argument of a complex number.</p>
<p><a name="random-num-note" id="random-num-note"></a></p>
<h2 id="toc46"><span><a href="#random-num">random number</a></span></h2>
<p>How to generate a random integer from a uniform distribution; how to generate a random float from a uniform distribution.</p>
<p><a name="random-seed-note" id="random-seed-note"></a></p>
<h2 id="toc47"><span><a href="#random-seed">random seed</a></span></h2>
<p>How to set the random seed.</p>
<p><a name="bit-op-note" id="bit-op-note"></a></p>
<h2 id="toc48"><span><a href="#bit-op">bit operators</a></span></h2>
<p>The bit operations: right shift, left shift, and, or, exclusive or, and not.</p>
<p><strong>go:</strong></p>
<p>Note that ^ is bit-not and not exclusive-or like in C.</p>
<p><a name="strings-note" id="strings-note"></a></p>
<h1 id="toc49"><span><a href="#strings">Strings</a></span></h1>
<p><a name="str-type-note" id="str-type-note"></a></p>
<h2 id="toc50"><span><a href="#str-type">string type</a></span></h2>
<p>The type for a string</p>
<p><a name="char-type-note" id="char-type-note"></a></p>
<h2 id="toc51"><span><a href="#char-type">char type</a></span></h2>
<p>The type for a character.</p>
<p><a name="str-literal-note" id="str-literal-note"></a></p>
<h2 id="toc52"><span><a href="#str-literal">string literal</a></span></h2>
<p>The syntax for a string literal.</p>
<p><a name="newline-in-str-literal-note" id="newline-in-str-literal-note"></a></p>
<h2 id="toc53"><span><a href="#newline-in-str-literal">newline in string literal</a></span></h2>
<p>Can newlines be included in string literals?</p>
<p><a name="str-literal-esc-note" id="str-literal-esc-note"></a></p>
<h2 id="toc54"><span><a href="#str-literal-esc">string escapes</a></span></h2>
<p>Escape sequences in string literals.</p>
<p><a name="allocate-string" id="allocate-string"></a></p>
<h2 id="toc55"><span>allocate string</span></h2>
<p><a name="string-length" id="string-length"></a></p>
<h2 id="toc56"><span>string length</span></h2>
<p><a name="string-comparison" id="string-comparison"></a></p>
<h2 id="toc57"><span>string comparison</span></h2>
<p><strong>c:</strong></p>
<p>Returns 1, 0, or -1 depending upon whether the first string is lexicographically greater, equal, or less than the second. The variants <em>strncmp</em>, <em>strcasecmp</em>, and <em>strncasecmp</em> can perform comparisons on the first <em>n</em> characters of the strings or case insensitive comparisons.</p>
<p><a name="to-c-string" id="to-c-string"></a></p>
<h2 id="toc58"><span>to C string</span></h2>
<p><a name="string-to-number" id="string-to-number"></a></p>
<h2 id="toc59"><span>numeric conversion</span></h2>
<p><strong>c:</strong></p>
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
<p><a name="split" id="split"></a></p>
<h2 id="toc60"><span>split</span></h2>
<p><a name="join" id="join"></a></p>
<h2 id="toc61"><span>join</span></h2>
<p><a name="string-concatenate" id="string-concatenate"></a></p>
<h2 id="toc62"><span>concatenate</span></h2>
<p><a name="substring" id="substring"></a></p>
<h2 id="toc63"><span>substring</span></h2>
<p><a name="index" id="index"></a></p>
<h2 id="toc64"><span>index</span></h2>
<p><a name="sprintf" id="sprintf"></a></p>
<h2 id="toc65"><span>sprintf</span></h2>
<p><a name="uppercase" id="uppercase"></a></p>
<h2 id="toc66"><span>uppercase</span></h2>
<p><a name="lowercase" id="lowercase"></a></p>
<h2 id="toc67"><span>lowercase</span></h2>
<p><a name="trim" id="trim"></a></p>
<h2 id="toc68"><span>trim</span></h2>
<p><a name="pad" id="pad"></a></p>
<h2 id="toc69"><span>pad</span></h2>
<p><a name="regexes-note" id="regexes-note"></a></p>
<h1 id="toc70"><span><a href="#regexes">Regular Expressions</a></span></h1>
<p><a name="regex-metachar-note" id="regex-metachar-note"></a></p>
<h2 id="toc71"><span><a href="#regex-metachar">metacharacters</a></span></h2>
<p>The list of regular expression metacharacters.</p>
<p>A regular expression that does not contain any metacharacters matches itself as a string.</p>
<p><a name="char-class-abbrev-note" id="char-class-abbrev-note"></a></p>
<h2 id="toc72"><span><a href="#char-class-abbrev">character class abbrevations</a></span></h2>
<p>Abbreviations for character classes.</p>
<p><strong>c:</strong></p>
<p><a href="http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/regex.h.html#tag_13_38">regex.h (POSIX 2008)</a></p>
<p>We describe the <tt>regex</tt> library which is mandated by POSIX.</p>
<p>The PCRE library is available or easily installed on most systems and provides Perl style regular expressions. In particular PCRE has these character class abbreviations: <tt>\d \D \h \H \s \S \v \V \w \W</tt>.</p>
<p>To install PCRE on Ubuntu and read the documentation:</p>
<div class="code">
<pre>
<code>$ sudo apt-get install pcre

$ man pcre</code>
</pre></div>
<p>To include the PCRE definitions in a C file:</p>
<div class="code">
<pre>
<code>#include &lt;pcre.h&gt;</code>
</pre></div>
<p><a name="regex-anchors-note" id="regex-anchors-note"></a></p>
<h2 id="toc73"><span><a href="#regex-anchors">anchors</a></span></h2>
<p>Metacharacters for matching locations in the string which aren't single characters or substrings.</p>
<p><a name="regex-test-note" id="regex-test-note"></a></p>
<h2 id="toc74"><span><a href="#regex-test">match test</a></span></h2>
<p>How to test whether a string matches a regular expression.</p>
<p><a name="case-insensitive-regex-note" id="case-insensitive-regex-note"></a></p>
<h2 id="toc75"><span><a href="#case-insensitive-regex">case insensitive match test</a></span></h2>
<p>How to test whether a string matches a regular expression in a case insensitive manner.</p>
<p><a name="regex-modifiers-note" id="regex-modifiers-note"></a></p>
<h2 id="toc76"><span><a href="#regex-modifiers">modifers</a></span></h2>
<p>Modifers which can be used to customize the behvaior of a regular expression.</p>
<p><a name="subst-note" id="subst-note"></a></p>
<h2 id="toc77"><span><a href="#subst">substitution</a></span></h2>
<p>How to replace the part of a string matching a regular expression.</p>
<p><a name="group-capture-note" id="group-capture-note"></a></p>
<h2 id="toc78"><span><a href="#group-capture">group capture</a></span></h2>
<p>How to use a regular expression to parse a string.</p>
<p><a name="dates-time-note" id="dates-time-note"></a></p>
<h1 id="toc79"><span><a href="#dates-time">Dates and Time</a></span></h1>
<p><a name="date-time-type-note" id="date-time-type-note"></a></p>
<h2 id="toc80"><span><a href="#date-time-type">date/time type</a></span></h2>
<p><a name="date-time-diff-type-note" id="date-time-diff-type-note"></a></p>
<h2 id="toc81"><span><a href="#date-time-diff-type">date/time difference type</a></span></h2>
<p><a name="current-date-time-note" id="current-date-time-note"></a></p>
<h2 id="toc82"><span><a href="#current-date-time">current date/time</a></span></h2>
<p><a name="unix-epoch-note" id="unix-epoch-note"></a></p>
<h2 id="toc83"><span><a href="#unix-epoch">unix epoch</a></span></h2>
<p><a name="date-to-str-note" id="date-to-str-note"></a></p>
<h2 id="toc84"><span><a href="#date-to-str">convert to string</a></span></h2>
<p><a name="strftime-note" id="strftime-note"></a></p>
<h2 id="toc85"><span><a href="#strftime">strftime</a></span></h2>
<p><a name="date-parts-note" id="date-parts-note"></a></p>
<h2 id="toc86"><span><a href="#date-parts">date parts</a></span></h2>
<p><a name="time-parts-note" id="time-parts-note"></a></p>
<h2 id="toc87"><span><a href="#time-parts">time parts</a></span></h2>
<p><a name="build-date-time-note" id="build-date-time-note"></a></p>
<h2 id="toc88"><span><a href="#build-date-time">build date/time from parts</a></span></h2>
<p><a name="arrays-note" id="arrays-note"></a></p>
<h1 id="toc89"><span><a href="#arrays">Arrays</a></span></h1>
<p><a name="declare-array-note" id="declare-array-note"></a></p>
<h2 id="toc90"><span><a href="#declare-array">declare</a></span></h2>
<p>How to declare an array variable.</p>
<p><a name="allocate-array-on-stack-note" id="allocate-array-on-stack-note"></a></p>
<h2 id="toc91"><span><a href="#allocate-array-on-stack">allocate on stack</a></span></h2>
<p>How to allocate an array on the stack.</p>
<p><a name="allocate-array-on-heap-note" id="allocate-array-on-heap-note"></a></p>
<h2 id="toc92"><span><a href="#allocate-array-on-heap">allocate on heap</a></span></h2>
<p>How to allocate an array on the heap.</p>
<p><a name="free-array-on-heap-note" id="free-array-on-heap-note"></a></p>
<h2 id="toc93"><span><a href="#free-array-on-heap">free heap</a></span></h2>
<p>How to free an array that was allocated on the heap.</p>
<p><a name="array-literal-note" id="array-literal-note"></a></p>
<h2 id="toc94"><span><a href="#array-literal">literal</a></span></h2>
<p>Syntax for an array literal.</p>
<p><a name="array-size-note" id="array-size-note"></a></p>
<h2 id="toc95"><span><a href="#array-size">size</a></span></h2>
<p>How many elements are stored in an array.</p>
<p><a name="array-lookup-note" id="array-lookup-note"></a></p>
<h2 id="toc96"><span><a href="#array-lookup">lookup</a></span></h2>
<p>How to get an element by index.</p>
<p><strong>c:</strong></p>
<p>Arrays can be manipulated with pointer syntax. The following sets <em>x</em> and <em>y</em> to the same value:</p>
<div class="code">
<pre>
<code>int a[] = {3,7,4,8,5,9,6,10};
int x = a[4];
int y = *(a+4);</code>
</pre></div>
<p><a name="array-update-note" id="array-update-note"></a></p>
<h2 id="toc97"><span><a href="#array-update">update</a></span></h2>
<p>How to set or change the element stored at an index.</p>
<p><a name="array-out-of-bounds-note" id="array-out-of-bounds-note"></a></p>
<h2 id="toc98"><span><a href="#array-out-of-bounds">out-of-bounds behavior</a></span></h2>
<p>What happens when an attempt is made to access an element at an invalid index.</p>
<p><a name="array-element-index-note" id="array-element-index-note"></a></p>
<h2 id="toc99"><span><a href="#array-element-index">element index</a></span></h2>
<p><a name="slice-array-note" id="slice-array-note"></a></p>
<h2 id="toc100"><span><a href="#slice-array">slice</a></span></h2>
<p><a name="slice-array-to-end-note" id="slice-array-to-end-note"></a></p>
<h2 id="toc101"><span><a href="#slice-array-to-end">slice to end</a></span></h2>
<p><a name="array-back-note" id="array-back-note"></a></p>
<h2 id="toc102"><span><a href="#array-back">manipulate back</a></span></h2>
<p><a name="array-front-note" id="array-front-note"></a></p>
<h2 id="toc103"><span><a href="#array-front">manipulate front</a></span></h2>
<p><a name="concatenate-array-note" id="concatenate-array-note"></a></p>
<h2 id="toc104"><span><a href="#concatenate-array">concatenate</a></span></h2>
<p><a name="copy-array-note" id="copy-array-note"></a></p>
<h2 id="toc105"><span><a href="#copy-array">copy</a></span></h2>
<p><a name="array-as-func-arg-note" id="array-as-func-arg-note"></a></p>
<h2 id="toc106"><span><a href="#array-as-func-arg">array as function argument</a></span></h2>
<p><a name="iterate-over-array-note" id="iterate-over-array-note"></a></p>
<h2 id="toc107"><span><a href="#iterate-over-array">iterate</a></span></h2>
<p>How to iterate over the elements of an array.</p>
<p><strong>c:</strong></p>
<p>C arrays do not store their size; if needed the information can be stored in a separate variable. Another option is to use a special value to mark the end of the array:</p>
<div class="code">
<pre>
<code>char *a[] = { "Bob", "Ned", "Amy", NULL };
int i;
for (i=0; a[i]; i++) {
  printf("%s\n", a[i]);
}</code>
</pre></div>
<p><a name="sort-array-note" id="sort-array-note"></a></p>
<h2 id="toc108"><span><a href="#sort-array">sort</a></span></h2>
<p>How to sort the elements of an array.</p>
<p><a name="dictionaries-note" id="dictionaries-note"></a></p>
<h1 id="toc109"><span><a href="#dictionaries">Dictionaries</a></span></h1>
<p><a name="map" id="map"></a></p>
<h2 id="toc110"><span>map declaration</span></h2>
<p><strong>c:</strong></p>
<p>For those interested in an industrial strength hashtable implementation for C, here is the <a href="http://svn.ruby-lang.org/cgi-bin/viewvc.cgi/trunk/include/ruby/st.h?revision=26401&amp;view=markup">header file</a> and the <a href="http://svn.ruby-lang.org/cgi-bin/viewvc.cgi/trunk/st.c?revision=26672&amp;view=markup">source file</a> for the hashtable used by Ruby.<br />
For those interested in a "Computer Science 101" implementation of a hashtable, here is a simpler <a href="http://gist.github.com/400762">source file</a> and <a href="http://gist.github.com/400764">header file</a>.</p>
<p><a name="map-access" id="map-access"></a></p>
<h2 id="toc111"><span>map access</span></h2>
<p><a name="map-size" id="map-size"></a></p>
<h2 id="toc112"><span>map size</span></h2>
<p><a name="map-remove" id="map-remove"></a></p>
<h2 id="toc113"><span>map remove</span></h2>
<p><a name="map-element-not-found" id="map-element-not-found"></a></p>
<h2 id="toc114"><span>map element not found result</span></h2>
<p><a name="map-iterator" id="map-iterator"></a></p>
<h2 id="toc115"><span>map iterator</span></h2>
<p><a name="functions-note" id="functions-note"></a></p>
<h1 id="toc116"><span><a href="#functions">Functions</a></span></h1>
<p><a name="def-func-note" id="def-func-note"></a></p>
<h2 id="toc117"><span><a href="#def-func">define function</a></span></h2>
<p>How to define a function.</p>
<p><a name="invoke-func-note" id="invoke-func-note"></a></p>
<h2 id="toc118"><span><a href="#invoke-func">invoke function</a></span></h2>
<p>How to invoke a function.</p>
<p><a name="forward-decl-func-note" id="forward-decl-func-note"></a></p>
<h2 id="toc119"><span><a href="#forward-decl-func">forward declaration of function</a></span></h2>
<p>How to declare a function without defining it.</p>
<p><a name="overload-func-note" id="overload-func-note"></a></p>
<h2 id="toc120"><span><a href="#overload-func">overload function</a></span></h2>
<p>How to define multiple functions with the same name. The functions differ in either the number or type of arguments.</p>
<p><a name="nest-func-note" id="nest-func-note"></a></p>
<h2 id="toc121"><span><a href="#nest-func">nest function</a></span></h2>
<p>How to define a function inside another function.</p>
<p><a name="missing-arg-note" id="missing-arg-note"></a></p>
<h2 id="toc122"><span><a href="#missing-arg">missing argument behavior</a></span></h2>
<p>What happens when a function is invoked with too few arguments.</p>
<p><a name="extra-arg-note" id="extra-arg-note"></a></p>
<h2 id="toc123"><span><a href="#extra-arg">extra argument behavior</a></span></h2>
<p>What happens when a function is invoked with too many arguments.</p>
<p><a name="default-val-param-note" id="default-val-param-note"></a></p>
<h2 id="toc124"><span><a href="#default-val-param">default value for parameter</a></span></h2>
<p><a name="variable-num-arg-note" id="variable-num-arg-note"></a></p>
<h2 id="toc125"><span><a href="#variable-num-arg">variable number of arguments</a></span></h2>
<p><strong>c:</strong></p>
<p>The stdarg.h library supports variable length functions, but provides no means for the callee to determine how many arguments were provided. Two techniques for communicating the number of arguments to the caller are (1) devote one of the non-variable arguments for the purpose as illustrated in the table above, or (2) set the last argument to a sentinel value as illustrated below. Both techniques permit the caller to make a mistake that can cause the program to segfault. <em>printf</em> uses the first technique, because it infers the number of arguments from the number of format specifiers in the format string.</p>
<div class="code">
<pre>
<code>char* concat(char* first,  ...) {

  int len;
  va_list ap;
  char *retval, *arg;

  va_start(ap, first);
  len = strlen(first);

  while (1) {
    arg = va_arg(ap, char*);
    if (!arg) {
      break;
    }
    len += strlen(arg);
  }

  va_end(ap);

  retval = calloc(len+1,sizeof(char));

  va_start(ap, first);

  strcpy(retval, first);
  len = strlen(first);

  while (1) {
    arg = va_arg(ap, char*);
    if (!arg) {
      break;
    }
    printf("copying %s\n", arg);
    strcpy(retval+len, arg);
    len += strlen(arg);
  }

  va_end(ap);

  return retval;
}</code>
</pre></div>
<p>An example of use:</p>
<div class="code">
<pre>
<code>string *s = concat("Hello", ", ", "World", "!", NULL);</code>
</pre></div>
<p><a name="named-param-note" id="named-param-note"></a></p>
<h2 id="toc126"><span><a href="#named-param">named parameters</a></span></h2>
<p><a name="pass-by-val-note" id="pass-by-val-note"></a></p>
<h2 id="toc127"><span><a href="#pass-by-val">pass by value</a></span></h2>
<p><a name="pass-by-addr-note" id="pass-by-addr-note"></a></p>
<h2 id="toc128"><span><a href="#pass-by-addr">pass by address</a></span></h2>
<p><a name="pass-by-ref-note" id="pass-by-ref-note"></a></p>
<h2 id="toc129"><span><a href="#pass-by-ref">pass by reference</a></span></h2>
<p><a name="retval-note" id="retval-note"></a></p>
<h2 id="toc130"><span><a href="#retval">return value</a></span></h2>
<p>How the return value for a function is determined.</p>
<p><a name="no-retval-note" id="no-retval-note"></a></p>
<h2 id="toc131"><span><a href="#no-retval">no return value</a></span></h2>
<p>How to define a function with no return value.</p>
<p><a name="multiple-retval-note" id="multiple-retval-note"></a></p>
<h2 id="toc132"><span><a href="#multiple-retval">multiple return values</a></span></h2>
<p>How to return multiple values.</p>
<p><a name="named-retval-note" id="named-retval-note"></a></p>
<h2 id="toc133"><span><a href="#named-retval">named return values</a></span></h2>
<p>How to return values by assigning values to variables.</p>
<p><a name="anonymous-func-literal-note" id="anonymous-func-literal-note"></a></p>
<h2 id="toc134"><span><a href="#anonymous-func-literal">anonymous function literal</a></span></h2>
<p><a name="func-private-state-note" id="func-private-state-note"></a></p>
<h2 id="toc135"><span><a href="#func-private-state">function with private state</a></span></h2>
<p><a name="func-as-val-note" id="func-as-val-note"></a></p>
<h2 id="toc136"><span><a href="#func-as-val">function as value</a></span></h2>
<p><a name="execution-control-note" id="execution-control-note"></a></p>
<h1 id="toc137"><span><a href="#execution-control">Execution Control</a></span></h1>
<p><a name="for-note" id="for-note"></a></p>
<h2 id="toc138"><span><a href="#for">for</a></span></h2>
<p><a name="if-note" id="if-note"></a></p>
<h2 id="toc139"><span><a href="#if">if</a></span></h2>
<p><strong>c:</strong></p>
<p>The curly braces surrounding an <em>if</em> or <em>else</em> clause are optional if the clause contains a single statement. The resulting <a href="http://en.wikipedia.org/wiki/Dangling_else">dangling else</a> ambiguity is resolved by setting the value of <em>c</em> to 2 in the following code:</p>
<div class="code">
<pre>
<code>int a = 1;
int b = -1;
int c = 0;
if (a &gt; 0)
if (b &gt; 0)
  c=1;
else
  c= 2;</code>
</pre></div>
<p><a name="while-note" id="while-note"></a></p>
<h2 id="toc140"><span><a href="#while">while</a></span></h2>
<p><strong>c:</strong></p>
<p>If the body of a while loop consists of a single statement the curly braces are optional:</p>
<div class="code">
<pre>
<code>int i = 0;
while (i&lt;10)
  printf("%d\n", ++i);</code>
</pre></div>
<p><a name="switch-note" id="switch-note"></a></p>
<h2 id="toc141"><span><a href="#switch">switch</a></span></h2>
<p>A switch statement branches based on the value of an integer or an integer expression. Each clause must be terminated by a <em>break</em> statement or execution will continue into the following clause.</p>
<p><a name="break-continue-note" id="break-continue-note"></a></p>
<h2 id="toc142"><span><a href="#break-continue">break/continue</a></span></h2>
<p><a name="concurrency-note" id="concurrency-note"></a></p>
<h1 id="toc143"><span><a href="#concurrency">Concurrency</a></span></h1>
<p><a name="file-handles-note" id="file-handles-note"></a></p>
<h1 id="toc144"><span><a href="#file-handles">File Handles</a></span></h1>
<p><a name="std-file-handles-note" id="std-file-handles-note"></a></p>
<h2 id="toc145"><span><a href="#std-file-handles">standard file handles</a></span></h2>
<p>The file handles for standard input, standard output, and standard error.</p>
<p><strong>c:</strong></p>
<p>POSIX systems provide processes with the ability to open multiple files and manipulate them with via integers called file descriptors. Normally the integers 0, 1, and 2 refer to standard input, standard output, and standard error. The header &lt;unistd.h&gt; defines the macros STDIN_FILENO, STDOUT_FILENO, and STDERR_FILENO for these file descriptors.</p>
<p>System calls take file descriptors as arguments, but the C standard library provides an alternate set functions for buffered I/O. The standard library functions use <tt>FILE</tt> structs to identify streams and open files.</p>
<p><a name="read-line-stdin-note" id="read-line-stdin-note"></a></p>
<h2 id="toc146"><span><a href="#read-line-stdin">read line from stdin</a></span></h2>
<p>How to read a line from standard input.</p>
<p><a name="write-line-stdout-note" id="write-line-stdout-note"></a></p>
<h2 id="toc147"><span><a href="#write-line-stdout">write line to stdout</a></span></h2>
<p>How to write a line to standard output.</p>
<p><a name="printf-note" id="printf-note"></a></p>
<h2 id="toc148"><span><a href="#printf">write formatted string to stdout</a></span></h2>
<p>How to print a formatted string to standard out.</p>
<p><strong>c:</strong></p>
<p>The <a href="http://linux.die.net/man/3/printf">printf man page</a> describes the notation used in C style format strings.</p>
<p><a name="open-file-note" id="open-file-note"></a></p>
<h2 id="toc149"><span><a href="#open-file">open file for reading</a></span></h2>
<p>How to open a file for reading.</p>
<p><a name="open-file-write-note" id="open-file-write-note"></a></p>
<h2 id="toc150"><span><a href="#open-file-write">open file for writing</a></span></h2>
<p>How to open a file for reading.</p>
<p><a name="open-file-append-note" id="open-file-append-note"></a></p>
<h2 id="toc151"><span><a href="#open-file-append">open file for appending</a></span></h2>
<p>How to open a file for appending.</p>
<p><a name="close-file-note" id="close-file-note"></a></p>
<h2 id="toc152"><span><a href="#close-file">close file</a></span></h2>
<p>How to close a file handle.</p>
<p><a name="close-file-implicitly-note" id="close-file-implicitly-note"></a></p>
<h2 id="toc153"><span><a href="#close-file-implicitly">close file implicitly</a></span></h2>
<p><a name="io-err-note" id="io-err-note"></a></p>
<h2 id="toc154"><span><a href="#io-err">i/o errors</a></span></h2>
<p><a name="read-line-note" id="read-line-note"></a></p>
<h2 id="toc155"><span><a href="#read-line">read line</a></span></h2>
<p><a name="file-line-iterate-note" id="file-line-iterate-note"></a></p>
<h2 id="toc156"><span><a href="#file-line-iterate">iterate over file by line</a></span></h2>
<p><a name="read-file-array-note" id="read-file-array-note"></a></p>
<h2 id="toc157"><span><a href="#read-file-array">read file into array of strings</a></span></h2>
<p><a name="read-file-str-note" id="read-file-str-note"></a></p>
<h2 id="toc158"><span><a href="#read-file-str">read file into string</a></span></h2>
<p><a name="write-str-note" id="write-str-note"></a></p>
<h2 id="toc159"><span><a href="#write-str">write string</a></span></h2>
<p><a name="write-line-note" id="write-line-note"></a></p>
<h2 id="toc160"><span><a href="#write-line">write line</a></span></h2>
<p><a name="flush-note" id="flush-note"></a></p>
<h2 id="toc161"><span><a href="#flush">flush file handle</a></span></h2>
<p><a name="eof-test-note" id="eof-test-note"></a></p>
<h2 id="toc162"><span><a href="#eof-test">end-of-file test</a></span></h2>
<p><a name="seek-note" id="seek-note"></a></p>
<h2 id="toc163"><span><a href="#seek">get and set file handle position</a></span></h2>
<p><a name="tmp-file-note" id="tmp-file-note"></a></p>
<h2 id="toc164"><span><a href="#tmp-file">open unused file</a></span></h2>
<p>How to open a file with a previously unused file name.</p>
<p><strong>c:</strong></p>
<p>The function <tt>mkstemps</tt> can be used to create a new file with a fixed suffix: "/tmp/fooXXXXXXsuffix".</p>
<p><a name="files-note" id="files-note"></a></p>
<h1 id="toc165"><span><a href="#files">Files</a></span></h1>
<p><a name="file-test-note" id="file-test-note"></a></p>
<h2 id="toc166"><span><a href="#file-test">file test, regular file test</a></span></h2>
<p>Does the file exist; is the file a regular file.</p>
<p><a name="file-size-note" id="file-size-note"></a></p>
<h2 id="toc167"><span><a href="#file-size">file size</a></span></h2>
<p>The size of the file in bytes.</p>
<p><a name="readable-writable-executable-note" id="readable-writable-executable-note"></a></p>
<h2 id="toc168"><span><a href="#readable-writable-executable">is file readable, writable, executable</a></span></h2>
<p>Can the process read, write, or executable the file?</p>
<p><strong>c:</strong></p>
<p><tt>access</tt> returns 0 if the process has the permission, and -1 if it doesn't or some other error occurred.</p>
<p><tt>access</tt> uses the real user id to determine permission even though the kernel uses the effective user id.</p>
<p><a name="chmod-note" id="chmod-note"></a></p>
<h2 id="toc169"><span><a href="#chmod">set file permissions</a></span></h2>
<p><a name="file-cp-rm-mv-note" id="file-cp-rm-mv-note"></a></p>
<h2 id="toc170"><span><a href="#file-cp-rm-mv">copy file, remove file, rename file</a></span></h2>
<p><a name="symlink-note" id="symlink-note"></a></p>
<h2 id="toc171"><span><a href="#symlink">create symlink, symlink test, readlink</a></span></h2>
<p><a name="unused-file-name-note" id="unused-file-name-note"></a></p>
<h2 id="toc172"><span><a href="#unused-file-name">generate unused file name</a></span></h2>
<p><a name="file-fmt-note" id="file-fmt-note"></a></p>
<h1 id="toc173"><span><a href="#file-fmt">File Formats</a></span></h1>
<p><a name="directories-note" id="directories-note"></a></p>
<h1 id="toc174"><span><a href="#directories">Directories</a></span></h1>
<p><a name="build-pathname-note" id="build-pathname-note"></a></p>
<h2 id="toc175"><span><a href="#build-pathname">build pathname</a></span></h2>
<p><a name="dirname-basename-note" id="dirname-basename-note"></a></p>
<h2 id="toc176"><span><a href="#dirname-basename">dirname and basename</a></span></h2>
<p><a name="absolute-pathname-note" id="absolute-pathname-note"></a></p>
<h2 id="toc177"><span><a href="#absolute-pathname">absolute pathname</a></span></h2>
<p><a name="dir-iterate-note" id="dir-iterate-note"></a></p>
<h2 id="toc178"><span><a href="#dir-iterate">iterate over directory by file</a></span></h2>
<p><a name="glob-note" id="glob-note"></a></p>
<h2 id="toc179"><span><a href="#glob">glob paths</a></span></h2>
<p><a name="mkdir-note" id="mkdir-note"></a></p>
<h2 id="toc180"><span><a href="#mkdir">make directory</a></span></h2>
<p><a name="recursive-cp-note" id="recursive-cp-note"></a></p>
<h2 id="toc181"><span><a href="#recursive-cp">recursive copy</a></span></h2>
<p><a name="rmdir-note" id="rmdir-note"></a></p>
<h2 id="toc182"><span><a href="#rmdir">remove empty directory</a></span></h2>
<p><a name="rm-rf-note" id="rm-rf-note"></a></p>
<h2 id="toc183"><span><a href="#rm-rf">remove directory and contents</a></span></h2>
<p><a name="dir-test-note" id="dir-test-note"></a></p>
<h2 id="toc184"><span><a href="#dir-test">directory test</a></span></h2>
<p><a name="unused-dir-note" id="unused-dir-note"></a></p>
<h2 id="toc185"><span><a href="#unused-dir">generate unused directory</a></span></h2>
<p><a name="system-tmp-dir-note" id="system-tmp-dir-note"></a></p>
<h2 id="toc186"><span><a href="#system-tmp-dir">system temporary file directory</a></span></h2>
<p><a name="processes-environment-note" id="processes-environment-note"></a></p>
<h1 id="toc187"><span><a href="#processes-environment">Processes and Environment</a></span></h1>
<p><a name="main" id="main"></a></p>
<h2 id="toc188"><span>signature of main</span></h2>
<p><a name="first-argument" id="first-argument"></a></p>
<h2 id="toc189"><span>first argument</span></h2>
<p><strong>c:</strong></p>
<p>The first argument is the pathname to the executable. Whether the pathname is absolute or relative depends on how the executable was invoked. If the executable was invoked via a symlink, then the first argument is the pathname of the symlink, not the executable the symlink points to.</p>
<p><a name="environment-variable" id="environment-variable"></a></p>
<h2 id="toc190"><span>environment variable</span></h2>
<p><a name="iterate-thru-environment-variables" id="iterate-thru-environment-variables"></a></p>
<h2 id="toc191"><span>iterate thru environment variables</span></h2>
<p><a name="exit-note" id="exit-note"></a></p>
<h2 id="toc192"><span><a href="#exit">exit</a></span></h2>
<p>How to set the exit status and cause the process to exit.</p>
<p><strong>c:</strong></p>
<p>On POSIX systems zero indicates success and other values indicate failure.</p>
<p>On Linux and Mac OS X the value returned to the parent is <tt>exit_arg &amp; 0377</tt>. If the process exited because of a signal, the kernel sets the exit status to 128 plus the signal number. The signals are numbered starting from 1, leaving exit status values from 1 to 127 and perhaps 128 available for other failure conditions.</p>
<p>The C standard library defines the values EXIT_SUCCESS and EXIT_FAILURE as an aid for writing code which is portable to systems which do not use 0 to indicate success.</p>
<p><a name="libraries-namespaces-note" id="libraries-namespaces-note"></a></p>
<h1 id="toc193"><span><a href="#libraries-namespaces">Libraries and Namespaces</a></span></h1>
<p><a name="user-defined-types-note" id="user-defined-types-note"></a></p>
<h1 id="toc194"><span><a href="#user-defined-types">User-Defined Types</a></span></h1>
<p><a name="typedef-note" id="typedef-note"></a></p>
<h2 id="toc195"><span><a href="#typedef">typedef</a></span></h2>
<p><strong>c:</strong></p>
<p>Because C integer types don't have well defined sizes, <em>typedef</em> is sometimes employed to as an aid to writing portable code. One might include the following in a header file:</p>
<div class="code">
<pre>
<code>typedef int int32_t;</code>
</pre></div>
<p>The rest of the code would declare integers that need to be 32 bits in size using <em>int32_t</em> and if the code needed to be ported to a platform with a 16 bit <em>int</em>, only a single place in the code requires change. In practice the <em>typedef</em> abstraction is leaky because functions in the standard library such as <em>atoi</em>, <em>strtol</em>, or the format strings used by <em>printf</em> depend on the underlying type used.</p>
<p><a name="enum-note" id="enum-note"></a></p>
<h2 id="toc196"><span><a href="#enum">enum</a></span></h2>
<p><strong>c:</strong></p>
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
<p><a name="struct-definition" id="struct-definition"></a></p>
<h2 id="toc197"><span>struct definition</span></h2>
<p>A struct provides names for elements in a predefined set of data and permits the data to be accessed directly without the intermediation of getters and setters. C++, Java, and C# classes can be used to define structs by making the data members public. However, public data members violates the <a href="http://en.wikipedia.org/wiki/Uniform_access_principle">uniform access principle</a>.</p>
<p><a name="struct-declaration" id="struct-declaration"></a></p>
<h2 id="toc198"><span>struct declaration</span></h2>
<p><a name="struct-initialization" id="struct-initialization"></a></p>
<h2 id="toc199"><span>struct initialization</span></h2>
<p><strong>c:</strong></p>
<p>The literal format for a struct can only be used during initialization. If the member names are not provided, the values must occur in the order used in the definition.</p>
<p><a name="struct-member-assignment" id="struct-member-assignment"></a></p>
<h2 id="toc200"><span>struct member assignment</span></h2>
<p><a name="struct-member-access" id="struct-member-access"></a></p>
<h2 id="toc201"><span>struct member access</span></h2>
<p><strong>c:</strong></p>
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
<p><a name="union-definition" id="union-definition"></a></p>
<h2 id="toc202"><span>union definition</span></h2>
<p><a name="union-access" id="union-access"></a></p>
<h2 id="toc203"><span>union access</span></h2>
<p><a name="macros-note" id="macros-note"></a></p>
<h1 id="toc204"><span><a href="#macros">Macros</a></span></h1>
<p><a name="net-web-note" id="net-web-note"></a></p>
<h1 id="toc205"><span><a href="#net-web">Net and Web</a></span></h1>
<p><a name="unit-tests-note" id="unit-tests-note"></a></p>
<h1 id="toc206"><span><a href="#unit-tests">Unit Tests</a></span></h1>
<p><a name="debugging-profiling-note" id="debugging-profiling-note"></a></p>
<h1 id="toc207"><span><a href="#debugging-profiling">Debugging and Profiling</a></span></h1>
<p><a name="multidimensional-arrays-note" id="multidimensional-arrays-note"></a></p>
<h1 id="toc208"><span><a href="#multidimensional-arrays">Multidimensional Arrays</a></span></h1>
<p><a name="vectors-note" id="vectors-note"></a></p>
<h1 id="toc209"><span><a href="#vectors">Vectors</a></span></h1>
<p><a name="matrices-note" id="matrices-note"></a></p>
<h1 id="toc210"><span><a href="#matrices">Matrices</a></span></h1>
<p><a name="c" id="c"></a></p>
<h1 id="toc211"><span><a href="#top">C</a></span></h1>
<p><a href="http://flash-gordon.me.uk/ansi.c.txt">ANSI C Standard</a> 1990<br /><a href="http://www.open-std.org/jtc1/sc22/WG14/www/docs/n1256.pdf">ANSI C Standard (pdf)</a> 1999<br /><a href="http://www.utas.edu.au/infosys/info/documentation/C/CStdLib.html">C Standard Library</a><br /><a href="http://www.opengroup.org/onlinepubs/9699919799/idx/head.html">POSIX Library C Headers</a><br /><a href="http://linuxmanpages.com/man2/">Linux System Call Man Pages</a><br /><a href="http://linuxmanpages.com/man3/">Linux Subroutine Man Pages</a><br /><a href="http://en.wikipedia.org/wiki/C_standard_library">C Standard Library</a><br /><a href="http://www.gnu.org/software/libc/manual/html_mono/libc.html">GNU C Library</a></p>
<p><a name="go" id="go"></a></p>
<h1 id="toc212"><span><a href="#top">Go</a></span></h1>
<p><a href="http://golang.org/doc/go_spec.html">Language Specification</a><br /><a href="http://golang.org/pkg/">Package Reference</a></p>

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
