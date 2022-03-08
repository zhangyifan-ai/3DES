#pragma once

#include<string>
#include<string.h>


class TDES
{
// º¯Êý×é¼þ
private:
	void ByteToBit(char ch, char bit[8]);
	void BitToByte(char bit[8], char* ch);
	void Char8ToBit64(char ch[8], char bit[64]);
	void Bit64ToChar8(char bit[64], char ch[8]);
	void MakeSubKeys(char key[64], char subKeys[16][48]);
	void PC1_Transform(char key[64], char tempbts[56]);
	void PC2_Transform(char key[56], char tempbts[48]);
	void ROL(char data[56], int time);
	void IP_Transform(char data[64]);
	void IP_1_Transform(char data[64]);
	void E_Transform(char data[48]);
	void P_Transform(char data[32]);
	void XOR(char R[48], char L[48], int count);
	void SBOX(char data[48]);
	void Swap(char left[32], char right[32]);
	void DecryptBlock(char cipherBlock[8], char subKeys[16][48], char plainBlock[8]);
	void EncryptBlock(char plainBlock[8], char subKeys[16][48], char cipherBlock[8]);
	void Encrypt(char* input, char* key_1, char* key_2, char* key_3, char* output);
	void Decrypt(char* input, char* key_1, char* key_2, char* key_3, char* output);
	
private:
	std::string key1;
	std::string key2;
	std::string key3;
public:
	void setKey(const std::string& k);
	std::string encrypt(const std::string& data);
	std::string decrypt(const std::string& data);
};