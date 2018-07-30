/*
 * NOTES:
 * - Om die compiler te oortuig om die ssl libraries in te sluit was 'n kwessie. Gaan verander in die CMakerlists om
 *   die libraries te include. As jy nie kan onthou nie het ek 'n beter verduideliking in die readme gesit.
 * - Ek gaan die goed hier rond en bond sit, net terwyl ek nou besig is om die goed uit te figure
 *   Jy moet tog as alles klaar is en jy die goed beter verstaan die goed meer op verdeel in funksies vir die hash
 *   en enkripsie en so, dat mens dit later weer kan gaan gebruik.
 */
#include <cstring>
#include "Hashpipe.h"

//CONSTRUCTORS//////////////////////////////////////////////////////////////////////////////////////////////////////////
Hashpipe::Hashpipe()
{
    Hashpipe("");
}

Hashpipe::Hashpipe(std::string _cInData)
{
    setData(_cInData);
    setHash();
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//GETS&SETS/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Hashpipe::setData(std::string _sInData)
{
    data = toCArray(_sInData);
}

unsigned char* Hashpipe::getHash(){return hash;}
void Hashpipe::setHash()
{
    //NIKS:
    //https://stackoverflow.com/questions/6934232/is-there-a-simple-c-or-c-function-that-calculates-the-sha1-hash-of-a-string?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa
    //http://www.askyb.com/cpp/openssl-sha512-hashing-example-in-cpp/
    //https://www.codeproject.com/Articles/2463/CSHA-A-C-Class-Implementation-of-the-SHA-Hash-A#csha1is
    //https://stackoverflow.com/questions/2262386/generate-sha256-with-openssl-and-c?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa

    //WERK:
    //https://www.openssl.org/docs/man1.1.0/crypto/SHA512_Init.html --- werk

    /*
     * &_data[0] : this is to convert the vector to unsigned char*. The data is stored in a group in RAM so you reference
     *             the first element.
     * verskillende metodes om die hash uit te werk > ek dink een is dalk beter vir 'n groot file of so iets.
     */

    /*
        int len = data.size();

        //SHA1_Init() initializes a SHA_CTX structure.
        int SHA512_Init(SHA512_CTX *c);

        //SHA1_Update() can be called repeatedly with chunks of the message to be hashed (len bytes at data).
        int SHA512_Update(SHA512_CTX *c, const void *data, size_t len);

        //SHA1_Final() places the message digest in md, which must have space for SHA_DIGEST_LENGTH == 20 bytes of output,
        //and erases the SHA_CTX.
        int SHA512_Final(unsigned char *md, SHA512_CTX *c);

        //en dan die een wat ek nou gaan gebruik...of nie
        unsigned char *SHA512(&hash, size_t SHA512_DIGEST_LENGTH,&data[0]);
    */

    //SHA512_CTX *c;

    //SHA512_Init(c);
    //SHA512_Update(c,&data[0],data.size());
    //SHA512_Final(hash,c);//...ek dink dis dit...nope dit is nie dit nie

    //Ek gaan die een wat werk gebruik hehe
    SHA512(&data[0],data.size(),hash);
}

unsigned char* Hashpipe::getHash(unsigned char * _data)
{
    /*
     * Kyk net hier neh, as mens nie die array op die lang manier verklaar
     * nie dan stuur hy die pointer van die die array terug, maar hy maak
     * die array dood na die funksie uitgevoer is so die pointer wat hy stuur
     * wys na niks toe nie.
     */
    unsigned char* tmpHash = new unsigned char[SHA512_DIGEST_LENGTH];
    //vector<unsigned char> tmpData;
    //skakel dit maar oor, daar moet 'n vinniger manier wees om die te doen.
    /*
     *
     * Die was 'n groot gesukkel gewees: strlen((const char*)_data)
     *
     */
    cout << strlen((const char*)_data) << endl;
    SHA512(&_data[0],strlen((const char*)_data),tmpHash);
    //cout << tmpHash << endl;

    return tmpHash;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//UTILS/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Hashpipe::testEnc(unsigned char* _key, unsigned char* _msg)
{
    //cout << _key << endl << _msg << endl;

    cout << enc(_key, _msg)[0] << endl;
}
std::vector<unsigned char> Hashpipe::enc(unsigned char* _key, unsigned char* _msg)
{
    const int BUFFER_SIZE = 128;
    //https://boredwookie.net/blog/openssl-c-and-aes-encryption-just-scratching-surface
    //https://stackoverflow.com/questions/39412760/what-is-an-openssl-iv-and-why-do-i-need-a-key-and-an-iv
    //https://wiki.openssl.org/index.php/EVP_Symmetric_Encryption_and_Decryption
    //https://stackoverflow.com/questions/9889492/how-to-do-encryption-using-aes-in-openssl

    /*
     * -IV (initial vector):
     *  Blykbaar werk die hele proses deur die verskillende goed te XOR maar daar is niks om die eerste
     *  deel te XOR nie so mens moet hier iets gee wat hy kan gebruik.
     * -Lyk my al die waardes wat gebruik moet word wat die sleutel, IV en data insluit moet in unsigned
     * char * wees.
     */

<<<<<<< HEAD
    unsigned char* iv = getHash((unsigned char*)"Sal die stuk moet verander in die regte program.");
    unsigned char* key = getHash((unsigned char*)"Die is die key waarmee die file gesluit word.");

    unsigned char* text = (unsigned char*)"Die teks wat encrypt moet word.";

    unsigned char cipher[BUFFER_SIZE];
    unsigned char decrypted[BUFFER_SIZE];
=======
    //unsigned char* iv = getHash((unsigned char*)"Sal die stuk moet verander in die regte program.");
    vector<unsigned char> tmp = toCArray(_msg);
    return tmp;
>>>>>>> encryption
}

void Hashpipe::messageDump()
{
    cout << "Message: " << &data[0] << endl;
    for(unsigned char kar : data)
    {
        cout << kar;
    }
    cout << endl;
    cout << "Hash: " << getHash() << endl;
}

std::vector<unsigned char> Hashpipe::toCArray(std::string _sInData)
{
    std::vector<unsigned char> res;
    for(char kar : _sInData)
        res.push_back(kar);
    return res;
}

std::vector<unsigned char> Hashpipe::toCArray(unsigned char* _sInData)
{
    std::vector<unsigned char> res;
    for(char kar : _sInData)
        res.push_back(kar);
    return res;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////