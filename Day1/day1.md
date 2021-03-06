# Day1

## Time Complexity Analysis

**Time Complexity is a function which represents the number of times a statement is executed.**

>For example:
int x; //this is a statement

Also, a statement means an iteration.
Therefore, `int x;` is one iteration, that means the system has to iterate through this statement once.

Now, let's see an example of how to calculate number of iterations in a code-

*Example 1*
#include<iostream>
using namespace std;

int main(){
    int x; //Iteration 1
    int sum = 0; //iteration 2
    sum = x + x; //iteration 3
}

*Number of iterations = 3*
*O(3)*

O(k) ~ Constant time complexity
//k = constant number which is very, very less. For example = 1,2,5,10...etc.


*Example 2*
#include<iostream>
using namespace std;

int main(){
    int x; //Iteration 1
    int sum = 0; //iteration 2
    sum = x + x; //iteration 3
    int n;
    cin >> n;
    //This will iterate for `n` times
    for(int i=0; i<n; i++){

    }  
}

// Number of iterations = 5 + N
// O(5) + O(N)


*Example 3*
#include<iostream>
using namespace std;

int main(){
    int x; //Iteration 1
    int sum = 0; //iteration 2
    sum = x + x; //iteration 3
    int n;
    cin >> n;
    //This will iterate for `n` times
    for(int i = 0; i < n; i++){
        int y;
        y=5;
        y++;
    }  
}

// Number of iterations = 5 + 3*N 
// 3*N because there are three statements inside the loop
// O(5) + O(3*N)

Now, suppose n <= 10^5
Then 3*n ~ n
k*n doesn't affect the number of digits in `n` unless `k` is a large value.
Therefore, k*n ~ n (k<<<<<< n)

Also, O(5) or any constant numbers is very small against the value of `n`.

Hence, we can ignore these values and the total time complexity is-
// 0(m) + o(k*n) ~ O(n) 
// m, k = constant values

*Some examples*
1. O(N) + O(N) ~ O(N) //until there are large number of O(N) added time complexity remains O(N)

2. O(k*N) ~ O(N) //(k<<<< N)

3. O(3), O(4), O(5), O(10) ~ O(1) //These constant numbers are represented as O(1), because they are somewhere around the time consumption of 1 iteration.

### Online IDE Time Limits
>???????????????????????????
>??????????????????????????????
>Superscript = \ + ^ + value + tab
>Subscript = \ + _ + value + tab
Number of iterations in online compilers in 1 sec = 10???-10???

10??? = 1 sec
10??? = 10 secs
10??? = 100 secs
10????? = 1000 secs ~ 15 mins

### O(N) Time Complexity

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    //This will iterate for `n` times
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }  
}

// O(1) + O(1) + O(N) ~ O(N)

### O(N??) time complexity

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    //This will iterate for `n` times
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

        }
    }  
}

//N=10???
// O(1) + O(1) + O(n??) ~ O(n??)
//This will show TLE because O(n??) will result in 10????? (n=10???) iterations and online compilers allow 10??? = 1sec.


### O(log(N)) time complexity

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    //This will iterate for `n` times
    while(n > 0){
        n = n/2;
        count++;
    } 
}

//N=10
// O(1) + O(1) + O(count) ~ ?

Let's calculate-
1. n=10
10/2 = 5
5/2 = 2
2/2 = 1
1/2 = 0
//it took total 3 iterations to make n=0

2. n=8
8/2=4
4/2=2
2/2=1
1/2=0
//it took total 3 iterations to make n=0

*Now let the number of iterations be `a` for any value of `n`.*

That means if we divide `n` by 2 `a` times then we will get zero.

Therefore, 2??? = n, or if we multiply 2, `a` times, it will result in `n`.

Now if we do logarithm of base 2 (log???) on both sides-
log??? (2???) = log??? N
a log??? 2 = log??? N
a = log???(N) //as log???(2) = 1
// `a` represents count in the code

//Therefore total time complexity of the code
//O(1) + O(1) + O(log(N)) ~ O(log(N))

**O(log(N)) is a good time complexity**
//We should always try to achieve O(log(N)) complexity. But why?
Let's compare-
1. N=10???
Iterations in O(N) = N
Iterations in O(log(N)) -
= log???(10???)
= 5 log???10
= 5*3.34 ~ 15
Therefore O(log(N)) iterates only 15 times as compared to O(N) iterates `N` times.

2. N=10?????
Iterations in O(N) = N
Iterations in O(log(N)) -
= log???(10?????)
= 18 log???10
= 18 * 3.34 ~ 54
Therefore O(log(N)) iterates only 54 times as compared to O(N) iterates `N` times.


### Time complexity which doesn't show O(n??)

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    //This will iterate for `n` times
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            count++;
        }
    }  
}

i   j(iteration)
_________________
0       0
1       1
2       2
3       3
.       .
.       .
.       .
n       n

count = 0 + 1 + 2 + 3 + ..... + n
= (n(n+1))/2 (*formula of sum of `N` natural numbers)
= (n??/2 + n/2)

*Time Complexity*
// O(n??/2 + n/2)
// O(n??/2) + O(n/2)
// Let's take N=10???
We can ignore O(n/2) ~ O(n) because it is much smaller than O(n??/2) ~ O(n??)
// Therefore total time complexity ~ O(n??)

## Space Complexity Analysis

**Space Complexity represents the total amount of memory utilized by an algorithm/code, including the space of input values for execution.**

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n; //Space complexity = O(1)

    int a;
    a=5; //Space complexity = O(1)

    int n=100;
    arr[n]; //Space complexity = O(n)

    int n=100;
    arr[n][n]; //Space complexity = O(n??)
}


// O(1) + O(n) + O(n??) ~ O(n??)





















