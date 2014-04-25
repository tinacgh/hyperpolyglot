<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html lang="en" xml:lang="en" xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="content-type" content="text/html;charset=UTF-8"/>
<link rel="icon" type="image/gif" href="/favicon.gif"/>
<link rel="apple-touch-icon" sizes="120x120" href="touch-icon-iphone-retina.png" />
<link rel="apple-touch-icon" sizes="152x152" href="touch-icon-ipad-retina.png" />
<title>Lisp: Common Lisp, Racket, Clojure, Emacs Lisp - Hyperpolyglot</title>
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
                            Lisp: Common Lisp, Racket, Clojure, Emacs Lisp
                        </div>
<div id="page-content">
                        

<p><a name="top" id="top"></a><em>a side-by-side reference sheet</em></p>
<p><a href="#grammar-invocation">grammar and invocation</a> | <a href="#var-expr">variables and expressions</a> | <a href="#arithmetic-logic">arithmetic and logic</a> | <a href="#strings">strings</a> | <a href="#lists">lists</a><br /><a href="#arrays">arrays</a> | <a href="#dictionaries">dictionaries</a> | <a href="#functions">functions</a> | <a href="#macros">macros</a> | <a href="#execution-control">execution control</a> | <a href="#file-handles">file handles</a> | <a href="#file-buffers">file buffers</a> | <a href="#files">files</a> | <a href="#directories">directories</a><br /><a href="#processes-environment">processes and environment</a> | <a href="#libraries-namespaces">libraries and namespaces</a> | <a href="#objects">objects</a> | <a href="#reflection">reflection</a> | <a href="#java-interop">java interop</a><br /></p>
<table class="wiki-content-table"><tr><th><a name="general" id="general"></a></th>
<th><a href="#common-lisp">common lisp</a></th>
<th><a href="#racket">racket</a></th>
<th><a href="#clojure">clojure</a></th>
<th><a href="#emacs-lisp">emacs lisp</a></th>
</tr><tr><td><a name="version-used" id="version-used"></a><a href="#version-used-note">version used</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>SBCL 1.0.48</em></span></td>
<td><span style="color: gray"><em>Racket 5.1</em></span></td>
<td><span style="color: gray"><em>Clojure 1.2</em></span></td>
<td><span style="color: gray"><em>Emacs 24.1</em></span></td>
</tr><tr><td><a name="show-version" id="show-version"></a><a href="#show-version-note">show version</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>$ sbcl <span style="white-space: pre-wrap;">--</span>version</td>
<td>$ racket <span style="white-space: pre-wrap;">--</span>version</td>
<td><span style="color: gray"><em>displayed by repl on startup</em></span></td>
<td>$ emacs <span style="white-space: pre-wrap;">--</span>version</td>
</tr><tr><th colspan="5"><a name="grammar-invocation" id="grammar-invocation"></a><a href="#grammar-invocation-note">grammar and invocation</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a name="compiler" id="compiler"></a><a href="#compiler-note">compiler</a></td>
<td></td>
<td>$ mzc <span style="color: gray"><em>module</em></span>.rkt</td>
<td></td>
<td>M-x byte-compile-file</td>
</tr><tr><td><a href="#executable">making a standalone executable</a></td>
<td>(sb-ext:save-lisp-and-die<br /><span style="white-space: pre-wrap;">  </span>"<span style="color: gray"><em>executable</em></span>"<br /><span style="white-space: pre-wrap;">  </span>:executable t<br /><span style="white-space: pre-wrap;">  </span>:toplevel '<span style="color: gray"><em>function</em></span>)</td>
<td>$ mzc —exe <span style="color: gray"><em>executable</em></span> <span style="color: gray"><em>file</em></span></td>
<td></td>
<td><span style="color: gray"><em>see note</em></span></td>
</tr><tr><td><a name="shebang" id="shebang"></a><a href="#shebang-note">shebang</a></td>
<td>#!/usr/bin/env sbcl <span style="white-space: pre-wrap;">--</span>script</td>
<td>#!/usr/bin/env racket <span style="white-space: pre-wrap;">--</span>script</td>
<td><span style="color: gray"><em>specify full path to clojure jar:</em></span><br />
#!/usr/bin/env java -jar clojure.jar</td>
<td>#!/usr/bin/env emacs <span style="white-space: pre-wrap;">--</span>script</td>
</tr><tr><td><a name="repl" id="repl"></a><a href="#repl-note">repl</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>$ sbcl</td>
<td>$ racket</td>
<td>$ java -jar /PATH/TO/clojure.jar</td>
<td>M-x ielm</td>
</tr><tr><td><a name="word-separator" id="word-separator"></a><a href="#word-separator-note">word separator</a></td>
<td><span style="color: gray"><em>whitespace</em></span></td>
<td><span style="color: gray"><em>whitespace</em></span></td>
<td><span style="color: gray"><em>whitespace and commas</em></span></td>
<td><span style="color: gray"><em>whitespace</em></span></td>
</tr><tr><td><a name="identifiers-case-sensitive" id="identifiers-case-sensitive"></a><a href="#identifiers-case-sensitive-note">are identifiers case sensitive?</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>no</em></span></td>
<td><span style="color: gray"><em>yes</em></span></td>
<td><span style="color: gray"><em>yes</em></span></td>
<td><span style="color: gray"><em>yes</em></span></td>
</tr><tr><td><a name="identifier-char" id="identifier-char"></a><a href="#identifier-char-note">identifier characters</a></td>
<td><span style="color: gray"><em>everything except whitespace and:</em></span><br />
( ) " , ' <span style="white-space: pre-wrap;">`</span> : ; # | \<br /><br /><span style="color: gray"><em>reserved for user macros:</em></span><br />
? ! [ ] { }</td>
<td><span style="color: gray"><em>everything except whitespace and:</em></span><br />
( ) [ ] { } " , ' <span style="white-space: pre-wrap;">`</span> ; # | \</td>
<td><span style="color: gray"><em>alphanumerics and these:</em></span><br />
* + ! - _ ?<br /><br /><span style="color: gray"><em>these have special meaning or are reserved:</em></span><br />
/ . :</td>
<td><span style="color: gray"><em>everything except whitespace and:</em></span><br />
( ) " , ' <span style="white-space: pre-wrap;">`</span> ; # | \ _ [ ]</td>
</tr><tr><td><a name="esc-char-in-identifiers" id="esc-char-in-identifiers"></a><a href="#esc-char-in-identifiers-note">escaping characters in identifiers</a></td>
<td>(setq white\ space\ symbol 3)</td>
<td><span style="color: gray"><em>racket:</em></span><br />
(define white\ space\ symbol 3)</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(setq white\ space\ symbol 3)</td>
</tr><tr><td><a name="quoting-char-in-identifiers" id="quoting-char-in-identifiers"></a><a href="#quoting-char-in-identifiers-note">quoting characters in identifiers</a></td>
<td>(setq |white space symbol| 3)</td>
<td>(define |white space symbol| 3)</td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="eol-comment" id="eol-comment"></a><a href="#eol-comment-note">end-of-line comment</a></td>
<td>(+ 1 1) ; adding</td>
<td>(+ 1 1) ; adding</td>
<td>(+ 1 1) ; adding</td>
<td>(+ 1 1) ; adding</td>
</tr><tr><td><a name="multiple-line-comment" id="multiple-line-comment"></a><a href="#multiple-line-comment-note">multiple line comment</a></td>
<td>(+ 1 #| adding |# 1)</td>
<td><span style="color: gray"><em>r6rs:</em></span><br />
(+ 1 #| adding |# 1)</td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="var-expr" id="var-expr"></a><a href="#var-expr-note">variables and expressions</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a href="#label">label</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>set,setq,defun</td>
<td>define</td>
<td>def,defn</td>
<td>set,setq,defun</td>
</tr><tr><td><a href="#quote">quote</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>quote</td>
<td>quote</td>
<td>quote</td>
<td>quote</td>
</tr><tr><td><a href="#cell-types">cell types</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>value, function, struct, class, …</em></span></td>
<td><span style="color: gray"><em>value</em></span></td>
<td><span style="color: gray"><em>value</em></span></td>
<td><span style="color: gray"><em>value, function, struct, …</em></span></td>
</tr><tr><td><a name="null" id="null"></a><a href="#null-note">null</a></td>
<td>nil</td>
<td>null</td>
<td>nil</td>
<td>nil</td>
</tr><tr><td><a name="null-test" id="null-test"></a><a href="#null-test-note">null test</a></td>
<td>(null foo)</td>
<td>(null? foo)</td>
<td>(nil? foo)</td>
<td>(null foo)</td>
</tr><tr><td>is the empty list null?</td>
<td><span style="color: gray"><em>yes</em></span></td>
<td><span style="color: gray"><em>yes</em></span></td>
<td><span style="color: gray"><em>no</em></span></td>
<td><span style="color: gray"><em>yes</em></span></td>
</tr><tr><td>is null literal a symbol?</td>
<td><span style="color: gray"><em>yes</em></span></td>
<td><span style="color: gray"><em>yes</em></span></td>
<td><span style="color: gray"><em>no</em></span></td>
<td><span style="color: gray"><em>yes</em></span></td>
</tr><tr><td><a href="#type-predicates">type predicates</a></td>
<td>null symbolp atom consp listp numberp characterp stringp</td>
<td>null? symbol? <span style="color: gray"><em>none</em></span> pair? list? number? char? string?<br /><span style="color: gray"><em>racket:</em></span> cons? <span style="color: gray"><em>synonym for</em></span> pair?</td>
<td>nil? symbol? <span style="color: gray"><em>none</em></span> <span style="color: gray"><em>none</em></span> list? number? <span style="color: gray"><em>none</em></span> string?</td>
<td>null symbolp atom consp listp numberp characterp stringp</td>
</tr><tr><td><a href="#set-property">set property</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(setf (get 'foo :prop) 13)</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(def foo (with-meta 'x { :prop 13 }))</td>
<td>(setf (get 'foo :prop) 13)</td>
</tr><tr><td><a href="#get-property">get property</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(get 'foo :prop)</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(get (meta foo) :prop)</td>
<td>(get 'foo :prop)</td>
</tr><tr><td><a href="#remove-property">remove property</a></td>
<td>(remprop 'foo :prop)</td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(remprop 'foo :prop)</td>
</tr><tr><td><a href="#quoted-symbol">quoted symbol</a></td>
<td>'foo<br />
(quote foo)</td>
<td>'foo<br />
(quote foo)</td>
<td>'foo<br />
(quote foo)</td>
<td>'foo<br />
(quote foo)</td>
</tr><tr><td><a href="#keyword">keyword</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>:foo</td>
<td>#:foo</td>
<td>:foo</td>
<td>:foo</td>
</tr><tr><th colspan="5"><a name="arithmetic-logic" id="arithmetic-logic"></a><a href="#arithmetic-logic-note">arithmetic and logic</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a name="true-false" id="true-false"></a><a href="#true-false-note">true and false</a></td>
<td>t nil</td>
<td>#t #f<br /><span style="color: gray"><em>racket:</em></span> true false</td>
<td>true false</td>
<td>t nil</td>
</tr><tr><td><a name="falsehoods" id="falsehoods"></a><a href="#falsehoods-note">falsehoods</a></td>
<td>nil ()</td>
<td>#f<br /><span style="color: gray"><em>racket:</em></span> #f false</td>
<td>false nil</td>
<td>nil ()</td>
</tr><tr><td><a name="is-true-symbol" id="is-true-symbol"></a><a href="#is-true-symbol-note">is true a symbol?</a></td>
<td><span style="color: gray"><em>yes</em></span></td>
<td><span style="color: gray"><em>no</em></span></td>
<td><span style="color: gray"><em>no</em></span></td>
<td><span style="color: gray"><em>yes</em></span></td>
</tr><tr><td><a name="logical-op" id="logical-op"></a><a href="#logical-op-note">logical operators</a></td>
<td>(or (not t) (and t nil))</td>
<td>(or (not #t) (and #t #f))</td>
<td>(or (not true) (and true false))</td>
<td>(or (not t) (and t nil))</td>
</tr><tr><td><a name="relational-op" id="relational-op"></a><a href="#relational-op-note">relational operators</a></td>
<td><span style="white-space: pre-wrap;">=</span> /= &lt; &gt; &lt;= &gt;=</td>
<td><span style="white-space: pre-wrap;">=</span> <span style="color: gray"><em>none</em></span> &lt; &gt; &lt;= &gt;=</td>
<td><span style="white-space: pre-wrap;">=</span> <span style="color: gray"><em>none</em></span> &lt; &gt; &lt;= &gt;=</td>
<td><span style="white-space: pre-wrap;">=</span> /= &lt; &gt; &lt;= &gt;=</td>
</tr><tr><td><a href="#eq">eq, equal, =</a></td>
<td>eq, equal, =</td>
<td>eq?, equal?, =</td>
<td><span style="white-space: pre-wrap;">=</span> <span style="color: gray"><em>works on symbols and is true for lists with identical members</em></span></td>
<td>eq, equal, =</td>
</tr><tr><td><a name="min-max" id="min-max"></a><a href="#min-max-note">min and max</a></td>
<td>(min 1 2 3)<br />
(max 1 2 3)</td>
<td>(min 1 2 3)<br />
(max 1 2 3)</td>
<td>(min 1 2 3)<br />
(max 1 2 3)</td>
<td>(min 1 2 3)<br />
(max 1 2 3)</td>
</tr><tr><td><a name="num-predicates" id="num-predicates"></a><a href="#num-predicates-note">numeric predicates</a></td>
<td>numberp integerp<br />
rationalp floatp<br />
realp complexp</td>
<td>number? integer?<br />
rational? inexact?<br />
real? complex?</td>
<td>number? integer?<br />
rational? float?<br /><span style="color: gray"><em>none</em></span> <span style="color: gray"><em>none</em></span></td>
<td>numberp integerp<br /><span style="color: gray"><em>none</em></span> floatp<br /><span style="color: gray"><em>none</em></span> <span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="arith-op" id="arith-op"></a><a href="#arith-op-note">arithmetic operators</a></td>
<td>+ - * / mod</td>
<td>+ - * / modulo</td>
<td>+ - * / mod</td>
<td>+ - * / %</td>
</tr><tr><td>algebraic notation</td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="int-div" id="int-div"></a><a href="#int-div-note">integer division</a><br /><span style="color: gray"><em>and remainder</em></span></td>
<td>(truncate 7 3)<br />
(rem 7 3)</td>
<td>(quotient 7 3)<br />
(remainder 7 3)</td>
<td>(quot 7 3)<br />
(rem 7 3)</td>
<td>(/ 7 3)<br />
(% 7 3)</td>
</tr><tr><td><a name="int-div-zero" id="int-div-zero"></a><a href="#int-div-zero-note">integer division by zero</a></td>
<td></td>
<td></td>
<td></td>
<td><span style="color: gray">arith-error</span></td>
</tr><tr><td><a name="float-div" id="float-div"></a><a href="#float-div-note">float division</a></td>
<td><span style="color: gray"><em>rational:</em></span><br />
(/ 7 3)<br /><br /><span style="color: gray"><em>float:</em></span><br />
(/ 7 (* 3 1.0))</td>
<td><span style="color: gray"><em>rational:</em></span><br />
(/ 7 3)<br /><br /><span style="color: gray"><em>float:</em></span><br />
(/ 7 (float 3))</td>
<td><span style="color: gray"><em>rational:</em></span><br />
(/ 7 3)<br /><br /><span style="color: gray"><em>float:</em></span><br />
(/ 7 (* 3 1.0))</td>
<td><span style="color: gray"><em>integer quotient:</em></span><br />
(/ 7 3)<br /><br /><span style="color: gray"><em>float:</em></span><br />
(/ 7 (* 3 1.0))</td>
</tr><tr><td><a name="float-div-zero" id="float-div-zero"></a><a href="#float-div-zero-note">float division by zero</a></td>
<td></td>
<td></td>
<td></td>
<td>-1.0e+INF, -0.0e+NaN, <span style="color: gray"><em>or</em></span> 1.0e+INF</td>
</tr><tr><td><a name="power" id="power"></a><a href="#power-note">power</a></td>
<td>(expt 2 32)</td>
<td>(expt 2 32)</td>
<td><span style="color: gray"><em>returns float:</em></span><br />
(Math/pow 2 32)</td>
<td>(expt 2 32)</td>
</tr><tr><td><a name="sqrt" id="sqrt"></a><a href="#sqrt-note">sqrt</a></td>
<td>(sqrt 2)</td>
<td>(sqrt 2)</td>
<td>(Math/sqrt 2)</td>
<td>(sqrt 2)</td>
</tr><tr><td><a name="sqrt-negative-one" id="sqrt-negative-one"></a><a href="#sqrt-negative-one">sqrt -1</a></td>
<td>#C(0.0 1.0)</td>
<td>0+1i</td>
<td><span style="color: gray"><em>(Math/sqrt -1):</em></span> NaN</td>
<td>-0.0e+NaN</td>
</tr><tr><td><a name="transcendental-func" id="transcendental-func"></a><a href="#transcendental-func-note">transcendental functions</a></td>
<td>exp log sin cos tan asin acos atan atan</td>
<td>exp log sin cos tan asin acos atan atan</td>
<td>Math/exp Math/log Math/sin Math/cos Math/tan Math/asin Math/acos Math/atan Math/atan2</td>
<td>exp log sin cos tan asin acos atan atan</td>
</tr><tr><td><a name="float-truncation" id="float-truncation"></a><a href="#float-truncation-note">float truncation</a></td>
<td><span style="color: gray"><em>return two values, first is integer:</em></span><br />
truncate round ceiling floor</td>
<td><span style="color: gray"><em>return floats:</em></span><br />
truncate round ceiling floor</td>
<td><span style="color: gray"><em>return integers:</em></span><br />
int Math/round<br /><span style="color: gray"><em>return floats:</em></span><br />
Math/ceil Math/floor</td>
<td>truncate round ceiling floor<br />
fround fceiling ffloor<br /><span style="color: gray">truncate <em>returns integer</em></span></td>
</tr><tr><td><a name="abs-val" id="abs-val"></a><a href="#abs-val-note">absolute value</a><br /><span style="color: gray"><em>and signum</em></span></td>
<td>abs signum</td>
<td>abs<br /><span style="color: gray"><em>racket:</em></span> sgn</td>
<td>Math/abs Math/signum</td>
<td>abs signum</td>
</tr><tr><td><a name="rational-decomposition" id="rational-decomposition"></a><a href="#rational-decomposition-note">rational decomposition</a></td>
<td>numerator denominator</td>
<td>numerator denominator</td>
<td>(.numerator x)<br />
(.denominator x)</td>
<td><span style="color: gray"><em>none</em></span> <span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="complex-decomposition" id="complex-decomposition"></a><a href="#complex-decomposition-note">complex decomposition</a></td>
<td>realpart imagpart</td>
<td>real-part imag-part</td>
<td><span style="color: gray"><em>none</em></span><br /><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span> <span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="random-num" id="random-num"></a><a href="#random-num-note">random number</a><br /><span style="color: gray"><em>uniform integer, uniform float, normal float</em></span></td>
<td>(random 100)<br />
(random 1.0)<br /><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>gambit and srfi 27:</em></span><br />
(random-integer 100)<br />
(random-real)<br /><span style="color: gray"><em>none</em></span><br /><span style="white-space: pre-wrap;"> </span><br /><span style="color: gray"><em>racket:</em></span><br />
(random 100)<br />
(random)<br /><span style="color: gray"><em>none</em></span></td>
<td>(def rnd (java.util.Random.))<br />
(.nextInt rnd 100)<br />
(.nextFloat rnd)<br />
(.nextGaussian rnd)</td>
<td>(random 100)<br /><span style="color: gray"><em>none</em></span><br /><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a name="random-seed" id="random-seed"></a><a href="#random-seed-note">random seed</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="bit-op" id="bit-op"></a><a href="#bit-op-note">bit operators</a></td>
<td>ash <span style="color: gray"><em>left shift when 2nd argument positive</em></span> logand logior logxor lognot</td>
<td>arithmetic-shift <span style="color: gray"><em>left shift when 2nd argument positive</em></span> bitwise-and bitwise-ior bitwise-xor bitwise-not</td>
<td>bit-shift-left bit-shift-right bit-and bit-or bit-xor bit-not</td>
<td>lsh <span style="color: gray"><em>left shift when 2nd argument positive</em></span> logand logior logxor lognot</td>
</tr><tr><th colspan="5"><a name="strings" id="strings"></a><a href="#strings-note">strings</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a href="#character-literal">character literals</a></td>
<td>#\a #\Space #\Newline #\Backspace #\Tab #\Linefeed #\Page #\Return #\Rubout</td>
<td>#\a #\space #\newline #\backspace #\tab #\linefeed #\page #\return #\nul #\vtab #\alarm #\esc #\delete<br /><span style="color: gray"><em>not in racket:</em> #\alarm #\esc #\delete</span></td>
<td>\a \newline \space \backspace \tab <span style="color: gray"><em>?</em></span> \formfeed \return <span style="color: gray"><em>?</em></span></td>
<td>?a ?\b ?\t ?\n ?\f ?\r ?\" ?\\ ?\<span style="color: gray"><em>ooo</em></span> ?\u<span style="color: gray"><em>hhhh</em></span> ?\x<span style="color: gray"><em>h</em></span> - ?\x<span style="color: gray"><em>hhhhhh</em></span> ?\C-<span style="color: gray"><em>x</em></span> ?\M-<span style="color: gray"><em>x</em></span></td>
</tr><tr><td><a href="#string-literal">string literal</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>"foo bar"</td>
<td>"foo bar"</td>
<td>"foo bar"</td>
<td>"foo bar"</td>
</tr><tr><td><a href="#string-escapes">string escapes</a></td>
<td>\" \\</td>
<td>\t \n \r \" \\ \<span style="color: gray"><em>ooo</em></span> \u<span style="color: gray"><em>hhhh</em></span></td>
<td>\b \t \n \f \r \" \\ \<span style="color: gray"><em>ooo</em></span> \u<span style="color: gray"><em>hhhh</em></span></td>
<td>\b \t \n \f \r \" \\ \<span style="color: gray"><em>ooo</em></span> \u<span style="color: gray"><em>hhhh</em></span> \x<span style="color: gray"><em>h</em></span> - \x<span style="color: gray"><em>hhhhhh</em></span> \C-<span style="color: gray"><em>x</em></span> \M-<span style="color: gray"><em>x</em></span></td>
</tr><tr><td><a href="#string-char">character access</a></td>
<td>(char "foo" 0)</td>
<td>(string-ref "foo" 0)</td>
<td>(.charAt "foo" 0)</td>
<td>(aref "foo" 0)</td>
</tr><tr><td><a href="#find-substring">find substring</a></td>
<td>(search "bar" "foo bar")</td>
<td><span style="color: gray"><em>racket:</em></span><br />
(require srfi/13/string)<br />
(string-contains "foo bar" "bar")</td>
<td>(.indexOf "foo bar" "bar")</td>
<td>(search "bar" "foo bar")</td>
</tr><tr><td><a href="#extract-substring">extract substring</a></td>
<td>(subseq "foo bar" 4 7)</td>
<td>(substring "foo bar" 4 7)</td>
<td>(.substring "foo bar" 4 7)</td>
<td>(substring "foo bar" 4 7)</td>
</tr><tr><td><a href="#string-length">length</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(length "foo")</td>
<td>(string-length "foo")</td>
<td>(.length "foo")</td>
<td>(length "foo")</td>
</tr><tr><td><a href="#string-constructors">constructors</a></td>
<td>(make-string 3 :initial-element #\f)<br /><span style="white-space: pre-wrap;"> </span><br />
(reduce (lambda (m o)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(concatenate 'string m<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(string o)))<br /><span style="white-space: pre-wrap;">  </span>'(#\f #\o #\o)<br /><span style="white-space: pre-wrap;">  </span>:initial-value "")</td>
<td>(make-string 3 #\f)<br /><span style="white-space: pre-wrap;"> </span><br />
(string #\f #\o #\o)</td>
<td>(String. (into-array<br /><span style="white-space: pre-wrap;">  </span>(. Character TYPE)<br /><span style="white-space: pre-wrap;">  </span>(repeat 3 \f)))<br /><span style="white-space: pre-wrap;"> </span><br />
(String. (into-array<br /><span style="white-space: pre-wrap;">  </span>(. Character TYPE)<br /><span style="white-space: pre-wrap;">  </span>'(\f \o \o)))</td>
<td>(make-string 3 ?f)<br /><span style="white-space: pre-wrap;"> </span><br />
(string ?f ?o ?o)</td>
</tr><tr><td><a href="#string-comparison">comparison</a></td>
<td>(string= "foo" "bar")<br />
(string&lt; "foo" "bar")</td>
<td>(string=? "foo" "bar")<br />
(string&lt;? "foo" "bar")</td>
<td>(.equals "foo" "bar")<br />
(.compareTo "foo" "bar")</td>
<td>(string= "foo" "bar")<br />
(string&lt; "foo" "bar")</td>
</tr><tr><td><a href="#string-case">case</a></td>
<td>(string-downcase "FOO")<br />
(string-upcase "foo")<br />
(string-capitalize "foo")</td>
<td>(string-downcase "FOO")</td>
<td>(.toLowerCase "FOO")</td>
<td>(downcase "FOO")<br />
(upcase "foo")<br />
(capitalize "foo")</td>
</tr><tr><td><a href="#string-trim">trim</a></td>
<td>(string-trim<br /><span style="white-space: pre-wrap;">  </span>'(#\Space #\Tab #\Newline)<br /><span style="white-space: pre-wrap;">  </span>" foo ")</td>
<td>(require srfi/13/string)<br />
(string-trim-both " foo ")</td>
<td>(.trim " foo ")</td>
<td><span style="color: gray"><em>none; see notes for an implementation</em></span></td>
</tr><tr><td><a href="#string-concat">concat</a></td>
<td>(concatenate 'string<br /><span style="white-space: pre-wrap;">  </span>"foo "<br /><span style="white-space: pre-wrap;">  </span>"bar "<br /><span style="white-space: pre-wrap;">  </span>"baz")</td>
<td>(string-append<br /><span style="white-space: pre-wrap;">  </span>"foo "<br /><span style="white-space: pre-wrap;">  </span>"bar "<br /><span style="white-space: pre-wrap;">  </span>"baz")</td>
<td>(str "foo " "bar " "baz")</td>
<td>(concat "foo " "bar " "baz")</td>
</tr><tr><td><a href="#number-string">convert from string, to string</a></td>
<td>(+ 7 (parse-integer "12"))<br /><span style="white-space: pre-wrap;"> </span><br />
(+ 73.9 (read-from-string ".037"))<br /><span style="white-space: pre-wrap;"> </span><br />
(concatenate 'string<br /><span style="white-space: pre-wrap;">  </span>"value: "<br /><span style="white-space: pre-wrap;">  </span>(princ-to-string 8))</td>
<td>(+ 7 (string-&gt;number "12"))<br /><span style="white-space: pre-wrap;"> </span><br />
(+ 73.9 (string-&gt;number ".037"))<br /><span style="white-space: pre-wrap;"> </span><br />
(string-append<br /><span style="white-space: pre-wrap;">  </span>"value: "<br /><span style="white-space: pre-wrap;">  </span>(number-&gt;string 8))</td>
<td>(+ 7 (Integer/parseInt "12"))<br /><span style="white-space: pre-wrap;"> </span><br />
(+ 73.9 (Float/parseFloat ".037"))<br /><span style="white-space: pre-wrap;"> </span><br />
(str "Value: " 8)</td>
<td>(+ 7 (string-to-number "12"))<br /><span style="white-space: pre-wrap;"> </span><br />
(+ 73.9<br /><span style="white-space: pre-wrap;">  </span>(string-to-number ".037"))<br /><span style="white-space: pre-wrap;"> </span><br />
(concat<br /><span style="white-space: pre-wrap;">  </span>"value: "<br /><span style="white-space: pre-wrap;">  </span>(number-to-string 8))</td>
</tr><tr><td><a href="#string-split">split</a></td>
<td>(cl-ppcre:split<br /><span style="white-space: pre-wrap;">  </span>"[ \t\n]+"<br /><span style="white-space: pre-wrap;">  </span>"foo bar baz")</td>
<td>(regexp-split #rx"[ \n\t]+"<br /><span style="white-space: pre-wrap;">  </span>"foo bar baz")</td>
<td>(seq<br /><span style="white-space: pre-wrap;">  </span>(.split "foo bar baz"<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>"[ \t\n]+"))</td>
<td>(split-string "foo bar baz")</td>
</tr><tr><td><a href="#string-join">join</a></td>
<td>(reduce<br /><span style="white-space: pre-wrap;">  </span>(lambda (m o)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(concatenate 'string m " " o))<br /><span style="white-space: pre-wrap;">  </span>'("foo" "bar" "baz"))</td>
<td>(string-join<br /><span style="white-space: pre-wrap;">  </span>'("foo" "bar" "baz")<br /><span style="white-space: pre-wrap;">  </span>" ")</td>
<td>(reduce #(str %1 " " %2)<br /><span style="white-space: pre-wrap;">  </span>'("foo" "bar" "baz"))</td>
<td>(reduce<br /><span style="white-space: pre-wrap;">  </span>(lambda (m o) (concat m " " o))<br /><span style="white-space: pre-wrap;">  </span>'("foo" "bar" "baz"))</td>
</tr><tr><td><a href="#format">format</a></td>
<td>(format nil "~a: ~a ~,2F"<br /><span style="white-space: pre-wrap;">  </span>"Foo"<br /><span style="white-space: pre-wrap;">  </span>7<br /><span style="white-space: pre-wrap;">  </span>13.457)</td>
<td>(format "~a ~a ~a" "Foo" 7 13.457)</td>
<td>(String/format "%s: %d %.2f"<br /><span style="white-space: pre-wrap;">  </span>(to-array ["Foo" 7 13.457]))</td>
<td>(format "%s: %d %.2f"<br /><span style="white-space: pre-wrap;">  </span>"Foo"<br /><span style="white-space: pre-wrap;">  </span>7<br /><span style="white-space: pre-wrap;">  </span>13.457)</td>
</tr><tr><td><a href="#regular-expressions">regular expressions</a></td>
<td>(cl-ppcre:all-matches<br /><span style="white-space: pre-wrap;">  </span>"bar"<br /><span style="white-space: pre-wrap;">  </span>"foo bar")</td>
<td>(regexp-match #rx"bar" "foo bar")</td>
<td>(re-seq #"bar" "foo bar")</td>
<td>(string-match "bar" "foo bar")</td>
</tr><tr><td><a href="#regex-substitution">regex substitution</a></td>
<td>(cl-ppcre:regex-replace "[^l]l"<br /><span style="white-space: pre-wrap;">  </span>"hello"<br /><span style="white-space: pre-wrap;">  </span>"EL")<br /><span style="white-space: pre-wrap;"> </span><br />
(cl-ppcre:regex-replace-all "[^l]l"<br /><span style="white-space: pre-wrap;">  </span>"hello hello"<br /><span style="white-space: pre-wrap;">  </span>"EL")</td>
<td>(regexp-replace #rx"el"<br /><span style="white-space: pre-wrap;">  </span>"hello"<br /><span style="white-space: pre-wrap;">  </span>"EL")<br /><span style="white-space: pre-wrap;"> </span><br />
(regexp-replace* #rx"el"<br /><span style="white-space: pre-wrap;">  </span>"hello hello"<br /><span style="white-space: pre-wrap;">  </span>"EL")</td>
<td>(.replaceFirst "hello" "[^l]l" "XX")<br /><span style="white-space: pre-wrap;"> </span><br />
(.replaceAll "hello hello"<br /><span style="white-space: pre-wrap;">  </span>"[^l]l" "XX")</td>
<td><span style="color: gray"><em>?</em></span><br /><span style="white-space: pre-wrap;"> </span><br />
(replace-regexp-in-string "[^l]l"<br /><span style="white-space: pre-wrap;">  </span>"EL"<br /><span style="white-space: pre-wrap;">  </span>"hello hello")</td>
</tr><tr><td><a href="#regex-special-chars">regex special characters</a></td>
<td>(cl-ppcre:all-matches<br /><span style="white-space: pre-wrap;">  </span>"^[0-9a-f]+$"<br /><span style="white-space: pre-wrap;">  </span>"1ab7")<br /><span style="white-space: pre-wrap;"> </span><br />
(cl-ppcre:all-matches<br /><span style="white-space: pre-wrap;">  </span>"(\\d\\w\\s)\\1"<br /><span style="white-space: pre-wrap;">  </span>"8a 8a ")</td>
<td>(regexp-match #rx"^[a-f0-9]+$"<br /><span style="white-space: pre-wrap;">  </span>"1ab7")<br /><span style="white-space: pre-wrap;"> </span><br />
(regexp-match #px"(\\d\\w\\s)\\1"<br /><span style="white-space: pre-wrap;">  </span>"8a 8a ")</td>
<td>(re-seq #"^[0-9a-f]+$" "1ab7")<br /><span style="white-space: pre-wrap;"> </span><br />
(re-seq #"(\d\w\s)\1" "8a 8a ")</td>
<td>(string-match<br /><span style="white-space: pre-wrap;">  </span>"^[0-9a-f]+$"<br /><span style="white-space: pre-wrap;">  </span>"1abf")</td>
</tr><tr><th colspan="5"><a name="lists" id="lists"></a><a href="#lists-note">lists</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a href="#list-literal">list literal</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>'(1 2 3)</td>
<td>'(1 2 3) <span style="color: gray"><em>or</em></span> '[1 2 3] <span style="color: gray"><em>or</em></span> '{1 2 3}</td>
<td>'(1 2 3)</td>
<td>'(1 2 3)</td>
</tr><tr><td><a href="#pair-literal">pair literal</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>'(1 . 2)</td>
<td>'(1 . 2)</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>'(1 . 2)</td>
</tr><tr><td><a href="#car">car</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>car, first</td>
<td>car <span style="color: gray"><em>racket:</em></span> car, first</td>
<td>first</td>
<td>car</td>
</tr><tr><td><a href="#cdr">cdr</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>cdr, rest</td>
<td>cdr <span style="color: gray"><em>racket:</em></span> cdr, rest</td>
<td>rest, next</td>
<td>cdr</td>
</tr><tr><td><a href="#cons">cons</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>cons</td>
<td>cons</td>
<td>cons <span style="color: gray"><em>2nd arg must be a list</em></span></td>
<td>cons</td>
</tr><tr><td><a href="#atom">atom</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(atom x)</td>
<td>(not (pair? x))</td>
<td>(not (list? x))</td>
<td>(atom x)</td>
</tr><tr><td><a href="#car-nil">(car '())</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>nil</td>
<td><span style="color: gray"><em>error</em></span></td>
<td><span style="color: gray"><em>first:</em></span> nil</td>
<td>nil</td>
</tr><tr><td><a href="#cdr-nil">(cdr '())</a></td>
<td>nil</td>
<td><span style="color: gray"><em>error</em></span></td>
<td><span style="color: gray"><em>rest:</em></span> ()<br /><span style="color: gray"><em>next:</em></span> nil</td>
<td>nil</td>
</tr><tr><td><a href="#eval-nil">(eval '())</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>nil</td>
<td><span style="color: gray"><em>error</em></span></td>
<td>()</td>
<td>nil</td>
</tr><tr><td><a href="#list-functions">list functions</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>list listp length append reverse</td>
<td>list list? length append reverse</td>
<td>list list? count concat reverse</td>
<td>list listp length append reverse</td>
</tr><tr><td><a href="#nth">nth</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(nth 3 '(0 1 2 3))</td>
<td>(list-ref '(0 1 2 3) 3)</td>
<td>(nth '(0 1 2 3) 3)</td>
<td>(nth 3 '(0 1 2 3))</td>
</tr><tr><td><a href="#list-element-index">index of list element</a></td>
<td>(position 7 '(5 6 7 8))</td>
<td><span style="color: gray"><em>srfi-1:</em></span><br />
(list-index<br /><span style="white-space: pre-wrap;">  </span>(lambda (x) (= x 7))<br /><span style="white-space: pre-wrap;">  </span>'(5 6 7 8))</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(position 7 '(5 6 7 8))</td>
</tr><tr><td><a href="#last-butlast">last butlast</a></td>
<td>(setq a '(1 2 3))<br />
(car (last a))<br />
(butlast a)</td>
<td><span style="color: gray"><em>racket:</em></span><br />
(define a '(1 2 3))<br />
(last a)<br />
(take a (- (length a) 1))</td>
<td>(def a '(1 2 3))<br />
(last a)<br />
(butlast a)</td>
<td>(car (last a))<br />
(butlast a)</td>
</tr><tr><td><a href="#set-car-cdr">set-car set-cdr</a></td>
<td>(setq a '(1 2 3))<br />
(setf (car a) 3)<br />
(setf (cdr a) '(4 5 6))</td>
<td><span style="color: gray"><em>r5rs only:</em></span><br />
(define a '(1 2 3))<br />
(set-car! a 3)<br />
(set-cdr! a '(4 5 6))</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(setq a '(1 2 3)<br />
(setcar a 3)<br />
(setcdr a '(4 5 6))</td>
</tr><tr><td><a href="#sort">sort</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(sort '(3 2 4 1) '&lt;)</td>
<td>(sort '(3 2 4 1) &lt;)</td>
<td>(sort &lt; '(3 2 4 1))</td>
<td>(sort '(3 2 4 1) '&lt;)</td>
</tr><tr><td><a href="#assoc">assoc</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(assoc 3 '((1 2) (3 4)))</td>
<td>(assoc 3 '((1 2) (3 4)))</td>
<td><span style="color: gray"><em>none, see note</em></span></td>
<td>(assoc 3 '((1 2) (3 4)))</td>
</tr><tr><td><a href="#getf">getf</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(getf '(1 2 3 4) 3)</td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(getf '(1 2 3 4) 3)</td>
</tr><tr><td><a href="#map">map</a></td>
<td>(mapcar<br /><span style="white-space: pre-wrap;">  </span>(lambda (x) (* x x))<br /><span style="white-space: pre-wrap;">  </span>'(1 2 3))</td>
<td>(map (lambda (x) (* x x)) '(1 2 3))</td>
<td>(map #(* % %) '(1 2 3))</td>
<td>(mapcar<br /><span style="white-space: pre-wrap;">  </span>(lambda (x) (* x x))<br /><span style="white-space: pre-wrap;">  </span>'(1 2 3))</td>
</tr><tr><td><a href="#filter">filter</a></td>
<td>(remove-if-not<br /><span style="white-space: pre-wrap;">  </span>(lambda (x) (&gt; x 2))<br /><span style="white-space: pre-wrap;">  </span>'(1 2 3))<br /><span style="color: gray">remove-if <em>returns complement</em></span></td>
<td><span style="color: gray"><em>racket and srfi-1:</em></span><br />
(filter<br /><span style="white-space: pre-wrap;">  </span>(lambda (x) (&gt; x 2))<br /><span style="white-space: pre-wrap;">  </span>'(1 2 3))<br /><span style="color: gray">filter-not <em>returns complement</em></span></td>
<td>(filter #(&gt; % 2) '(1 2 3))<br /><span style="color: gray">remove <em>returns complement</em></span></td>
<td>(remove-if-not<br /><span style="white-space: pre-wrap;">  </span>(lambda (x) (&gt; x 2))<br /><span style="white-space: pre-wrap;">  </span>'(1 2 3))<br /><span style="color: gray">remove-if <em>returns complement</em></span></td>
</tr><tr><td><a href="#reduce">reduce (left fold)</a></td>
<td>(reduce '-<br /><span style="white-space: pre-wrap;">  </span>'(1 2 3 4)<br /><span style="white-space: pre-wrap;">  </span>:initial-value 0)</td>
<td><span style="color: gray"><em>srfi-1:</em></span><br />
(fold - 0 '(1 2 3 4))<br /><span style="color: gray"><em>racket:</em></span><br />
(foldl - 0 '(1 2 3 4))</td>
<td>(reduce - 0 '(1 2 3 4))</td>
<td>(reduce '-<br /><span style="white-space: pre-wrap;">  </span>'(1 2 3 4)<br /><span style="white-space: pre-wrap;">  </span>:initial-value 0)</td>
</tr><tr><td><a href="#right-fold">right fold</a></td>
<td>(reduce '-<br /><span style="white-space: pre-wrap;">  </span>'(1 2 3 4)<br /><span style="white-space: pre-wrap;">  </span>:initial-value 0<br /><span style="white-space: pre-wrap;">  </span>:from-end t)</td>
<td><span style="color: gray"><em>srfi-1:</em></span><br />
(fold-right - 0 '(1 2 3 4))<br /><span style="color: gray"><em>racket:</em></span><br />
(foldr - 0 '(1 2 3 4))</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(reduce '-<br /><span style="white-space: pre-wrap;">  </span>'(1 2 3 4)<br /><span style="white-space: pre-wrap;">  </span>:initial-value 0<br /><span style="white-space: pre-wrap;">  </span>:from-end t)</td>
</tr><tr><td><a href="#sublis">sublis</a></td>
<td>(sublis '((1 . 2) (3 . 4))<br /><span style="white-space: pre-wrap;">  </span>'(1 (3 3 (1))))</td>
<td></td>
<td></td>
<td>(sublis '((1 . 2) (3 . 4))<br /><span style="white-space: pre-wrap;">  </span>'(1 (3 3 (1))))</td>
</tr><tr><td><a href="#dolist">dolist</a></td>
<td>(dolist (x '(1 2 3))<br /><span style="white-space: pre-wrap;">  </span>(print x)<br /><span style="white-space: pre-wrap;">  </span>(print (- x)))</td>
<td><span style="color: gray"><em>racket:</em></span><br />
(for ((x '(1 2 3)))<br /><span style="white-space: pre-wrap;">  </span>(printf "~a~n" x)<br /><span style="white-space: pre-wrap;">  </span>(printf "~a~n" (- x)))</td>
<td>(doseq [x '(1 2 3)]<br /><span style="white-space: pre-wrap;">  </span>(println x)<br /><span style="white-space: pre-wrap;">  </span>(println (- x)))</td>
<td>(dolist (x '(1 2 3))<br /><span style="white-space: pre-wrap;">  </span>(print x)<br /><span style="white-space: pre-wrap;">  </span>(print (- x)))</td>
</tr><tr><td><a href="#universal-predicate">universal predicate</a></td>
<td>(every<br /><span style="white-space: pre-wrap;">  </span>(lambda (i) (= 0 (rem i 2)))<br /><span style="white-space: pre-wrap;">  </span>'(1 2 3 4))</td>
<td><span style="color: gray"><em>racket:</em></span><br />
(for/and ((i '(1 2 3 4)))<br /><span style="white-space: pre-wrap;">  </span>(= 0 (remainder i 2)))</td>
<td>(every? #(= 0 (rem % 2)) '(1 2 3 4))</td>
<td>(every<br /><span style="white-space: pre-wrap;">  </span>(lambda (i) (= 0 (% i 2)))<br /><span style="white-space: pre-wrap;">  </span>'(1 2 3 4))</td>
</tr><tr><td><a href="#existential-predicate">existential predicate</a></td>
<td>(some<br /><span style="white-space: pre-wrap;">  </span>(lambda (i) (= 0 (rem i 2)))<br /><span style="white-space: pre-wrap;">  </span>'(1 2 3 4))</td>
<td><span style="color: gray"><em>racket:</em></span><br />
(for/or ((i '(1 2 3 4)))<br /><span style="white-space: pre-wrap;">  </span>(= 0 (remainder i 2)))</td>
<td>(some #(= 0 (rem % 2)) '(1 2 3 4))</td>
<td>(some<br /><span style="white-space: pre-wrap;">  </span>(lambda (i) (= 0 (% i 2)))<br /><span style="white-space: pre-wrap;">  </span>'(1 2 3 4))</td>
</tr><tr><td><a href="#take">take</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>racket and srfi-1:</em></span><br />
(take '(1 2 3 4) 2)</td>
<td>(take 2 '(1 2 3 4))</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#drop">drop</a></td>
<td>(nthcdr 2 '(1 2 3 4))</td>
<td><span style="color: gray"><em>racket and srfi-1:</em></span><br />
(drop '(1 2 3 4) 2)</td>
<td>(drop 2 '(1 2 3 4))</td>
<td>(nthcdr 2 '(1 2 3 4))</td>
</tr><tr><td><a href="#push-pop">push and pop</a></td>
<td>(setq x '(1 2 3))<br />
(push 4 x)<br />
(pop x)</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(def x '(1 2 3)<br /><span style="color: gray"><em>none</em></span><br />
(pop x)</td>
<td>(setq x '(1 2 3))<br />
(push 4 x)<br />
(pop x)</td>
</tr><tr><th colspan="5"><a name="arrays" id="arrays"></a><a href="#arrays-note">arrays</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a href="#vector-literal">vector literal</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>#(1 2 3)</td>
<td>#(1 2 3)</td>
<td>[1 2 3]</td>
<td>[1 2 3]</td>
</tr><tr><td><a href="#vector-access">vector access</a></td>
<td>(elt #(1 2 3) 0) <span style="color: gray"><em>or</em></span><br />
(aref #(1 2 3) 0)</td>
<td>(vector-ref #(1 2 3) 0)</td>
<td>(nth [1 2 3] 0)</td>
<td>(elt [1 2 3] 0)</td>
</tr><tr><td><a href="#set-vector-element">set vector element</a></td>
<td>(setq v [1 2 3])<br />
(setf (aref v 2) 4)</td>
<td>(define v (vector 1 2 3))<br />
(vector-set! v 2 4)</td>
<td>(replace { 2 4 } [1 2 3])</td>
<td>(setq v #(1 2 3))<br />
(setf (aref v 2) 4)</td>
</tr><tr><td><a href="#vector-to-list">vector to list</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(coerce #(1 2 3) 'list)</td>
<td>(vector-&gt;list #(1 2 3))</td>
<td>(seq [1 2 3])</td>
<td>(coerce [1 2 3] 'list)</td>
</tr><tr><td><a href="#list-to-vector">list to vector</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(coerce '(1 2 3) 'vector)</td>
<td>(list-&gt;vector '(1 2 3))</td>
<td>(vec '(1 2 3))</td>
<td>(coerce '(1 2 3) 'vector)</td>
</tr><tr><td><a href="#sequence-data-types">sequence data types</a></td>
<td>list vector</td>
<td>list vector hash-table string input-port range</td>
<td>all collections and strings</td>
<td>list vector</td>
</tr><tr><td><a href="#sequence-predicate">sequence predicate</a></td>
<td>(typep '(1 2 3) 'sequence)<br />
(typep #(1 2 3) 'sequence)</td>
<td>(sequence? '(1 2 3))</td>
<td>(seq? '(1 2 3))<br />
(seq? (seq [1 2 3]))</td>
<td>(typep '(1 2 3) 'sequence)<br />
(typep [1 2 3] 'sequence)</td>
</tr><tr><td><a href="#sequence-functions">list functions usable on sequences</a></td>
<td>length reduce remove-if-not sort</td>
<td>for for/list for/hash for/and for/or for/fold</td>
<td><span style="color: gray"><em>vectors support all list functions;</em></span> seq <span style="color: gray"><em>will convert any other collection to an object which supports list functions</em></span></td>
<td>length reduce remove-if-not</td>
</tr><tr><td><a href="#make-array">make-array</a></td>
<td>(make-array '(4 3 2)<br /><span style="white-space: pre-wrap;">  </span>:initial-element 0)<br /><span style="white-space: pre-wrap;"> </span><br />
(make-array '(3 2)<br /><span style="white-space: pre-wrap;">  </span>:initial-contents<br /><span style="white-space: pre-wrap;">  </span>'((1 2) (3 4) (5 6)))</td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#array-access">array access</a></td>
<td>(setq a<br /><span style="white-space: pre-wrap;">  </span>(make-array '(3 2)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>:initial-contents<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>'((1 2) (3 4) (5 6))))<br /><span style="white-space: pre-wrap;"> </span><br />
(aref a 2 1)</td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#set-array-element">set array element</a></td>
<td>(setf (aref a 2 1) 7)</td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#array-dimensions">array dimensions</a></td>
<td>(setq a<br /><span style="white-space: pre-wrap;">  </span>(make-array '(4 3 2)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>:initial-element 0))<br /><span style="white-space: pre-wrap;"> </span><br />
(array-rank a)<br />
(array-dimensions a)<br />
(array-dimension a 0)</td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#range">range</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(in-range 1 101) <span style="color: gray"><em>use in for constructs</em></span></td>
<td>(range 1 101)</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#list-comprehension">list comprehension</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(for*/list ((file "ABCDEFGH") (rank (in-range 1 9))) (printf "~a~a" file rank))</td>
<td>(for [file "ABCDEFGH" rank (range 1 9)] (format "%c%d" file rank))</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><th colspan="5"><a name="dictionaries" id="dictionaries"></a><a href="#dictionaries-note">dictionaries</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a href="#make-hash">make-hash</a></td>
<td>(setq h (make-hash-table))</td>
<td>(define h (make-hash))<br />
(define ih (make-immutable-hash '(("hello" . 5))))</td>
<td>(def h (hash-map "hello" 5))</td>
<td>(setq h<br /><span style="white-space: pre-wrap;">  </span>(make-hash-table<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>:test 'equal))</td>
</tr><tr><td><a href="#hash-literal">hash literal</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>#hash(("hello" . 5) ("goodbye" . 7))</td>
<td>{"hello" 5 "goodbye" 7}</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#put-hash">put-hash</a></td>
<td>(setf (gethash "hello" h) 5)</td>
<td>(hash-set! h "hello" 5)<br />
(define ih2 (hash-set ih "goodbye" 7))</td>
<td><span style="color: gray"><em>none</em></span><br />
(def h2 (assoc h "goodbye" 7))</td>
<td>(puthash "hello" 5 h)</td>
</tr><tr><td><a href="#get-hash">get-hash</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(gethash "hello" h)</td>
<td>(hash-ref h "hello")</td>
<td>(get h "hello")</td>
<td>(gethash "hello" h)</td>
</tr><tr><td><a href="#hash-key-not-found">hash key not found</a></td>
<td>nil</td>
<td><span style="color: gray"><em>error</em></span></td>
<td>nil</td>
<td>nil</td>
</tr><tr><td><a href="#rem-hash">rem-hash</a></td>
<td>(remhash "hello" h)</td>
<td>(hash-remove! h "hello")<br /><span style="white-space: pre-wrap;"> </span><br />
(define ih2<br /><span style="white-space: pre-wrap;">  </span>(hash-remove ih "hello"))</td>
<td><span style="color: gray"><em>none</em></span><br />
(def h2 (dissoc h "hello"))</td>
<td>(remhash "hello" h)</td>
</tr><tr><td><a href="#hash-size">hash size</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(hash-table-count h)</td>
<td>(hash-count h)</td>
<td>(count h)</td>
<td>(hash-table-count h)</td>
</tr><tr><td><a href="#iterate-hash">iterate over hash entries</a></td>
<td>(maphash<br /><span style="white-space: pre-wrap;">  </span>(lambda (k v)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(print k)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(print v))<br /><span style="white-space: pre-wrap;">  </span>h)</td>
<td>(hash-for-each h<br /><span style="white-space: pre-wrap;">  </span>(lambda (k v)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(printf "~a~n" k)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(printf "~a~n" v)))</td>
<td>(doseq [p h]<br /><span style="white-space: pre-wrap;">  </span>(println (first p))<br /><span style="white-space: pre-wrap;">  </span>(println (second p)))</td>
<td>(maphash<br /><span style="white-space: pre-wrap;">  </span>(lambda (k v)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(print k)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(print v))<br /><span style="white-space: pre-wrap;">  </span>h)</td>
</tr><tr><td><a href="#map-hash">map hash to list</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(define hkeys (hash-map h (lambda (k v) k)))<br />
(define hvals (hash-map h (lambda (k v) v)))</td>
<td>(def hkeys (map (fn [p] (first p)) h))<br />
(def hvals (map (fn [p] (second p)) h))</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#defstruct">defstruct</a></td>
<td>(defstruct account id balance)</td>
<td>(define-struct account (id (balance #:mutable)))</td>
<td>(defstruct account :id :balance)</td>
<td>(defstruct account id balance)</td>
</tr><tr><td><a href="#struct">struct</a></td>
<td>(setq a<br /><span style="white-space: pre-wrap;">  </span>(make-account<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>:id 3<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>:balance 17.12))</td>
<td>(define a (make-account 3 17.12))</td>
<td>(def a (struct account 3 17.12))</td>
<td>(setq a<br /><span style="white-space: pre-wrap;">  </span>(make-account :id 3 :balance 17.12))</td>
</tr><tr><td><a href="#struct-getter">struct getter</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(account-id a)</td>
<td>(account-id a)</td>
<td>(:id a)</td>
<td>(account-id a)</td>
</tr><tr><td><a href="#struct-setter">struct setter</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(setf (account-balance a) 0)</td>
<td>(set-account-balance! a 0)</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(setf (account-balance a) 0)</td>
</tr><tr><td><a href="#struct-predicate">struct predicate</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(account-p a)</td>
<td>(account? a)</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(account-p a)</td>
</tr><tr><th colspan="5"><a name="functions" id="functions"></a><a href="#functions-note">functions</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a href="#let">let</a></td>
<td>(let ((x 3) (y 4))<br /><span style="white-space: pre-wrap;">  </span>(+ x y))</td>
<td>(let ((x 3) (y 4))<br /><span style="white-space: pre-wrap;">  </span>(+ x y))</td>
<td>(let [x 3 y 4]<br /><span style="white-space: pre-wrap;">  </span>(+ x y))</td>
<td>(let ((x 3) (y 4))<br /><span style="white-space: pre-wrap;">  </span>(+ x y))<br /><span style="color: gray"><em>use</em> lexical-let <em>for lexical scope</em></span></td>
</tr><tr><td><a href="#let-star">let*</a></td>
<td>(let* ((x 3) (y (* x x)))<br /><span style="white-space: pre-wrap;">  </span>(+ x y))</td>
<td>(let* ((x 3) (y (* x x)))<br /><span style="white-space: pre-wrap;">  </span>(+ x y))</td>
<td>(let [x 3 y (* x x)]<br /><span style="white-space: pre-wrap;">  </span>(+ x y))</td>
<td>(let* ((x 3) (y (* x x)))<br /><span style="white-space: pre-wrap;">  </span>(+ x y))<br /><span style="color: gray"><em>use</em> lexical-let* <em>for lexical scope</em></span></td>
</tr><tr><td><a href="#define-function">define function</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(defun add (x y) (+ x y))</td>
<td>(define (add x y) (+ x y))</td>
<td>(defn add [x y] (+ x y))</td>
<td>(defun add (x y) (+ x y))</td>
</tr><tr><td><a href="#optional-argument">optional argument</a></td>
<td>(defun add (a &amp;optional b)<br /><span style="white-space: pre-wrap;">  </span>(if (null b) a (+ a b)))</td>
<td>(define (add a (b null))<br /><span style="white-space: pre-wrap;">  </span>(if (null? b) a (+ a b)))</td>
<td>(defn add ([a] a) ([a b] (+ a b)))<br /><span style="color: gray"><em>no syntax error if called with more than 2 args:</em></span><br />
(defn add [a &amp; [b]]<br /><span style="white-space: pre-wrap;">  </span>(if (nil? b) a (+ a b)))</td>
<td>(defun add (a &amp;optional b)<br /><span style="white-space: pre-wrap;">  </span>(if (null b) a (+ a b)))</td>
</tr><tr><td><a href="#variable-arguments">variable number of arguments</a></td>
<td>(defun add (a &amp;rest b)<br /><span style="white-space: pre-wrap;">  </span>(if (null b)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>a<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(+ a (eval (cons '+ b)))))</td>
<td>(define (add a . b)<br /><span style="white-space: pre-wrap;">  </span>(if (null? b)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>a<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(+ a (apply + b))))</td>
<td>(defn add [a &amp; b]<br /><span style="white-space: pre-wrap;">  </span>(if (nil? b) a (+ a (apply + b))))</td>
<td>(defun add (a &amp;rest b)<br /><span style="white-space: pre-wrap;">  </span>(if (null b)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>a<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(+ a (eval (cons '+ b)))))</td>
</tr><tr><td><a href="#default-value">default value</a></td>
<td>(defun add (a &amp;optional (b 0))<br /><span style="white-space: pre-wrap;">  </span>(+ a b))</td>
<td><span style="color: gray"><em>racket:</em></span><br />
(define (add a (b 0)) (+ a b))</td>
<td>(defn add<br /><span style="white-space: pre-wrap;">  </span>([a] (add a 0))<br /><span style="white-space: pre-wrap;">  </span>([a b] (+ a b)))</td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#named-parameter">named parameter</a></td>
<td>(defun logarithm (&amp;key number base)<br /><span style="white-space: pre-wrap;">  </span>(/ (log number) (log base)))<br /><span style="white-space: pre-wrap;"> </span><br />
(logarithm :base 2 :number 8)</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(defn logarithm [{x :number b :base}] (/ (Math/log x) (Math/log b)))<br />
(logarithm {:base 2 :number 8})</td>
<td>(defun logarithm<br /><span style="white-space: pre-wrap;">  </span>(&amp;key number &amp;key base)<br /><span style="white-space: pre-wrap;">  </span>(if base<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(/ (log number) (log base))<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(log number)))<br /><span style="white-space: pre-wrap;"> </span><br /><span style="color: gray"><em>order significant, not key names:</em></span><br />
(logarithm :foo 8 :bar 2)</td>
</tr><tr><td><a href="#return-multiple-values">return multiple values</a></td>
<td>(defun sqrts (x)<br /><span style="white-space: pre-wrap;">  </span>(values (sqrt x) (- (sqrt x))))</td>
<td>(define (sqrts x)<br /><span style="white-space: pre-wrap;">  </span>(values (sqrt x) (- (sqrt x))))</td>
<td>(defn sqrts [x] (list (Math/sqrt x) (- (Math/sqrt x))))</td>
<td><span style="color: gray">values <em>creates a list:</em></span><br />
(defun sqrts (x)<br /><span style="white-space: pre-wrap;">  </span>(values (sqrt x) (- (sqrt x))))</td>
</tr><tr><td><a href="#multiple-values-local-variables">assign multiple values to local variables</a></td>
<td>(multiple-value-bind (r1 r2)<br /><span style="white-space: pre-wrap;">  </span>(sqrts 3)<br /><span style="white-space: pre-wrap;">  </span>r2)</td>
<td>(let-values<br /><span style="white-space: pre-wrap;">  </span>(((r1 r2) (sqrts 3)))<br /><span style="white-space: pre-wrap;">  </span>r2)</td>
<td>(let [[r1 r2] (sqrts 3)] r2)</td>
<td>(multiple-value-bind<br /><span style="white-space: pre-wrap;">  </span>(r1 r2)<br /><span style="white-space: pre-wrap;">  </span>(sqrts 3)<br /><span style="white-space: pre-wrap;">  </span>r2)</td>
</tr><tr><td><a href="#multiple-values-global-variables">assign multiple values to global variables</a></td>
<td>(multiple-value-setq (r1 r2)<br /><span style="white-space: pre-wrap;">  </span>(sqrts 3))</td>
<td>(define-values (r1 r2) (sqrts 3))</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(multiple-value-setq (r1 r2) (sqrts 3))</td>
</tr><tr><td><a href="#list-to-multiple-values">convert list to multiple values</a></td>
<td>(values-list '(1 2 3))</td>
<td>(apply values '(1 2 3))</td>
<td><span style="color: gray"><em>multiple values are lists</em></span></td>
<td><span style="color: gray"><em>multiple values are lists</em></span></td>
</tr><tr><td><a href="#multiple-values-list">assign multiple values to list</a></td>
<td>(multiple-value-list (sqrts 3))</td>
<td>(call-with-values<br /><span style="white-space: pre-wrap;">  </span>(lambda () (sqrts 3))<br /><span style="white-space: pre-wrap;">  </span>list)</td>
<td><span style="color: gray"><em>multiple values are lists</em></span></td>
<td><span style="color: gray"><em>multiple values are lists</em></span></td>
</tr><tr><td><a href="#tail-call">tail call optimization</a></td>
<td><span style="color: gray"><em>yes for sbcl</em></span></td>
<td><span style="color: gray"><em>yes</em></span></td>
<td><span style="color: gray"><em>yes with</em></span> recur</td>
<td><span style="color: gray"><em>no</em></span></td>
</tr><tr><td><a href="#lambda">lambda</a></td>
<td>(lambda (x) (* x x))</td>
<td>(lambda (x) (* x x))</td>
<td>#(* % %)<br />
(fn [x] (* x x))</td>
<td>(lambda (x) (* x x))</td>
</tr><tr><td><a href="#apply">apply</a></td>
<td>((lambda (x) (* x x)) 2)<br /><span style="white-space: pre-wrap;"> </span><br />
(apply #'(lambda (x) (* x x)) '(2))</td>
<td>((lambda (x) (* x x)) 2)<br /><span style="white-space: pre-wrap;"> </span><br />
(apply (lambda (x) (* x x)) '(2))</td>
<td>(#(* % %) 2)<br /><span style="white-space: pre-wrap;"> </span><br />
((fn [x] (* x x)) 2)<br /><span style="white-space: pre-wrap;"> </span><br />
(apply #(* % %) '(2))</td>
<td>((lambda (x) (* x x)) 2)<br /><span style="white-space: pre-wrap;"> </span><br />
(apply<br /><span style="white-space: pre-wrap;">  </span>#'(lambda (x) (* x x))<br /><span style="white-space: pre-wrap;">  </span>'(2))</td>
</tr><tr><td><a name="docstring" id="docstring"></a><a href="#docstring-note">get docstring</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(describe #'mapcar)</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(doc map)</td>
<td>(describe-function 'mapcar)</td>
</tr><tr><td><a name="define-docstring" id="define-docstring"></a><a href="#define-docstring-note">define function with docstring</a></td>
<td>(defun add (x y)<br /><span style="white-space: pre-wrap;">  </span>"add x and y"<br /><span style="white-space: pre-wrap;">  </span>(+ x y))</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(defn add "add x and y" [x y]<br /><span style="white-space: pre-wrap;">  </span>(+ x y))</td>
<td>(defun add (x y)<br /><span style="white-space: pre-wrap;">  </span>"add x and y"<br /><span style="white-space: pre-wrap;">  </span>(+ x y))</td>
</tr><tr><td><a name="search-doc" id="search-doc"></a><a href="#search-doc-note">apropos and documentation search</a></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(apropos #"^add$")<br />
(find-doc #"add \S+ and \S+")</td>
<td>(apropos "^add$")<br /><span style="color: gray"><em>none</em></span></td>
</tr><tr><th colspan="5"><a name="macros" id="macros"></a><a href="#macros-note">macros</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a href="#backquote-comma">backquote and comma</a></td>
<td>(setq op '+)<br />
(eval <span style="white-space: pre-wrap;">`</span>(,op 1 1))</td>
<td>(define op '+)<br />
(eval <span style="white-space: pre-wrap;">`</span>(,op 1 1))<br />
(eval (quasiquote ((unquote op) 1 1)))</td>
<td>(def op +)<br />
(eval <span style="white-space: pre-wrap;">`</span>(,op 1 1))</td>
<td>(setq op '+)<br />
(eval <span style="white-space: pre-wrap;">`</span>(,op 1 1))</td>
</tr><tr><td><a href="#defmacro">defmacro</a></td>
<td>(defmacro rpn (arg1 arg2 op)<br /><span style="white-space: pre-wrap;">  </span>(list op arg1 arg2))</td>
<td>(define-syntax-rule (rpn arg1 arg2 op) (op arg1 arg2))</td>
<td>(defmacro rpn [arg1 arg2 op]<br /><span style="white-space: pre-wrap;">  </span>(list op arg1 arg2))</td>
<td>(defmacro rpn (arg1 arg2 op)<br /><span style="white-space: pre-wrap;">  </span>(list op arg1 arg2))</td>
</tr><tr><td><a href="#defmacro-backquote">defmacro w/ backquote</a></td>
<td>(defmacro rpn (arg1 arg2 op)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">`</span>(,op ,arg1 ,arg2))</td>
<td>(define-syntax-rule (rpn3 arg1 arg2 op)<br /><span style="white-space: pre-wrap;">  </span>(eval ‘(,op ,arg1 ,arg2)))</td>
<td>(defmacro rpn [arg1 arg2 op] <span style="white-space: pre-wrap;">`</span>(~op ~arg1 ~arg2))</td>
<td>(defmacro rpn (arg1 arg2 op)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">`</span>(,op ,arg1 ,arg2))</td>
</tr><tr><td><a href="#macro-predicate">macro predicate</a></td>
<td>(macro-function rpn)</td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#macroexpand">macroexpand</a></td>
<td>(macroexpand ’(rpn 1 2 +))</td>
<td>(syntax-object-&gt;datum (expand-to-top-form '(rpn 1 2 +)))</td>
<td>(macroexpand '(rpn 1 2 +))</td>
<td>(macroexpand '(rpn 1 2 +))</td>
</tr><tr><td><a href="#splice-quote">splice quote</a></td>
<td>(defmacro add ( &amp;rest args )<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">`</span>(+ ,@args))</td>
<td>(define-syntax-rule ( add first …) (+ first …))</td>
<td>(defmacro add [ &amp; args ] <span style="white-space: pre-wrap;">`</span>(+ ~@args))</td>
<td>(defmacro add ( &amp;rest args )<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">`</span>(+ ,@args))</td>
</tr><tr><td><a href="#recursive-macro">recursive macro</a></td>
<td>(defmacro add (a &amp;rest b)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">`</span>(if (null ',b)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(+ ,a)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(+ ,a (add ,@b))))</td>
<td>(define-syntax add (syntax-rules ()<br /><span style="white-space: pre-wrap;">  </span>[(add x) x]<br /><span style="white-space: pre-wrap;">  </span>[(add x y) (+ x y)]<br /><span style="white-space: pre-wrap;">  </span>[(add x y …) (+ x (add y …))]))</td>
<td>(defmacro add ([a] <span style="white-space: pre-wrap;">`</span>(+ ~a)) ([a &amp; b] <span style="white-space: pre-wrap;">`</span>(+ ~a (add ~@b))))</td>
<td>(defmacro add (a &amp;rest b)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">`</span>(if (null ',b)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(+ ,a)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(+ ,a (add ,@b))))</td>
</tr><tr><td><a href="#hygienic">hygienic</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td><span style="color: gray"><em>no</em></span></td>
<td><span style="color: gray"><em>yes</em></span></td>
<td><span style="color: gray"><em>with</em> # <em>suffix</em></span></td>
<td><span style="color: gray"><em>no</em></span></td>
</tr><tr><td><a href="#local-values">local values</a></td>
<td>(defmacro square-sum (x y)<br /><span style="white-space: pre-wrap;">  </span>(let ((sum (gensym)))<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">`</span>(let ((,sum (+ ,x ,y)))<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(* ,sum ,sum))))</td>
<td>(define-syntax-rule (square-sum x y)<br /><span style="white-space: pre-wrap;">  </span>(let ((sum (+ x y)))<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(* sum sum)))</td>
<td>(defmacro two-list [x] <span style="white-space: pre-wrap;">`</span>(let [arg# ~x] (list arg# arg#)))</td>
<td>(defmacro square-sum (x y)<br /><span style="white-space: pre-wrap;">  </span>(let ((sum (gensym)))<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">`</span>(let ((,sum (+ ,x ,y)))<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(* ,sum ,sum))))</td>
</tr><tr><th colspan="5"><a name="execution-control" id="execution-control"></a><a href="#execution-control-note">execution control</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a href="#progn">progn</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>progn prog1 prog2</td>
<td>begin <span style="color: gray"><em>none</em></span> <span style="color: gray"><em>none</em></span><br /><span style="color: gray"><em>r6rs:</em></span><br />
begin begin0 <span style="color: gray"><em>none</em></span></td>
<td>do <span style="color: gray"><em>none</em></span> <span style="color: gray"><em>none</em></span></td>
<td>progn prog1 prog2</td>
</tr><tr><td><a href="#loop">loop</a></td>
<td>(setq i 1)<br />
(loop (print "hello")<br /><span style="white-space: pre-wrap;">  </span>(if (&gt; i 10)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(return)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(setq i (+ i 1))))</td>
<td><span style="color: gray"><em>none, use recursion</em></span></td>
<td>(loop [i 1]<br /><span style="white-space: pre-wrap;">  </span>(if (&lt;= i 10)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(do (println "hello")<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(recur (+ i 1)))))</td>
<td>(setq i 1)<br />
(loop (print "hello")<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(if (&gt; i 10)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(return)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(setq i (+ i 1))))</td>
</tr><tr><td><a href="#do">do</a></td>
<td>(do ((i 1) (sum 0))<br /><span style="white-space: pre-wrap;">  </span>((&gt; i 100) sum)<br /><span style="white-space: pre-wrap;">  </span>(setq sum (+ sum i))<br /><span style="white-space: pre-wrap;">  </span>(setq i (+ i 1)))<br /><span style="color: gray">do* <em>initializes serially</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(do ((i 1) (sum 0))<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>((&gt; i 100) sum)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(setq sum (+ sum i))<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(setq i (+ i 1)))<br /><span style="color: gray">do* <em>initializes sequentially</em></span></td>
</tr><tr><td><a href="#dotimes">dotimes</a></td>
<td>(dotimes (i 10 nil)<br /><span style="white-space: pre-wrap;">  </span>(format t "hello~%"))</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(dotimes [_ 10]<br /><span style="white-space: pre-wrap;">  </span>(println "hello"))</td>
<td>(dotimes (i 10 nil)<br /><span style="white-space: pre-wrap;">  </span>(print "hello\n"))</td>
</tr><tr><td><a href="#if">if</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(if (&lt; x 0) (- x) x)</td>
<td>(if (&lt; x 0) (- x) x)</td>
<td>(if (&lt; x 0) (- x) x)</td>
<td>(if (&lt; x 0) (- x) x)</td>
</tr><tr><td><a href="#when">when</a></td>
<td>(when (&lt; x y)<br /><span style="white-space: pre-wrap;">  </span>(print "x is less ")<br /><span style="white-space: pre-wrap;">  </span>(print "than y"))</td>
<td><span style="color: gray"><em>racket:</em></span><br />
(when (&lt; x y)<br /><span style="white-space: pre-wrap;">  </span>(display "x is less ")<br /><span style="white-space: pre-wrap;">  </span>(display "than y"))</td>
<td>(when (&lt; x y)<br /><span style="white-space: pre-wrap;">  </span>(println "x is less ")<br /><span style="white-space: pre-wrap;">  </span>(println "than y"))</td>
<td>(when (&lt; x y)<br /><span style="white-space: pre-wrap;">  </span>(print "x is less ")<br /><span style="white-space: pre-wrap;">  </span>(print "than y"))</td>
</tr><tr><td><a href="#cond">cond</a></td>
<td>(cond ((&gt; x 0) 1)<br /><span style="white-space: pre-wrap;">  </span>((= x 0) 0)<br /><span style="white-space: pre-wrap;">  </span>(t -1))</td>
<td>(cond ((&gt; x 0) 1)<br /><span style="white-space: pre-wrap;">  </span>((= x 0) 0)<br /><span style="white-space: pre-wrap;">  </span>(else -1))</td>
<td>(cond (&gt; x 0) 1<br /><span style="white-space: pre-wrap;">  </span>(= x 0) 0<br /><span style="white-space: pre-wrap;">  </span>true -1)</td>
<td>(cond ((&gt; x 0) 1)<br /><span style="white-space: pre-wrap;">  </span>((= x 0) 0)<br /><span style="white-space: pre-wrap;">  </span>(t -1))</td>
</tr><tr><td><a href="#error">error</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(error "failed")</td>
<td>(error "failed")</td>
<td>(throw (Exception. "failed"))</td>
<td>(error "failed")</td>
</tr><tr><td><a href="#handle-error">handle error</a></td>
<td>(handler-case<br /><span style="white-space: pre-wrap;">  </span>(error "failed")<br /><span style="white-space: pre-wrap;">  </span>(simple-error (e)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(format t "error: ~a" e)))</td>
<td>(with-handlers<br /><span style="white-space: pre-wrap;">  </span>((exn:fail?<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">   </span>(lambda (e)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">   </span>(printf "error: ~a"<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">   </span>(exn-message e)))))<br /><span style="white-space: pre-wrap;">  </span>(error "failed"))</td>
<td>(try (throw (Exception. "failure"))<br /><span style="white-space: pre-wrap;">  </span>(catch Exception e<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(printf "error: %s"<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(.getMessage e))))</td>
<td>(condition-case e<br /><span style="white-space: pre-wrap;">  </span>(error "failed")<br /><span style="white-space: pre-wrap;">  </span>(error (message "error: %s"<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(error-message-string e))))</td>
</tr><tr><td><a href="#define-exception">define exception</a></td>
<td>(define-condition odd-err (error)<br /><span style="white-space: pre-wrap;">  </span>((num :accessor odd-err-num<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>:initarg :num))<br /><span style="white-space: pre-wrap;">  </span>(:report<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(lambda (e s)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(format s "odd number: ~a"<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(odd-err-num e)))))</td>
<td>(define exn:odd-err? "odd number")</td>
<td></td>
<td><span style="color: gray"><em>only symbols and keywords can be thrown and caught</em></span></td>
</tr><tr><td><a href="#throw-exception">throw exception</a></td>
<td>(error 'odd-err :num 7)</td>
<td>(raise exn:odd-err?)</td>
<td>(throw (Exception. "failed"))</td>
<td>(throw 'odd-err t)</td>
</tr><tr><td><a href="#catch-exception">catch exception</a></td>
<td>(handler-case (/ 1 0)<br /><span style="white-space: pre-wrap;">  </span>(division-by-zero ()<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(progn<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(format t "division by zero")<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>nil)))</td>
<td>(with-handlers ((exn:fail? (lambda (e) (begin (printf "division by zero~n") null)))) (/ 1 0))</td>
<td>(try (/ 1 0) (catch ArithmeticException _ (do (println "division by zero") nil)))</td>
<td>(catch 'failed (throw 'failed nil) t)</td>
</tr><tr><td><a href="#restart-case">restart-case</a></td>
<td>(defun halve (l)<br /><span style="white-space: pre-wrap;">  </span>(mapcar (lambda (x)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(restart-case<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(if (= (rem x 2) 0) (/ x 2)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(error 'odd-error :num x))<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(round-down () (/ (- x 1) 2))<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(round-up () (/ (+ x 1) 2)))) l))</td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#invoke-restart">invoke-restart</a></td>
<td>(handler-bind<br /><span style="white-space: pre-wrap;">  </span>((odd-err<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(lambda (c)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(invoke-restart<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>'round-down))))<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(halve '(1 2 4 9)))</td>
<td></td>
<td><span style="color: gray"><em>none</em></span></td>
<td><span style="color: gray"><em>none</em></span></td>
</tr><tr><td><a href="#finally-clause">finally clause</a></td>
<td>(unwind-protect<br /><span style="white-space: pre-wrap;">  </span>(error "failure")<br /><span style="white-space: pre-wrap;">  </span>(print "clean up"))</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>(try (throw (Exception. "failure"))<br /><span style="white-space: pre-wrap;">     </span>(finally (println "clean up")))</td>
<td>(unwind-protect<br /><span style="white-space: pre-wrap;">  </span>(error "failure")<br /><span style="white-space: pre-wrap;">  </span>(print "clean up"))</td>
</tr><tr><td><a href="#lazy-evaluation">lazy evaluation</a></td>
<td></td>
<td>(define x (delay (/ 1 0)))<br />
(promise? x)<br />
(+ 1 (force x))</td>
<td></td>
<td></td>
</tr><tr><td><a href="#continuations">continuations</a></td>
<td></td>
<td>(define cc null)<br />
(+ 1 (call/cc (lambda (x) (set! cc x) 0)))<br />
(cc 5)</td>
<td></td>
<td></td>
</tr><tr><td><a href="#create-thread">create thread</a></td>
<td></td>
<td></td>
<td>(.start (Thread. #(println "running…")))</td>
<td></td>
</tr><tr><td><a href="#wait-thread">wait on a thread</a></td>
<td></td>
<td></td>
<td>(def t (Thread. #(Thread/sleep (* 30 1000))))<br />
(.start t)<br />
(.join t)</td>
<td></td>
</tr><tr><th colspan="5"><a name="file-handles" id="file-handles"></a><a href="#file-handles-note">file handles</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a name="std-file-handles" id="std-file-handles"></a><a href="#std-file-handles-note">standard file handles</a></td>
<td>*standard-input*<br />
*standard-output*<br />
*error-output*</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="eof" id="eof"></a><a href="#eof-note">end-of-file behavior</a></td>
<td><span style="color: gray">read-line <em>returns two values, the 2nd set to</em> T <em>at end-of-file.</em><br /><br />
EOF-OF-FILE <em>is signaled when reading past end of file.</em></span></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="read-stdin" id="read-stdin"></a><a href="#read-stdin-note">read line from stdin</a></td>
<td>(setq line (read-line))</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="chomp" id="chomp"></a><a href="#chomp-note">chomp</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="println" id="println"></a><a href="#println-note">write line to stdout</a></td>
<td>(defun println (s)<br /><span style="white-space: pre-wrap;">  </span>(format t "~a~%" s))<br /><span style="white-space: pre-wrap;"> </span><br />
(println "hello")</td>
<td>(define (println s)<br /><span style="white-space: pre-wrap;">  </span>(printf "~a~n" s))<br /><br />
(println "hello")</td>
<td>(println "hello")</td>
<td></td>
</tr><tr><td><a name="format-stdout" id="format-stdout"></a><a href="#format-stdout-note">write formatted string to stdout</a></td>
<td>(format t "~s ~d: ~2$~%"<br /><span style="white-space: pre-wrap;">  </span>"foo"<br /><span style="white-space: pre-wrap;">  </span>7<br /><span style="white-space: pre-wrap;">  </span>13.7)</td>
<td>(printf "~a ~a: ~a~n"<br /><span style="white-space: pre-wrap;">  </span>"foo"<br /><span style="white-space: pre-wrap;">  </span>7<br /><span style="white-space: pre-wrap;">  </span>(/ (round (* 13.7 100)) 100))</td>
<td>(printf "%s %d %.2f\n" "foo" 7 13.7)</td>
<td></td>
</tr><tr><td><a name="open-file" id="open-file"></a><a href="#open-file-note">open file for reading</a></td>
<td>(setq in (open "/etc/hosts"))</td>
<td>(define in (open-input-file "/etc/hosts"))</td>
<td>(def in (java.io.BufferedReader. (java.io.FileReader. "/etc/hosts")))</td>
<td></td>
</tr><tr><td><a name="open-file-write" id="open-file-write"></a><a href="#open-file-write-note">open file for writing</a></td>
<td>(setq out (open "/tmp/test" :direction :output :if-exists :supersede))</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="open-file-append" id="open-file-append"></a><a href="#open-file-append-note">open file for appending</a></td>
<td>(setq out (open "/tmp/test" :direction :output :if-exists :append))</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="close-file" id="close-file"></a><a href="#close-file-note">close file</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(close in)</td>
<td>(close-input-port in)</td>
<td>(.close in)</td>
<td></td>
</tr><tr><td><a name="close-file-implicitly" id="close-file-implicitly"></a><a href="#close-file-implicitly-note">close file implicitly</a></td>
<td>(with-open-file (out #P"/tmp/test" :direction :output) (write-line "lorem ipsum" out))</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="read-line" id="read-line"></a><a href="#read-line-note">read line</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(setq line (read-line in))</td>
<td>(define line (read-line in))</td>
<td>(def line (.readLine in))</td>
<td></td>
</tr><tr><td><a name="iterate-file" id="iterate-file"></a><a href="#iterate-file-note">iterate over file by line</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="read-file-array" id="read-file-array"></a><a href="#read-file-array-note">read file into array of strings</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="read-file-str" id="read-file-str"></a><a href="#read-file-str-note">read file into string</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="write-str" id="write-str"></a><a href="#write-str-note">write string</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="write-line" id="write-line"></a><a href="#write-line-note">write line</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="flush-file" id="flush-file"></a><a href="#flush-file-note">flush file handle</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="file-buffers" id="file-buffers"></a><a href="#file-buffers-note">file buffers</a></th>
</tr><tr><th></th>
<th></th>
<th></th>
<th></th>
<th>emacs lisp</th>
</tr><tr><td><a name="list-buffers" id="list-buffers"></a><a href="#list-buffers-note">list buffers</a></td>
<td></td>
<td></td>
<td></td>
<td><span style="color: gray">;; list of buffer objects:</span><br />
(buffer-list)<br /><br /><span style="color: gray">;; name of first buffer in list:</span><br />
(buffer-name (car (buffer-list)))<br /><br /><span style="color: gray">;; name of current buffer:</span><br />
(buffer-name (current-buffer))</td>
</tr><tr><td><a name="current-buffer" id="current-buffer"></a><a href="#current-buffer-note">current buffer</a><br /><span style="color: gray"><em>get and set</em></span></td>
<td></td>
<td></td>
<td></td>
<td><span style="color: gray">;; name of current buffer:</span><br />
(buffer-name (current-buffer))<br /><br /><span style="color: gray">;; open in current pane:</span><br />
(switch-to-buffer "foo.txt")<br /><br /><span style="color: gray">;; open in other pane:</span><br />
(switch-to-buffer-other-window<br /><span style="white-space: pre-wrap;">  </span>"bar.txt")</td>
</tr><tr><td><a name="clear-buffer" id="clear-buffer"></a><a href="#clear-buffer-note">clear buffer</a></td>
<td></td>
<td></td>
<td></td>
<td><span style="color: gray">;; current buffer:</span><br />
(erase-buffer)<br /><br /><span style="color: gray">;; buffer named "foo.txt:</span><br />
(with-current-buffer "foo.txt"<br /><span style="white-space: pre-wrap;">  </span>(erase-buffer))</td>
</tr><tr><td><a name="point" id="point"></a><a href="#point-note">point</a><br /><span style="color: gray"><em>get and set</em></span></td>
<td></td>
<td></td>
<td></td>
<td><span style="color: gray">;; 1-based index of char under cursor:</span><br />
(point)<br /><br /><span style="color: gray">;; go to beginning of current buffer:</span><br />
(goto-char 1)<br /><br /><span style="color: gray">;; go to end of current buffer:</span><br />
(goto-char (buffer-size))</td>
</tr><tr><td>search and set point</td>
<td></td>
<td></td>
<td></td>
<td><span style="color: gray">;; Set point to character after string.<br />
;; 1st arg is position in buffer beyond<br />
;;<span style="white-space: pre-wrap;">   </span>which search stops.<br />
;; If 2nd arg is true, return nil<br />
;;<span style="white-space: pre-wrap;">   </span>on failure, otherwise raise error.<br />
;; 3rd argument is the occurrence<br />
;;<span style="white-space: pre-wrap;">   </span>of the string, if negative<br />
;;<span style="white-space: pre-wrap;">   </span>search backwards from point.</span><br />
(search-forward "lorem" nil t 1)</td>
</tr><tr><td>insert at string point</td>
<td></td>
<td></td>
<td></td>
<td><span style="color: gray">;; takes 1 or more args:</span><br />
(insert "lorem" " ipsum")</td>
</tr><tr><td>current buffer as string</td>
<td></td>
<td></td>
<td></td>
<td>(buffer-string)</td>
</tr><tr><td>insert file contents at point</td>
<td></td>
<td></td>
<td></td>
<td>(insert-file "/etc/passwd")</td>
</tr><tr><td><a name="mark" id="mark"></a><a href="#mark-note">mark</a><br /><span style="color: gray"><em>get and set</em></span></td>
<td></td>
<td></td>
<td></td>
<td><span style="color: gray">;; to beginning of current buffer:</span><br />
(set-mark 1)<br /><br /><span style="color: gray">;; to point of current buffer:</span><br />
(set-mark (point))</td>
</tr><tr><th colspan="5"><a name="files" id="files"></a><a href="#files-note">files</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a name="file-test" id="file-test"></a><a href="#file-test-note">file test, regular file test</a></td>
<td>(osicat:file-exists-p "/tmp/foo")<br />
(osicat:regular-file-exists-p "/tmp/foo")</td>
<td></td>
<td></td>
<td>(file-exists-p "/etc/hosts")<br /><br />
(file-regular-p "/etc/hosts")</td>
</tr><tr><td><a name="file-size" id="file-size"></a><a href="#file-size-note">file size</a></td>
<td></td>
<td></td>
<td></td>
<td>(eighth<br /><span style="white-space: pre-wrap;">  </span>(file-attributes "/etc/hosts"))</td>
</tr><tr><td><a name="file-readable-writable-executable" id="file-readable-writable-executable"></a><a href="#file-readable-writable-executable-note">is file readable, writable, executable</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="chmod" id="chmod"></a><a href="#chmod-note">set file permissions</a></td>
<td></td>
<td></td>
<td></td>
<td>(set-file-modes "/tmp/foo" #o755)</td>
</tr><tr><td><a name="cp-rm-mv" id="cp-rm-mv"></a><a href="#cp-rm-mv-note">copy file, remove file, rename file</a></td>
<td>(cl-fad:copy-file #P"/tmp/foo"<br /><span style="white-space: pre-wrap;">  </span>#P"/tmp/bar")<br /><br />
(delete-file #P"/tmp/foo")<br /><br />
(rename-file #P"/tmp/bar"<br /><span style="white-space: pre-wrap;">  </span>#P"/tmp/foo")</td>
<td></td>
<td></td>
<td>(copy-file "/tmp/foo" "/tmp/bar")<br />
(delete-file "/tmp/foo")<br />
(rename-file "/tmp/bar" "/tmp/foo")</td>
</tr><tr><td><a name="symlink" id="symlink"></a><a href="#symlink-note">create symlink, symlink test, get target</a></td>
<td>(osicat:make-link "/tmp/hosts" :target "/etc/hosts")</td>
<td></td>
<td></td>
<td>(make-symbolic-link "/etc/hosts" /tmp/hosts")<br /><br /><span style="color: gray"><em>returns target if symlink or nil:</em></span><br />
(file-symlink-p "/tmp/hosts")</td>
</tr><tr><td><a name="tmp-file" id="tmp-file"></a><a href="#tmp-file-note">temporary file</a></td>
<td></td>
<td></td>
<td></td>
<td>(make-temp-file "foo")</td>
</tr><tr><td><a name="in-memory-file" id="in-memory-file"></a><a href="#in-memory-file-note">in memory file</a></td>
<td>(setq out (make-string-output-stream)<br /><br />
(write-string "lorem ipsum)<br /><br />
(get-output-stream-string out)<br /><br />
(setq in (make-string-input-stream "dolor sit amet"))<br /><br />
(read-line in)</td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="directories" id="directories"></a><a href="#directories-note">directories</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a name="build-pathname" id="build-pathname"></a><a href="#build-pathname-note">build pathname</a></td>
<td>(make-pathname<br /><span style="white-space: pre-wrap;">  </span>:directory '(:absolute "etc")<br /><span style="white-space: pre-wrap;">  </span>:name "hosts")</td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="dirname-basename" id="dirname-basename"></a><a href="#dirname-basename-note">dirname and basename</a></td>
<td>(pathname-directory #P"/etc/hosts")<br /><br />
(pathname-name #P"/etc/hosts")</td>
<td></td>
<td></td>
<td>(file-name-directory "/etc/hosts")<br /><br />
(file-name-nondirectory<br /><span style="white-space: pre-wrap;">  </span>"/etc/hosts")</td>
</tr><tr><td><a name="abs-pathname" id="abs-pathname"></a><a href="#abs-pathname-note">absolute pathname</a></td>
<td></td>
<td></td>
<td></td>
<td>(expand-file-name "..")</td>
</tr><tr><td><a name="iterate-dir" id="iterate-dir"></a><a href="#iterate-dir-note">iterate over directory by file</a></td>
<td>(dolist (file (osicat:list-directory "/tmp")) (format t "~a~%" file))</td>
<td></td>
<td></td>
<td>(dolist<br /><span style="white-space: pre-wrap;">  </span>(file (directory-files "/etc"))<br /><span style="white-space: pre-wrap;">  </span>(print file)))</td>
</tr><tr><td><a name="mkdir" id="mkdir"></a><a href="#mkdir-note">make directory</a></td>
<td></td>
<td></td>
<td></td>
<td><span style="color: gray"><em>creates parents if 2nd arg non-nil:</em></span><br />
(make-directory "/tmp/foo/bar" t)</td>
</tr><tr><td><a name="recursive-cp" id="recursive-cp"></a><a href="#recursive-cp-note">recursive copy</a></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a name="rmdir" id="rmdir"></a><a href="#rmdir-note">remove empty directory</a></td>
<td>(delete-directory "/tmp/foodir")</td>
<td></td>
<td></td>
<td>(delete-directory "/tmp/foodir")</td>
</tr><tr><td><a name="rm-rf" id="rm-rf"></a><a href="#rm-rf-note">remove directory and contents</a></td>
<td>(osicat:delete-directory-and-files "/tmp/foodir")</td>
<td></td>
<td></td>
<td>(delete-directory "/tmp/foodir" t)</td>
</tr><tr><td><a name="dir-test" id="dir-test"></a><a href="#dir-test-note">directory test</a></td>
<td>(osicat:directory-exists-p #P"/etc")</td>
<td></td>
<td></td>
<td>(file-directory-p "/etc")</td>
</tr><tr><th colspan="5"><a name="processes-environment" id="processes-environment"></a><a href="#processes-environment-note">processes and environment</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a href="#external-command">external command</a></td>
<td>(run-program "ls" '( "/etc"))</td>
<td>(require scheme/system)<br />
(system "ls /etc")</td>
<td>(.exec (Runtime/getRuntime) "ls")</td>
<td>(shell-command "ls /etc")</td>
</tr><tr><td><a href="#backticks">backticks</a></td>
<td></td>
<td></td>
<td></td>
<td>(shell-command-to-string "ls /etc")</td>
</tr><tr><td><a href="#command-line-arguments">command line arguments</a></td>
<td>*posix-argv*</td>
<td>current-command-line-arguments</td>
<td>*command-line-args*</td>
<td><span style="color: gray"><em>in shebang mode only:</em></span><br />
command-line-args <span style="color: gray"><em>or</em></span> argv</td>
</tr><tr><td><a href="#environment-variables">environment variables</a></td>
<td>(posix-getenv "HOME")</td>
<td>(getenv "HOME")</td>
<td>(System/getenv "HOME")</td>
<td>(getenv "HOME")</td>
</tr><tr><th colspan="5"><a name="libraries-namespaces" id="libraries-namespaces"></a><a href="#libraries-namespaces-note">libraries and namespaces</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a href="#load-file">load a file</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(load "a.lisp")</td>
<td>(load "a.rkt")</td>
<td>(load-file "a.clj")</td>
<td>(load-file "a.el")</td>
</tr><tr><td><a href="#load-library">load a library</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td>(require a)</td>
<td>(require 'a)</td>
<td>(load "a")</td>
</tr><tr><td>list installed packages, install a package</td>
<td>(ql:quickload "osicat")</td>
<td></td>
<td></td>
<td></td>
</tr><tr><th colspan="5"><a name="objects" id="objects"></a><a href="#objects-note">objects</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a href="#defclass">define class</a></td>
<td>(defclass rectangle ()<br /><span style="white-space: pre-wrap;">  </span>(<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(height<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>:accessor rectangle-height<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>:initarg :height)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(width<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>:accessor rectangle-width<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>:initarg :width)))</td>
<td>(define rectangle%<br /><span style="white-space: pre-wrap;">  </span>(class object%<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(init width)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(init height)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(super-new)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(define curr-height height)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(define curr-width width)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(define/public (get-height)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>curr-height)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(define/public (get-width)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>curr-width)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(define/public (set-height ht)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(set! curr-height ht))<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(define/public (set-width wd)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(set! curr-width wd))))</td>
<td><span style="color: gray"><em>use java:</em></span><br />
public class Rectangle {<br /><span style="white-space: pre-wrap;">  </span>public float height;<br /><span style="white-space: pre-wrap;">  </span>public float width;<br /><span style="white-space: pre-wrap;">  </span>public Rectangle(float h, float w) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>this.height = h;<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>this.width = w;<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>public void setHeight(float h) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>this.height = h;<br /><span style="white-space: pre-wrap;">  </span>}<br /><span style="white-space: pre-wrap;">  </span>public void setWidth(float w) {<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>this.width = w;<br />
}</td>
<td></td>
</tr><tr><td><a href="#make-instance">make instance</a></td>
<td>(make-instance 'rectangle<br /><span style="white-space: pre-wrap;">  </span>:height 3<br /><span style="white-space: pre-wrap;">  </span>:width 7)</td>
<td>(define rect<br /><span style="white-space: pre-wrap;">  </span>(new rectangle<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(height 7)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(width 3)))</td>
<td>(import 'Rectangle)<br />
(def r (Rectangle. 7 3))</td>
<td></td>
</tr><tr><td><a href="#read-attribute">read attribute</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(rectangle-height rect)</td>
<td>(send rect get-height)</td>
<td>(.height r)</td>
<td></td>
</tr><tr><td><a href="#write-attribute">write attribute</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(setf (rectangle-height rect) 4)</td>
<td>(send rect set-height 4)</td>
<td>(.setHeight r 8)</td>
<td></td>
</tr><tr><td><a href="#defmethod">define method</a></td>
<td>(defmethod area ((figure rectangle))<br /><span style="white-space: pre-wrap;">  </span>(* (rectangle-height figure)<br /><span style="white-space: pre-wrap;">  </span><span style="white-space: pre-wrap;">  </span>(rectangle-width figure)))</td>
<td>(define/public (area)<br /><span style="white-space: pre-wrap;">  </span>(* curr-height curr-width))</td>
<td>(defmulti area class)<br />
(defmethod area Rectangle [r] (* (.height r) (.width r)))</td>
<td></td>
</tr><tr><td><a href="#invoke-method">invoke method</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>(area rect)</td>
<td>(send rect area)</td>
<td>(area r)</td>
<td></td>
</tr><tr><td><a href="#universal-superclass">universal superclass</a></td>
<td>standard-object t</td>
<td>object%</td>
<td>Object</td>
<td></td>
</tr><tr><td><a href="#multiple-inheritance">multiple inheritance</a></td>
<td>yes</td>
<td>no</td>
<td><span style="color: gray"><em>only one direct superclass; can implement multiple interfaces</em></span></td>
<td></td>
</tr><tr><th colspan="5"><a name="reflection" id="reflection"></a><a href="#reflection-note">reflection</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a href="#type-of">type-of</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td>type-of</td>
<td><span style="color: gray"><em>none</em></span></td>
<td>type class</td>
<td>type-of</td>
</tr><tr><th colspan="5"><a name="java-interop" id="java-interop"></a><a href="#java-interop-note">java interoperation</a></th>
</tr><tr><th></th>
<th>common lisp</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td><a href="#java-new">new</a></td>
<td></td>
<td></td>
<td>(def rnd (new java.util.Random))<br />
(def rnd (java.util.Random.))</td>
<td></td>
</tr><tr><td><a href="#java-method">method</a></td>
<td></td>
<td></td>
<td>(. rnd nextFloat)<br />
(.nextFloat rnd)<br />
(. rnd nextInt 10)<br />
(.nextInt rnd 10)</td>
<td></td>
</tr><tr><td><a href="#java-class-method">class method</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
<td>(Math/sqrt 2)</td>
<td></td>
</tr><tr><td><a href="#java-chain">chain</a><br /><span style="white-space: pre-wrap;"> </span></td>
<td></td>
<td></td>
<td></td>
<td></td>
</tr><tr><td><a href="#java-import">import</a></td>
<td></td>
<td></td>
<td>(import '(java.util Random))<br />
(def rnd (Random.))</td>
<td></td>
</tr><tr><td><a href="#java-to-array">to java array</a></td>
<td></td>
<td></td>
<td>(to-array '(1 2 3))<br />
(into-array Integer '(1 2 3))</td>
<td></td>
</tr><tr><th></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">__________________________________________</span></span></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">__________________________________________</span></span></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">__________________________________________</span></span></th>
<th><span style="color: #efefef"><span style="white-space: pre-wrap;">__________________________________________</span></span></th>
</tr></table><p><a name="general-note" id="general-note"></a></p>
<h2 id="toc0"><span><a href="#general">General</a></span></h2>
<p><a name="version-used-note" id="version-used-note"></a></p>
<h2 id="toc1"><span><a href="#version-used">version used</a></span></h2>
<p>Versions used to verify data in the cheat sheet.</p>
<p><a name="show-version-note" id="show-version-note"></a></p>
<h2 id="toc2"><span><a href="#show-version">show version</a></span></h2>
<p>How to determine the version.</p>
<p><a name="grammar-invocation-note" id="grammar-invocation-note"></a></p>
<h1 id="toc3"><span><a href="#grammar-invocation">Grammar and Invocation</a></span></h1>
<p><a name="compiler-note" id="compiler-note"></a></p>
<h2 id="toc4"><span><a href="#compiler">compiler</a></span></h2>
<p><strong>racket</strong></p>
<p>Compiling a.ss creates the byte-code compiled file a_ss.zo, which will be used by <em>mzscheme</em> in preference to the source code if it encounters</p>
<div class="code">
<pre>
<code>(require a)</code>
</pre></div>
<p><a name="executable" id="executable"></a></p>
<h2 id="toc5"><span>making a standalone executable</span></h2>
<p><strong>common lisp</strong></p>
<p>A standalone executable is created by the <em>sb-ext:save-lisp-and-die</em> function.</p>
<p><strong>racket</strong></p>
<p>In order for code to be compiled as a standalone executable, it must be packaged as a module. This can be accomplished by putting the <em>#lang scheme</em> shorthand the top of the file. All functions that are defined in the module will be executed in order. Here is a simple example:</p>
<div class="code">
<pre>
<code>#lang scheme
(define hello
  (printf "Hello world!~n"))</code>
</pre></div>
<p>A standalone executable can be created with <em>DrScheme</em> using <em>Scheme | Create Executable…</em></p>
<p><strong>emacs</strong></p>
<p><a href="http://www.gnu.org/s/emacs/manual/html_node/elisp/Building-Emacs.html">Building Emacs</a></p>
<p><a name="shebang-note" id="shebang-note"></a></p>
<h2 id="toc6"><span><a href="#shebang">shebang</a></span></h2>
<p>How to have a script run by the interpreter automatically. Replace the given path with the path to the interpreter on your system.</p>
<p><strong>emacs lisp</strong></p>
<p>To run some lisp code from within emacs, use <em>M-x load</em> or <em>M-x load-file</em>. The first command will use the list of strings in <em>load-path</em> to search for the file. It is not necessary to specify the <em>.el</em> or <em>.elc</em> suffix if the file has one.</p>
<p>The following snippet is an emacs lisp shebang script implementation of <em>cat</em>:</p>
<div class="code">
<pre>
<code>#!/usr/bin/env emacs --script
(condition-case nil
  (let (line)
    (while (setq line (read-from-minibuffer ""))
        (princ line)
        (princ "\n")))
  (error nil))</code>
</pre></div>
<p>An implementation of <em>echo</em>:</p>
<div class="code">
<pre>
<code>#!/usr/bin/env emacs --script
(condition-case nil
  (progn
    (dotimes (i (length argv) nil)
            (princ (nth i argv))
            (princ " "))
    (princ "\n"))
  (error nil))</code>
</pre></div>
<p><a name="repl-note" id="repl-note"></a></p>
<h2 id="toc7"><span><a href="#repl">repl</a></span></h2>
<p>How to invoke the repl from the command line.</p>
<p><strong>racket:</strong></p>
<p>Racket also provides a GUI repl environment called DrRacket.</p>
<p><strong>clojure:</strong></p>
<p>The clojure repl saves the result of each evaluation in the variables *1, *2, … and the last exception in *e.</p>
<p><a name="word-separator-note" id="word-separator-note"></a></p>
<h2 id="toc8"><span><a href="#word-separator">word separator</a></span></h2>
<p>What is used to separate the operator and data of a S-expression.</p>
<p><a name="identifiers-case-sensitive-note" id="identifiers-case-sensitive-note"></a></p>
<h2 id="toc9"><span><a href="#identifiers-case-sensitive">are identifiers case sensitive?</a></span></h2>
<p>Whether symbols are case sensitive. Common lisp is case insensitive, and as a result <em>eq</em> and <em>EQ</em> invoke the same function.</p>
<p><a name="identifier-char-note" id="identifier-char-note"></a></p>
<h2 id="toc10"><span><a href="#identifier-char">identifier characters</a></span></h2>
<p>In lisps other than clojure, any character can be used in a symbol. Some characters are special to the reader and must be escaped to include them in a symbol. The reader will interpret a sequence of characters starting with a digit as a number instead of a symbol, so escaping must be used to create such a symbol.</p>
<p><strong>common lisp:</strong></p>
<p>Common Lisp is case insensitive, and the reader converts all letters to upper case. A symbol consisting of just periods "." must be escaped. Symbols that start and end with an asterisk "*" may conflict with system defined special variables.</p>
<p><strong>racket:</strong></p>
<p><span style="white-space: pre-wrap;">#</span> is only disallowed by the reader at the beginning of symbols. A symbol consisting of a single period must be escaped.</p>
<p><a name="esc-char-in-identifiers-note" id="esc-char-in-identifiers-note"></a></p>
<h2 id="toc11"><span><a href="#esc-char-in-identifiers">escaping characters in identifiers</a></span></h2>
<p>How to escape characters which are special to the reader.</p>
<p><strong>clojure:</strong></p>
<p>Clojure does not have a mechanism for escaping special reader characters. As a result some characters cannot be used in a symbol.</p>
<p><a name="quoting-char-in-identifiers-note" id="quoting-char-in-identifiers-note"></a></p>
<h2 id="toc12"><span><a href="#quoting-char-in-identifiers">quoting characters in identifiers</a></span></h2>
<p><a name="eol-comment-note" id="eol-comment-note"></a></p>
<h2 id="toc13"><span><a href="#eol-comment">end-of-line comment</a></span></h2>
<p><a name="multiple-line-comment-note" id="multiple-line-comment-note"></a></p>
<h2 id="toc14"><span><a href="#multiple-line-comment">multiple line comment</a></span></h2>
<p>#| |# delimited comments in Common Lisp and Scheme can span multiple lines, and thus can be used to comment out code.</p>
<p><strong>clojure:</strong></p>
<p>Code with balanced parens can be commented out in the following manner:</p>
<div class="code">
<pre>
<code>(comment
(+ 1 1)
)</code>
</pre></div>
<p><a name="var-expr-note" id="var-expr-note"></a></p>
<h1 id="toc15"><span><a href="#var-expr">Variables and Expressions</a></span></h1>
<p><a name="cell-types" id="cell-types"></a></p>
<h2 id="toc16"><span>cell types</span></h2>
<p>The different cell types. A lisp-1 only stores a single entity under a symbol in a given environment. A lisp-2 stores multiple entities, and which entity a symbol will resolve to depends on how the symbol is used. In particular, a value and a function can be stored under the same symbol without collision.</p>
<p><a name="type-predicates" id="type-predicates"></a></p>
<h2 id="toc17"><span>type predicates</span></h2>
<p>Some basic data type predicates.</p>
<p><a name="nil" id="nil"></a></p>
<h2 id="toc18"><span>nil, is () null?, is () symbol?</span></h2>
<div class="code">
<pre>
<code>(eq nil ())</code>
</pre></div>
<p>is true in common lisp and emacs lisp.</p>
<div class="code">
<pre>
<code>(eq? () null)</code>
</pre></div>
<p>is true in Scheme.</p>
<p><a name="set-property" id="set-property"></a></p>
<h2 id="toc19"><span>set property</span></h2>
<p>How to associate additional data with a symbol. In the example, the symbol is <em>foo</em>, the property is <em>:prop</em>, and the value is 13.</p>
<p>**clojure:##</p>
<p>The properties associated with a symbol must be set when the value for the symbol is set.</p>
<p><a name="get-property" id="get-property"></a></p>
<h2 id="toc20"><span>get property</span></h2>
<p>How to get the value of a property.</p>
<p><a name="remove-property" id="remove-property"></a></p>
<h2 id="toc21"><span>remove property</span></h2>
<p>How to remove a property from a symbol.</p>
<p><a name="quoted-symbol" id="quoted-symbol"></a></p>
<h2 id="toc22"><span>quoted symbol</span></h2>
<p>How to prevent the evaluation of a symbol.</p>
<p><a name="keyword" id="keyword"></a></p>
<h2 id="toc23"><span>keyword</span></h2>
<p>Keywords are pre-defined symbols that evaluate to their printed representation. The reader recognizes them by the initial colon, or in the case of Scheme, by the initial "#:". In Scheme it is an error to use a keyword as an expression.<br /><a name="ten-primitives-note" id="ten-primitives-note"></a></p>
<h1 id="toc24"><span><a href="#ten-primitives">Ten Primitives</a></span></h1>
<p>McCarthy introduced the ten primitives of lisp in <a href="http://www-formal.stanford.edu/jmc/recursive/recursive.html">1960</a>. All other pure lisp functions (i.e. all functions which don't do I/O or interact with the environment) can be implemented with these primitives. Thus, when implementing or porting lisp, these are the only functions which need to be implemented in a lower language. The way the non-primitives of lisp can be constructed from primitives is analogous to the way theorems can be proven from axioms in mathematics.</p>
<p>The primitives are: <em>atom</em>, <em>quote</em>, <em>eq</em>, <em>car</em>, <em>cdr</em>, <em>cons</em>, <em>cond</em>, <em>lambda</em>, <em>label</em>, <em>apply</em>.</p>
<p>One method of implementing logic and arithmetic with the ten primitives is <a href="http://en.wikipedia.org/wiki/Church_encoding">Church encoding</a> which represents natural numbers and logical values with lambda functions. Church numerals are not an efficient way to represent natural numbers; practical implementations implement arithmetic using underlying machine instructions.</p>
<p><a name="atom" id="atom"></a></p>
<h2 id="toc25"><span>atom</span></h2>
<p><em>atom</em> is is a predicate which returns false for cons cells, and true for anything else. All lists except for the empty list are cons cells.</p>
<p><strong>racket</strong></p>
<p>Scheme lacks <em>atom</em>, but <em>cons?</em> is its logical negation.</p>
<p><strong>clojure</strong></p>
<p>Clojure lacks cons cells. Thus <em>atom</em> if implemented in the language would always return true. However, <em>(not (list? x))</em> is closer to the spirit and certainly more useful. Because <em>nil</em> is not the empty list in clojure there is also ambiguity about what the value of <em>(atom ())</em> would be.</p>
<p><a name="quote" id="quote"></a></p>
<h2 id="toc26"><span>quote</span></h2>
<p>All lisps have a single quote macro abbreviation for <em>quote</em>. Here are identical ways to quote a symbol and a list:</p>
<div class="code">
<pre>
<code>(quote a)
'a

(quote (+ 3 7))
'(+ 3 7)</code>
</pre></div>
<p><em>eval</em> is a one-sided inverse of <em>quote</em>. If X is arbitrary lisp code, then the following are identical</p>
<div class="code">
<pre>
<code>X
(eval (quote X))</code>
</pre></div>
<p><a name="eq" id="eq"></a></p>
<h2 id="toc27"><span>eq, equal, =</span></h2>
<p>In his 1960 paper, McCarthy described <em>eq</em> as undefined if either or both arguments are not atomic. Common Lisp and Scheme (eq?) return true if the arguments both evaluate to the same list in memory, otherwise false. <em>equal</em> and <em>equal?</em> (Scheme) return true if the arguments evaluate to lists with the same elements as determined by calling <em>equal</em> or <em>equal?</em> recursively.</p>
<p>In Common Lisp and Scheme, = can only be called on numeric arguments. The predicates for whether a symbol is numeric are <em>numberp</em> and <em>number?</em>, respectively.</p>
<p>Clojure dispenses with <em>eq</em> and <em>equal</em> and defines <em>=</em> to be equivalent to the Common Lisp <em>equal</em>.</p>
<p><a name="car" id="car"></a></p>
<h2 id="toc28"><span>car</span></h2>
<p>Because <em>car</em> and <em>cdr</em> are abbreviations for parts of the word of the IBM 704, there is a trend to replace them with <em>first</em> and <em>rest</em>. However, <em>car</em> and <em>cdr</em> are short, and convenient notation exists for abbreviating nested calls to <em>car</em> and <em>cdr</em>.</p>
<p>In terms of <em>car</em>, <em>cdr</em>, and combinations thereof, here is what the dialects define:</p>
<table class="wiki-content-table"><tr><th>common lisp</th>
<th>r5rs</th>
<th>racket</th>
<th>clojure</th>
<th>emacs lisp</th>
</tr><tr><td>car,first</td>
<td>car</td>
<td>car,first</td>
<td>first</td>
<td>car,first</td>
</tr><tr><td>cadr,second</td>
<td>cadr</td>
<td>cadr,second</td>
<td>second,fnext</td>
<td>cadr,second</td>
</tr><tr><td>caddr,third</td>
<td>caddr</td>
<td>caddr,third</td>
<td></td>
<td>caddr,third</td>
</tr><tr><td>cadddr,fourth</td>
<td>cadddr</td>
<td>cadddr,fourth</td>
<td></td>
<td>cadddr,fourth</td>
</tr><tr><td>fifth</td>
<td></td>
<td>fifth</td>
<td></td>
<td>fifth</td>
</tr><tr><td>sixth</td>
<td></td>
<td>sixth</td>
<td></td>
<td>sixth</td>
</tr><tr><td>seventh</td>
<td></td>
<td>seventh</td>
<td></td>
<td>seventh</td>
</tr><tr><td>eighth</td>
<td></td>
<td>eighth</td>
<td></td>
<td>eighth</td>
</tr><tr><td>ninth</td>
<td></td>
<td>ninth</td>
<td></td>
<td>ninth</td>
</tr><tr><td>tenth</td>
<td></td>
<td>tenth</td>
<td></td>
<td>tenth</td>
</tr><tr><td>cdr, rest</td>
<td>cdr</td>
<td>cdr, rest</td>
<td>rest,next</td>
<td>cdr, rest</td>
</tr><tr><td>cddr</td>
<td>cddr</td>
<td>cddr</td>
<td></td>
<td>cddr</td>
</tr><tr><td>cdddr</td>
<td>cdddr</td>
<td>cdddr</td>
<td></td>
<td>cdddr</td>
</tr><tr><td>cddddr</td>
<td>cddddr</td>
<td>cddddr</td>
<td></td>
<td>cddddr</td>
</tr><tr><td>caar</td>
<td>caar</td>
<td>caar</td>
<td>ffirst</td>
<td>caar</td>
</tr><tr><td>cdar</td>
<td>cdar</td>
<td>cdar</td>
<td>nfirst</td>
<td>cdar</td>
</tr></table><p><a name="cdr" id="cdr"></a></p>
<h2 id="toc29"><span>cdr</span></h2>
<p><strong>common lisp</strong></p>
<p><em>cdr</em> and <em>rest</em> return <em>nil</em> when called on an empty list.</p>
<p><strong>racket</strong></p>
<p><em>cdr</em> and <em>rest</em> raise an error when called on an empty list.</p>
<p><strong>clojure</strong></p>
<p><em>rest</em> returns an empty set () when called on an empty or singleton list, whereas <em>next</em> returns <em>nil</em>. In clojure, the empty set evaluates as true in a boolean context and <em>nil</em> evaluates as false.</p>
<p><a name="cons" id="cons"></a></p>
<h2 id="toc30"><span>cons</span></h2>
<p><strong>clojure</strong></p>
<p>Clojure does not implement a list as a linked list of cons cells. The second argument to <em>cons</em> must be a list.</p>
<p><a name="cond" id="cond"></a></p>
<h2 id="toc31"><span>cond</span></h2>
<p><a name="lambda" id="lambda"></a></p>
<h2 id="toc32"><span>lambda</span></h2>
<p><strong>clojure:</strong></p>
<div class="code">
<pre>
<code>(#(+ %1 %2) 1 2)</code>
</pre></div>
<p><a name="label" id="label"></a></p>
<h2 id="toc33"><span>label</span></h2>
<p><a name="apply" id="apply"></a></p>
<h2 id="toc34"><span>apply</span></h2>
<p><a name="arithmetic-logic-note" id="arithmetic-logic-note"></a></p>
<h1 id="toc35"><span><a href="#arithmetic-logic">Arithmetic and Logic</a></span></h1>
<p><a name="true-false-note" id="true-false-note"></a></p>
<h2 id="toc36"><span><a href="#true-false">true and false</a></span></h2>
<p>Literals for true and false.</p>
<p><a name="falsehoods-note" id="falsehoods-note"></a></p>
<h2 id="toc37"><span><a href="#falsehoods">falsehoods</a></span></h2>
<p>Values which evaluate to false in a boolean context.</p>
<p><strong>common lisp</strong></p>
<p><em>nil</em> and the empty list () are identical.</p>
<p><strong>racket</strong></p>
<p>The empty list does not evaluate as false in a boolean context. There is no predefined symbol <em>nil</em>.</p>
<p><strong>clojure</strong></p>
<p><em>nil</em> evaluates as false in a boolean context, but is not identical as the empty list.</p>
<p><strong>emacs lisp</strong></p>
<p><em>nil</em> and empty list () are identical.</p>
<p><a name="is-true-symbol-note" id="is-true-symbol-note"></a></p>
<h2 id="toc38"><span><a href="#is-true-symbol">is true a symbol?</a></span></h2>
<p><a name="logical-op-note" id="logical-op-note"></a></p>
<h2 id="toc39"><span><a href="#logical-op">logical operators</a></span></h2>
<p>The logical operators.</p>
<p><a name="relational-op-note" id="relational-op-note"></a></p>
<h2 id="toc40"><span><a href="#relational-op">relational operators</a></span></h2>
<p>Relational operators for performing comparisons.</p>
<p><a name="min-max-note" id="min-max-note"></a></p>
<h2 id="toc41"><span><a href="#min-max">min and max</a></span></h2>
<p>Functions for returning the least and greatest of the arguments.</p>
<p><a name="num-predicates-note" id="num-predicates-note"></a></p>
<h2 id="toc42"><span><a href="#num-predicates">numeric predicates</a></span></h2>
<p>A selection of numeric predicates.</p>
<p><em>realp</em> and <em>real?</em> are true of all numbers which have a zero imaginary component. <em>floatp</em> and <em>inexact?</em> are true if the number is being stored in a floating point representation.</p>
<p><strong>racket:</strong></p>
<p>The following all evaluate as #t:</p>
<div class="code">
<pre>
<code>(rational? 1.1)
(rational? (sqrt 2))
(rational? pi)</code>
</pre></div>
<p><a name="closure-of-integers" id="closure-of-integers"></a></p>
<h2 id="toc43"><span>closure of integers under division</span></h2>
<p>The number system that containing the potential results of integer division. In mathematics, the closure of integers under division is the rationals, and this is true for common lisp, scheme, and clojure as well.</p>
<p>Emacs lisp performs integer division (i.e. computes the quotient), so the closure of the integers under division is the integers.</p>
<p><a name="arith-op-note" id="arith-op-note"></a></p>
<h2 id="toc44"><span><a href="#arith-op">arithmetic operators</a></span></h2>
<p>In Lisp, + and * take zero or more arguments and - and / take one or more arguments. With zero arguments + and * return the additive and multiplicative identities 0 and 1. With one argument + and * return the argument and - and / return the additive and multiplicative inverses: i.e. the negation and the reciprocal. When evaluating 3 or more arguments - and / are computed from left to right: i.e. (- 3 4 5) is computed as (- (- 3 4) 5).</p>
<p><strong>clojure:</strong></p>
<p><em>Math.pow</em> returns a double.</p>
<p><strong>emacs:</strong></p>
<p>Unary division (i.e. computing the reciprocal) generates a wrong number of arguments error.</p>
<p><a name="transcendental-func-note" id="transcendental-func-note"></a></p>
<h2 id="toc45"><span><a href="#transcendental-func">transcendental functions</a></span></h2>
<p><a name="float-truncation-note" id="float-truncation-note"></a></p>
<h2 id="toc46"><span><a href="#float-truncation">float truncation</a></span></h2>
<p>For rounding, floor, and ceiling, the return value is integer if the argument is rational and floating point if the argument is floating point, unless otherwise noted.</p>
<p><strong>racket:</strong></p>
<p><em>inexact-&gt;exact</em> can be used to convert a float returned by <em>round</em>, <em>ceiling</em>, or <em>floor</em> to an integer.</p>
<p><strong>clojure:</strong></p>
<p><em>Math/round</em> always returns an integer and throws and error if called on a rational. <em>Math/floor</em> and <em>Math/ceil</em> can be called on a rational, but always return a float.</p>
<p><strong>emacs:</strong></p>
<p><em>round</em>, <em>ceiling</em>, and <em>floor</em> return integers. <em>fround</em>, <em>fceiling</em>, and <em>ffloor</em> return floats.</p>
<p><a name="quotient-remainder" id="quotient-remainder"></a></p>
<h2 id="toc47"><span>quotient and remainder</span></h2>
<p><a name="sqrt-negative-two" id="sqrt-negative-two"></a></p>
<h2 id="toc48"><span>(sqrt -2)</span></h2>
<p>The value of <em>(sqrt -2)</em>. Common lisp and Scheme support complex numbers. Clojure and Emacs Lisp do not.</p>
<p><a name="integer-rational-complex-decomposition" id="integer-rational-complex-decomposition"></a></p>
<h2 id="toc49"><span>decomposition of integer, rational, complex</span></h2>
<p>For absolute value, the type of the return value is the same of the type of the argument.</p>
<p><strong>racket:</strong></p>
<p>The <em>scheme/math</em> library must be loaded to use <em>sgn</em>.</p>
<p><strong>clojure:</strong></p>
<p><em>Math/signum</em> only operates on a float and returns a float</p>
<p><a name="random-num-note" id="random-num-note"></a></p>
<h2 id="toc50"><span><a href="#random-num">random number</a></span></h2>
<p>How to generate a random integer, and a random float in a uniform and a normal distribution.</p>
<p><a name="bit-op-note" id="bit-op-note"></a></p>
<h2 id="toc51"><span><a href="#bit-op">bit operators</a></span></h2>
<p><strong>racket:</strong></p>
<p>The bitwise operators implemented by Gambit and Racket are specified in the withdrawn standard <a href="http://srfi.schemers.org/srfi-33/">SRFI 33</a>.</p>
<p><strong>emacs:</strong></p>
<p>Also has <em>ash</em>, which gives a different value when both arguments are negative.</p>
<p><a name="strings-note" id="strings-note"></a></p>
<h1 id="toc52"><span><a href="#strings">Strings</a></span></h1>
<p><a name="character-literal" id="character-literal"></a></p>
<h2 id="toc53"><span>character literals</span></h2>
<p>The syntax for character literals. The first literal uses the letter "a" as an example of how to write a literal for all ASCII printing characters.</p>
<p><strong>common lisp:</strong></p>
<p>Characters are of type standard-char. The predicate is <em>characterp</em>.</p>
<p><strong>racket:</strong></p>
<p>The predicate is <em>char?</em>.</p>
<p><strong>clojure:</strong></p>
<p>Characters are of type java.lang.Character.</p>
<p><strong>emacs:</strong></p>
<p>Characters are of type integer and can be manipulated by arithmetic operators. <em>characterp</em> and <em>integerp</em> are synonyms.</p>
<p><a name="string-literal" id="string-literal"></a></p>
<h2 id="toc54"><span>string literal</span></h2>
<p>The syntax for a string literal.</p>
<p><a name="string-escapes" id="string-escapes"></a></p>
<h2 id="toc55"><span>string escapes</span></h2>
<p>A list of escape sequences that can be used in string literals.</p>
<p><strong>emacs lisp:</strong></p>
<p>The \x escape sequence is followed by one to six hex digits. Because a variable number of hex digits can be used, it may be necessary to indicate the end of the sequence with a backslash and a space, e.g. the following string literal is "λ123":</p>
<div class="code">
<pre>
<code>  "\x3bb\ 123"</code>
</pre></div>
<p><a name="string-char" id="string-char"></a></p>
<h2 id="toc56"><span>character access</span></h2>
<p>How to get the character at a given position in a string.</p>
<p><a name="find-substring" id="find-substring"></a></p>
<h2 id="toc57"><span>find substring</span></h2>
<p>Find the location of a substring in a string.</p>
<p><a name="extract-substring" id="extract-substring"></a></p>
<h2 id="toc58"><span>extract substring</span></h2>
<p><a name="string-length" id="string-length"></a></p>
<h2 id="toc59"><span>length</span></h2>
<p><a name="string-constructors" id="string-constructors"></a></p>
<h2 id="toc60"><span>constructors</span></h2>
<p><a name="string-comparison" id="string-comparison"></a></p>
<h2 id="toc61"><span>comparison</span></h2>
<p><strong>common lisp:</strong></p>
<p>Here is the complete list of string comparison functions:</p>
<div class="code">
<pre>
<code>string=
string&lt;
string&gt;
string&lt;=
string&gt;=
string/=</code>
</pre></div>
<p>There are also case insensitive versions of the above functions:</p>
<div class="code">
<pre>
<code>string-equal
string-lessp
string-greaterp
string-not-greaterp
string-not-lessp
string-not-equal</code>
</pre></div>
<p><strong>racket:</strong></p>
<p>Case sensitive string comparison:</p>
<div class="code">
<pre>
<code>string&lt;=?
string&lt;?
string=?
string&gt;=?
string&gt;?</code>
</pre></div>
<p>Case insensitive string comparison:</p>
<div class="code">
<pre>
<code>string-ci&lt;=?
string-ci&lt;?
string-ci=?
string-ci&gt;=?
string-ci&gt;?</code>
</pre></div>
<p><strong>emacs lisp:</strong></p>
<p>Emacs has only these string comparison functions, all of which are case sensitive:</p>
<div class="code">
<pre>
<code>string=
string-equal
string&lt;
string-lessp</code>
</pre></div>
<p><em>string=</em> and <em>string-equal</em> are synonyms, as are <em>string&lt;</em> and <em>string-lessp</em>.</p>
<p><a name="string-case" id="string-case"></a></p>
<h2 id="toc62"><span>case</span></h2>
<p><a name="string-trim" id="string-trim"></a></p>
<h2 id="toc63"><span>trim</span></h2>
<p><strong>emacs:</strong></p>
<p>An implementation of <tt>trim</tt>:</p>
<div class="code">
<pre>
<code>(defun trim (s)
  (let ((s1 (replace-regexp-in-string "[ \t]*$" "" s)))
    (replace-regexp-in-string "^[ \t]*" "" s1)))</code>
</pre></div>
<p><a name="number-string" id="number-string"></a></p>
<h2 id="toc64"><span>convert from string, to string</span></h2>
<p>How to convert strings to numbers, and numbers to strings.</p>
<p><strong>common lisp:</strong></p>
<p><em>read-from-string</em> invokes the reader, so the return value is not guaranteed to be a floating point number.</p>
<p>Here is a <em>parse-float</em> function which will convert all real numeric types to floats and raise a simple error if another condition is encountered.</p>
<div class="code">
<pre>
<code>(defun parse-float (s)
  (let ((readval (handler-case
                  (read-from-string s)
                  (sb-int:simple-reader-error nil)
                  (end-of-file nil))))
    (cond ((realp readval ) (+ readval 0.0))
          (t (error (concatenate 'string "not a float: " s))))))</code>
</pre></div>
<p><a name="string-concat" id="string-concat"></a></p>
<h2 id="toc65"><span>concat</span></h2>
<p><a name="string-split" id="string-split"></a></p>
<h2 id="toc66"><span>split</span></h2>
<p><a name="string-join" id="string-join"></a></p>
<h2 id="toc67"><span>join</span></h2>
<p><a name="format" id="format"></a></p>
<h2 id="toc68"><span>format</span></h2>
<p><a name="regular-expressions" id="regular-expressions"></a></p>
<h2 id="toc69"><span>regular expressions</span></h2>
<p><strong>common lisp</strong></p>
<p><a href="http://weitz.de/cl-ppcre/">http://weitz.de/cl-ppcre/</a></p>
<p><strong>emacs lisp</strong></p>
<p><em>string-match</em> returns the first index of the first matching substring, or nil.</p>
<p>The following code moves the point to next position following the point that matches the argument, and returns the index of the that position.</p>
<div class="code">
<pre>
<code>(re-search-forward "hello")</code>
</pre></div>
<p><a name="regex-substitution" id="regex-substitution"></a></p>
<h2 id="toc70"><span>regex substitution</span></h2>
<p><a name="regex-special-chars" id="regex-special-chars"></a></p>
<h2 id="toc71"><span>regex special characters</span></h2>
<p><a name="lists-note" id="lists-note"></a></p>
<h1 id="toc72"><span><a href="#lists">Lists</a></span></h1>
<p><a name="list-literal" id="list-literal"></a></p>
<h2 id="toc73"><span>list literal</span></h2>
<p><a name="pair-literal" id="pair-literal"></a></p>
<h2 id="toc74"><span>pair literal</span></h2>
<p><a name="car-nil" id="car-nil"></a></p>
<h2 id="toc75"><span>(car '())</span></h2>
<p><a name="cdr-nil" id="cdr-nil"></a></p>
<h2 id="toc76"><span>(cdr '())</span></h2>
<p><a name="eval-nil" id="eval-nil"></a></p>
<h2 id="toc77"><span>(eval '())</span></h2>
<p>A practical advantage of having <em>(eval '())</em> be equal to '() is that the empty list doesn't have to be quoted.</p>
<p><a name="list-functions" id="list-functions"></a></p>
<h2 id="toc78"><span>list functions</span></h2>
<p><a name="nth" id="nth"></a></p>
<h2 id="toc79"><span>nth</span></h2>
<p><em>nth</em> and <em>list-ref</em> count from zero. <em>nth</em> returns <em>nil</em> if the index is too large. <em>list-ref</em> throws an error.</p>
<p><a name="list-element-index" id="list-element-index"></a></p>
<h2 id="toc80"><span>index of list element</span></h2>
<p>How to get the index of a list element. The first element of a list has an index of zero.</p>
<p><a name="last-butlast" id="last-butlast"></a></p>
<h2 id="toc81"><span>last butlast</span></h2>
<p>In clojure, <em>last</em> and <em>butlast</em> are analogs of <em>first</em> and <em>rest</em> which operate at the end of a list. If X is a list, then the following code pairs are identities:</p>
<div class="code">
<pre>
<code>(last X)
(first (reverse X))

(butlast X)
(reverse (rest (reverse X)))</code>
</pre></div>
<p>The analogy breaks down in Common Lisp because <em>last</em> returns a list with a single element.</p>
<p><a name="set-car-cdr" id="set-car-cdr"></a></p>
<h2 id="toc82"><span>set-car set-cdr</span></h2>
<p><strong>common lisp:</strong></p>
<p>The following code pairs perform the same operation on the list:</p>
<div class="code">
<pre>
<code>(setf (car l) 3)
(rplaca l 3)

(setf (cdr l) '(4 5 6))
(rplacd l '(4 5 6))</code>
</pre></div>
<p>However, they are not identical because <em>rplaca</em> and <em>rplacd</em> return the modified list instead of their 2nd argument.</p>
<p><strong>racket:</strong></p>
<p>Racket provides a separate interpreter <em>plt-r5rs</em> for an R5RS compliant version of Scheme. Also, the language can be set to R5RS within DrRacket.</p>
<p><strong>emacs lisp:</strong></p>
<p>Also has <em>setf</em>.</p>
<p><a name="sort" id="sort"></a></p>
<h2 id="toc83"><span>sort</span></h2>
<p><a name="assoc" id="assoc"></a></p>
<h2 id="toc84"><span>assoc</span></h2>
<p><strong>clojure</strong></p>
<p>In Clojure, <em>assoc</em> returns a new association with the specified values replaced:</p>
<div class="code">
<pre>
<code>(def numbers {1 :one 2 :two 3 :three 4 :four})
(def jumble (assoc numbers 1 :uno 3 :drei 4 :quatre))</code>
</pre></div>
<p><a name="getf" id="getf"></a></p>
<h2 id="toc85"><span>getf</span></h2>
<p><strong>racket:</strong></p>
<p>How to implement <em>getf</em> in Scheme:</p>
<div class="code">
<pre>
<code>(define (getf lst key (default null))
    (cond ((null? lst) default)
          ((null? (cdr lst)) default)
          ((eq? (car lst) key) (cadr lst))
          (else (getf (cddr lst) key default))))</code>
</pre></div>
<p><a name="map" id="map"></a></p>
<h2 id="toc86"><span>map</span></h2>
<p><strong>common lisp</strong></p>
<p>The lambda can accept multiple arguments:</p>
<div class="code">
<pre>
<code>(mapcar '+ '(1 2 3) '(4 5 6))</code>
</pre></div>
<p><strong>racket</strong></p>
<div class="code">
<pre>
<code>(map + '(1 2 3) '(4 5 6))</code>
</pre></div>
<p><strong>clojure</strong></p>
<div class="code">
<pre>
<code>(map + '(1 2 3) '(4 5 6))</code>
</pre></div>
<p><strong>emacs lisp</strong></p>
<p><em>mapcar</em> does not accept multiple argument lambdas</p>
<p><a name="filter" id="filter"></a></p>
<h2 id="toc87"><span>filter</span></h2>
<p><strong>common lisp</strong></p>
<p>Also the negative version:</p>
<div class="code">
<pre>
<code>(remove-if (lambda (x) (&gt; x 2)) '(1 2 3))</code>
</pre></div>
<p><strong>clojure</strong></p>
<p>Also the negative version:</p>
<div class="code">
<pre>
<code>(remove #(&gt; % 2) '(1 2 3))</code>
</pre></div>
<p><strong>emacs lisp</strong></p>
<p>Also has negative version:</p>
<div class="code">
<pre>
<code>(remove-if (λ (x) (&gt; x 2)) '(1 2 3))</code>
</pre></div>
<p><a name="reduce" id="reduce"></a></p>
<h2 id="toc88"><span>reduce (left fold)</span></h2>
<p><a name="right-fold" id="right-fold"></a></p>
<h2 id="toc89"><span>right fold</span></h2>
<p><strong>clojure:</strong></p>
<p>How to define <tt>foldr</tt>:</p>
<div class="code">
<pre>
<code>(defn foldr [f init list] (reduce #(f %2 %1) (reverse list)))</code>
</pre></div>
<p><a name="sublis" id="sublis"></a></p>
<h2 id="toc90"><span>sublis</span></h2>
<p>How to apply the mapping defined by an associative list to a recursive list.</p>
<h2 id="toc91"><span>dolist</span></h2>
<p><a name="take" id="take"></a></p>
<h2 id="toc92"><span>take</span></h2>
<p>Here is how to define <em>take</em> for common lisp or emacs lisp:</p>
<div class="code">
<pre>
<code>(defun take (n l)
  (cond ((&lt; n 0) (error "index negative"))
        ((= n 0) ())
        ((null l) (error "index too large"))
        (t (cons (car l) (take (- n 1) (cdr l))))))</code>
</pre></div>
<p><a name="drop" id="drop"></a></p>
<h2 id="toc93"><span>drop</span></h2>
<p><a name="push-pop" id="push-pop"></a></p>
<h2 id="toc94"><span>push and pop</span></h2>
<p><strong>racket:</strong></p>
<p>Here is an implementation of <em>push</em> and <em>pop</em> in Racket using boxes:</p>
<div class="code">
<pre>
<code>(define (push x a-list)
  (set-box! a-list (cons x (unbox a-list))))

(define (pop a-list)
  (let ((result (first (unbox a-list))))
    (set-box! a-list (rest (unbox a-list)))
    result))</code>
</pre></div>
<p><strong>clojure:</strong></p>
<p>Note the in clojure, <em>pop</em> only returns the first element; the original list is left unmodified.</p>
<p><a name="arrays-note" id="arrays-note"></a></p>
<h1 id="toc95"><span><a href="#arrays">Arrays</a></span></h1>
<p><a name="vector-literal" id="vector-literal"></a></p>
<h2 id="toc96"><span>vector literal</span></h2>
<p><strong>racket</strong></p>
<p><em>#(1 2 3)</em> creates an immutable vect. <em>(vector 1 2 3)</em> creates a mutable vector.</p>
<p><a name="vector-access" id="vector-access"></a></p>
<h2 id="toc97"><span>vector access</span></h2>
<p><a name="set-vector-element" id="set-vector-element"></a></p>
<h2 id="toc98"><span>set vector element</span></h2>
<p><strong>racket</strong></p>
<p><em>vector-set!</em> throws an error if called on an immutable vector.</p>
<p><a name="vector-to-list" id="vector-to-list"></a></p>
<h2 id="toc99"><span>vector to list</span></h2>
<p><a name="list-to-vector" id="list-to-vector"></a></p>
<h2 id="toc100"><span>list to vector</span></h2>
<p><a name="abstract-sequence" id="abstract-sequence"></a></p>
<h2 id="toc101"><span>abstract sequence</span></h2>
<p>Lists and vectors support the same operations; the only difference is the speed at which the operations can be performed. It is a convenience for the developer if functions that perform the operations have the same name; i.e. if lists and vectors are members of an abstract sequence type. Clojure has gone furthest in this direction, making all the customary list functions work on vectors as well. In common lisp and emacs lisp, some of the list functions also work on vectors, and some don't. In Scheme none of the list functions work on vectors.</p>
<p><a name="sequence-data-types" id="sequence-data-types"></a></p>
<h2 id="toc102"><span>sequence data types</span></h2>
<p>The containers that respond to sequence functions.</p>
<p><a name="sequence-predicate" id="sequence-predicate"></a></p>
<h2 id="toc103"><span>sequence predicate</span></h2>
<p><a name="sequence-functions" id="sequence-functions"></a></p>
<h2 id="toc104"><span>list functions usable on sequences</span></h2>
<p><a name="make-array" id="make-array"></a></p>
<h2 id="toc105"><span>make-array</span></h2>
<p>In Lisp terminology, both arrays and vectors refer to collections which are of fixed size; vectors are arrays with rank 1. Only common lisp supports arrays with rank greater than 1.</p>
<p><a name="array-access" id="array-access"></a></p>
<h2 id="toc106"><span>array access</span></h2>
<p><a name="set-array-element" id="set-array-element"></a></p>
<h2 id="toc107"><span>set array element</span></h2>
<p><a name="array-dimensions" id="array-dimensions"></a></p>
<h2 id="toc108"><span>array dimensions</span></h2>
<p><em>array-rank</em> returns the number of indices required to specify an element in the array. <em>array-dimensions</em> returns the size of the array; the number of cells is the product of the elements of the list.</p>
<p><a name="range" id="range"></a></p>
<h2 id="toc109"><span>range</span></h2>
<p><a name="list-comprehension" id="list-comprehension"></a></p>
<h2 id="toc110"><span>list comprehension</span></h2>
<p><a name="dictionaries-note" id="dictionaries-note"></a></p>
<h1 id="toc111"><span><a href="#dictionaries">Dictionaries</a></span></h1>
<p><a name="make-hash" id="make-hash"></a></p>
<h2 id="toc112"><span>make hash</span></h2>
<p><strong>racket</strong></p>
<p>Use the following to get access to the hash functions:</p>
<div class="code">
<pre>
<code>(require scheme/dict)</code>
</pre></div>
<p><a name="put-hash" id="put-hash"></a></p>
<h2 id="toc113"><span>put hash</span></h2>
<p>Put a key/value pair in a hash.</p>
<p><strong>clojure</strong></p>
<p>The hash map is immutable. The <em>assoc</em> function returns a new version of the hash with the additional key/value pairs provided as arguments.</p>
<p><a name="get-hash" id="get-hash"></a></p>
<h2 id="toc114"><span>get-hash</span></h2>
<p>Lookup a value in a hash by key.</p>
<p><a name="hash-key-not-found" id="hash-key-not-found"></a></p>
<h2 id="toc115"><span>hash key not found</span></h2>
<p><strong>racket:</strong></p>
<p>Racket throws and error when the key is not found. Here is how to handle the error and return a null when the key is not found:</p>
<div class="code">
<pre>
<code>(with-handlers ((exn:fail? (lambda (e) null))) (get h "goodbye"))</code>
</pre></div>
<p><a name="rem-hash" id="rem-hash"></a></p>
<h2 id="toc116"><span>rem-hash</span></h2>
<p><a name="hash-size" id="hash-size"></a></p>
<h2 id="toc117"><span>hash size</span></h2>
<p><a name="map-hash" id="map-hash"></a></p>
<h2 id="toc118"><span>map hash</span></h2>
<p><a name="defstruct" id="defstruct"></a></p>
<h2 id="toc119"><span>defstruct</span></h2>
<p><a name="struct" id="struct"></a></p>
<h2 id="toc120"><span>struct</span></h2>
<p><a name="struct-getter" id="struct-getter"></a></p>
<h2 id="toc121"><span>struct getter</span></h2>
<p><a name="struct-setter" id="struct-setter"></a></p>
<h2 id="toc122"><span>struct setter</span></h2>
<p><a name="struct-predicate" id="struct-predicate"></a></p>
<h2 id="toc123"><span>struct predicate</span></h2>
<p><a name="functions-note" id="functions-note"></a></p>
<h1 id="toc124"><span><a href="#functions">Functions</a></span></h1>
<p><a name="let" id="let"></a><a name="let-star" id="let-star"></a></p>
<h2 id="toc125"><span>let, let*</span></h2>
<p>Traditionally <tt>let</tt> performs its assignments in parallel and <tt>let*</tt> serially.</p>
<p><strong>clojure</strong></p>
<p>In Clojure, <em>let</em> and <em>let*</em> are synonyms and both perform serial assignment.</p>
<p><strong>emacs</strong></p>
<p>Note that <tt>let</tt> uses dynamic scope. Use <tt>lexical-let</tt> for lexical scope:</p>
<div class="code">
<pre>
<code>ELISP&gt; (let ((x 3)) (defun get-x () x))
get-x
ELISP&gt; (get-x)
*** Eval error ***  Symbol's value as variable is void: x
ELISP&gt; (let ((x 4)) (get-x))
4
ELISP&gt; (lexical-let ((x 3)) (defun get-x-2 () x))
get-x-2
ELISP&gt; (get-x-2)
3
ELISP&gt; (lexical-let ((x 4)) (get-x-2))
3</code>
</pre></div>
<p><a name="define-function" id="define-function"></a></p>
<h2 id="toc126"><span>define function</span></h2>
<p><a name="optional-argument" id="optional-argument"></a></p>
<h2 id="toc127"><span>optional argument</span></h2>
<p><a name="variable-arguments" id="variable-arguments"></a></p>
<h2 id="toc128"><span>variable number of arguments</span></h2>
<p><a name="default-value" id="default-value"></a></p>
<h2 id="toc129"><span>default value</span></h2>
<p><a name="named-parameter" id="named-parameter"></a></p>
<h2 id="toc130"><span>named parameter</span></h2>
<p><strong>common lisp:</strong></p>
<p>In common lisp, named parameters are optional. Named values can be assigned default values:</p>
<div class="code">
<pre>
<code> (defun logarithm (&amp;key number (base 10)) (/ (log number) (log base)))</code>
</pre></div>
<p>If a named parameter is not provided at invocation and has not been assigned a default value, then it is set to <em>nil</em>.</p>
<p><strong>racket:</strong></p>
<p><a href="http://rosettacode.org/wiki/Named_parameters#Scheme">How to Implement Named Parameters in Scheme</a></p>
<p><strong>emacs lisp:</strong></p>
<p>In emacs lisp named parameters are mandatory. A runtime error results in they are not provided when the function is invoked.</p>
<p><a name="tail-call" id="tail-call"></a></p>
<h2 id="toc131"><span>tail call optimization</span></h2>
<p><strong>common lisp:</strong></p>
<p>The ANSI Common Lisp specification does not require an implementation to perform tail call optimization.</p>
<p><a name="docstring-note" id="docstring-note"></a></p>
<h2 id="toc132"><span><a href="#docstring">get docstring</a></span></h2>
<p>How to get the documentation string for a function.</p>
<p><strong>common lisp:</strong></p>
<p><tt>describe</tt> returns the documentation string with additional information such as the function signature. To get just the documentation string use this:</p>
<div class="code">
<pre>
<code>(documentation #'mapcar 'function)</code>
</pre></div>
<p><a name="define-docstring-note" id="define-docstring-note"></a></p>
<h2 id="toc133"><span><a href="#define-docstring">define function with docstring</a></span></h2>
<p>How to define a function that has a documentation string.</p>
<p><a name="search-doc-note" id="search-doc-note"></a></p>
<h2 id="toc134"><span><a href="#search-doc">apropos and documentation search</a></span></h2>
<p>How to search definitions and documentation.</p>
<p>Apropos takes a pattern and returns all defined symbol names which match the pattern.</p>
<p><strong>clojure:</strong></p>
<p><tt>apropos</tt> returns matching symbol names as a list.</p>
<p><tt>find-doc</tt> searches all documentation strings and writes any which match to standard out.</p>
<p>Both <tt>apropos</tt> and <tt>find-doc</tt> can take a string or a regular expression as an argument.</p>
<p><strong>emacs lisp:</strong></p>
<p><tt>apropos</tt> displays the documentation for matching definitions in the <tt>*Apropos*</tt> buffer. The argument is a string but will be treated as a regular expression.</p>
<p><a name="macros-note" id="macros-note"></a></p>
<h1 id="toc135"><span><a href="#macros">Macros</a></span></h1>
<p><a name="backquote-comma" id="backquote-comma"></a></p>
<h2 id="toc136"><span>backquote and comma</span></h2>
<p><a name="defmacro" id="defmacro"></a></p>
<h2 id="toc137"><span>defmacro</span></h2>
<p><a name="defmacro-backquote" id="defmacro-backquote"></a></p>
<h2 id="toc138"><span>defmacro-backquote</span></h2>
<p><a name="macro-predicate" id="macro-predicate"></a></p>
<h2 id="toc139"><span>macro predicate</span></h2>
<p><a name="macroexpand" id="macroexpand"></a></p>
<h2 id="toc140"><span>macroexpand</span></h2>
<p><em>macroexpand</em> recursively expands a sexp until the head is no longer a macro. It does not expand arguments that are macros.</p>
<p><strong>common lisp</strong></p>
<p>Common lisp also has <em>macroexpand-1</em>, which will non-recursively expand a macro once. The head of the expansion may thus be a macro.</p>
<p><strong>clojure</strong></p>
<p>Clojure also has <em>macroexpand-1</em>. See above for an example of use.</p>
<p><strong>emacs lisp</strong></p>
<p>Emacs has <em>macroexpand-all</em>, which will recursively expand a sexp until head and arguments are free of macros.</p>
<p><a name="splice-quote" id="splice-quote"></a></p>
<h2 id="toc141"><span>splice quote</span></h2>
<p><a name="recursive-macro" id="recursive-macro"></a></p>
<h2 id="toc142"><span>recursive macro</span></h2>
<p><a name="hygienic" id="hygienic"></a></p>
<h2 id="toc143"><span>hygienic</span></h2>
<p>Does the language have macros whose expansions are guaranteed not to introduce name collisions.</p>
<p><a name="local-values" id="local-values"></a></p>
<h2 id="toc144"><span>local values</span></h2>
<p><a name="execution-control-note" id="execution-control-note"></a></p>
<h1 id="toc145"><span><a href="#execution-control">Execution Control</a></span></h1>
<p><a name="progn" id="progn"></a></p>
<h2 id="toc146"><span>progn</span></h2>
<p><em>progn</em> and its equivalents in other dialects returns the value of the last expression. Common Lisp and Emacs Lisp also have <em>prog1</em> and <em>prog2</em> for returning the value of the 1st or 2nd expression.</p>
<p><a name="loop" id="loop"></a></p>
<h2 id="toc147"><span>loop</span></h2>
<p><a name="do" id="do"></a></p>
<h2 id="toc148"><span>do</span></h2>
<p><a name="dotimes" id="dotimes"></a></p>
<h2 id="toc149"><span>dotimes</span></h2>
<p><a name="if" id="if"></a></p>
<h2 id="toc150"><span>if</span></h2>
<p><a name="when" id="when"></a></p>
<h2 id="toc151"><span>when</span></h2>
<p><a name="error" id="error"></a></p>
<h2 id="toc152"><span>error</span></h2>
<p><a name="handle-error" id="handle-error"></a></p>
<h2 id="toc153"><span>handle error</span></h2>
<p><strong>racket:</strong></p>
<p>Calling <em>error</em> raises an exception of type exn:fail</p>
<p><strong>emacs:</strong></p>
<p>In the example:</p>
<div class="code">
<pre>
<code>(condition-case nil (error "failed") (error (message "caught error") nil))</code>
</pre></div>
<p>the 2nd argument to <em>condition-case</em> is the code which might raise an error, and the 3rd argument is the error handler. The error handler starts with condition to be caught. The last <em>nil</em> is the return value of the entire <em>condition-case</em> expression.</p>
<p>An error cannot be handled by catch. An uncaught throw will generate an error, which can be handled by a condition-case error handler.</p>
<p><a name="define-exception" id="define-exception"></a></p>
<h2 id="toc154"><span>define exception</span></h2>
<p>How to define a custom exception with a payload.</p>
<p><strong>common lisp:</strong></p>
<p>The :report clause is not necessary. If defined it will be displayed if the exception is handled by the lisp debugger.</p>
<p><a name="throw-exception" id="throw-exception"></a></p>
<h2 id="toc155"><span>throw exception</span></h2>
<p><strong>emacs:</strong></p>
<p>The 1st argument of an emacs <em>throw</em> expression identifies the type of exception, and the 2nd argument will be the return value of the <em>catch</em> expression that catches the exception.</p>
<p><a name="catch-exception" id="catch-exception"></a></p>
<h2 id="toc156"><span>catch exception</span></h2>
<p><strong>emacs</strong></p>
<p>The following <em>catch</em> expression will return <em>nil</em>:</p>
<div class="code">
<pre>
<code>(catch 'failed (throw 'failed nil) t)</code>
</pre></div>
<p><a name="restart-case" id="restart-case"></a></p>
<h2 id="toc157"><span>restart case</span></h2>
<p><a name="invoke-restart" id="invoke-restart"></a></p>
<h2 id="toc158"><span>invoke restart</span></h2>
<p><a name="finally-clause" id="finally-clause"></a></p>
<h2 id="toc159"><span>finally clause</span></h2>
<p><strong>racket:</strong></p>
<ul><li><a href="http://www.nhplace.com/kent/PFAQ/unwind-protect-vs-continuations-original.html">Unwind-protect vs. Continuations</a> Kent Pitman</li>
<li><a href="http://www.ccs.neu.edu/home/dorai/uwcallcc/uwcallcc.html">Unwind-protect in Portable Scheme</a> Dorai Sitiram</li>
</ul><p><strong>clojure:</strong></p>
<p>Here is an optional technique for making sure that a file handle is closed:</p>
<div class="code">
<pre>
<code>(with-open [#^PrintWriter w (writer f)] (.print w content))</code>
</pre></div>
<p><a name="lazy-evaluation" id="lazy-evaluation"></a></p>
<h2 id="toc160"><span>lazy evaluation</span></h2>
<p><a name="continuations" id="continuations"></a></p>
<h2 id="toc161"><span>continuations</span></h2>
<p><a name="create-thread" id="create-thread"></a></p>
<h2 id="toc162"><span>create thread</span></h2>
<p><a name="wait-thread" id="wait-thread"></a></p>
<h2 id="toc163"><span>wait on thread</span></h2>
<p><a name="file-handles-note" id="file-handles-note"></a></p>
<h1 id="toc164"><span><a href="#file-handles">File Handles</a></span></h1>
<p><a name="std-file-handles-note" id="std-file-handles-note"></a></p>
<h2 id="toc165"><span><a href="#std-file-handles">standard file handles</a></span></h2>
<p><a name="eof-note" id="eof-note"></a></p>
<h2 id="toc166"><span><a href="#eof">end-of-file behavior</a></span></h2>
<p><a name="read-stdin-note" id="read-stdin-note"></a></p>
<h2 id="toc167"><span><a href="#read-stdin">read line from stdin</a></span></h2>
<p><a name="chomp-note" id="chomp-note"></a></p>
<h2 id="toc168"><span><a href="#chomp">chomp</a></span></h2>
<p><a name="println-note" id="println-note"></a></p>
<h2 id="toc169"><span><a href="#println">write line to stdout</a></span></h2>
<p><a name="format-stdout-note" id="format-stdout-note"></a></p>
<h2 id="toc170"><span><a href="#format-stdout">write formatted string to stdout</a></span></h2>
<p><strong>racket</strong></p>
<p><em>printf</em> prints to stdout. <em>format</em> returns a string.</p>
<p><strong>emacs lisp</strong></p>
<p>The <em>format</em> statement returns the generated string. When used for i/o, it prints in the emacs minibuffer.</p>
<p><a name="open-file-note" id="open-file-note"></a></p>
<h2 id="toc171"><span><a href="#open-file">open file for reading</a></span></h2>
<p><a name="open-file-write-note" id="open-file-write-note"></a></p>
<h2 id="toc172"><span><a href="#open-file-write">open file for writing</a></span></h2>
<p><a name="open-file-append-note" id="open-file-append-note"></a></p>
<h2 id="toc173"><span><a href="#open-file-append">open file for appending</a></span></h2>
<p><a name="close-file-note" id="close-file-note"></a></p>
<h2 id="toc174"><span><a href="#close-file">close file</a></span></h2>
<p><a name="close-file-implicitly-note" id="close-file-implicitly-note"></a></p>
<h2 id="toc175"><span><a href="#close-file-implicitly">close file implicitly</a></span></h2>
<p><a name="read-line-note" id="read-line-note"></a></p>
<h2 id="toc176"><span><a href="#read-line">read line</a></span></h2>
<p><a name="iterate-file-note" id="iterate-file-note"></a></p>
<h2 id="toc177"><span><a href="#iterate-file">iterate over file by line</a></span></h2>
<p><a name="read-file-array-note" id="read-file-array-note"></a></p>
<h2 id="toc178"><span><a href="#read-file-array">read file into array of strings</a></span></h2>
<p><a name="read-file-str-note" id="read-file-str-note"></a></p>
<h2 id="toc179"><span><a href="#read-file-str">read file into string</a></span></h2>
<p><a name="write-str-note" id="write-str-note"></a></p>
<h2 id="toc180"><span><a href="#write-str">write string</a></span></h2>
<p><a name="write-line-note" id="write-line-note"></a></p>
<h2 id="toc181"><span><a href="#write-line">write line</a></span></h2>
<p><a name="flush-file-note" id="flush-file-note"></a></p>
<h2 id="toc182"><span><a href="#flush-file">flush filehandle</a></span></h2>
<p><a name="file-buffers-note" id="file-buffers-note"></a></p>
<h1 id="toc183"><span><a href="#file-buffers">File Buffers</a></span></h1>
<p><a name="files-note" id="files-note"></a></p>
<h1 id="toc184"><span><a href="#files">Files</a></span></h1>
<p><a name="file-test-note" id="file-test-note"></a></p>
<h2 id="toc185"><span><a href="#file-test">file test, regular file test</a></span></h2>
<p><a name="file-size-note" id="file-size-note"></a></p>
<h2 id="toc186"><span><a href="#file-size">file size</a></span></h2>
<p><a name="file-readable-writable-executable-note" id="file-readable-writable-executable-note"></a></p>
<h2 id="toc187"><span><a href="#file-readable-writable-executable">is file readable, writable, executable</a></span></h2>
<p><a name="chmod-note" id="chmod-note"></a></p>
<h2 id="toc188"><span><a href="#chmod">set file permissions</a></span></h2>
<p><a name="cp-rm-mv-note" id="cp-rm-mv-note"></a></p>
<h2 id="toc189"><span><a href="#cp-rm-mv">copy file, remove file, rename file</a></span></h2>
<p><a name="symlink-note" id="symlink-note"></a></p>
<h2 id="toc190"><span><a href="#symlink">create symlink, symlink test, get target</a></span></h2>
<p><a name="tmp-file-note" id="tmp-file-note"></a></p>
<h2 id="toc191"><span><a href="#tmp-file">temporary file</a></span></h2>
<p><a name="in-memory-file-note" id="in-memory-file-note"></a></p>
<h2 id="toc192"><span><a href="#in-memory-file">in memory file</a></span></h2>
<p><a name="directories-note" id="directories-note"></a></p>
<h1 id="toc193"><span><a href="#directories">Directories</a></span></h1>
<p><a name="build-pathname-note" id="build-pathname-note"></a></p>
<h2 id="toc194"><span><a href="#build-pathname">build pathname</a></span></h2>
<p>How to build a file pathname from components.</p>
<p><a name="dirname-basename-note" id="dirname-basename-note"></a></p>
<h2 id="toc195"><span><a href="#dirname-basename">dirname and basename</a></span></h2>
<p>How to extract the directory portion of a pathname; how to extract the non-directory portion.</p>
<p><a name="abs-pathname-note" id="abs-pathname-note"></a></p>
<h2 id="toc196"><span><a href="#abs-pathname">absolute pathname</a></span></h2>
<p>How to get the get the absolute pathname for a pathname. If the pathname is relative the current working directory will be appended.</p>
<p><a name="iterate-dir-note" id="iterate-dir-note"></a></p>
<h2 id="toc197"><span><a href="#iterate-dir">iterate over a directory by file</a></span></h2>
<p>How to iterate over the files in a directory.</p>
<p><a name="mkdir-note" id="mkdir-note"></a></p>
<h2 id="toc198"><span><a href="#mkdir">make directory</a></span></h2>
<p>How to create a directory, including any parents directories specified in the path.</p>
<p><a name="recursive-cp-note" id="recursive-cp-note"></a></p>
<h2 id="toc199"><span><a href="#recursive-cp">recursive copy</a></span></h2>
<p>How to copy a directory and its contents.</p>
<p><a name="rmdir-note" id="rmdir-note"></a></p>
<h2 id="toc200"><span><a href="#rmdir">remove empty directory</a></span></h2>
<p>How to remove an empty directory.</p>
<p><a name="rm-rf-note" id="rm-rf-note"></a></p>
<h2 id="toc201"><span><a href="#rm-rf">remove directory and its contents</a></span></h2>
<p>How to remove a directory and its contents.</p>
<p><a name="dir-test-note" id="dir-test-note"></a></p>
<h2 id="toc202"><span><a href="#dir-test">directory test</a></span></h2>
<p>How to test whether a directory exists.</p>
<p><a name="processes-environment-note" id="processes-environment-note"></a></p>
<h1 id="toc203"><span><a href="#processes-environment">Processes and Environment</a></span></h1>
<p><a name="external-command" id="external-command"></a></p>
<h2 id="toc204"><span>external command</span></h2>
<p><a name="command-line-arguments" id="command-line-arguments"></a></p>
<h2 id="toc205"><span>command line arguments</span></h2>
<p><strong>emacs</strong></p>
<p>The global variables <em>command-line-args</em> and <em>argv</em> are set when emacs is run in shebang mode: i.e. with the —script option. <em>command-line-args</em> contains the pathname used to invoke emacs, as well as any options processed by emacs at startup, in addition to any additional arguments. <em>argv</em> only contains the additional arguments.</p>
<p><a name="environment-variables" id="environment-variables"></a></p>
<h2 id="toc206"><span>environment variables</span></h2>
<p><a name="libraries-namespaces-note" id="libraries-namespaces-note"></a></p>
<h1 id="toc207"><span><a href="#libraries-namespaces">Libraries and Namespaces</a></span></h1>
<p><a name="load-file" id="load-file"></a></p>
<h2 id="toc208"><span>loading a file</span></h2>
<p>How to load a file and evaluate the top level expressions.</p>
<p><strong>common lisp</strong></p>
<p>Does not display the result of any evaluations.</p>
<p><strong>racket</strong></p>
<p>Displays the result of the last evaluation.</p>
<p><a name="load-library" id="load-library"></a></p>
<h2 id="toc209"><span>loading a library</span></h2>
<p><a name="objects-note" id="objects-note"></a></p>
<h1 id="toc210"><span><a href="#objects">Objects</a></span></h1>
<p><a name="defclass" id="defclass"></a></p>
<h2 id="toc211"><span>define class</span></h2>
<p><a name="make-instance" id="make-instance"></a></p>
<h2 id="toc212"><span>make instance</span></h2>
<p><a name="read-attribute" id="read-attribute"></a></p>
<h2 id="toc213"><span>read attribute</span></h2>
<p><a name="write-attribute" id="write-attribute"></a></p>
<h2 id="toc214"><span>write attribute</span></h2>
<p><a name="defmethod" id="defmethod"></a></p>
<h2 id="toc215"><span>define method</span></h2>
<p><a name="invoke-method" id="invoke-method"></a></p>
<h2 id="toc216"><span>invoke method</span></h2>
<p><a name="define-subclass" id="define-subclass"></a></p>
<h2 id="toc217"><span>define subclass</span></h2>
<p><a name="universal-superclass" id="universal-superclass"></a></p>
<h2 id="toc218"><span>universal superclass</span></h2>
<p><a name="multiple-inheritance" id="multiple-inheritance"></a></p>
<h2 id="toc219"><span>multiple inheritance</span></h2>
<p><a name="reflection-note" id="reflection-note"></a></p>
<h1 id="toc220"><span><a href="#reflection">Reflection</a></span></h1>
<p><a name="type-of" id="type-of"></a></p>
<h2 id="toc221"><span>type-of</span></h2>
<p>How to get the data type of the entity referred to by a symbol.</p>
<p><a name="java-interop-note" id="java-interop-note"></a></p>
<h1 id="toc222"><span><a href="#java-interop">Java Interoperation</a></span></h1>
<p><a name="version-used-jvm" id="version-used-jvm"></a></p>
<h2 id="toc223"><span>version used on jvm</span></h2>
<p><a name="java-extra-libraries" id="java-extra-libraries"></a></p>
<h2 id="toc224"><span>extra libraries used</span></h2>
<p><strong>racket:</strong></p>
<p>The srfi-1 library brings in a common list functions which Kawa does not make available by default. See <a href="http://srfi.schemers.org/srfi-1/srfi-1.html">SRFI</a>.</p>
<p><a name="java-new" id="java-new"></a></p>
<h2 id="toc225"><span>new</span></h2>
<p><a name="java-method" id="java-method"></a></p>
<h2 id="toc226"><span>method</span></h2>
<p><a name="java-class-method" id="java-class-method"></a></p>
<h2 id="toc227"><span>class method</span></h2>
<p><a name="java-chain" id="java-chain"></a></p>
<h2 id="toc228"><span>chain</span></h2>
<p><a name="java-import" id="java-import"></a></p>
<h2 id="toc229"><span>import</span></h2>
<p><a name="java-to-array" id="java-to-array"></a></p>
<h2 id="toc230"><span>to java array</span></h2>
<p><a name="common-lisp" id="common-lisp"></a></p>
<h1 id="toc231"><span><a href="#top">Common Lisp</a></span></h1>
<p><a href="http://www.lispworks.com/documentation/HyperSpec/Front/">ANSI Specification</a><br /><a href="http://www.cs.cmu.edu/afs/cs/project/ai-repository/ai/lang/lisp/doc/cltl/cltl_ht.tgz">Common Lisp: The Language 2nd Ed.</a> gizpped download<br /><a href="http://www.sbcl.org/manual/">SBCL User Manual</a><br /><a href="http://clisp.cons.org/impnotes/clisp.html">CLISP Man Page</a><br /><a href="http://www.cliki.net/index">CLiki: Common Lisp Wiki</a><br /><a href="http://www.gigamonkeys.com/book/">Practical Common Lisp</a> Seibel<br /><a href="http://common-lisp.net/project/asdf/asdf.html">ASDF Manual</a><br /><a href="http://www.quicklisp.org/">Quicklisp</a></p>
<p>Common Lisp was designed by committee. The initial standard was agreed upon in 1983, and the Common Lisp Object System (CLOS) was added in 1988. Common Lisp became an ANSI standard in 1994.</p>
<p>To test examples in the reference sheet we are using SBCL (Steel Bank Common Lisp) which is fast and feature complete. The only potential downside to SBCL is that the Windows port is considered experimental. CLISP, by contrast, is easy to install and works well on Windows.</p>
<p>For a package manager we use Quicklisp. It works with SBCL and CLISP. Here is how to install it and use it to load the <tt>cl-ppcre</tt> library:</p>
<div class="code">
<pre>
<code>$ curl -O http://beta.quicklisp.org/quicklisp.lisp
$ sbcl
* (load "quicklisp.lisp")
* (quicklisp-quickstart:install)
* (ql:quickload "cl-ppcre")
* (cl-ppcre:all-matches "foo" "foo bar")</code>
</pre></div>
<p>Quicklisp creates a <tt>quicklisp</tt> directory in the user's home directory. Once quicklisp is downloaded and installed, it can be used like this:</p>
<div class="code">
<pre>
<code>$ sbcl
* (load "~/quicklisp/setup.lisp")
* (ql:quickload "cl-ppcre")
* (cl-ppcre:all-matches "foo" "foo bar")</code>
</pre></div>
<p>When using SBCL we can ensure that Quicklisp is automatically loaded at startup by putting the load command into the <tt>.sbclrc</tt> file:</p>
<div class="code">
<pre>
<code>$ cat ~/.sbclrc
(load "~/quicklisp/setup.lisp")</code>
</pre></div>
<p><a name="racket" id="racket"></a></p>
<h1 id="toc232"><span><a href="#top">Racket</a></span></h1>
<p><a href="http://schemers.org/Documents/Standards/R5RS/HTML/r5rs-Z-H-2.html">R5RS</a><br /><a href="http://www.r6rs.org/final/html/r6rs/r6rs-Z-H-2.html">R6RS</a><br /><a href="http://docs.racket-lang.org/guide/index.html">Guide: Racket</a><br /><a href="http://docs.racket-lang.org/reference/index.html">Reference: Racket</a><br /><a href="http://dynamo.iro.umontreal.ca/~gambit/wiki/index.php/Documentation">Gambit Documentation</a><br /><a href="http://www.gnu.org/software/kawa/index.html">Kawa Language Framework</a><br /><a href="http://srfi.schemers.org/">Scheme Requests for Implementation (SRFI)</a><br /><a href="http://tunes.org/wiki/scheme.html">Scheme Links</a><br /><a href="http://snow.iro.umontreal.ca/">Scheme Now</a><br /><a href="http://wiki.call-cc.org/">Chicken Scheme</a><br /><a href="http://wiki.call-cc.org/chicken-projects/egg-index-4.html">Chicken Egg Index</a><br /><a href="http://sicp.ai.mit.edu/Fall-2004/manuals/scheme-7.5.5/doc/scheme_toc.html">MIT Scheme Reference</a></p>
<p>Scheme as a dialect of Lisp is characterized by lexical scope, mandatory tail call optimization, and first class continuations.</p>
<p>The R5RS standard (1998) added hygienic macros to the language. In all standards up to and including R5RS the standards body focused on defining a small core of features. The result was a language ideal for instruction or academic experimentation. The R6RS standard (2007) by contrast defined support for libraries, modules, networking, and Unicode. Most Scheme implementations only aim to be R5RS compliant. Racket is the only implementation which has implemented a significant portion of the R6RS features.</p>
<p>Because of the inconsistent adoption of R6RS, a universal package manager for all Scheme implementations is a difficult undertaking. Scheme Now (Snow) is an effort in this direction, but the package manager <tt>snowman</tt> doesn't work with Racket, Gambit, or Kawa, the implementations used in this reference sheet.</p>
<p>A process was initiated in 1998 called Scheme Request For Implementation (SRFI) which develops specifications for Scheme standard libraries. As of 2010 74 of the specifications have achieved a final status. Here is a <a href="http://srfi.schemers.org/srfi-implementers.html">page</a> showing which SRFIs have been implemented for which Scheme implementations.</p>
<p>Racket ships with a large number of libraries in the <tt>collects</tt> directory of the installation which can be loaded with the <tt>require</tt> command, which takes a raw symbol which is the relative pathname from the <tt>collects</tt> directory to the file, not including the <tt>.rkt</tt> suffix. The Racket 5.1 distribution includes 50 SRFI libraries.</p>
<p>Racket also has a built in package management system. Browse the <a href="http://planet.racket-lang.org/">list of available packages</a>. To install a package, click through to the detail page for the package and get the <tt>require</tt> string to load it. If the <tt>require</tt> string is executed by Racket, the library will be downloaded somewhere in the user's home directory. When I ran this on my Mac</p>
<div class="code">
<pre>
<code>$ racket
&gt; (require (planet "spgsql.rkt" ("schematics" "spgsql.plt" 2 3)))</code>
</pre></div>
<p>the files for the PostgreSQL database bindings were installed in <tt>~/Library/Racket</tt>.</p>
<p>Chicken Scheme packages are called eggs. Use the command line utility <tt>chicken-install</tt> to install an egg. The egg can be loaded in the interpreter with the <tt>use</tt> commnad:</p>
<div class="code">
<pre>
<code>$ sudo chicken-install srfi-19
$ csi
#;1&gt; (use srfi-19)
#;2&gt; (define d (make-date 0 0 0 0 9 7 2011))
#;3&gt; (leap-year? d)
#f</code>
</pre></div>
<p><a name="clojure" id="clojure"></a></p>
<h1 id="toc233"><span><a href="#top">Clojure</a></span></h1>
<p><a href="http://clojure.org/Reference">Clojure Reference</a><br /><a href="http://java.sun.com/javase/6/docs/api/">Java 1.6 API</a></p>
<h2 id="toc234"><span>Calling Java</span></h2>
<p>Here are the basics of calling Java code:</p>
<div class="code">
<pre>
<code>(def rnd (new java.util.Random))  ; create Java object
(. rnd nextFloat)  ; invoke method on object
(. rnd nextInt 10)  ; invoke method with argument
(. Math PI)  ; static member
(import '(java.util Random))  ; import</code>
</pre></div>
<p>Clojure automatically imports everything in java.lang.</p>
<p>There are shortcuts for the above syntax:</p>
<div class="code">
<pre>
<code>(Random.)
(new Random)

Math/PI
(. Math PI)

(.nextInt rnd)
(. rnd nextInt)</code>
</pre></div>
<p>Because they are primitive types and not objects, Clojure provides functions specific to Java arrays:</p>
<div class="code">
<pre>
<code>(make-array CLASS LEN)
(make-array CLASS DIM &amp; DIMS)
(aset ARY IDX VAL)
(aset ARY IDX_DIM1 IDX_DIM2 ... VAL)
(aget ARY IDX)
(aget ARY IDX_DIM1 IDX_DIM2 ...)
(alength JARY)
(to-array SEQ)
(into-array TYPE SEQ)
(amap ARY I COPY EXPR)
(areduce ARY IDX  COPY INIT EXPR )</code>
</pre></div>
<p><a name="emacs-lisp" id="emacs-lisp"></a></p>
<h1 id="toc235"><span><a href="#top">Emacs Lisp</a></span></h1>
<p><a href="http://www.gnu.org/software/emacs/manual/html_mono/emacs.html">GNU Emacs Manual</a><br /><a href="http://www.gnu.org/software/emacs/manual/html_mono/elisp.html">GNU Emacs Lisp Reference Manual</a></p>
<p>To get an introduction to Emacs Lisp Programming from within Emacs use</p>
<div class="code">
<pre>
<code>  C-h i m Emacs Lisp Intro</code>
</pre></div>
<p>Run <tt>M-x lisp-interaction-mode</tt> to put Emacs in lisp interaction mode. In lisp interaction mode the command <tt>C-x e</tt> will evaluate the s-expression on the current line. <tt>M-x eval-buffer</tt> will evaluate the entire buffer.</p>
<p>Use lisp interaction mode to define functions which can be called from Emacs. The following defines a function called <tt>dired-emacs-lisp</tt> for browsing the Emacs Lisp directory:</p>
<div class="code">
<pre>
<code>(defun dired-emacs-lisp ()
  "Open the Emacs Lisp directory in dired."
  (interactive)
   (dired "/Applications/Emacs.app/Contents/Resources/lisp"))</code>
</pre></div>
<p>The directory is hard-coded into the function and may be different on your system. Once defined the function can be invoked with <tt>M-x dired-emacs-lisp</tt>. Not all Lisp functions can be called in this manner. Those that can are called <em>commands</em>. The body of a command has an optional documentation string, followed by a call to <tt>interactive</tt>, followed by the code which executes when the command is invoked. The documentation string can be accessed from Emacs by running <tt>M-x describe-function</tt> and entering the name of the function when prompted.</p>
<p>The call to <tt>interactive</tt> is what makes a Lisp function a command. It can takes optional arguments. Use <tt>M-x describe-function</tt> on <tt>interactive</tt> to see a description of these arguments.</p>
<p>To bind the command to the key <tt>C-c l</tt> run the following in Lisp interaction mode:</p>
<div class="code">
<pre>
<code>(global-set-key "\C-cl" 'dired-emacs-lisp)</code>
</pre></div>
<p>If it is desired to have the above command and key binding always available when Emacs starts up, put them in <tt>~/.emacs.d/init.el</tt>.</p>

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
