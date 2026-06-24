#include "DHT.h" 
// подключаем библиотеку
 
#define DHTPIN 2  
// задаем контакт подключенный 
// к сигнальному контакту датчика (S)
 
 
// задаем тип подключаемого датчика
 
#define DHTTYPE DHT11   
// DHT 11
// DHT 22  (AM2302), AM2321
// DHT 21 (AM2301)
 
// обьявляем обьект dht с параметрами
DHT dht(DHTPIN, DHTTYPE);
 
void setup() {
  Serial.begin(9600);
  dht.begin(); // запускаем датчик
}
 
void loop() {
 
  delay(2000); 
// задержка 2 сек между считываниями
 
  float h = dht.readHumidity(); 
// считываем влажность
  float t = dht.readTemperature(); 
// считываем температуру
// в градусах Цельсия

  float f = dht.readTemperature(true); 
// в Фаренгейтах
 
  // проверяем полученные значения
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Ошибка чтения датчика");
    return;
  }
 
 
  // выводим полученные данные в консоль	
  Serial.print("Влажность : ");
  Serial.println(h);
 
  Serial.print("Температура : ");
  Serial.print(t);
  Serial.print(" *C, ");
 
  Serial.print(f);
  Serial.println(" *F");
}
