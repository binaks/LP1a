#include <iostream> // std::cout, std::endl
#include <iterator> // std::begin(), std::end()
#include <utility> // std::swap
#include <cassert> // assert

enum ball_t{ B=0, W=1 }; // Black and White

ball_t* sort_marbles( ball_t* first, ball_t* last ) {
    auto p(first);    
    auto q(last - 1);

    while (p < q) {
        if (*p == B) {
            ++p;
        } else {
            if (*q == W) {
                --q;
            } else {
                std::swap (*p,*q);
                ++p;
                --q;
            }
        }
    }

    for (auto i(first); i < last; ++i) {
        std::cout << *i << " ";
    }

        std::cout << std::endl;

    return p;
}

int main () {
    ball_t A[] = { W, B, B, W, W, B, W }; // input
    auto size_A = sizeof(A)/sizeof(ball_t);
    ball_t A_sorted[] = { B, B, B, W, W, W, W }; // expected output

    auto result = sort_marbles( std::begin(A), std::end(A) );

    std::cout << std::distance(std::begin(A), result) << std::endl;

    // While marbles should start at position 3 whithin the array
    assert( std::distance(std::begin(A), result) == 3);
    // Validate answer
    for ( auto i(0u) ; i < size_A ; ++i)
        assert( A[i] == A_sorted[i] );

    return 0;
}
