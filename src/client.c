//
// Created by HarryET on 03/09/2021.
//

#include "client.h"

struct Client clientWithIntents(char* token, int intents) {
    struct Client client;
    client.token = token;
    client.intents = intents;

    return client;
};

struct Client client(char* token) {
    struct Client client;
    client.token = token;
    client.intents = 0;

    return client;
};

void startClient(struct Client* client) {
    struct http_response* response = http_get(getRequestUrl("/gateway"), "User-agent: DiscordBot (https://github.com/HarryET/CCord)\r\n");
    printf("%s", response->body);
}