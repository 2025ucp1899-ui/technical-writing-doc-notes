# LaTeX – Detailed Notes

## 1. Introduction to LaTeX

LaTeX is a high-quality document preparation system used for creating scientific documents, research papers, books, reports, and academic assignments.

It is built on top of the TeX typesetting system.

### Features of LaTeX
- Produces professional-quality documents.
- Supports complex mathematical equations.
- Automatically numbers sections, figures, tables, and equations.
- Supports references and bibliographies.
- Separates content from formatting.

## 2. Basic Structure of a LaTeX Document

Every LaTeX document generally contains three main parts:

1. Document class declaration.
2. Preamble.
3. Document environment.

### Basic Syntax

```latex
\documentclass{article}

\begin{document}

Hello World!

\end{document}
```

### Explanation

- `\documentclass{article}` specifies the document type.
- `\begin{document}` starts the document body.
- `\end{document}` ends the document.

## 3. Document Classes

LaTeX provides different document classes.

| Document Class | Purpose |
|---|---|
| article | Articles and short reports |
| report | Long reports |
| book | Books |
| letter | Letters |
| beamer | Presentations |

Example:

```latex
\documentclass[12pt,a4paper]{article}
```

## 4. Preamble and Packages

The preamble contains document settings and package declarations.

Example:

```latex
\documentclass{article}
\usepackage{graphicx}
\usepackage{amsmath}
\usepackage{geometry}
```

Common packages:

| Package | Purpose |
|---|---|
| amsmath | Mathematical equations |
| graphicx | Inserting images |
| geometry | Page margins |
| hyperref | Hyperlinks |
| xcolor | Text and page colors |
| booktabs | Professional tables |

## 5. Text Formatting

LaTeX provides commands for formatting text.

```latex
\textbf{Bold Text}

\textit{Italic Text}

\underline{Underlined Text}

\texttt{Monospaced Text}
```

## 6. Sections and Subsections

LaTeX supports hierarchical document organization.

```latex
\section{Introduction}

\subsection{Background}

\subsubsection{Overview}
```

## 7. Lists in LaTeX

### Unordered List

```latex
\begin{itemize}
    \item First item
    \item Second item
    \item Third item
\end{itemize}
```

### Ordered List

```latex
\begin{enumerate}
    \item First item
    \item Second item
    \item Third item
\end{enumerate}
```

## 8. Mathematical Equations

LaTeX is widely used for mathematical typesetting.

### Inline Equation

```latex
The equation is $a^2+b^2=c^2$.
```

### Display Equation

```latex
\[
E = mc^2
\]
```

### Fraction

```latex
\[
\frac{a}{b}
\]
```

### Summation

```latex
\[
\sum_{i=1}^{n} i
\]
```

### Matrix

```latex
\[
\begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
\]
```

## 9. Tables

Tables can be created using the `tabular` environment.

```latex
\begin{tabular}{|c|c|}
\hline
Name & Marks \\
\hline
Alice & 90 \\
Bob & 85 \\
\hline
\end{tabular}
```

- `c` means centered alignment.
- `l` means left alignment.
- `r` means right alignment.
- `\hline` inserts a horizontal line.
- `&` separates columns.
- `\\` ends a row.

## 10. Figures and Images

The `graphicx` package allows images to be inserted.

```latex
\usepackage{graphicx}
```

Example:

```latex
\begin{figure}[h]
    \centering
    \includegraphics[width=0.5\textwidth]{image.png}
    \caption{Sample Image}
    \label{fig:sample}
\end{figure}
```

## 11. Labels and References

Labels and references help automatically refer to sections, figures, and equations.

```latex
\section{Introduction}
\label{sec:intro}

Refer to Section~\ref{sec:intro}.
```

## 12. Comments in LaTeX

The percentage symbol is used for comments.

```latex
% This is a comment
```

Comments are ignored during compilation.

## 13. Compilation

LaTeX source files use the `.tex` extension.

The compilation process converts the source file into a PDF document.

Common tools:
- pdfLaTeX
- XeLaTeX
- LuaLaTeX
- Overleaf

## 14. Advantages of LaTeX

- Excellent mathematical typesetting.
- Consistent formatting.
- Automatic numbering.
- Efficient handling of references.
- Suitable for large technical documents.

## 15. Conclusion

LaTeX is an important tool for technical writing and scientific documentation. Its structured approach helps produce professional, organized, and high-quality documents.