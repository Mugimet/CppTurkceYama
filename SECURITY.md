# Güvenlik Politikası

Bu kütüphane, temel olarak C++ için takma ad tanımlamaları ve örnek demo fonksiyonları içerir.  
Kodda dış kullanıcı girdisi doğrudan işlenmemektedir.  
Ancak performans testi veya genişletilmiş kullanım senaryolarında ortaya çıkabilecek potansiyel güvenlik açıklarını ciddiye alıyoruz.  

Bu belge, hangi sürümlerin desteklendiğini ve güvenlik açıklarını nasıl bildirebileceğinizi açıklamaktadır.

---

## Desteklenen Sürümler

| Versiyon |  Destek Durumu  |
|----------|-----------------|
|  3.0.0   |      Evet       |
|  2.0.0   |      Hayır      |
|  1.0.0   |      Hayır      |

Şu anda sadece `3.0.0` sürümü aktif olarak güvenlik güncellemeleri almaktadır.  
Daha önceki sürümler için düzeltme veya güncelleme sağlanmamaktadır.

---

## Güvenlik Açığı Bildirme

Bu proje kritik veri işlemediği ve dış kullanıcıdan doğrudan veri almadığı hâlde, bildirilmek istenen güvenlik açıkları titizlikle incelenir.

Aşağıdaki yöntemlerden biri ile güvenlik açığı bildirebilirsiniz:

## Güvenlik Açığı Bildirme

Güvenlik açıklarını GitHub üzerinden bize **özel olarak bildirebilirsiniz.**  
Lütfen açıkların kötü niyetli kişilerce öğrenilmemesi için aşağıdaki yöntemi kullanın:

### GitHub Üzerinden Gizli Bildirim (Önerilen)

- GitHub "Security Advisories" sistemini kullanarak **gizli ve doğrudan** bildirim yapabilirsiniz.  
- GitHub, bu bildirimi sadece proje sahibine ulaştırır.

Bağlantı:  
https://github.com/Mugimet/CppTurkceYama/security/advisories/new


## Süreç

1. Bildiriminiz tarafımızca incelenir  
2. Eğer sorun doğrulanırsa, bir düzeltme hazırlanır  
3. Sorun çözülünce yeni bir sürüm (örn. `v3.0.x`) yayınlanır  
4. Gelişmeler, GitHub üzerindeki **Releases** sayfasında ilgili sürüm notları (release notes) olarak yayınlanır 
5. Güvenlik açıkları, yalnızca düzeltme sonrası kamuya duyurulur

---

Lütfen güvenlik açıklarını doğrudan GitHub Issues kısmında paylaşmayın.  
Discussions veya e-posta kanalıyla iletişime geçmeniz rica olunur.
