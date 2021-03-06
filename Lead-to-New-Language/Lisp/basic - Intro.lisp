;;;; Common Lisp 语言基础
;;;; 理解基础概念
;;;; Lisp脚本的扩展名为.lisp，或.lsp

;;; 数字： 对自身求值
1

;;; 加法：实际上是一个参数不定的函数。+ 为函数名（操作符），数字为参数（实参）。
;;; 与前缀表达式十分类似，表达式（即函数的调用）都需要用括号包裹
(+ 2 3)
(+ )    ; 没有实参是可以的
(+ 2)    ; 一个实参也是可以的
(+ 1 2 3 4 5)    ; 多个实参是可以的

;;; 注释部分。对于注释，有约定俗成的规定：
;;;; 文件首部注释
;;; 代码段注释，该行注释对接下来（为完成某个功能的）整段代码进行注解
;; 代码行注释，该行注释对接下来一行或几行代码进行注解
; 行尾注释，该行注释写于该行代码尾，对本行代码进行注解

;;; 表达式可以嵌套，如下：
;;; 等价于C语言写法 (12 + 15) / 8
(/ (+ 12 15) 8)

;;; Lisp执行的顺序是依照求值顺序进行的

