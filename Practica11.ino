char string1[] = "hola";
char string2[] = "holA";

int comparador( const char *s1, const char *s2 ){
    int resultado=0;
    int i = 0;
    while(resultado == 0){
        if(s1[i] == '\0'){
            break;
        }
        if(s1[i] > s2[i]){
            resultado=1;
        }
        else if(s1[i] < s2[i]){
            resultado=-1;
        }
        i++;   
    }
    return resultado;
}

void setup(){
    Serial.begin(9600);
    delay(10);
}

void loop(){
    Serial.print("String 1: ");
    Serial.println(string1);
    Serial.print("String 2: ");
    Serial.println(string2);
    Serial.print("Resultado: ");
    int res = comparador(string1,string2);
    Serial.println(res);
    delay(30000);
}