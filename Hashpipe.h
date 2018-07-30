#ifndef C_HASH_TRANSFER_HASHPIPE_H
#define C_HASH_TRANSFER_HASHPIPE_H

#include <vector>
#include <array>
#include <string>
#include <iostream>
#include <openssl/sha.h>

using namespace std;

class Hashpipe
{
private:
    //INSTANCE_VARIABLES
    std::vector<unsigned char> data;
    unsigned char hash[SHA512_DIGEST_LENGTH];

    //GET&SET
    void setData(std::string);
    void setHash();

    //UTILS
    std::vector<unsigned char> toCArray(std::string);
    std::vector<unsigned char> toCArray(unsigned char*);
    std::vector<unsigned char> enc(unsigned char*, unsigned char*);
    std::vector<unsigned char> decrypt();
public:
    //CONSTRUCTORS
    Hashpipe();
    Hashpipe(std::string);

    //GET&SET
    std::vector<unsigned char> getData();
    unsigned char * getHash(unsigned char*);

    //UTILS
    unsigned char* getHash();
    void messageDump();
    void testEnc(unsigned char*, unsigned char*);
};

#endif //C_HASH_TRANSFER_HASHPIPE_H
