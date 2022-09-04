#include "transformador.h"

float celciusAFahrenheit(float grado){
    //transforma grados celcius a grados fahrenheit.
    return grado * 9/5 + 32;
}

float mphAkmpm(float milla){
    //transforma millas por hora a kilometros por minuto.
    return (milla / 60) * 1.609344;
}

float litrosAGalonesParticular(float litro){
    //transforma litros cada 100KM a millas por galon.
    int galon = (litro / 100) * 0.264172052;
    int milla = (galon / 1.609);
    return milla ; // realmente no se la formula.
}
