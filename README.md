# C++ Türkçe Yama
Bu kütüphane daha çok eğitim amaçlı ve küçük veya orta çaplı projelerinizde kullanabileceğiniz bir kütüphanedir. Kütüphane C++ dilindeki birçok kütüphaneyi içerdiği için ek kütüphane ekleme işinizi ortadan kaldırır. Kütüphaneyi kullanmak için cppturkceyama.h dosyasını indirip projenize #include "cppturkceyama.h" ile eklemeniz yeterli olacaktır. Bu kütüphane sürekli gelişecektir.Visual Studio 2022 adlı IDE ile çalışmanız önerilir. Duyurular için YouTube üzerinden @Mugimet ile @CodeLikeMugimet kanallarına abone olabilirsiniz. İyi çalışmalar :)
# Kanal Linkleri:
- Mugimet https://www.youtube.com/@Mugimet
- CodeLikeMugimet https://www.youtube.com/@CodeLikeMugimet
# C++ Dili ile Karşılaştırma
Bu kütüphane ile Türkçebilenler normal C++ diline kıyasla daha kısa sürede ve daha kısa kod yazarlar fakat bazı durumlara göre değişebilir. Mesela int yerine tamsayı yazmamız kodu uzatabilir veya string yerine metin yazmamız kodu kısaltabilir. Olabildiğince kısa yazmak istiyorsanız ve bu cppturkceyama.h içinde kısa olanı yoksa C++ dilinin anahtar kelimelerini kullanabilirsiniz.
# Örnek Kod
- C++
  <code>
  #include <iostream>
  #include <cmath>
  int main(){
  int i = 4; // Tanımlamaya aslında gerek yoktu fakat kod farkı belli olsun diye tanımladım.
  std::cout<<sqrt(i)<<"\n";
  return 0;
  }
  </code>
- cppturkceyama.h Kütüphanesi
  <code>
  #include "cppturkceyama.h"
  ana{
  tamsayı i = 4; // tamsayı yerinde int de yazılabilir.
  yaz karekök(i)<<"\n";
  dönüş 0;
  }
  </code>
# Sonuç
- Sonuç olarak cppturkceyama.h kütüphanesi kodları hem kısaltır hem kütüphane ekleme işini kaldırır hem de Türkçe bilenler için kodu daha da okunaklı hâle getirir.
