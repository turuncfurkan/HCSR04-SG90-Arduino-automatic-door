# 🚪 Arduino Otomatik Kapı / Bariyer Sistemi

Bu proje, **HC-SR04 ultrasonik sensör**, **SG90 mikro servo motor**, **kırmızı LED** ve **pasif buzzer** kullanılarak geliştirilmiş otomatik bir **kapı / bariyer kontrol sistemi** içerir. Sistem, 1 metre içinde bir cisim algıladığında kapıyı otomatik açar, LED’i yakar, buzzer ile uyarı verir ve 5 saniye sonra kapıyı kapatır.

---

## 🎯 Proje Amacı

- Yaklaşan el, araç veya herhangi bir nesneyi algılamak  
- Kapıyı / bariyeri otomatik olarak kontrol etmek  
- Giriş–çıkış sistemlerinde basit otomasyon sağlamak  
- Sensör ve servo entegrasyonunu öğretmek  

Bu proje hem hobi amaçlı hem de eğitimsel olarak **gömülü sistemler**, **Arduino programlama**, **sensör kullanımı** ve **otomasyon** konularında temel oluşturur.

---

## 🧩 Kullanılan Bileşenler

| Bileşen | Açıklama |
|--------|----------|
| **Arduino UNO** | Projenin ana kontrol kartı |
| **HC-SR04 Ultrasonik Sensör** | Mesafe ölçümü (0–400 cm) |
| **SG90 Mikro Servo Motor** | Kapının açılıp kapanmasını sağlar |
| **Kırmızı LED** | Görsel uyarı |
| **220Ω Direnç** | LED için |
| **3 bacaklı Pasif Buzzer** | Sesli uyarı |
| **Breadboard** | Devre bağlantıları için |
| **Jumper Kablolar** | Bağlantılar |

---

## 🔌 Devre Bağlantıları

### 🟦 **HC-SR04 Ultrasonik Sensör**
- VCC → 5V  
- GND → GND  
- TRIG → D8  
- ECHO → D7  

### 🟩 **SG90 Servo Motor**
- Kahverengi (GND) → GND  
- Kırmızı (VCC) → 5V  
- Turuncu (Signal) → D9  

### 🔴 **LED**
- Uzun bacak → 220Ω direnç → D6  
- Kısa bacak → GND  

### 🔊 **3 Pin Pasif Buzzer**
- S (Signal) → D5  
- + → 5V  
- – → GND  

⚠ **Önemli:**  
Tüm bileşenlerin **GND hattı ortak** olmalıdır.

---

## ⚙️ Çalışma Mantığı

1. HC-SR04 sensörü çevredeki nesnelerin uzaklığını ölçer.  
2. Mesafe **1 metre veya daha az** ise:
   - Servo motor 90° dönerek kapıyı açar  
   - LED yanar  
   - Buzzer kısa bir uyarı sesi verir  
3. Kapı **5 saniye açık kalır**  
4. Ardından servo 0° konumuna dönerek kapıyı kapatır  
5. LED ve buzzer kapanır  

---

## 💻 Arduino Kodu

Projenin tam Arduino kodu `automatic_door.ino` dosyasındadır.

## 🧑‍💻 Kazanımlar

Bu proje sayesinde:

- Ultrasonik sensör kullanımı  
- Servo motor kontrolü  
- Buzzer ve LED ile uyarı sistemleri  
- Gömülü sistem mantığı  
- Arduino ile gerçek zamanlı uygulamalar  

konularında deneyim kazanılmıştır.




