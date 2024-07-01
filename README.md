
<h1 align="center">libft</h1>

<h2>Description</h2>
<p><strong>libft</strong> is a project from the 42 cursus that involves creating a custom C library. This library re-implements various standard C library functions and includes additional utility functions. The main objective is to strengthen understanding of fundamental C programming concepts and to provide a useful set of functions for future projects.</p>

<h2>Table of Contents</h2>
<ul>
	<li><a href="#requirements">Requirements</a></li>
	<li><a href="#installation">Installation</a></li>
	<li><a href="#usage">Usage</a></li>
	<li><a href="#project-structure">Project Structure</a></li>
	<li><a href="#license">License</a></li>
</ul>

<h2 id="requirements">Requirements</h2>
<p>To compile and run the project, you will need:</p>
<ul>
	<li>A Unix operating system (Linux or macOS).</li>
	<li>gcc or any C compiler.</li>
	<li>Make.</li>
</ul>

<h2 id="installation">Installation</h2>
<p>Clone the project repository and navigate to the main directory:</p>
<pre><code>git clone https://github.com/PaLucena/libft.git
cd libft</code></pre>
<p>Compile the project using the included Makefile:</p>
<pre><code>make</code></pre>
<p>This will generate the <code>libft.a</code> library in the current directory.</p>

<h2 id="usage">Usage</h2>
<p>To use the <code>libft</code> functions in your own project, include the <code>libft.a</code> library and the corresponding header file:</p>
<pre><code>#include "libft.h"</code></pre>
<p>Link the library during the compilation of your project:</p>
<pre><code>gcc -o your_program your_program.c -L. -lft</code></pre>

<h2 id="project-structure">Project Structure</h2>
<p>The project is organized into the following files and directories:</p>
<ul>
	<li><code>src/</code>: Contains the source code of the <code>libft</code> functions.</li>
	<li><code>include/</code>: Contains the header files.</li>
	<li><code>Makefile</code>: Build script to generate the library.</li>
	<li><code>README.md</code>: Project documentation.</li>
</ul>

<h2 id="license">License</h2>
<p>This project is licensed under the MIT License. See the <code>LICENSE</code> file for more details.</p>
