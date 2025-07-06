// cppturkceyama.cpp : Statik kitaplýk için iþlevleri tanýmlar.
//

//#include "pch.h"
//#include "framework.h"
// C++TürkçeYamasý.cpp : Bu dosya 'main' iþlevi içeriyor. Program yürütme orada baþlayýp biter.
//
// C++ Türkçe Yamasý
// Bu kod, C++ dilinin temel sözdizimini ve standart kütüphane isimlerini Türkçe terimlerle deðiþtirmek için tasarlanmýþtýr.
// Bu, C++ kodunu Türkçe konuþan geliþtiriciler için daha eriþilebilir hale getirmeyi amaçlar.

// --- Kütüphane Ýsimleri Türkçeleþtirme ---
#define PENCERELER <windows.h>
#define ALGORÝTMA <algorithm>
#define DÝZÝ <array>
#define ATOMÝK <atomic>
#define BARÝYER <barrier>
#define BÝT <bit>
#define ZAMAN <chrono>
#define KODLAMA_DÖNÜÞTÜRME <codecvt>
#define KARMAÞIK <complex>
#define KAVRAMLAR <concepts>
#define KOÞUL_DEÐÝÞKENÝ <condition_variable>
#define ASENKRON <coroutine>
#define CSETJMP <csetjmp>
#define CSÝNYAL <csignal>
#define CSTANDART_ARGÜMANLAR <cstdarg>
#define CMANTIK <cstdbool>
#define CBOYUT <cstddef>
#define CTÝP <cstdint>
#define CSTDÝO <cstdio>
#define CSTDKÜT <cstdlib>
#define CYAZI <cstring>
#define CZAMAN <ctime>
#define ÇÝFT_KUYRUK <deque>
#define ÝSTÝSNA <exception>
#define DOSYA_SÝSTEMÝ <filesystem>
#define BÝÇÝMLENDÝRME <format>
#define ÝLERÝ_LÝSTE <forward_list>
#define DOSYA_AKIÞI <fstream>
#define FONKSÝYONEL <functional>
#define GELECEK <future>
#define BAÞLATICI_LÝSTESÝ <initializer_list>
#define BÝÇÝM <iomanip>
#define GÝRÝÞ_ÇIKIÞ <ios>
#define GÝRÝÞ_ÇIKIÞ_YÖNLENDÝRME <iosfwd>
#define GÝRÝÞ_AKIÞI <iostream>
#define GÝRÝÞ_AKIÞI_TÜRÜ <istream>
#define YÝNELEYÝCÝ <iterator>
#define SINIRLAR <limits>
#define LÝSTE <list>
#define YEREL <locale>
#define HARÝTA <map>
#define BELLEK <memory>
#define KÝLÝT <mutex>
#define YENÝ <new>
#define SAYISAL <numeric>
#define ÝSTEÐE_BAÐLI <optional>
#define ÇIKIÞ_AKIÞI <ostream>
#define KUYRUK <queue>
#define RASTGELE <random>
#define ARALIKLAR <ranges>
#define DÜZENLÝ_ÝFADE <regex>
#define SINIRLANDIRILMIÞ_AYARLAYICI <scoped_allocator>
#define KÜME <set>
#define PAYLAÞILAN_KÝLÝT <shared_mutex>
#define ARALIK <span>
#define DÝZÝ_AKIÞI <sstream>
#define YIÐIN <stack>
#define STANDART_HATA <stdexcept>
#define DURDURMA_JETONU <stop_token>
#define AKIÞ_ARABELLEK <streambuf>
#define METÝN <string>
#define METÝN_GÖRÜNÜMÜ <string_view>
#define SÝSTEM_HATASI <system_error>
#define ÝÞ_PARÇACIÐI <thread>
#define DEMET <tuple>
#define TÜR_ÖZELLÝKLERÝ <type_traits>
#define TÜR_INDEKSÝ <typeindex>
#define TÜR_BÝLGÝSÝ <typeinfo>
#define DÜZENSÝZ_HARÝTA <unordered_map>
#define DÜZENSÝZ_KÜME <unordered_set>
#define YARDIMCI <utility>
#define DEÐER_DÝZÝSÝ <valarray>
#define DEÐÝÞKEN <variant>
#define VEKTÖR <vector>

#include ALGORÝTMA
#include DÝZÝ
#include ATOMÝK
#include BARÝYER
#include BÝT
#include ZAMAN
#include KODLAMA_DÖNÜÞTÜRME
#include KARMAÞIK
#include KAVRAMLAR
#include KOÞUL_DEÐÝÞKENÝ
#include ASENKRON
#include CSETJMP
#include CSÝNYAL
#include CSTANDART_ARGÜMANLAR
#include CMANTIK
#include CBOYUT
#include CTÝP
#include CSTDÝO
#include CSTDKÜT
#include CYAZI
#include CZAMAN
#include ÇÝFT_KUYRUK
#include ÝSTÝSNA
#include DOSYA_SÝSTEMÝ
#include BÝÇÝMLENDÝRME
#include ÝLERÝ_LÝSTE
#include DOSYA_AKIÞI
#include FONKSÝYONEL
#include GELECEK
#include BAÞLATICI_LÝSTESÝ
#include BÝÇÝM
#include GÝRÝÞ_ÇIKIÞ
#include GÝRÝÞ_ÇIKIÞ_YÖNLENDÝRME
#include GÝRÝÞ_AKIÞI
#include GÝRÝÞ_AKIÞI_TÜRÜ
#include YÝNELEYÝCÝ
#include SINIRLAR
#include LÝSTE
#include YEREL
#include HARÝTA
#include BELLEK
#include KÝLÝT
#include YENÝ
#include SAYISAL
#include ÝSTEÐE_BAÐLI
#include ÇIKIÞ_AKIÞI
#include KUYRUK
#include RASTGELE
#include ARALIKLAR
#include DÜZENLÝ_ÝFADE
#include SINIRLANDIRILMIÞ_AYARLAYICI
#include KÜME
#include PAYLAÞILAN_KÝLÝT
#include ARALIK
#include DÝZÝ_AKIÞI
#include YIÐIN
#include STANDART_HATA
#include DURDURMA_JETONU
#include AKIÞ_ARABELLEK
#include METÝN
#include METÝN_GÖRÜNÜMÜ
#include SÝSTEM_HATASI
#include ÝÞ_PARÇACIÐI
#include DEMET
#include TÜR_ÖZELLÝKLERÝ
#include TÜR_INDEKSÝ
#include TÜR_BÝLGÝSÝ
#include DÜZENSÝZ_HARÝTA
#include DÜZENSÝZ_KÜME
#include YARDIMCI
#include DEÐER_DÝZÝSÝ
#include DEÐÝÞKEN
#include VEKTÖR
#include <fcntl.h>
#include <io.h>

// --- Temel Türkçeleþtirmeler ---
#define yaz std::cout<<
#define al std::cin >>
#define tamsayý int
#define harf char
#define mantýksal bool
#define metin std::string
#define ondalýklý float
#define kesirli double
#define dizi std::array
#define sabit const
#define fonksiyon function
#define sýnýf class
#define yapý struct
#define seçim switch
#define durum case
#define varsayýlan default

#define eðer if
#define deðilse_eðer else if
#define deðilse else

#define oto auto

#define genel public
#define özel private
#define kýsýtlý protected

#define döngü for
#define iken while
#define uygula do
#define çýk break
#define atla continue

#define eþit ==
#define farklý !=
#define ve &&
#define veya ||
#define deðil !

#define dönüþ return
#define oluþtur new
#define sil delete

#define sabit const
#define boyut sizeof

#define doðru true
#define yanlýþ false
#define boþ nullptr
#define dönüþsüz void

#define fýrlat throw
#define yakala catch
#define dene try

#define kapsam namespace
#define harici extern
#define iç inline

#define tür_adý typedef
#define tür_tipi typename
#define tür_bilgisi typeid

#define sabit_önce_çalýþtýr constexpr
#define zorunlu_önce_çalýþtýr consteval
#define deðiþken_önce_çalýþtýr constinit

#define kalýp template
#define kullaným using

#define arkadaþ friend
#define sanal virtual

#define yeniden_yorumla reinterpret_cast
#define güvenli_dönüþüm const_cast
#define dinamik_dönüþtür dynamic_cast
#define sabit_deðiþtir static_cast

#define modül module
#define getir import

// --- Yazým Kolaylaþtýrmalarý ---
#define std_sil using namespace std
#define ana int main()
#define boþ_býrak std::cout<<std::endl;
#ifdef _WIN32
#define konsol_bekle system("pause");
#define konsol_temizle system("cls");
#else
#define konsol_bekle system("read -p \"Devam etmek için bir tuþa basýn...\" -n 1 -s");
#define konsol_temizle system("clear");
#endif


// --- <cstring> Kütüphanesi ---
#define cuzunluk strlen             // karakter_dizisi_uzunluðu
#define cmetin_kopyala strcpy             // dizi_kopyala
#define ckopyala_sýnýr strncpy      // sýnýr_kadar_kopyala
#define cmetin_birleþtir strcat           // dizi_birleþtir
#define cbirleþtir_sýnýr strncat    // sýnýr_kadar_birleþtir
#define ckarþýlaþtýr strcmp         // dizi_karþýlaþtýr
#define ckarþýlaþtýr_sýnýr strncmp  // sýnýr_kadar_karþýlaþtýr
#define cbellek_ayarla memset       // bellek_doldur
#define cbellek_kopyala memcpy      // bellek_kopyala
#define cbellek_kaydýr memmove      // bellek_kaydýr
#define ckarakter_ara strchr        // dizi_karakter_ara
#define csondan_karakter_ara strrchr // sondan_karakter_ara
#define calt_dizi_ara strstr        // dizi_icerisinde_dizi_ara
#define cbellek_karakter_ara memchr // bellek_icerisinde_karakter_ara
#define bellek_karþýlaþtýr memcmp  // bellek_karþýlaþtýr

// --- <algorithm> Kütüphanesi Makrolarý ---
#define döngü_for_each            for_each
#define bul                       find
#define bul_if                    find_if
#define bul_if_deðil              find_if_not
#define say                       count
#define say_if                    count_if
#define eþleþtir                  mismatch
#define eþit_mi                   equal
#define tümü_mi                   all_of
#define herhangi_biri_mi          any_of
#define hiçbiri_mi                none_of
#define kopyala                   copy
#define kopyala_n                 copy_n
#define kopyala_if                copy_if
#define taþý                      move
#define ters_taþý                 move_backward
#define deðiþ_tokuþ               swap
#define aralýk_deðiþ_tokuþ        swap_ranges
#define doldur                    fill
#define doldur_n                  fill_n
#define dönüþtür                  transform
#define üret                      generate
#define üret_n                    generate_n

#define kaldýr                    remove
#define kaldýr_if                 remove_if
#define kaldýr_kopyala            remove_copy
#define kaldýr_kopyala_if         remove_copy_if
#define deðiþtir                  replace
#define deðiþtir_if               replace_if
#define deðiþtir_kopyala          replace_copy
#define deðiþtir_kopyala_if       replace_copy_if

#define tersten_sýrala            reverse
#define tersten_kopyala           reverse_copy
#define döndür_rotate             rotate
#define döndür_kopyala            rotate_copy
#define rastgele_karýþtýr         shuffle
#define ayýkla                    unique
#define ayýkla_kopyala            unique_copy
#define yerleþtir                 partition
#define yerleþtir_kopyala         partition_copy
#define yerleþtir_duraðan         stable_partition

#define sýrala                    sort
#define duraðan_sýrala            stable_sort
#define kýsmi_sýrala              partial_sort
#define kýsmi_sýrala_kopyala      partial_sort_copy
#define sýralý_mý                 is_sorted
#define nereye_kadar_sýralý       is_sorted_until
#define nci_eleman                nth_element

#define alt_sýnýr                 lower_bound
#define üst_sýnýr                 upper_bound
#define eþleþtir_aralýðý          equal_range
#define ikili_arama               binary_search
#define birleþtir                 merge
#define yerinde_birleþtir         inplace_merge
#define içerir_mi                 includes
#define küme_birleþimi            set_union
#define küme_kesiþimi             set_intersection
#define küme_farký                set_difference
#define simetrik_fark             set_symmetric_difference

#define öncelik_yýðýný_yap        make_heap
#define öncelik_yýðýnýna_ekle     push_heap
#define öncelik_yýðýnýndan_çýkar  pop_heap
#define öncelik_yýðýnýný_sýrala   sort_heap
#define öncelik_yýðýný_mý         is_heap
#define öncelik_yýðýný_nereye_kadar  is_heap_until

#define yer_deðiþtir_iter         next_permutation
#define önceki_perm               prev_permutation

#define alt_dizi_subrange         search
#define ardýþýk_arama             search_n
#define döngü_find_end            find_end
#define ilk_eþleþen               find_first_of
#define tekrar_bul                adjacent_find

// --- <numeric> Kütüphanesi ---
#define istatistik_accumulate     accumulate
#define iç_çarpým                 inner_product
#define kademeli_toplam           partial_sum
#define ardýþýk_fark              adjacent_difference

// --- <iterator> Kütüphanesi ---
#define i_ileri_aktar               advance
#define mesafe                    distance
#define sonraki_iter              next
#define önceki_iter               prev
#define döngü_ilerleyici          back_inserter
#define öne_ekleyici              front_inserter
#define yerleþtirici              inserter

// --- <memory> Kütüphanesi ---
#define benzersiz_ptr             std::unique_ptr
#define paylaþýlan_ptr            std::shared_ptr
#define zayýf_ptr                 std::weak_ptr
#define yeni                    std::make_unique
#define paylaþýlan_yeni           std::make_shared
#define benzersiz_gösterici          std::unique_ptr
#define paylaþýlan_gösterici         std::shared_ptr
#define zayýf_gösterici              std::weak_ptr
#define gösterici_oluþtur            std::make_unique
#define paylaþýlan_gösterici_oluþtur std::make_shared

// --- <thread> Kütüphanesi ---
#define iþ_parçacýðý              std::thread
#define kilit_gardiyaný              std::lock_guard
#define benzersiz_kilit           std::unique_lock
#define koþul_deðiþkeni           std::condition_variable
#define uyut                     std::this_thread::sleep_for
#define getir_anahtar            std::this_thread::get_id
#define baþlat_parçacýk           std::thread::join
#define ayýr_parçacýk             std::thread::detach

// --- <cmath> Kütüphanesi ---

#define karekok std::sqrt
#define kupkok std::cbrt
#define us_al std::pow
#define oklid_uzaklik std::hypot

#define mutlak std::abs
#define mutlak_fabs std::fabs
#define mutlak_fabsf std::fabsf
#define mutlak_fabsl std::fabsl

#define ondalik_mod std::fmod
#define kalan std::remainder
#define kalan_ve_bolum std::remquo

#define e_uzeri std::exp
#define iki_uzeri std::exp2
#define e_uzeri_eksi_bir std::expm1

#define log std::log
#define log10 std::log10
#define log2 std::log2
#define log1p std::log1p

#define tavana_yuvarla std::ceil
#define tabana_yuvarla std::floor
#define tam_kismi_al std::trunc
#define yuvarla std::round
#define long_yuvarla std::lround
#define longlong_yuvarla std::llround

#define modlu_ayir std::modf

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

#define isaret_kopyala std::copysign
#define sonraki_deger std::nextafter
#define sonraki_tam std::nexttoward

#define pozitif_fark std::fdim
#define maksimum std::fmax
#define minimum std::fmin

#define ayir_mantissa std::frexp
#define carp_2_uzeri std::ldexp
#define carp_optimum std::scalbn

#define sonlu_mu std::isfinite
#define sonsuz_mu std::isinf
#define nan_mi std::isnan
#define normal_mi std::isnormal
#define sayi_sinifi std::fpclassify
#define isaret_biti std::signbit




// --- <string> Kütüphanesi ---
#define metin_uzunluk            std::string::size_type
#define metin_boyutu             std::string::size_type
#define metin_oluþtur            std::string
#define metin_ekle               append
#define metin_ara                find
#define metin_ara_son            rfind
#define metin_böl                substr
#define metin_deðiþtir           replace
#define metin_karakter           at
#define metin_c_str              c_str
#define metin_boþ_mu             empty
#define metin_temizle            clear
#define metin_ekle_ön            insert
#define metin_sil                erase
#define metin_kopyala            copy

// --- <vector> Kütüphanesi ---
#define vektör_oluþtur          std::vector
#define vektör_boyutu           size
#define vektör_bos_mu           empty
#define vektör_ekle             push_back
#define vektör_son_element       back
#define vektör_ilk_element       front
#define vektör_sil_son           pop_back
#define vektör_temizle          clear
#define vektör_eriþim           at
#define baþlangýç begin
#define bitiþ end

// --- <map> Kütüphanesi ---
#define harita_oluþtur          std::map
#define harita_ekle             insert
#define harita_bul              find
#define harita_sil              erase
#define harita_boyutu           size
#define harita_bos_mu           empty
#define harita_temizle          clear

// --- <set> Kütüphanesi ---
#define küme_oluþtur            std::set
#define küme_ekle               insert
#define küme_bul                find
#define küme_sil                erase
#define küme_boyutu             size
#define küme_bos_mu             empty
#define küme_temizle            clear

// --- <queue> Kütüphanesi ---
#define kuyruk_oluþtur          std::queue
#define kuyruk_ekle             push
#define kuyruk_çýkar            pop
#define kuyruk_ön_element       front
#define kuyruk_son_element      back
#define kuyruk_bos_mu           empty
#define kuyruk_boyutu           size

// --- <stack> Kütüphanesi ---
#define yýðýn_oluþtur           std::stack
#define yýðýn_ekle              push
#define yýðýn_çýkar             pop
#define yýðýn_üst_element       top
#define yýðýn_bos_mu            empty
#define yýðýn_boyutu            size

// --- <regex> Kütüphanesi ---
#define düzenli_ifade_oluþtur   std::regex
#define eþleþtir_düzenli_ifade std::regex_match
#define arama_düzenli_ifade     std::regex_search
#define deðiþtir_düzenli_ifade  std::regex_replace


// --- <chrono> Kütüphanesi ---
#define zaman_süre              std::chrono::duration
#define zaman_aný               std::chrono::time_point
#define þu_an                  std::chrono::system_clock::now
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
#define rastgele_üretilen_sayý  operator()

// --- <functional> Kütüphanesi ---
#define fonksiyonel_oluþtur     std::function
#define baðla                   std::bind
#define fonksiyon_kavramý       std::function

// --- <optional> Kütüphanesi ---
#define isteðe_baðlý_oluþtur    std::optional
#define deðer_var_mý            has_value
#define deðer_al                value
#define deðer_alveya            value_or
#define isteðe_baðlý_boþalt     reset
#define isteðe_baðlý_deðer_var mý   has_value
#define isteðe_baðlý_deðer_al       value
#define isteðe_baðlý_deðer_al_veya  value_or
#define isteðe_baðlý_sýfýrla        reset

// --- <variant> Kütüphanesi ---
#define deðiþken_oluþtur        std::variant
#define deðer_al_özgü           std::get
#define deðer_al_türü           std::get_if
#define ziyaretçi_çaðýr         std::visit


// --- <mutex> Kütüphanesi ---
#define kilit_oluþtur           std::mutex
#define kilitle                 lock
#define kilit_kaldýr            unlock


// --- <filesystem> Kütüphanesi ---
#define dosya_yolu               std::filesystem::path
#define dosya_var_mý             std::filesystem::exists
#define dosya_oluþtur           std::filesystem::create_directory
#define dosya_sil                std::filesystem::remove
#define dosya_sil_herþey         std::filesystem::remove_all
#define dosya_türü               std::filesystem::file_type
#define dosya_boyutu             std::filesystem::file_size
#define dosya_tarih              std::filesystem::last_write_time
#define dizin_oku               std::filesystem::directory_iterator
#define dizin_oku_rec           std::filesystem::recursive_directory_iterator

// --- <exception> Kütüphanesi ---
#define hata_oluþtur             std::exception
#define hata_mesajý_al           what
#define hata_at                  throw

// --- <type_traits> Kütüphanesi ---
#define tür_bilgisi_özelliði     std::is_same
#define tür_türetimi             std::remove_const
#define tür_sorgula             std::is_integral
#define tür_dönüþtür             std::decay

// --- <utility> Kütüphanesi ---
#define deðiþken_takas          std::swap
#define hareket_ettir           std::move
#define ileri_aktar             std::forward
#define çift                    std::pair
#define çift_olustur            std::make_pair
#define baðla                   std::bind
#define yardýmcý_kapsam         std::scope_exit


// --- <locale> Kütüphanesi ---
#define yerel_ayarla            std::locale
#define yerel_ismi              std::locale::name
#define yerel_ara              std::use_facet

// --- <sstream> Kütüphanesi ---
#define dizi_akýþ_oluþtur       std::stringstream
#define dizi_akýþ_oku           std::istringstream
#define dizi_akýþ_yaz           std::ostringstream

// --- <iomanip> Kütüphanesi ---
#define biçimlendirme_ayarla    std::setprecision
#define biçimlendirme_doldur    std::setfill
#define biçimlendirme_alan      std::setw
#define biçimlendirme_sabit     std::fixed

// --- <future> Kütüphanesi ---
#define gelecek_deðer_oluþtur   std::future
#define gelecek_elde_et         get
#define gelecek_bekle           wait
#define sözleþme_elde_et        std::promise

// --- <any> Kütüphanesi ---
#define her_türden              std::any
#define her_türden_var_mý       has_value
#define her_türden_elde_et      std::any_cast

// --- <scoped_allocator> Kütüphanesi ---
#define sýnýrlandýrýlmýþ_ayarlayýcý_oluþtur std::scoped_allocator_adaptor

// --- <stop_token> Kütüphanesi ---
#define durdurma_jetonu_oluþtur std::stop_token
#define jetonu_durdur  std::stop_source
#define durdurma_jetonu_bekle   std::stop_callback


// --- <list> Kütüphanesi ---
#define liste_oluþtur           std::list
#define liste_ekle_son          push_back
#define liste_ekle_ilk          push_front
#define liste_son_eleman        back
#define liste_ilk_eleman        front
#define liste_sil_son           pop_back
#define liste_sil_ilk           pop_front
#define liste_boyutu            size
#define liste_bos_mu            empty
#define liste_temizle           clear
#define liste_eriþim            at
#define liste_sil               remove
#define liste_bul               find

// --- <forward_list> Kütüphanesi ---
#define ileri_liste_oluþtur     std::forward_list
#define ileri_liste_ekle_ilk    push_front
#define ileri_liste_sil_ilk     pop_front
#define ileri_liste_bos_mu      empty
#define ileri_liste_temizle     clear
#define ileri_liste_ekle_son    insert_after
#define ileri_liste_bul         find

// --- <deque> Kütüphanesi ---
#define çift_kuyruk_oluþtur     std::deque
#define çift_kuyruk_ekle_son    push_back
#define çift_kuyruk_ekle_ilk    push_front
#define çift_kuyruk_sil_son     pop_back
#define çift_kuyruk_sil_ilk     pop_front
#define çift_kuyruk_boyutu      size
#define çift_kuyruk_bos_mu      empty
#define çift_kuyruk_temizle     clear
#define çift_kuyruk_eriþim      at


// --- <unordered_map> Kütüphanesi ---
#define düzensiz_harita_oluþtur  std::unordered_map
#define düzensiz_harita_ekle     insert
#define düzensiz_harita_sil      erase
#define düzensiz_harita_bul      find
#define düzensiz_harita_boyutu   size
#define düzensiz_harita_bos_mu   empty
#define düzensiz_harita_temizle  clear


// --- <unordered_set> Kütüphanesi ---
#define düzensiz_küme_oluþtur    std::unordered_set
#define düzensiz_küme_ekle       insert
#define düzensiz_küme_sil        erase
#define düzensiz_küme_bul        find
#define düzensiz_küme_boyutu     size
#define düzensiz_küme_bos_mu     empty
#define düzensiz_küme_temizle    clear

// --- <fstream> Kütüphanesi ---
#define dosya_akýþý_oluþtur        std::fstream
#define dosya_girdi_akýþý_oluþtur  std::ifstream
#define dosya_çýktý_akýþý_oluþtur  std::ofstream
#define dosya_aç                   open
#define dosya_kapat                close
#define dosya_oku                  read
#define dosya_yaz                  write
#define dosya_baþlangýç            seekg
#define dosya_bitiþ                seekp
#define dosya_þimdiki              tellg
#define dosya_þimdiki_yaz          tellp
#define dosya_baþarýlý             good
#define dosya_baþarýsýz            fail
#define dosya_durum_sonu           eof

// --- <sstream> Kütüphanesi ---
#define dizi_akýþý_oluþtur          std::stringstream
#define dizi_akýþý_girdi_oluþtur    std::istringstream
#define dizi_akýþý_çýktý_oluþtur    std::ostringstream
#define dizi_akýþý_al               str
#define dizi_akýþý_ayarla           str

// --- <iomanip> Kütüphanesi ---
#define biçimlendirme_alan_ayarla   std::setw
#define biçimlendirme_doldur        std::setfill
#define biçimlendirme_hassasiyet    std::setprecision
#define biçimlendirme_sabit         std::fixed
#define biçimlendirme_bilimsel      std::scientific


// --- <valarray> Kütüphanesi ---
#define deðer_dizisi_oluþtur        std::valarray
#define deðer_dizisi_toplamý        sum
#define deðer_dizisi_ortalamasý     mean
#define deðer_dizisi_ayrýk          slice
#define deðer_dizisi_boyutu         size


// --- <functional> Kütüphanesi ---
#define iþlev_oluþtur             std::function
#define baðla                     std::bind
#define baðla_önceden             std::placeholders::_1
#define baðla_ikinci              std::placeholders::_2
#define baðla_üçüncü              std::placeholders::_3

// --- <type_traits> Kütüphanesi ---
#define tür_bilgisi_oluþtur       std::is_same
#define tür_bilgisi_türet         std::remove_const
#define tür_bilgisi_dönüþtür      std::conditional
#define tür_bilgisi_karþýlaþtýr   std::is_base_of
#define tür_bilgisi_sinirli       std::enable_if


// --- <optional> Kütüphanesi ---
#define isteðe_baðlý_oluþtur        std::optional
#define isteðe_baðlý_var_mý         has_value
#define isteðe_baðlý_deðer_al       value
#define isteðe_baðlý_deðer_veya     value_or

// --- <scoped_allocator> Kütüphanesi ---
#define sýnýrlandýrýlmýþ_ayarlayýcý_oluþtur std::scoped_allocator_adaptor

// --- <span> Kütüphanesi ---
#define aralýk_oluþtur              std::span
#define aralýk_boyutu              size
#define aralýk_eriþim              operator[]

// --- <system_error> Kütüphanesi ---
#define sistem_hatasý_oluþtur       std::error_code
#define sistem_hatasý_mesajý_al     message
#define sistem_hatasý_kod_al        value
#define sistem_hatasý_tanýmla       make_error_code

// --- <stop_token> Kütüphanesi ---
#define durdurma_jetonu_oluþtur    std::stop_token
#define durdurma_jetonu_isteði     request_stop
#define durdurma_jetonu_kontrol    stop_requested

// --- <chrono> Kütüphanesi ---
#define zaman_süre_oluþtur           std::chrono::duration
#define zaman_süre_toplam            count
#define zaman_süre_ekle             operator+
#define zaman_süre_farký            operator-
#define zaman_saat_oluþtur          std::chrono::hours
#define zaman_dakika_oluþtur        std::chrono::minutes
#define zaman_saniye_oluþtur        std::chrono::seconds
#define zaman_milisaniye_oluþtur    std::chrono::milliseconds
#define zaman_mikrosaniye_oluþtur   std::chrono::microseconds
#define zaman_nanosaniye_oluþtur    std::chrono::nanoseconds
#define zaman_süre_sonu             std::chrono::steady_clock::time_point
#define zaman_þimdi_al              std::chrono::steady_clock::now

// --- <complex> Kütüphanesi ---
#define karmaþýk_sayý_oluþtur        std::complex
#define karmaþýk_reel_al            real
#define karmaþýk_imajiner_al        imag
#define karmaþýk_mutlak_deðer       std::abs
#define karmaþýk_gerçekleþtir       std::real
#define karmaþýk_imalet             std::imag
#define karmaþýk_polar_oluþtur      std::polar
#define karmaþýk_konjugat           std::conj
#define karmaþýk_argüman            std::arg
#define karmaþýk_faz                std::arg
#define karmaþýk_norm               std::norm

// --- <bit> Kütüphanesi ---
#define bit_set                    std::bitset
#define bit_test                   test
#define bit_set_bit                set
#define bit_reset_bit              reset
#define bit_flip_bit               flip
#define bit_count                  count
#define bit_to_string              to_string

// --- <concepts> Kütüphanesi ---
#define kavram_tanýmla             std::concept
#define kavram_kontrol             requires
#define kavram_kapsam              concept

// --- <coroutine> Kütüphanesi ---
#define asenkron_oluþtur            std::coroutine_handle
#define asenkron_durdur             suspend
#define asenkron_devam_et           resume
#define asenkron_baþlat             start

// --- <filesystem> Kütüphanesi (Detaylý) ---
#define dosya_sistemi_yolu             std::filesystem::path
#define dosya_sistemi_var_mý           exists
#define dosya_sistemi_dizin_oluþtur    create_directory
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
#define kilit_oluþtur              std::mutex
#define kilit_gardiyaný                 std::lock_guard
#define benzersiz_kilit_koru       std::unique_lock
#define paylaþým_kilidi            std::shared_mutex
#define kilit_kilitlenme_kontrol   try_lock
#define kilit_býrak               unlock

// --- <condition_variable> Kütüphanesi ---
#define koþul_deðiþkeni_oluþtur   std::condition_variable
#define koþul_bekle               wait
#define koþul_bekle_kontrol       wait_for
#define koþul_bildiri             notify_one
#define koþul_bildir              notify_all

// --- <exception> Kütüphanesi ---
#define istisna_oluþtur            std::exception
#define istisna_veya               std::runtime_error
#define istisna_tut               std::exception_ptr
#define fýrlat_istisna            throw
#define yakala_istisna            catch
#define dene_blok                try

// --- <typeindex> Kütüphanesi ---
#define tür_indeksi_oluþtur        std::type_index
#define tür_indeksi_karþýlaþtýrma  operator==

// --- <typeinfo> Kütüphanesi ---
#define tür_bilgisi_al             typeid
#define tür_bilgisi_ismi           name


// --- Konsol Yerelleþtirmesi ---

#ifdef _WIN32
#include <windows.h>
#endif

void ortami_yerellestir() {
	// C ve C++ yerel ayarlarýný varsayýlan sisteme ayarla
	std::setlocale(LC_ALL, "");
	std::locale::global(std::locale(""));

	// Giriþ/Çýkýþ senkronizasyonunu kapat (performans için)
	std::ios_base::sync_with_stdio(false);

#ifdef _WIN32
	// Windows konsolunda UTF-8 çýktý ve giriþi etkinleþtir
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	// Konsolda ANSI kodlarýný (VT100) destekle
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

// --- Demo Ýçin Fonksiyonlar ---
void demo_asal_sayýlar() {
	tamsayý sayý = 2;

	döngü(; sayý <= 50; sayý++) {
		tamsayý bölen = 2;
		mantýksal asal_mý = doðru;
		iken(bölen < sayý) {
			eðer(sayý % bölen == 0) {
				asal_mý = yanlýþ;
				çýk;
			}
			bölen++;
		}
		eðer(asal_mý)
			yaz sayý << " ";
	}
	boþ_býrak
		std::cout << "\nDevam etmek için bir tuþa basýn...";
	std::cin.get();
}
int demo_faktöriyel(int n) {
	eðer(n == 0) n = 1;
	dönüþ n* demo_faktöriyel(n - 1);
	std::cout << "\nDevam etmek için bir tuþa basýn...";
	std::cin.get();
	return n;
}
void demo_yas_kontrol(int yaþ) {
	eðer(yaþ < 18)
		yaz "18 yaþýndan küçük\n";
	deðilse_eðer(yaþ == 18)
		yaz "Tam 18 yaþýnda\n";
	deðilse
		yaz "18 yaþýndan büyük\n";
	std::cout << "\nDevam etmek için bir tuþa basýn...";
	std::cin.get();
}
void demo_döngüler() {
	yaz "1'den 5'e kadar for döngüsü:\n";
	döngü(tamsayý i = 1; i <= 5; i++)
		yaz i << " ";
	boþ_býrak

		yaz "1'den 5'e kadar while döngüsü:\n";
	tamsayý j = 1;
	iken(j <= 5) {
		yaz j << " ";
		j++;
	}
	boþ_býrak
		std::cout << "\nDevam etmek için bir tuþa basýn...";
	std::cin.get();
}
void demo_vektör() {
	vektör_oluþtur<tamsayý> sayýlar = { 1, 2, 3, 4, 5 };
	yaz "Vektör elemanlarý:\n";
	döngü_for_each(sayýlar.baþlangýç(), sayýlar.bitiþ(), [](tamsayý x) {
		yaz x << " ";
		});
	boþ_býrak
		std::cout << "\nDevam etmek için bir tuþa basýn...";
	std::cin.get();
}
void demo_pisagor(tamsayý a, tamsayý b, tamsayý c) {
	yaz "1. Kenar" << a << "\n" <<
		"2. Kenar" << b << "\n" <<
		"3. Kenar" << c << "\n";
	eðer(a * a + b * b == c * c)
		yaz "Pisagor üçgeni\n";
	deðilse
		yaz "Pisagor üçgeni deðil\n";
	std::cout << "\nDevam etmek için bir tuþa basýn...";
	std::cin.get();
}

// Yukarýdaki fonksiyonlar C++ Türkçe Yamasý ile yazýldý.
// Her biri temel kavramlarý Türkçe karþýlýklarla gösterir.


// Geliþtirmek istediðiniz Türkçeleþtirme varsa deðiþtirebilirsiniz fakat eskiden ne olduðunu yazarsanýz kýyaslamasý daha kolay olur.