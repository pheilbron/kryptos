kry_algorithm	g_algorithm_tab[] =
{
	{{MD5, 0}, "md5", &md5, NULL},
	{{SHA1, 0}, "sha1", &sha1, NULL},
	{{SHA224, 0}, "sha224", &sha224, NULL},
	{{SHA256, 0}, "sha256", &sha256, NULL},
	{{SHA384, 0}, "sha384", &sha384, NULL},
	{{SHA512, 0}, "sha512", &sha512, NULL},
	{{SHA512_224, 0}, "sha512/224", &sha512_224, NULL},
	{{SHA512_256, 0}, "sha512/256", &sha512_256, NULL},
//	{{BASE64, 0}, "base64", &base64, NULL},
//	{{DES, CBC}, "des", &des},
//	{{DES, CBC}, "des-cbc", &des},
//	{{DES, CFB}, "des-cfb", &des},
//	{{DES, CTR}, "des-ctr", &des},
//	{{DES, ECB}, "des-ecb", &des},
//	{{DES, OFB}, "des-ofb", &des},
//	{{DES, PCBC}, "des-pcbc", &des},
//	{{DES3, CBC}, "des3", &des3},
//	{{DES3, CBC}, "des3-cbc", &des3},
//	{{DES3, CFB}, "des3-cfb", &des3},
//	{{DES3, CTR}, "des3-ctr", &des3},
//	{{DES3, ECB}, "des3-ecb", &des3},
//	{{DES3, OFB}, "des3-ofb", &des3},
//	{{DES3, PCBC}, "des3-pcbc", &des3},
//	{{AES128, CBC}, "aes128", &aes128},
//	{{AES128, CBC}, "aes128-cbc", &aes128},
//	{{AES128, CFB}, "aes128-cfb", &aes128},
//	{{AES128, CTR}, "aes128-ctr", &aes128},
//	{{AES128, ECB}, "aes128-ecb", &aes128},
//	{{AES128, OFB}, "aes128-ofb", &aes128},
//	{{AES128, PCBC}, "aes128-pcbc", &aes128},
//	{{AES192, CBC}, "aes192", &aes192},
//	{{AES192, CBC}, "aes192-cbc", &aes192},
//	{{AES192, CFB}, "aes192-cfb", &aes192},
//	{{AES192, CTR}, "aes192-ctr", &aes192},
//	{{AES192, ECB}, "aes192-ecb", &aes192},
//	{{AES192, OFB}, "aes192-ofb", &aes192},
//	{{AES192, PCBC}, "aes192-pcbc", &aes192},
//	{{AES256, CBC}, "aes256", &aes256},
//	{{AES256, CBC}, "aes256-cbc", &aes256},
//	{{AES256, CFB}, "aes256-cfb", &aes256},
//	{{AES256, CTR}, "aes256-ctr", &aes256},
//	{{AES256, ECB}, "aes256-ecb", &aes256},
//	{{AES256, OFB}, "aes256-ofb", &aes256},
//	{{AES256, PCBC}, "aes256-pcbc", &aes256},
	{{0, 0}, NULL, NULL}
};


kry_context	*init_context(char *algorithm, char *password)
{

