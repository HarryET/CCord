//
// Created by HarryET on 04/09/2021.
//
#include <stdio.h>

#include "constants.h"

char* combineStrings(char* inputA, char* inputB) {
    size_t len = 0, lenB = 0;
    while(inputA[len] != '\0') len++;
    while(inputB[lenB] != '\0') lenB++;
    char* output = malloc(len+lenB);
    sprintf((char*)output,"%s%s",inputA,inputB);
    return output;
}

char* getApiUrl(int includeVersion) {
    if(includeVersion == false)
        return BASE_URL;
    return combineStrings(BASE_URL, combineStrings("/v", API_VERSION));
}

char* getRequestUrl(char* resource) {
    return combineStrings(getApiUrl(true), resource);
}
