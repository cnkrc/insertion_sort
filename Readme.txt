Derste anlatılan insertion sort yöntemine göre;

1)  Insertion Sort adımları

    22,27,16,2,18,6
    2,27,16,22,18,6
    2,6,16,22,18,27
    2,6,16,22,18,27
    2,6,16,18,22,27
    2,6,16,18,22,27

2)  O(n^2)

3)  Best Case: O(n)
    Average Case: O(n^2)
    Worst Case: O(n^2)

4)  7,3,5,8,2,9,4,15,6
    2,3,5,8,7,9,4,15,6
    2,3,4,8,7,9,5,15,6
    2,3,4,5,7,9,8,15,6
    2,3,4,5,6,9,8,15,7

EK: Proje içindeki .cpp uzantılı dosyada bir insertion sort programı yapmayı denedim. 
Ancak seriyi kullanıcıdan input olarak almak ve değişken boyutlu oluşturmak istediğim için array değil vector tipi tuttum.
Vectorlerde de minimum değerin hem kendisini hem yerini bulmak iki farklı işlem olduğundan ve tekrar eden datalarda sorun yaşayacağımı düşündüğümden kalan dizinin minimumunu baştaki değerle yer değiştirmek yerine solundakinden küçük olan değerleri sola doğru teker teker kaydırmayı tercih ettim.
