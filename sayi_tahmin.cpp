#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(0)); // Rastgele sayı üreteciyi başlatır.

    int rastgeleSayi = rand() % 100 + 1; // 1 ile 100 arasında rastgele bir sayı üretir.
    int tahmin;

    std::cout << "Merhaba! 1 ile 100 arasında bir sayıyı tahmin etmeye çalış.\n";

    do {
        std::cout << "Tahmininizi girin: ";
        std::cin >> tahmin;

        if(tahmin > rastgeleSayi) {
            std::cout << "Daha küçük bir sayı tahmin et.\n";
        } else if(tahmin < rastgeleSayi) {
            std::cout << "Daha büyük bir sayı tahmin et.\n";
        }
    } while(tahmin != rastgeleSayi);

    std::cout << "Tebrikler! Doğru sayıyı tahmin ettin.\n";

    return 0;
}
