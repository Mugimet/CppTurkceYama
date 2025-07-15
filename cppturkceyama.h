// cppturkceyama.cpp : Statik kitaplık için işlevleri tanımlar.
//

//#include "pch.h"
//#include "framework.h"
// C++TürkçeYaması.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//
// C++ Türkçe Yaması
// Bu kod, C++ dilinin temel sözdizimini ve standart kütüphane isimlerini Türkçe terimlerle değiştirmek için tasarlanmıştır.
// Bu, C++ kodunu Türkçe konuşan geliştiriciler için daha erişilebilir hale getirmeyi amaçlar.

// --- Kütüphane İsimleri Türkçeleştirme ---
#define PENCERELER <windows.h>
#define ALGORİTMA <algorithm>
#define DİZİ <array>
#define ATOMİK <atomic>
#define BARİYER <barrier>
#define BİT <bit>
#define ZAMAN <chrono>
#define KODLAMA_DÖNÜŞTÜRME <codecvt>
#define KARMAŞIK <complex>
#define KAVRAMLAR <concepts>
#define KOŞUL_DEĞİŞKENİ <condition_variable>
#define ASENKRON <coroutine>
#define CSETJMP <csetjmp>
#define CSİNYAL <csignal>
#define CSTANDART_ARGÜMANLAR <cstdarg>
#define CMANTIK <cstdbool>
#define CBOYUT <cstddef>
#define CTİP <cstdint>
#define CSTDİO <cstdio>
#define CSTDKÜT <cstdlib>
#define CYAZI <cstring>
#define CZAMAN <ctime>
#define ÇİFT_KUYRUK <deque>
#define İSTİSNA <exception>
#define DOSYA_SİSTEMİ <filesystem>
#define BİÇİMLENDİRME <format>
#define İLERİ_LİSTE <forward_list>
#define DOSYA_AKIŞI <fstream>
#define FONKSİYONEL <functional>
#define GELECEK <future>
#define BAŞLATICI_LİSTESİ <initializer_list>
#define BİÇİM <iomanip>
#define GİRİŞ_ÇIKIŞ <ios>
#define GİRİŞ_ÇIKIŞ_YÖNLENDİRME <iosfwd>
#define GİRİŞ_AKIŞI <iostream>
#define GİRİŞ_AKIŞI_TÜRÜ <istream>
#define YİNELEYİCİ <iterator>
#define SINIRLAR <limits>
#define LİSTE <list>
#define YEREL <locale>
#define HARİTA <map>
#define BELLEK <memory>
#define KİLİT <mutex>
#define YENİ <new>
#define SAYISAL <numeric>
#define İSTEĞE_BAĞLI <optional>
#define ÇIKIŞ_AKIŞI <ostream>
#define KUYRUK <queue>
#define RASTGELE <random>
#define ARALIKLAR <ranges>
#define DÜZENLİ_İFADE <regex>
#define SINIRLANDIRILMIŞ_AYARLAYICI <scoped_allocator>
#define KÜME <set>
#define PAYLAŞILAN_KİLİT <shared_mutex>
#define ARALIK <span>
#define DİZİ_AKIŞI <sstream>
#define YIĞIN <stack>
#define STANDART_HATA <stdexcept>
#define DURDURMA_JETONU <stop_token>
#define AKIŞ_ARABELLEK <streambuf>
#define METİN <string>
#define METİN_GÖRÜNÜMÜ <string_view>
#define SİSTEM_HATASI <system_error>
#define İŞ_PARÇACIĞI <thread>
#define DEMET <tuple>
#define TÜR_ÖZELLİKLERİ <type_traits>
#define TÜR_INDEKSİ <typeindex>
#define TÜR_BİLGİSİ <typeinfo>
#define DÜZENSİZ_HARİTA <unordered_map>
#define DÜZENSİZ_KÜME <unordered_set>
#define YARDIMCI <utility>
#define DEĞER_DİZİSİ <valarray>
#define DEĞİŞKEN <variant>
#define VEKTÖR <vector>

#include ALGORİTMA
#include DİZİ
#include ATOMİK
#include BARİYER
#include BİT
#include ZAMAN
#include KODLAMA_DÖNÜŞTÜRME
#include KARMAŞIK
#include KAVRAMLAR
#include KOŞUL_DEĞİŞKENİ
#include ASENKRON
#include CSETJMP
#include CSİNYAL
#include CSTANDART_ARGÜMANLAR
#include CMANTIK
#include CBOYUT
#include CTİP
#include CSTDİO
#include CSTDKÜT
#include CYAZI
#include CZAMAN
#include ÇİFT_KUYRUK
#include İSTİSNA
#include DOSYA_SİSTEMİ
#include BİÇİMLENDİRME
#include İLERİ_LİSTE
#include DOSYA_AKIŞI
#include FONKSİYONEL
#include GELECEK
#include BAŞLATICI_LİSTESİ
#include BİÇİM
#include GİRİŞ_ÇIKIŞ
#include GİRİŞ_ÇIKIŞ_YÖNLENDİRME
#include GİRİŞ_AKIŞI
#include GİRİŞ_AKIŞI_TÜRÜ
#include YİNELEYİCİ
#include SINIRLAR
#include LİSTE
#include YEREL
#include HARİTA
#include BELLEK
#include KİLİT
#include YENİ
#include SAYISAL
#include İSTEĞE_BAĞLI
#include ÇIKIŞ_AKIŞI
#include KUYRUK
#include RASTGELE
#include ARALIKLAR
#include DÜZENLİ_İFADE
#include SINIRLANDIRILMIŞ_AYARLAYICI
#include KÜME
#include PAYLAŞILAN_KİLİT
#include ARALIK
#include DİZİ_AKIŞI
#include YIĞIN
#include STANDART_HATA
#include DURDURMA_JETONU
#include AKIŞ_ARABELLEK
#include METİN
#include METİN_GÖRÜNÜMÜ
#include SİSTEM_HATASI
#include İŞ_PARÇACIĞI
#include DEMET
#include TÜR_ÖZELLİKLERİ
#include TÜR_INDEKSİ
#include TÜR_BİLGİSİ
#include DÜZENSİZ_HARİTA
#include DÜZENSİZ_KÜME
#include YARDIMCI
#include DEĞER_DİZİSİ
#include DEĞİŞKEN
#include VEKTÖR
#include <fcntl.h>
#include <io.h>

// --- Temel Türkçeleştirmeler ---
#define yaz std::cout<<
#define al std::cin >>
#define tamsayı int
#define harf char
#define mantıksal bool
#define metin std::string
#define ondalıklı float
#define kesirli double
#define dizi std::array
#define sabit const
#define fonksiyon function
#define sınıf class
#define yapı struct
#define seçim switch
#define durum case
#define varsayılan default

#define eğer if
#define değilse_eğer else if
#define değilse else

#define oto auto

#define genel public
#define özel private
#define kısıtlı protected

#define döngü for
#define iken while
#define uygula do
#define çık break
#define atla continue

#define eşit ==
#define farklı !=
#define ve &&
#define veya ||
#define değil !

#define dönüş return
#define oluştur new
#define sil delete

#define sabit const
#define boyut sizeof
#define boyut_t size_t
#define imzalı_boyut_t ssize_t
#define işaretçi_farkı_t ptrdiff_t

#define doğru true
#define yanlış false
#define boş nullptr
#define dönüşsüz void

#define fırlat throw
#define yakala catch
#define dene try

#define kapsam namespace
#define harici extern
#define iç inline

#define tür_adı typedef
#define tür_tipi typename
#define tür_bilgisi typeid

#define sabit_önce_çalıştır constexpr
#define zorunlu_önce_çalıştır consteval
#define değişken_önce_çalıştır constinit

#define kalıp template
#define kullanım using

#define arkadaş friend
#define sanal virtual

#define yeniden_yorumla reinterpret_cast
#define güvenli_dönüşüm const_cast
#define dinamik_dönüştür dynamic_cast
#define sabit_değiştir static_cast

#define modül module
#define getir import

// --- Yazım Kolaylaştırmaları ---
#define std_sil using namespace std
#define ana int main()
#define boş_bırak std::cout<<std::endl;
#ifdef _WIN32
#define konsol_bekle system("pause");
#define konsol_temizle system("cls");
#else
#define konsol_bekle system("read -p \"Devam etmek için bir tuşa basın...\" -n 1 -s");
#define konsol_temizle system("clear");
#endif


// --- <cstring> Kütüphanesi ---
#define cuzunluk strlen             // karakter_dizisi_uzunluğu
#define cmetin_kopyala strcpy             // dizi_kopyala
#define ckopyala_sınır strncpy      // sınır_kadar_kopyala
#define cmetin_birleştir strcat           // dizi_birleştir
#define cbirleştir_sınır strncat    // sınır_kadar_birleştir
#define ckarşılaştır strcmp         // dizi_karşılaştır
#define ckarşılaştır_sınır strncmp  // sınır_kadar_karşılaştır
#define cbellek_ayarla memset       // bellek_doldur
#define cbellek_kopyala memcpy      // bellek_kopyala
#define cbellek_kaydır memmove      // bellek_kaydır
#define ckarakter_ara strchr        // dizi_karakter_ara
#define csondan_karakter_ara strrchr // sondan_karakter_ara
#define calt_dizi_ara strstr        // dizi_icerisinde_dizi_ara
#define cbellek_karakter_ara memchr // bellek_icerisinde_karakter_ara
#define bellek_karşılaştır memcmp  // bellek_karşılaştır

// --- <algorithm> Kütüphanesi Makroları ---
#define döngü_for_each            for_each
#define bul                       find
#define bul_if                    find_if
#define bul_if_değil              find_if_not
#define say                       count
#define say_if                    count_if
#define eşleştir                  mismatch
#define eşit_mi                   equal
#define tümü_mi                   all_of
#define herhangi_biri_mi          any_of
#define hiçbiri_mi                none_of
#define kopyala                   copy
#define kopyala_n                 copy_n
#define kopyala_if                copy_if
#define taşı                      move
#define ters_taşı                 move_backward
#define değiş_tokuş               swap
#define aralık_değiş_tokuş        swap_ranges
#define doldur                    fill
#define doldur_n                  fill_n
#define dönüştür                  transform
#define üret                      generate
#define üret_n                    generate_n

#define kaldır                    remove
#define kaldır_if                 remove_if
#define kaldır_kopyala            remove_copy
#define kaldır_kopyala_if         remove_copy_if
#define değiştir                  replace
#define değiştir_if               replace_if
#define değiştir_kopyala          replace_copy
#define değiştir_kopyala_if       replace_copy_if

#define tersten_sırala            reverse
#define tersten_kopyala           reverse_copy
#define döndür_rotate             rotate
#define döndür_kopyala            rotate_copy
#define rastgele_karıştır         shuffle
#define ayıkla                    unique
#define ayıkla_kopyala            unique_copy
#define yerleştir                 partition
#define yerleştir_kopyala         partition_copy
#define yerleştir_durağan         stable_partition

#define sırala                    sort
#define durağan_sırala            stable_sort
#define kısmi_sırala              partial_sort
#define kısmi_sırala_kopyala      partial_sort_copy
#define sıralı_mı                 is_sorted
#define nereye_kadar_sıralı       is_sorted_until
#define nci_eleman                nth_element

#define alt_sınır                 lower_bound
#define üst_sınır                 upper_bound
#define eşleştir_aralığı          equal_range
#define ikili_arama               binary_search
#define birleştir                 merge
#define yerinde_birleştir         inplace_merge
#define içerir_mi                 includes
#define küme_birleşimi            set_union
#define küme_kesişimi             set_intersection
#define küme_farkı                set_difference
#define simetrik_fark             set_symmetric_difference

#define öncelik_yığını_yap        make_heap
#define öncelik_yığınına_ekle     push_heap
#define öncelik_yığınından_çıkar  pop_heap
#define öncelik_yığınını_sırala   sort_heap
#define öncelik_yığını_mı         is_heap
#define öncelik_yığını_nereye_kadar  is_heap_until

#define yer_değiştir_iter         next_permutation
#define önceki_perm               prev_permutation

#define alt_dizi_subrange         search
#define ardışık_arama             search_n
#define döngü_find_end            find_end
#define ilk_eşleşen               find_first_of
#define tekrar_bul                adjacent_find

// --- <numeric> Kütüphanesi ---
#define istatistik_accumulate     accumulate
#define iç_çarpım                 inner_product
#define kademeli_toplam           partial_sum
#define ardışık_fark              adjacent_difference

// --- <iterator> Kütüphanesi ---
#define i_ileri_aktar               advance
#define mesafe                    distance
#define sonraki_iter              next
#define önceki_iter               prev
#define döngü_ilerleyici          back_inserter
#define öne_ekleyici              front_inserter
#define yerleştirici              inserter

// --- <memory> Kütüphanesi ---
#define benzersiz_ptr             std::unique_ptr
#define paylaşılan_ptr            std::shared_ptr
#define zayıf_ptr                 std::weak_ptr
#define yeni                    std::make_unique
#define paylaşılan_yeni           std::make_shared
#define benzersiz_gösterici          std::unique_ptr
#define paylaşılan_gösterici         std::shared_ptr
#define zayıf_gösterici              std::weak_ptr
#define gösterici_oluştur            std::make_unique
#define paylaşılan_gösterici_oluştur std::make_shared

// --- <thread> Kütüphanesi ---
#define iş_parçacığı              std::thread
#define kilit_gardiyanı              std::lock_guard
#define benzersiz_kilit           std::unique_lock
#define koşul_değişkeni           std::condition_variable
#define uyut                     std::this_thread::sleep_for
#define getir_anahtar            std::this_thread::get_id
#define başlat_parçacık           std::thread::join
#define ayır_parçacık             std::thread::detach

// --- <cmath> Kütüphanesi ---

#define karekök std::sqrt
#define küpkök std::cbrt
#define üs_al std::pow
#define öklid_uzaklık std::hypot

#define mutlak std::abs
#define mutlak_fabs std::fabs
#define mutlak_fabsf std::fabsf
#define mutlak_fabsl std::fabsl

#define ondalık_mod std::fmod
#define kalan std::remainder
#define kalan_ve_bölüm std::remquo

#define e_üzeri std::exp
#define iki_üzeri std::exp2
#define e_üzeri_eksi_bir std::expm1

#define log std::log
#define log10 std::log10
#define log2 std::log2
#define log1p std::log1p

#define tavana_yuvarla std::ceil
#define tabana_yuvarla std::floor
#define tam_kısmı_al std::trunc
#define yuvarla std::round
#define long_yuvarla std::lround
#define longlong_yuvarla std::llround

#define modlu_ayır std::modf

#define sinüs std::sin
#define kosinüs std::cos
#define tanjant std::tan
#define arcsin std::asin
#define arccos std::acos
#define arctan std::atan
#define arctan2 std::atan2

#define sin_hiperbolik std::sinh
#define cos_hiperbolik std::cosh
#define tan_hiperbolik std::tanh
#define arcsin_hiperbolik std::asinh
#define arccos_hiperbolik std::acosh
#define arctan_hiperbolik std::atanh

#define işaret_kopyala std::copysign
#define sonraki_değer std::nextafter
#define sonraki_tam std::nexttoward

#define pozitif_fark std::fdim
#define maksimum std::fmax
#define minimum std::fmin

#define ayır_mantissa std::frexp
#define çarp_2_üzeri std::ldexp
#define çarp_optimum std::scalbn

#define sonlu_mu std::isfinite
#define sonsuz_mu std::isinf
#define nan_mı std::isnan
#define normal_mi std::isnormal
#define sayı_sınıfı std::fpclassify
#define işaret_biti std::signbit




// --- <string> Kütüphanesi ---
#define metin_uzunluk            std::string::size_type
#define metin_boyutu             std::string::size_type
#define metin_oluştur            std::string
#define metin_ekle               append
#define metin_ara                find
#define metin_ara_son            rfind
#define metin_böl                substr
#define metin_değiştir           replace
#define metin_karakter           at
#define metin_c_str              c_str
#define metin_boş_mu             empty
#define metin_temizle            clear
#define metin_ekle_ön            insert
#define metin_sil                erase
#define metin_kopyala            copy

// --- <vector> Kütüphanesi ---
#define vektör_oluştur          std::vector
#define vektör_boyutu           size
#define vektör_bos_mu           empty
#define vektör_ekle             push_back
#define vektör_son_element       back
#define vektör_ilk_element       front
#define vektör_sil_son           pop_back
#define vektör_temizle          clear
#define vektör_erişim           at
#define başlangıç begin
#define bitiş end

// --- <map> Kütüphanesi ---
#define harita_oluştur          std::map
#define harita_ekle             insert
#define harita_bul              find
#define harita_sil              erase
#define harita_boyutu           size
#define harita_bos_mu           empty
#define harita_temizle          clear

// --- <set> Kütüphanesi ---
#define küme_oluştur            std::set
#define küme_ekle               insert
#define küme_bul                find
#define küme_sil                erase
#define küme_boyutu             size
#define küme_bos_mu             empty
#define küme_temizle            clear

// --- <queue> Kütüphanesi ---
#define kuyruk_oluştur          std::queue
#define kuyruk_ekle             push
#define kuyruk_çıkar            pop
#define kuyruk_ön_element       front
#define kuyruk_son_element      back
#define kuyruk_bos_mu           empty
#define kuyruk_boyutu           size

// --- <stack> Kütüphanesi ---
#define yığın_oluştur           std::stack
#define yığın_ekle              push
#define yığın_çıkar             pop
#define yığın_üst_element       top
#define yığın_bos_mu            empty
#define yığın_boyutu            size

// --- <regex> Kütüphanesi ---
#define düzenli_ifade_oluştur   std::regex
#define eşleştir_düzenli_ifade std::regex_match
#define arama_düzenli_ifade     std::regex_search
#define değiştir_düzenli_ifade  std::regex_replace


// --- <chrono> Kütüphanesi ---
#define zaman_süre              std::chrono::duration
#define zaman_anı               std::chrono::time_point
#define şu_an                  std::chrono::system_clock::now
#define uyku                    std::this_thread::sleep_for
#define saniye               std::chrono::seconds
#define milisaniye           std::chrono::milliseconds
#define mikrosaniye          std::chrono::microseconds
#define nanosaniye           std::chrono::nanoseconds
#define zaman_saati          std::chrono::system_clock
#define steady_saati         std::chrono::steady_clock
#define yüksek_çözünürlük_saati std::chrono::high_resolution_clock
// --- <random> Kütüphanesi ---
#define rastgele_motor          std::mt19937
#define rastgele_üretici        std::uniform_int_distribution
#define rastgele_üretici_float  std::uniform_real_distribution
#define rastgele_üretilen_sayı  operator()

// --- <functional> Kütüphanesi ---
#define fonksiyonel_oluştur     std::function
#define bağla                   std::bind
#define fonksiyon_kavramı       std::function

// --- <optional> Kütüphanesi ---
#define isteğe_bağlı_oluştur    std::optional
#define değer_var_mı            has_value
#define değer_al                value
#define değer_alveya            value_or
#define isteğe_bağlı_boşalt     reset
#define isteğe_bağlı_değer_var mı   has_value
#define isteğe_bağlı_değer_al       value
#define isteğe_bağlı_değer_al_veya  value_or
#define isteğe_bağlı_sıfırla        reset

// --- <variant> Kütüphanesi ---
#define değişken_oluştur        std::variant
#define değer_al_özgü           std::get
#define değer_al_türü           std::get_if
#define ziyaretçi_çağır         std::visit


// --- <mutex> Kütüphanesi ---
#define kilit_oluştur           std::mutex
#define kilitle                 lock
#define kilit_kaldır            unlock


// --- <filesystem> Kütüphanesi ---
#define dosya_yolu               std::filesystem::path
#define dosya_var_mı             std::filesystem::exists
#define dosya_oluştur           std::filesystem::create_directory
#define dosya_sil                std::filesystem::remove
#define dosya_sil_herşey         std::filesystem::remove_all
#define dosya_türü               std::filesystem::file_type
#define dosya_boyutu             std::filesystem::file_size
#define dosya_tarih              std::filesystem::last_write_time
#define dizin_oku               std::filesystem::directory_iterator
#define dizin_oku_rec           std::filesystem::recursive_directory_iterator

// --- <exception> Kütüphanesi ---
#define hata_oluştur             std::exception
#define hata_mesajı_al           what
#define hata_at                  throw

// --- <type_traits> Kütüphanesi ---
#define tür_bilgisi_özelliği     std::is_same
#define tür_türetimi             std::remove_const
#define tür_sorgula             std::is_integral
#define tür_dönüştür             std::decay

// --- <utility> Kütüphanesi ---
#define değişken_takas          std::swap
#define hareket_ettir           std::move
#define ileri_aktar             std::forward
#define çift                    std::pair
#define çift_olustur            std::make_pair
#define bağla                   std::bind
#define yardımcı_kapsam         std::scope_exit


// --- <locale> Kütüphanesi ---
#define yerel_ayarla            std::locale
#define yerel_ismi              std::locale::name
#define yerel_ara              std::use_facet

// --- <sstream> Kütüphanesi ---
#define dizi_akış_oluştur       std::stringstream
#define dizi_akış_oku           std::istringstream
#define dizi_akış_yaz           std::ostringstream

// --- <iomanip> Kütüphanesi ---
#define biçimlendirme_ayarla    std::setprecision
#define biçimlendirme_doldur    std::setfill
#define biçimlendirme_alan      std::setw
#define biçimlendirme_sabit     std::fixed

// --- <future> Kütüphanesi ---
#define gelecek_değer_oluştur   std::future
#define gelecek_elde_et         get
#define gelecek_bekle           wait
#define sözleşme_elde_et        std::promise

// --- <any> Kütüphanesi ---
#define her_türden              std::any
#define her_türden_var_mı       has_value
#define her_türden_elde_et      std::any_cast

// --- <scoped_allocator> Kütüphanesi ---
#define sınırlandırılmış_ayarlayıcı_oluştur std::scoped_allocator_adaptor

// --- <stop_token> Kütüphanesi ---
#define durdurma_jetonu_oluştur std::stop_token
#define jetonu_durdur  std::stop_source
#define durdurma_jetonu_bekle   std::stop_callback


// --- <list> Kütüphanesi ---
#define liste_oluştur           std::list
#define liste_ekle_son          push_back
#define liste_ekle_ilk          push_front
#define liste_son_eleman        back
#define liste_ilk_eleman        front
#define liste_sil_son           pop_back
#define liste_sil_ilk           pop_front
#define liste_boyutu            size
#define liste_bos_mu            empty
#define liste_temizle           clear
#define liste_erişim            at
#define liste_sil               remove
#define liste_bul               find

// --- <forward_list> Kütüphanesi ---
#define ileri_liste_oluştur     std::forward_list
#define ileri_liste_ekle_ilk    push_front
#define ileri_liste_sil_ilk     pop_front
#define ileri_liste_bos_mu      empty
#define ileri_liste_temizle     clear
#define ileri_liste_ekle_son    insert_after
#define ileri_liste_bul         find

// --- <deque> Kütüphanesi ---
#define çift_kuyruk_oluştur     std::deque
#define çift_kuyruk_ekle_son    push_back
#define çift_kuyruk_ekle_ilk    push_front
#define çift_kuyruk_sil_son     pop_back
#define çift_kuyruk_sil_ilk     pop_front
#define çift_kuyruk_boyutu      size
#define çift_kuyruk_bos_mu      empty
#define çift_kuyruk_temizle     clear
#define çift_kuyruk_erişim      at


// --- <unordered_map> Kütüphanesi ---
#define düzensiz_harita_oluştur  std::unordered_map
#define düzensiz_harita_ekle     insert
#define düzensiz_harita_sil      erase
#define düzensiz_harita_bul      find
#define düzensiz_harita_boyutu   size
#define düzensiz_harita_bos_mu   empty
#define düzensiz_harita_temizle  clear


// --- <unordered_set> Kütüphanesi ---
#define düzensiz_küme_oluştur    std::unordered_set
#define düzensiz_küme_ekle       insert
#define düzensiz_küme_sil        erase
#define düzensiz_küme_bul        find
#define düzensiz_küme_boyutu     size
#define düzensiz_küme_bos_mu     empty
#define düzensiz_küme_temizle    clear

// --- <fstream> Kütüphanesi ---
#define dosya_akışı_oluştur        std::fstream
#define dosya_girdi_akışı_oluştur  std::ifstream
#define dosya_çıktı_akışı_oluştur  std::ofstream
#define dosya_aç                   open
#define dosya_kapat                close
#define dosya_oku                  read
#define dosya_yaz                  write
#define dosya_başlangıç            seekg
#define dosya_bitiş                seekp
#define dosya_şimdiki              tellg
#define dosya_şimdiki_yaz          tellp
#define dosya_başarılı             good
#define dosya_başarısız            fail
#define dosya_durum_sonu           eof

// --- <sstream> Kütüphanesi ---
#define dizi_akışı_oluştur          std::stringstream
#define dizi_akışı_girdi_oluştur    std::istringstream
#define dizi_akışı_çıktı_oluştur    std::ostringstream
#define dizi_akışı_al               str
#define dizi_akışı_ayarla           str

// --- <iomanip> Kütüphanesi ---
#define biçimlendirme_alan_ayarla   std::setw
#define biçimlendirme_doldur        std::setfill
#define biçimlendirme_hassasiyet    std::setprecision
#define biçimlendirme_sabit         std::fixed
#define biçimlendirme_bilimsel      std::scientific


// --- <valarray> Kütüphanesi ---
#define değer_dizisi_oluştur        std::valarray
#define değer_dizisi_toplamı        sum
#define değer_dizisi_ortalaması     mean
#define değer_dizisi_ayrık          slice
#define değer_dizisi_boyutu         size


// --- <functional> Kütüphanesi ---
#define işlev_oluştur             std::function
#define bağla                     std::bind
#define bağla_önceden             std::placeholders::_1
#define bağla_ikinci              std::placeholders::_2
#define bağla_üçüncü              std::placeholders::_3

// --- <type_traits> Kütüphanesi ---
#define tür_bilgisi_oluştur       std::is_same
#define tür_bilgisi_türet         std::remove_const
#define tür_bilgisi_dönüştür      std::conditional
#define tür_bilgisi_karşılaştır   std::is_base_of
#define tür_bilgisi_sinirli       std::enable_if


// --- <optional> Kütüphanesi ---
#define isteğe_bağlı_oluştur        std::optional
#define isteğe_bağlı_var_mı         has_value
#define isteğe_bağlı_değer_al       value
#define isteğe_bağlı_değer_veya     value_or

// --- <scoped_allocator> Kütüphanesi ---
#define sınırlandırılmış_ayarlayıcı_oluştur std::scoped_allocator_adaptor

// --- <span> Kütüphanesi ---
#define aralık_oluştur              std::span
#define aralık_boyutu              size
#define aralık_erişim              operator[]

// --- <system_error> Kütüphanesi ---
#define sistem_hatası_oluştur       std::error_code
#define sistem_hatası_mesajı_al     message
#define sistem_hatası_kod_al        value
#define sistem_hatası_tanımla       make_error_code

// --- <stop_token> Kütüphanesi ---
#define durdurma_jetonu_oluştur    std::stop_token
#define durdurma_jetonu_isteği     request_stop
#define durdurma_jetonu_kontrol    stop_requested

// --- <chrono> Kütüphanesi ---
#define zaman_süre_oluştur           std::chrono::duration
#define zaman_süre_toplam            count
#define zaman_süre_ekle             operator+
#define zaman_süre_farkı            operator-
#define zaman_saat_oluştur          std::chrono::hours
#define zaman_dakika_oluştur        std::chrono::minutes
#define zaman_saniye_oluştur        std::chrono::seconds
#define zaman_milisaniye_oluştur    std::chrono::milliseconds
#define zaman_mikrosaniye_oluştur   std::chrono::microseconds
#define zaman_nanosaniye_oluştur    std::chrono::nanoseconds
#define zaman_süre_sonu             std::chrono::steady_clock::time_point
#define zaman_şimdi_al              std::chrono::steady_clock::now

// --- <complex> Kütüphanesi ---
#define karmaşık_sayı_oluştur        std::complex
#define karmaşık_reel_al            real
#define karmaşık_imajiner_al        imag
#define karmaşık_mutlak_değer       std::abs
#define karmaşık_gerçekleştir       std::real
#define karmaşık_imalet             std::imag
#define karmaşık_polar_oluştur      std::polar
#define karmaşık_konjugat           std::conj
#define karmaşık_argüman            std::arg
#define karmaşık_faz                std::arg
#define karmaşık_norm               std::norm

// --- <bit> Kütüphanesi ---
#define bit_set                    std::bitset
#define bit_test                   test
#define bit_set_bit                set
#define bit_reset_bit              reset
#define bit_flip_bit               flip
#define bit_count                  count
#define bit_to_string              to_string

// --- <concepts> Kütüphanesi ---
#define kavram_tanımla             std::concept
#define kavram_kontrol             requires
#define kavram_kapsam              concept

// --- <coroutine> Kütüphanesi ---
#define asenkron_oluştur            std::coroutine_handle
#define asenkron_durdur             suspend
#define asenkron_devam_et           resume
#define asenkron_başlat             start

// --- <filesystem> Kütüphanesi (Detaylı) ---
#define dosya_sistemi_yolu             std::filesystem::path
#define dosya_sistemi_var_mı           exists
#define dosya_sistemi_dizin_oluştur    create_directory
#define dosya_sistemi_dizin_sil        remove
#define dosya_sistemi_dosya_özellikleri status
#define dosya_sistemi_dosya_boyutu     file_size
#define dosya_sistemi_dosya_tarihi     last_write_time
#define dosya_sistemi_dizin_tarih      last_write_time
#define dosya_sistemi_dizin_oku        is_directory
#define dosya_sistemi_dosya_oku        is_regular_file

// --- <locale> Kütüphanesi ---
#define yerel_ayarla                std::locale
#define yerel_getir                std::use_facet
#define yerel_set_çeviri           std::codecvt

// --- <mutex> Kütüphanesi ---
#define kilit_oluştur              std::mutex
#define kilit_gardiyanı                 std::lock_guard
#define benzersiz_kilit_koru       std::unique_lock
#define paylaşım_kilidi            std::shared_mutex
#define kilit_kilitlenme_kontrol   try_lock
#define kilit_bırak               unlock

// --- <condition_variable> Kütüphanesi ---
#define koşul_değişkeni_oluştur   std::condition_variable
#define koşul_bekle               wait
#define koşul_bekle_kontrol       wait_for
#define koşul_bildiri             notify_one
#define koşul_bildir              notify_all

// --- <exception> Kütüphanesi ---
#define istisna_oluştur            std::exception
#define istisna_veya               std::runtime_error
#define istisna_tut               std::exception_ptr
#define fırlat_istisna            throw
#define yakala_istisna            catch
#define dene_blok                try

// --- <typeindex> Kütüphanesi ---
#define tür_indeksi_oluştur        std::type_index
#define tür_indeksi_karşılaştırma  operator==

// --- <typeinfo> Kütüphanesi ---
#define tür_bilgisi_al             typeid
#define tür_bilgisi_ismi           name


// --- Konsol Yerelleştirmesi ---

#ifdef _WIN32
#include <windows.h>
#endif

void ortami_yerellestir() {
	// C ve C++ yerel ayarlarını varsayılan sisteme ayarla
	std::setlocale(LC_ALL, "");
	std::locale::global(std::locale(""));

	// Giriş/Çıkış senkronizasyonunu kapat (performans için)
	std::ios_base::sync_with_stdio(false);

#ifdef _WIN32
	// Windows konsolunda UTF-8 çıktı ve girişi etkinleştir
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	// Konsolda ANSI kodlarını (VT100) destekle
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hOut != INVALID_HANDLE_VALUE) {
		DWORD dwMode = 0;
		if (GetConsoleMode(hOut, &dwMode)) {
			dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
			SetConsoleMode(hOut, dwMode);
		}
	}
#endif

}

// --- Demo İçin Fonksiyonlar ---
void demo_asal_sayılar() {
	tamsayı sayı = 2;

	döngü(; sayı <= 50; sayı++) {
		tamsayı bölen = 2;
		mantıksal asal_mı = doğru;
		iken(bölen < sayı) {
			eğer(sayı % bölen == 0) {
				asal_mı = yanlış;
				çık;
			}
			bölen++;
		}
		eğer(asal_mı)
			yaz sayı << " ";
	}
	boş_bırak
		std::cout << "\nDevam etmek için bir tuşa basın...";
	std::cin.get();
}
int demo_faktöriyel(int n) {
    static bool bekletildi = false; // sadece bir kere bekle

    if (n <= 1) {
        if (!bekletildi) {
            std::cout << "\nDevam etmek için bir tuşa basın...";
            std::cin.get();
            bekletildi = true;
        }
        return 1;
    }

    int sonuc = n * demo_faktöriyel(n - 1);

    if (!bekletildi) {
        std::cout << "\nDevam etmek için bir tuşa basın...";
        std::cin.get();
        bekletildi = true;
    }

    return sonuc;
}
void demo_yaş_kontrol(int yaş) {
	eğer(yaş < 18)
		yaz "18 yaşından küçük\n";
	değilse_eğer(yaş == 18)
		yaz "Tam 18 yaşında\n";
	değilse
		yaz "18 yaşından büyük\n";
	std::cout << "\nDevam etmek için bir tuşa basın...";
	std::cin.get();
}
void demo_performans_testi() {
    using namespace std::chrono;

    yaz "1'den 10000000'e kadar for döngüsü başlıyor...\n";

    auto baslangic = high_resolution_clock::now();

    tamsayı toplam = 0;
    döngü(tamsayı i = 1; i <= 10000000; i++) {
        toplam += i;  // İşlem yapıyoruz, ama çıktı yok
    }

    auto bitis = high_resolution_clock::now();
    duration<double> sure = bitis - baslangic;

    yaz "Toplam: " << toplam << "\n";
    yaz "Süre: " << sure.count() << " saniye\n";

    std::cout << "\nDevam etmek için bir tuşa basın...";
    std::cin.get();
}
void demo_vektör() {
	vektör_oluştur<tamsayı> sayılar = { 1, 2, 3, 4, 5 };
	yaz "Vektör elemanları:\n";
	döngü_for_each(sayılar.başlangıç(), sayılar.bitiş(), [](tamsayı x) {
		yaz x << " ";
		});
	boş_bırak
		std::cout << "\nDevam etmek için bir tuşa basın...";
	std::cin.get();
}
void demo_pisagor(tamsayı a, tamsayı b, tamsayı c) {
	yaz "1. Kenar" << a << "\n" <<
		"2. Kenar" << b << "\n" <<
		"3. Kenar" << c << "\n";
	eğer(a * a + b * b == c * c)
		yaz "Pisagor üçgeni\n";
	değilse
		yaz "Pisagor üçgeni değil\n";
	std::cout << "\nDevam etmek için bir tuşa basın...";
	std::cin.get();
}

// Yukarıdaki fonksiyonlar C++ Türkçe Yaması ile yazıldı.
// Her biri temel kavramları Türkçe karşılıklarla gösterir.


// Geliştirmek istediğiniz Türkçeleştirme varsa değiştirebilirsiniz fakat eskiden ne olduğunu yazarsanız kıyaslaması daha kolay olur.
