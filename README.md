<h1>Re-creating Printf</h1>

<h2><b><p>Description:</p></b></h2>
<b><p>This is a a re-creation of <a href="https://man7.org/linux/man-pages/man3/printf.3.html">printf(3).</a> The function int _printf(const char *format, ...) takes a variable number of arguments of different data types and returns output to terminal.

Functions within the _printf() family produce output in the following format.  In _printf(), output is written to stdout, the standard output stream;</p></b>

<h2><p>Printf Contents:</p></h2>
<ul>
        <li><strong>Printf Manual</li>
        <li>_printf function</li>
        <li>Hard Work, Dedication & A Lot Of Fun 🙃</strong></li>
</ul>

## Format Specifiers

The format specifiers tells the function how to take the arguments based on the type indicated.
|**Type**|FORMAT  |
|--|--|
|**%c**|Print a character passed as parameter.  |
| **%s** |Prints a string.  |
| **%i** |Prints a signed number (int).|
| **%d** |Prints a signed decimal number.|
| **%%** |Prints a percentage symbol.|
| **%b** |Prints an unsigned int argument converted to binary.|
| **%u** |Prints unsigned int value.|
| **%o** |Prints unsigned Octal number for integer.|
| **%x** |Prints hexadecimal values.|
| **%X** |Prints hexadecimal values (CAPITAL LETTERS).|
| **%S** |Prints a string.|
| **%P** |Prints a pointer type data.|
| **%r** |Prints a reversed string.|

## Flow Chart

Outlines the general architecture of the _printf function.

<blockquote class="imgur-embed-pub" lang="en" data-id="wNolOBX"><a href="https://imgur.com/wNolOBX">View post on imgur.com</a></blockquote><script async src="//s.imgur.com/min/embed.js" charset="utf-8"></script>

For a breakdown of the Sub functions see ./flowcharts

<br>
<font color=#00C5FF><font size=2><p><strong><i>This was project produced with :heart: for assessment by Holberton School. Autors: Eps & Matt of #C19</p><strong><i></font>

Github Profiles:
[Eps](https://github.com/rrarima)

[Matt](https://github.com/bigBadMatt)

<p>
<blockquote><b><i>"You can teach a bird to fly, but you can't a teach fly to bird - Eps"</blockquote>