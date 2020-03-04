# Lecture Notes

## 2019/09/03 Lecture 01

## [2019/09/05 Lecture 02](online_cpp_02_2019_09_05.md)

- Initiliazation

## [2019/09/10 Lecture 03](online_cpp_03_2019_09_10.md)

- Initiliazation
- reference semantics

## [2019/09/12 Lecture 04](online_cpp_04_2019_09_12.md)

- const expression
- constexpr function
- type deduction
- auto
- decltype

## 2019/09/17 Lecture 05

- default argument
- function overloading

## 2019/09/19 Lecture 06

- function overload resolution
  - 1a- exact match
  - 1b- promotion
  - 1c- conversion
- function delete
- enum ve enum class

## 2019/09/24 Lecture 07

- extern "C" bildirimi
- Tur donusum operatorleri
- Classes

## 2019/09/26 Canceled

- Deprem nedeniyle iptal edildi.

## 2019/10/01 Lecture 08

- Class member functions static, non static, const, non const
- Function Overloading in classes
- This pointer

- class scope kavramı
- sınıflar ve isim arama (name lookup)
- erişim kontrolü (access control) ve veri gizleme (data hiding)
- public öğeler
- private öğeler
- protected öğeler
- sınıfların öğeleri (class members)
- sınıfların veri öğeleri (data members)
- non-static veri öğeleri
- mutable veri öğeleri
- static veri öğeleri
- sınıfların üye işlevleri
- non-static üye işlevler
- const üye işlevler
- static üye işlevler

## 2019/10/03 Lecture 09

- sınıfların kurucu işlevleri (constructors)
- kurucu işlev ilk değer verme listesi (constructor initializer list)
- delege eden kurucu işlevler (delegating constructors)
- sınıfların sonlandırıcı işlevleri (destructors)

## 2019/10/08 Lecture 10

## 2019/10/08 Lecture 11

## 2019/10/08 Lecture 12

## 2019/10/08 Lecture 13

## 2019/10/08 Lecture 14

## 2019/10/08 Lecture 15

## [2019/10/08 Lecture 16](online_cpp_16_2019_10_29.md)

## 2019/10/08 Lecture 17

## [2019/10/08 Lecture 18](online_cpp_18_2019_11_05.md)

## [2019/10/08 Lecture 19](online_cpp_19_2019_11_07.md)

## [2019/10/08 Lecture 20](online_cpp_20_2019_11_12.md)

## [2019/10/08 Lecture 21](online_cpp_21_2019_11_14.md)

## [2019/10/08 Lecture 22](online_cpp_22_2019_11_19.md)

## [2019/10/08 Lecture 23](online_cpp_23_2019_11_21.md)

## [2019/10/08 Lecture 24](online_cpp_24_2019_11_26.md)

## [2019/10/08 Lecture 25](online_cpp_25_2019_11_28.md)

## [2019/10/08 Lecture 26](online_cpp_26_2019_12_03.md)

## [2019/10/08 Lecture 27](online_cpp_27_2019_12_05.md)

## [2019/10/08 Lecture 28](online_cpp_28_2019_12_10.md)

## [2019/10/08 Lecture 29](online_cpp_29_2019_12_12.md)

## [2019/10/08 Lecture 30](online_cpp_30_2019_12_17.md)

## [2019/10/08 Lecture 31](online_cpp_31_2019_12_19.md)

## 2019/10/08 Lecture 32

## 2019/10/08 Lecture 33

## 2019/10/08 Lecture 34

## [2020/01/07 Lecture 35](online_cpp_35_2020_01_07.md)

- Lambda Expresssion
- STL Algos
- algoritmaların lambda ifadelerini kullanması
- lambda ifadeleri
- kapanış türleri ve kapanış nesneleri (closure types and closure objects)
- lambda ifadeleri ve tür çıkarımı (lambda expressions and type deduction)
- lambda yakalama ifadeleri (lambda captures)
- lambda init capture
- capture this
- capture *this
- mutable lambdalar
- trailing return type
- genelleştirilmiş lambda ifadeleri (generalized lambda expressions)
- algoritmalarda lambda ifadelerinin kullanımı

## [2020/01/09 Lecture 36](online_cpp_36_2020_01_09.md)

- Container lar uzerinde bazi silme algoritmalarinin kullanimi
- Lambda expressions ile ilgili bazi yeni ozellikler C++17 ile gelen
- Container lara giris
- Kaplar(Containers)
- STL kapları ve veri yapıları (STL containers & data structures)

## [2020/01/14 Lecture 37](online_cpp_37_2020_01_14.md)

- Vector

## [2020/01/16 Lecture 38](online_cpp_38_2020_01_16.md)

- Vector
  - emplace funcs
  - erase funcs
  - iterator invalidation
- deque
  - comparison with vector
  - differences in interfaces with vector
  - iterator invalidation

## [2020/01/21 Lecture 39](online_cpp_39_2020_01_21.md)

## [2020/01/23 Lecture 40](online_cpp_40_2020_01_23.md)

- list
- forward_list
- Associative containers
  - set
  - multiset

## [2020/01/28 Lecture 41](online_cpp_41_2020_01_28.md)

- Associative containers
  - map
  - multimap

## [2020/01/30 Lecture 42](online_cpp_42_2020_01_30.md)

## [2020/02/04 Lecture 43](online_cpp_43_2020_02_04.md)

## [2020/02/06 Lecture 44](online_cpp_44_2020_02_06.md)

## [2020/02/11 Lecture 45](online_cpp_45_2020_02_11.md)

### Dinamik Ömürlü Nesneler `(Dynamic Objects)`

- new ve delete ifadeleri `(new & delete expressions)`
- new[] ve delete[] ifadeleri
- operator new işlevleri
- operator delete işlevleri
- operator new ve operator delete işlevlerinin yüklenmesi
- std::bad_alloc
- std::set_new_handler ve std::get_new_handler
- placement new operatörleri
- nothrow new

### Standard Smart Pointer Classes - Intro

- unique_ptr sınıfı

## [2020/02/13 Lecture 46](online_cpp_46_2020_02_13.md)

### Standard Smart Pointer Classes

- unique_ptr sınıfı
- std::make_unique işlev şablonu
- std::default_delete ve custom deleters
- tipik hatalar
- shared_ptr sınıfı
- referans sayımı `(reference counting)`
- std::make_shared
- weak_ptr sınıfı

## [2020/02/18 Lecture 47](online_cpp_47_2020_02_18.md)

### Standard Smart Pointer Classes cont

- shared_ptr sınıfı
- referans sayımı `(reference counting)`
- std::make_shared
- weak_ptr sınıfı

- CRTP curiosly recurring template pattern
- enable_shared_from_this

### Private ve Protected inheritance

- Private inheritance
- Empty Base Optimization EBO

## [2020/02/20 Lecture 48](online_cpp_48_2020_02_20.md)

- Private, protected inheritance
- user defined literals
- üye fonksiyon göstericileri `(member function pointers)`

## [2020/02/25 Lecture 49](online_cpp_49_2020_02_25.md)

- Standart Giriş Çıkış Kütüphanesi `(iostream Library)`
  - giriş çıkış akımlarına ilişkin standart sınıflar `(standard stream classes)`
  - global akım nesneleri
  - formatlı giriş çıkış işlemleri `(formatted input output)`
  - << ve >> operatörlerinin yüklenmesi `(inserter & extractors)`
  - formatlama ve formatlama işlemleri `(formatting)`
  - manipülatörler `(manipulators)`
  - akımın durumu `(condition states)`
  - string akımları `(stringstreams)`

## [2020/02/27 Lecture 50](online_cpp_50_2020_02_27.md)

- Standart Giriş Çıkış Kütüphanesi `(iostream Library)`
  - dosya işlemleri `(file operations)`
  - bellek üstünde yapılan giriş çıkış işlemleri
  - exception handling

## 2020/03/03 Lecture 51 ( canceled)

## [2020/03/05 Lecture 52](online_cpp_52_2020_03_05.md)

## [2020/03/10 Lecture 53](online_cpp_53_2020_03_10.md)

## [2020/03/12 Lecture 54](online_cpp_54_2020_03_12.md)
