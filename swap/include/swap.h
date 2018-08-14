#ifndef SWAP_H
#define SWAP_H

namespace lp1 {

    // Se for template, deixa tudo no .h; se for normal, fica no .cpp (alem de ter o .h)
    template <typename T>
    void swap (T& a, T& b) {
        T tmp (a);

        a = b;
        b = tmp;
    }

}
#endif
