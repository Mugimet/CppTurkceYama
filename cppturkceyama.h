// cppturkceyama.cpp : Statik kitapl�k i�in i�levleri tan�mlar.
//

//#include "pch.h"
//#include "framework.h"
// C++T�rk�eYamas�.cpp : Bu dosya 'main' i�levi i�eriyor. Program y�r�tme orada ba�lay�p biter.
//
// C++ T�rk�e Yamas�
// Bu kod, C++ dilinin temel s�zdizimini ve standart k�t�phane isimlerini T�rk�e terimlerle de�i�tirmek i�in tasarlanm��t�r.
// Bu, C++ kodunu T�rk�e konu�an geli�tiriciler i�in daha eri�ilebilir hale getirmeyi ama�lar.

// --- K�t�phane �simleri T�rk�ele�tirme ---
#define PENCERELER <windows.h>
#define ALGOR�TMA <algorithm>
#define D�Z� <array>
#define ATOM�K <atomic>
#define BAR�YER <barrier>
#define B�T <bit>
#define ZAMAN <chrono>
#define KODLAMA_D�N��T�RME <codecvt>
#define KARMA�IK <complex>
#define KAVRAMLAR <concepts>
#define KO�UL_DE���KEN� <condition_variable>
#define ASENKRON <coroutine>
#define CSETJMP <csetjmp>
#define CS�NYAL <csignal>
#define CSTANDART_ARG�MANLAR <cstdarg>
#define CMANTIK <cstdbool>
#define CBOYUT <cstddef>
#define CT�P <cstdint>
#define CSTD�O <cstdio>
#define CSTDK�T <cstdlib>
#define CYAZI <cstring>
#define CZAMAN <ctime>
#define ��FT_KUYRUK <deque>
#define �ST�SNA <exception>
#define DOSYA_S�STEM� <filesystem>
#define B���MLEND�RME <format>
#define �LER�_L�STE <forward_list>
#define DOSYA_AKI�I <fstream>
#define FONKS�YONEL <functional>
#define GELECEK <future>
#define BA�LATICI_L�STES� <initializer_list>
#define B���M <iomanip>
#define G�R��_�IKI� <ios>
#define G�R��_�IKI�_Y�NLEND�RME <iosfwd>
#define G�R��_AKI�I <iostream>
#define G�R��_AKI�I_T�R� <istream>
#define Y�NELEY�C� <iterator>
#define SINIRLAR <limits>
#define L�STE <list>
#define YEREL <locale>
#define HAR�TA <map>
#define BELLEK <memory>
#define K�L�T <mutex>
#define YEN� <new>
#define SAYISAL <numeric>
#define �STE�E_BA�LI <optional>
#define �IKI�_AKI�I <ostream>
#define KUYRUK <queue>
#define RASTGELE <random>
#define ARALIKLAR <ranges>
#define D�ZENL�_�FADE <regex>
#define SINIRLANDIRILMI�_AYARLAYICI <scoped_allocator>
#define K�ME <set>
#define PAYLA�ILAN_K�L�T <shared_mutex>
#define ARALIK <span>
#define D�Z�_AKI�I <sstream>
#define YI�IN <stack>
#define STANDART_HATA <stdexcept>
#define DURDURMA_JETONU <stop_token>
#define AKI�_ARABELLEK <streambuf>
#define MET�N <string>
#define MET�N_G�R�N�M� <string_view>
#define S�STEM_HATASI <system_error>
#define ��_PAR�ACI�I <thread>
#define DEMET <tuple>
#define T�R_�ZELL�KLER� <type_traits>
#define T�R_INDEKS� <typeindex>
#define T�R_B�LG�S� <typeinfo>
#define D�ZENS�Z_HAR�TA <unordered_map>
#define D�ZENS�Z_K�ME <unordered_set>
#define YARDIMCI <utility>
#define DE�ER_D�Z�S� <valarray>
#define DE���KEN <variant>
#define VEKT�R <vector>

#include ALGOR�TMA
#include D�Z�
#include ATOM�K
#include BAR�YER
#include B�T
#include ZAMAN
#include KODLAMA_D�N��T�RME
#include KARMA�IK
#include KAVRAMLAR
#include KO�UL_DE���KEN�
#include ASENKRON
#include CSETJMP
#include CS�NYAL
#include CSTANDART_ARG�MANLAR
#include CMANTIK
#include CBOYUT
#include CT�P
#include CSTD�O
#include CSTDK�T
#include CYAZI
#include CZAMAN
#include ��FT_KUYRUK
#include �ST�SNA
#include DOSYA_S�STEM�
#include B���MLEND�RME
#include �LER�_L�STE
#include DOSYA_AKI�I
#include FONKS�YONEL
#include GELECEK
#include BA�LATICI_L�STES�
#include B���M
#include G�R��_�IKI�
#include G�R��_�IKI�_Y�NLEND�RME
#include G�R��_AKI�I
#include G�R��_AKI�I_T�R�
#include Y�NELEY�C�
#include SINIRLAR
#include L�STE
#include YEREL
#include HAR�TA
#include BELLEK
#include K�L�T
#include YEN�
#include SAYISAL
#include �STE�E_BA�LI
#include �IKI�_AKI�I
#include KUYRUK
#include RASTGELE
#include ARALIKLAR
#include D�ZENL�_�FADE
#include SINIRLANDIRILMI�_AYARLAYICI
#include K�ME
#include PAYLA�ILAN_K�L�T
#include ARALIK
#include D�Z�_AKI�I
#include YI�IN
#include STANDART_HATA
#include DURDURMA_JETONU
#include AKI�_ARABELLEK
#include MET�N
#include MET�N_G�R�N�M�
#include S�STEM_HATASI
#include ��_PAR�ACI�I
#include DEMET
#include T�R_�ZELL�KLER�
#include T�R_INDEKS�
#include T�R_B�LG�S�
#include D�ZENS�Z_HAR�TA
#include D�ZENS�Z_K�ME
#include YARDIMCI
#include DE�ER_D�Z�S�
#include DE���KEN
#include VEKT�R
#include <fcntl.h>
#include <io.h>

// --- Temel T�rk�ele�tirmeler ---
#define yaz std::cout<<
#define al std::cin >>
#define tamsay� int
#define harf char
#define mant�ksal bool
#define metin std::string
#define ondal�kl� float
#define kesirli double
#define dizi std::array
#define sabit const
#define fonksiyon function
#define s�n�f class
#define yap� struct
#define se�im switch
#define durum case
#define varsay�lan default

#define e�er if
#define de�ilse_e�er else if
#define de�ilse else

#define oto auto

#define genel public
#define �zel private
#define k�s�tl� protected

#define d�ng� for
#define iken while
#define uygula do
#define ��k break
#define atla continue

#define e�it ==
#define farkl� !=
#define ve &&
#define veya ||
#define de�il !

#define d�n�� return
#define olu�tur new
#define sil delete

#define sabit const
#define boyut sizeof

#define do�ru true
#define yanl�� false
#define bo� nullptr
#define d�n��s�z void

#define f�rlat throw
#define yakala catch
#define dene try

#define kapsam namespace
#define harici extern
#define i� inline

#define t�r_ad� typedef
#define t�r_tipi typename
#define t�r_bilgisi typeid

#define sabit_�nce_�al��t�r constexpr
#define zorunlu_�nce_�al��t�r consteval
#define de�i�ken_�nce_�al��t�r constinit

#define kal�p template
#define kullan�m using

#define arkada� friend
#define sanal virtual

#define yeniden_yorumla reinterpret_cast
#define g�venli_d�n���m const_cast
#define dinamik_d�n��t�r dynamic_cast
#define sabit_de�i�tir static_cast

#define mod�l module
#define getir import

// --- Yaz�m Kolayla�t�rmalar� ---
#define std_sil using namespace std
#define ana int main()
#define bo�_b�rak std::cout<<std::endl;
#ifdef _WIN32
#define konsol_bekle system("pause");
#define konsol_temizle system("cls");
#else
#define konsol_bekle system("read -p \"Devam etmek i�in bir tu�a bas�n...\" -n 1 -s");
#define konsol_temizle system("clear");
#endif


// --- <cstring> K�t�phanesi ---
#define cuzunluk strlen             // karakter_dizisi_uzunlu�u
#define cmetin_kopyala strcpy             // dizi_kopyala
#define ckopyala_s�n�r strncpy      // s�n�r_kadar_kopyala
#define cmetin_birle�tir strcat           // dizi_birle�tir
#define cbirle�tir_s�n�r strncat    // s�n�r_kadar_birle�tir
#define ckar��la�t�r strcmp         // dizi_kar��la�t�r
#define ckar��la�t�r_s�n�r strncmp  // s�n�r_kadar_kar��la�t�r
#define cbellek_ayarla memset       // bellek_doldur
#define cbellek_kopyala memcpy      // bellek_kopyala
#define cbellek_kayd�r memmove      // bellek_kayd�r
#define ckarakter_ara strchr        // dizi_karakter_ara
#define csondan_karakter_ara strrchr // sondan_karakter_ara
#define calt_dizi_ara strstr        // dizi_icerisinde_dizi_ara
#define cbellek_karakter_ara memchr // bellek_icerisinde_karakter_ara
#define bellek_kar��la�t�r memcmp  // bellek_kar��la�t�r

// --- <algorithm> K�t�phanesi Makrolar� ---
#define d�ng�_for_each            for_each
#define bul                       find
#define bul_if                    find_if
#define bul_if_de�il              find_if_not
#define say                       count
#define say_if                    count_if
#define e�le�tir                  mismatch
#define e�it_mi                   equal
#define t�m�_mi                   all_of
#define herhangi_biri_mi          any_of
#define hi�biri_mi                none_of
#define kopyala                   copy
#define kopyala_n                 copy_n
#define kopyala_if                copy_if
#define ta��                      move
#define ters_ta��                 move_backward
#define de�i�_toku�               swap
#define aral�k_de�i�_toku�        swap_ranges
#define doldur                    fill
#define doldur_n                  fill_n
#define d�n��t�r                  transform
#define �ret                      generate
#define �ret_n                    generate_n

#define kald�r                    remove
#define kald�r_if                 remove_if
#define kald�r_kopyala            remove_copy
#define kald�r_kopyala_if         remove_copy_if
#define de�i�tir                  replace
#define de�i�tir_if               replace_if
#define de�i�tir_kopyala          replace_copy
#define de�i�tir_kopyala_if       replace_copy_if

#define tersten_s�rala            reverse
#define tersten_kopyala           reverse_copy
#define d�nd�r_rotate             rotate
#define d�nd�r_kopyala            rotate_copy
#define rastgele_kar��t�r         shuffle
#define ay�kla                    unique
#define ay�kla_kopyala            unique_copy
#define yerle�tir                 partition
#define yerle�tir_kopyala         partition_copy
#define yerle�tir_dura�an         stable_partition

#define s�rala                    sort
#define dura�an_s�rala            stable_sort
#define k�smi_s�rala              partial_sort
#define k�smi_s�rala_kopyala      partial_sort_copy
#define s�ral�_m�                 is_sorted
#define nereye_kadar_s�ral�       is_sorted_until
#define nci_eleman                nth_element

#define alt_s�n�r                 lower_bound
#define �st_s�n�r                 upper_bound
#define e�le�tir_aral���          equal_range
#define ikili_arama               binary_search
#define birle�tir                 merge
#define yerinde_birle�tir         inplace_merge
#define i�erir_mi                 includes
#define k�me_birle�imi            set_union
#define k�me_kesi�imi             set_intersection
#define k�me_fark�                set_difference
#define simetrik_fark             set_symmetric_difference

#define �ncelik_y���n�_yap        make_heap
#define �ncelik_y���n�na_ekle     push_heap
#define �ncelik_y���n�ndan_��kar  pop_heap
#define �ncelik_y���n�n�_s�rala   sort_heap
#define �ncelik_y���n�_m�         is_heap
#define �ncelik_y���n�_nereye_kadar  is_heap_until

#define yer_de�i�tir_iter         next_permutation
#define �nceki_perm               prev_permutation

#define alt_dizi_subrange         search
#define ard���k_arama             search_n
#define d�ng�_find_end            find_end
#define ilk_e�le�en               find_first_of
#define tekrar_bul                adjacent_find

// --- <numeric> K�t�phanesi ---
#define istatistik_accumulate     accumulate
#define i�_�arp�m                 inner_product
#define kademeli_toplam           partial_sum
#define ard���k_fark              adjacent_difference

// --- <iterator> K�t�phanesi ---
#define i_ileri_aktar               advance
#define mesafe                    distance
#define sonraki_iter              next
#define �nceki_iter               prev
#define d�ng�_ilerleyici          back_inserter
#define �ne_ekleyici              front_inserter
#define yerle�tirici              inserter

// --- <memory> K�t�phanesi ---
#define benzersiz_ptr             std::unique_ptr
#define payla��lan_ptr            std::shared_ptr
#define zay�f_ptr                 std::weak_ptr
#define yeni                    std::make_unique
#define payla��lan_yeni           std::make_shared
#define benzersiz_g�sterici          std::unique_ptr
#define payla��lan_g�sterici         std::shared_ptr
#define zay�f_g�sterici              std::weak_ptr
#define g�sterici_olu�tur            std::make_unique
#define payla��lan_g�sterici_olu�tur std::make_shared

// --- <thread> K�t�phanesi ---
#define i�_par�ac���              std::thread
#define kilit_gardiyan�              std::lock_guard
#define benzersiz_kilit           std::unique_lock
#define ko�ul_de�i�keni           std::condition_variable
#define uyut                     std::this_thread::sleep_for
#define getir_anahtar            std::this_thread::get_id
#define ba�lat_par�ac�k           std::thread::join
#define ay�r_par�ac�k             std::thread::detach

// --- <cmath> K�t�phanesi ---

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

#define sin�s std::sin
#define kosin�s std::cos
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




// --- <string> K�t�phanesi ---
#define metin_uzunluk            std::string::size_type
#define metin_boyutu             std::string::size_type
#define metin_olu�tur            std::string
#define metin_ekle               append
#define metin_ara                find
#define metin_ara_son            rfind
#define metin_b�l                substr
#define metin_de�i�tir           replace
#define metin_karakter           at
#define metin_c_str              c_str
#define metin_bo�_mu             empty
#define metin_temizle            clear
#define metin_ekle_�n            insert
#define metin_sil                erase
#define metin_kopyala            copy

// --- <vector> K�t�phanesi ---
#define vekt�r_olu�tur          std::vector
#define vekt�r_boyutu           size
#define vekt�r_bos_mu           empty
#define vekt�r_ekle             push_back
#define vekt�r_son_element       back
#define vekt�r_ilk_element       front
#define vekt�r_sil_son           pop_back
#define vekt�r_temizle          clear
#define vekt�r_eri�im           at
#define ba�lang�� begin
#define biti� end

// --- <map> K�t�phanesi ---
#define harita_olu�tur          std::map
#define harita_ekle             insert
#define harita_bul              find
#define harita_sil              erase
#define harita_boyutu           size
#define harita_bos_mu           empty
#define harita_temizle          clear

// --- <set> K�t�phanesi ---
#define k�me_olu�tur            std::set
#define k�me_ekle               insert
#define k�me_bul                find
#define k�me_sil                erase
#define k�me_boyutu             size
#define k�me_bos_mu             empty
#define k�me_temizle            clear

// --- <queue> K�t�phanesi ---
#define kuyruk_olu�tur          std::queue
#define kuyruk_ekle             push
#define kuyruk_��kar            pop
#define kuyruk_�n_element       front
#define kuyruk_son_element      back
#define kuyruk_bos_mu           empty
#define kuyruk_boyutu           size

// --- <stack> K�t�phanesi ---
#define y���n_olu�tur           std::stack
#define y���n_ekle              push
#define y���n_��kar             pop
#define y���n_�st_element       top
#define y���n_bos_mu            empty
#define y���n_boyutu            size

// --- <regex> K�t�phanesi ---
#define d�zenli_ifade_olu�tur   std::regex
#define e�le�tir_d�zenli_ifade std::regex_match
#define arama_d�zenli_ifade     std::regex_search
#define de�i�tir_d�zenli_ifade  std::regex_replace


// --- <chrono> K�t�phanesi ---
#define zaman_s�re              std::chrono::duration
#define zaman_an�               std::chrono::time_point
#define �u_an                  std::chrono::system_clock::now
#define uyku                    std::this_thread::sleep_for
#define saniye               std::chrono::seconds
#define milisaniye           std::chrono::milliseconds
#define mikrosaniye          std::chrono::microseconds
#define nanosaniye           std::chrono::nanoseconds
#define zaman_saati          std::chrono::system_clock
#define steady_saati         std::chrono::steady_clock
#define y�ksek_��z�n�rl�k_saati std::chrono::high_resolution_clock
// --- <random> K�t�phanesi ---
#define rastgele_motor          std::mt19937
#define rastgele_�retici        std::uniform_int_distribution
#define rastgele_�retici_float  std::uniform_real_distribution
#define rastgele_�retilen_say�  operator()

// --- <functional> K�t�phanesi ---
#define fonksiyonel_olu�tur     std::function
#define ba�la                   std::bind
#define fonksiyon_kavram�       std::function

// --- <optional> K�t�phanesi ---
#define iste�e_ba�l�_olu�tur    std::optional
#define de�er_var_m�            has_value
#define de�er_al                value
#define de�er_alveya            value_or
#define iste�e_ba�l�_bo�alt     reset
#define iste�e_ba�l�_de�er_var m�   has_value
#define iste�e_ba�l�_de�er_al       value
#define iste�e_ba�l�_de�er_al_veya  value_or
#define iste�e_ba�l�_s�f�rla        reset

// --- <variant> K�t�phanesi ---
#define de�i�ken_olu�tur        std::variant
#define de�er_al_�zg�           std::get
#define de�er_al_t�r�           std::get_if
#define ziyaret�i_�a��r         std::visit


// --- <mutex> K�t�phanesi ---
#define kilit_olu�tur           std::mutex
#define kilitle                 lock
#define kilit_kald�r            unlock


// --- <filesystem> K�t�phanesi ---
#define dosya_yolu               std::filesystem::path
#define dosya_var_m�             std::filesystem::exists
#define dosya_olu�tur           std::filesystem::create_directory
#define dosya_sil                std::filesystem::remove
#define dosya_sil_her�ey         std::filesystem::remove_all
#define dosya_t�r�               std::filesystem::file_type
#define dosya_boyutu             std::filesystem::file_size
#define dosya_tarih              std::filesystem::last_write_time
#define dizin_oku               std::filesystem::directory_iterator
#define dizin_oku_rec           std::filesystem::recursive_directory_iterator

// --- <exception> K�t�phanesi ---
#define hata_olu�tur             std::exception
#define hata_mesaj�_al           what
#define hata_at                  throw

// --- <type_traits> K�t�phanesi ---
#define t�r_bilgisi_�zelli�i     std::is_same
#define t�r_t�retimi             std::remove_const
#define t�r_sorgula             std::is_integral
#define t�r_d�n��t�r             std::decay

// --- <utility> K�t�phanesi ---
#define de�i�ken_takas          std::swap
#define hareket_ettir           std::move
#define ileri_aktar             std::forward
#define �ift                    std::pair
#define �ift_olustur            std::make_pair
#define ba�la                   std::bind
#define yard�mc�_kapsam         std::scope_exit


// --- <locale> K�t�phanesi ---
#define yerel_ayarla            std::locale
#define yerel_ismi              std::locale::name
#define yerel_ara              std::use_facet

// --- <sstream> K�t�phanesi ---
#define dizi_ak��_olu�tur       std::stringstream
#define dizi_ak��_oku           std::istringstream
#define dizi_ak��_yaz           std::ostringstream

// --- <iomanip> K�t�phanesi ---
#define bi�imlendirme_ayarla    std::setprecision
#define bi�imlendirme_doldur    std::setfill
#define bi�imlendirme_alan      std::setw
#define bi�imlendirme_sabit     std::fixed

// --- <future> K�t�phanesi ---
#define gelecek_de�er_olu�tur   std::future
#define gelecek_elde_et         get
#define gelecek_bekle           wait
#define s�zle�me_elde_et        std::promise

// --- <any> K�t�phanesi ---
#define her_t�rden              std::any
#define her_t�rden_var_m�       has_value
#define her_t�rden_elde_et      std::any_cast

// --- <scoped_allocator> K�t�phanesi ---
#define s�n�rland�r�lm��_ayarlay�c�_olu�tur std::scoped_allocator_adaptor

// --- <stop_token> K�t�phanesi ---
#define durdurma_jetonu_olu�tur std::stop_token
#define jetonu_durdur  std::stop_source
#define durdurma_jetonu_bekle   std::stop_callback


// --- <list> K�t�phanesi ---
#define liste_olu�tur           std::list
#define liste_ekle_son          push_back
#define liste_ekle_ilk          push_front
#define liste_son_eleman        back
#define liste_ilk_eleman        front
#define liste_sil_son           pop_back
#define liste_sil_ilk           pop_front
#define liste_boyutu            size
#define liste_bos_mu            empty
#define liste_temizle           clear
#define liste_eri�im            at
#define liste_sil               remove
#define liste_bul               find

// --- <forward_list> K�t�phanesi ---
#define ileri_liste_olu�tur     std::forward_list
#define ileri_liste_ekle_ilk    push_front
#define ileri_liste_sil_ilk     pop_front
#define ileri_liste_bos_mu      empty
#define ileri_liste_temizle     clear
#define ileri_liste_ekle_son    insert_after
#define ileri_liste_bul         find

// --- <deque> K�t�phanesi ---
#define �ift_kuyruk_olu�tur     std::deque
#define �ift_kuyruk_ekle_son    push_back
#define �ift_kuyruk_ekle_ilk    push_front
#define �ift_kuyruk_sil_son     pop_back
#define �ift_kuyruk_sil_ilk     pop_front
#define �ift_kuyruk_boyutu      size
#define �ift_kuyruk_bos_mu      empty
#define �ift_kuyruk_temizle     clear
#define �ift_kuyruk_eri�im      at


// --- <unordered_map> K�t�phanesi ---
#define d�zensiz_harita_olu�tur  std::unordered_map
#define d�zensiz_harita_ekle     insert
#define d�zensiz_harita_sil      erase
#define d�zensiz_harita_bul      find
#define d�zensiz_harita_boyutu   size
#define d�zensiz_harita_bos_mu   empty
#define d�zensiz_harita_temizle  clear


// --- <unordered_set> K�t�phanesi ---
#define d�zensiz_k�me_olu�tur    std::unordered_set
#define d�zensiz_k�me_ekle       insert
#define d�zensiz_k�me_sil        erase
#define d�zensiz_k�me_bul        find
#define d�zensiz_k�me_boyutu     size
#define d�zensiz_k�me_bos_mu     empty
#define d�zensiz_k�me_temizle    clear

// --- <fstream> K�t�phanesi ---
#define dosya_ak���_olu�tur        std::fstream
#define dosya_girdi_ak���_olu�tur  std::ifstream
#define dosya_��kt�_ak���_olu�tur  std::ofstream
#define dosya_a�                   open
#define dosya_kapat                close
#define dosya_oku                  read
#define dosya_yaz                  write
#define dosya_ba�lang��            seekg
#define dosya_biti�                seekp
#define dosya_�imdiki              tellg
#define dosya_�imdiki_yaz          tellp
#define dosya_ba�ar�l�             good
#define dosya_ba�ar�s�z            fail
#define dosya_durum_sonu           eof

// --- <sstream> K�t�phanesi ---
#define dizi_ak���_olu�tur          std::stringstream
#define dizi_ak���_girdi_olu�tur    std::istringstream
#define dizi_ak���_��kt�_olu�tur    std::ostringstream
#define dizi_ak���_al               str
#define dizi_ak���_ayarla           str

// --- <iomanip> K�t�phanesi ---
#define bi�imlendirme_alan_ayarla   std::setw
#define bi�imlendirme_doldur        std::setfill
#define bi�imlendirme_hassasiyet    std::setprecision
#define bi�imlendirme_sabit         std::fixed
#define bi�imlendirme_bilimsel      std::scientific


// --- <valarray> K�t�phanesi ---
#define de�er_dizisi_olu�tur        std::valarray
#define de�er_dizisi_toplam�        sum
#define de�er_dizisi_ortalamas�     mean
#define de�er_dizisi_ayr�k          slice
#define de�er_dizisi_boyutu         size


// --- <functional> K�t�phanesi ---
#define i�lev_olu�tur             std::function
#define ba�la                     std::bind
#define ba�la_�nceden             std::placeholders::_1
#define ba�la_ikinci              std::placeholders::_2
#define ba�la_���nc�              std::placeholders::_3

// --- <type_traits> K�t�phanesi ---
#define t�r_bilgisi_olu�tur       std::is_same
#define t�r_bilgisi_t�ret         std::remove_const
#define t�r_bilgisi_d�n��t�r      std::conditional
#define t�r_bilgisi_kar��la�t�r   std::is_base_of
#define t�r_bilgisi_sinirli       std::enable_if


// --- <optional> K�t�phanesi ---
#define iste�e_ba�l�_olu�tur        std::optional
#define iste�e_ba�l�_var_m�         has_value
#define iste�e_ba�l�_de�er_al       value
#define iste�e_ba�l�_de�er_veya     value_or

// --- <scoped_allocator> K�t�phanesi ---
#define s�n�rland�r�lm��_ayarlay�c�_olu�tur std::scoped_allocator_adaptor

// --- <span> K�t�phanesi ---
#define aral�k_olu�tur              std::span
#define aral�k_boyutu              size
#define aral�k_eri�im              operator[]

// --- <system_error> K�t�phanesi ---
#define sistem_hatas�_olu�tur       std::error_code
#define sistem_hatas�_mesaj�_al     message
#define sistem_hatas�_kod_al        value
#define sistem_hatas�_tan�mla       make_error_code

// --- <stop_token> K�t�phanesi ---
#define durdurma_jetonu_olu�tur    std::stop_token
#define durdurma_jetonu_iste�i     request_stop
#define durdurma_jetonu_kontrol    stop_requested

// --- <chrono> K�t�phanesi ---
#define zaman_s�re_olu�tur           std::chrono::duration
#define zaman_s�re_toplam            count
#define zaman_s�re_ekle             operator+
#define zaman_s�re_fark�            operator-
#define zaman_saat_olu�tur          std::chrono::hours
#define zaman_dakika_olu�tur        std::chrono::minutes
#define zaman_saniye_olu�tur        std::chrono::seconds
#define zaman_milisaniye_olu�tur    std::chrono::milliseconds
#define zaman_mikrosaniye_olu�tur   std::chrono::microseconds
#define zaman_nanosaniye_olu�tur    std::chrono::nanoseconds
#define zaman_s�re_sonu             std::chrono::steady_clock::time_point
#define zaman_�imdi_al              std::chrono::steady_clock::now

// --- <complex> K�t�phanesi ---
#define karma��k_say�_olu�tur        std::complex
#define karma��k_reel_al            real
#define karma��k_imajiner_al        imag
#define karma��k_mutlak_de�er       std::abs
#define karma��k_ger�ekle�tir       std::real
#define karma��k_imalet             std::imag
#define karma��k_polar_olu�tur      std::polar
#define karma��k_konjugat           std::conj
#define karma��k_arg�man            std::arg
#define karma��k_faz                std::arg
#define karma��k_norm               std::norm

// --- <bit> K�t�phanesi ---
#define bit_set                    std::bitset
#define bit_test                   test
#define bit_set_bit                set
#define bit_reset_bit              reset
#define bit_flip_bit               flip
#define bit_count                  count
#define bit_to_string              to_string

// --- <concepts> K�t�phanesi ---
#define kavram_tan�mla             std::concept
#define kavram_kontrol             requires
#define kavram_kapsam              concept

// --- <coroutine> K�t�phanesi ---
#define asenkron_olu�tur            std::coroutine_handle
#define asenkron_durdur             suspend
#define asenkron_devam_et           resume
#define asenkron_ba�lat             start

// --- <filesystem> K�t�phanesi (Detayl�) ---
#define dosya_sistemi_yolu             std::filesystem::path
#define dosya_sistemi_var_m�           exists
#define dosya_sistemi_dizin_olu�tur    create_directory
#define dosya_sistemi_dizin_sil        remove
#define dosya_sistemi_dosya_�zellikleri status
#define dosya_sistemi_dosya_boyutu     file_size
#define dosya_sistemi_dosya_tarihi     last_write_time
#define dosya_sistemi_dizin_tarih      last_write_time
#define dosya_sistemi_dizin_oku        is_directory
#define dosya_sistemi_dosya_oku        is_regular_file

// --- <locale> K�t�phanesi ---
#define yerel_ayarla                std::locale
#define yerel_getir                std::use_facet
#define yerel_set_�eviri           std::codecvt

// --- <mutex> K�t�phanesi ---
#define kilit_olu�tur              std::mutex
#define kilit_gardiyan�                 std::lock_guard
#define benzersiz_kilit_koru       std::unique_lock
#define payla��m_kilidi            std::shared_mutex
#define kilit_kilitlenme_kontrol   try_lock
#define kilit_b�rak               unlock

// --- <condition_variable> K�t�phanesi ---
#define ko�ul_de�i�keni_olu�tur   std::condition_variable
#define ko�ul_bekle               wait
#define ko�ul_bekle_kontrol       wait_for
#define ko�ul_bildiri             notify_one
#define ko�ul_bildir              notify_all

// --- <exception> K�t�phanesi ---
#define istisna_olu�tur            std::exception
#define istisna_veya               std::runtime_error
#define istisna_tut               std::exception_ptr
#define f�rlat_istisna            throw
#define yakala_istisna            catch
#define dene_blok                try

// --- <typeindex> K�t�phanesi ---
#define t�r_indeksi_olu�tur        std::type_index
#define t�r_indeksi_kar��la�t�rma  operator==

// --- <typeinfo> K�t�phanesi ---
#define t�r_bilgisi_al             typeid
#define t�r_bilgisi_ismi           name


// --- Konsol Yerelle�tirmesi ---

#ifdef _WIN32
#include <windows.h>
#endif

void ortami_yerellestir() {
	// C ve C++ yerel ayarlar�n� varsay�lan sisteme ayarla
	std::setlocale(LC_ALL, "");
	std::locale::global(std::locale(""));

	// Giri�/��k�� senkronizasyonunu kapat (performans i�in)
	std::ios_base::sync_with_stdio(false);

#ifdef _WIN32
	// Windows konsolunda UTF-8 ��kt� ve giri�i etkinle�tir
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	// Konsolda ANSI kodlar�n� (VT100) destekle
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

// --- Demo ��in Fonksiyonlar ---
void demo_asal_say�lar() {
	tamsay� say� = 2;

	d�ng�(; say� <= 50; say�++) {
		tamsay� b�len = 2;
		mant�ksal asal_m� = do�ru;
		iken(b�len < say�) {
			e�er(say� % b�len == 0) {
				asal_m� = yanl��;
				��k;
			}
			b�len++;
		}
		e�er(asal_m�)
			yaz say� << " ";
	}
	bo�_b�rak
		std::cout << "\nDevam etmek i�in bir tu�a bas�n...";
	std::cin.get();
}
int demo_fakt�riyel(int n) {
	e�er(n == 0) n = 1;
	d�n�� n* demo_fakt�riyel(n - 1);
	std::cout << "\nDevam etmek i�in bir tu�a bas�n...";
	std::cin.get();
	return n;
}
void demo_yas_kontrol(int ya�) {
	e�er(ya� < 18)
		yaz "18 ya��ndan k���k\n";
	de�ilse_e�er(ya� == 18)
		yaz "Tam 18 ya��nda\n";
	de�ilse
		yaz "18 ya��ndan b�y�k\n";
	std::cout << "\nDevam etmek i�in bir tu�a bas�n...";
	std::cin.get();
}
void demo_d�ng�ler() {
	yaz "1'den 5'e kadar for d�ng�s�:\n";
	d�ng�(tamsay� i = 1; i <= 5; i++)
		yaz i << " ";
	bo�_b�rak

		yaz "1'den 5'e kadar while d�ng�s�:\n";
	tamsay� j = 1;
	iken(j <= 5) {
		yaz j << " ";
		j++;
	}
	bo�_b�rak
		std::cout << "\nDevam etmek i�in bir tu�a bas�n...";
	std::cin.get();
}
void demo_vekt�r() {
	vekt�r_olu�tur<tamsay�> say�lar = { 1, 2, 3, 4, 5 };
	yaz "Vekt�r elemanlar�:\n";
	d�ng�_for_each(say�lar.ba�lang��(), say�lar.biti�(), [](tamsay� x) {
		yaz x << " ";
		});
	bo�_b�rak
		std::cout << "\nDevam etmek i�in bir tu�a bas�n...";
	std::cin.get();
}
void demo_pisagor(tamsay� a, tamsay� b, tamsay� c) {
	yaz "1. Kenar" << a << "\n" <<
		"2. Kenar" << b << "\n" <<
		"3. Kenar" << c << "\n";
	e�er(a * a + b * b == c * c)
		yaz "Pisagor ��geni\n";
	de�ilse
		yaz "Pisagor ��geni de�il\n";
	std::cout << "\nDevam etmek i�in bir tu�a bas�n...";
	std::cin.get();
}

// Yukar�daki fonksiyonlar C++ T�rk�e Yamas� ile yaz�ld�.
// Her biri temel kavramlar� T�rk�e kar��l�klarla g�sterir.


// Geli�tirmek istedi�iniz T�rk�ele�tirme varsa de�i�tirebilirsiniz fakat eskiden ne oldu�unu yazarsan�z k�yaslamas� daha kolay olur.