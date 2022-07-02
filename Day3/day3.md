# Day 3

## What are Big-O, Big-Ω, Big-θ notations?

**Big-O Notation**
This is the tighter upper bound on time of an algorithm.
0 <= f(n) <= g(n); for all n>n₀

**Big-Ω Notation**
This is the tighter lower bound on time of an algorithm.
0 <= cg(n) <= f(n); for all n>n₀

**Big-θ Notation**
Decides if the upper bound and lower bound are same.
0 ≤ c1 g(n) ≤ f(n) ≤ c2 g(n); for all n>n₀

*For detailed explanation follow copy(Time Complexity Analysis)*

## What are Little-o, Little-Ω notations?

**Little-O Notation**
This is the loose upper bound on time of an algorithm.

*Mathematical Expression*
In this f(n) != g(n). Means-
0 < f(n) < g(n)

*Mathematical Relation of Little-o notation*
lim     f(n) / g(n) = 0 (~ 0)
n → ∞   

*example*
f(n)=n²; g(n)=n³

lim     f(n) / g(n) 
n → ∞   

lim     n² / n³
n → ∞   

lim     1 / n
n → ∞   

= 1/∞ = 0


**Little-Ω Notation**
This is the loose lower bound on time of an algorithm.

*Mathematical Expression*
In this f(n) != g(n). Means-
0 < g(n) < f(n)

*Mathematical Relation of Little-o notation*
lim     f(n) / g(n) = ∞ (~ ∞)
n → ∞   

*example*
f(n)=n³; g(n)=n²

lim     f(n) / g(n) 
n → ∞   

lim     n³ / n²
n → ∞   

lim     n / 1
n → ∞   

= n/1 = ∞
