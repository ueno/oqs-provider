// SPDX-License-Identifier: Apache-2.0 AND MIT

/* 
 * OQS OpenSSL 3 provider encoders
 * 
 * Code strongly inspired by OpenSSL default provider.
 *
 */

#ifndef ENCODER_PROVIDER
# error Macro ENCODER_PROVIDER undefined
#endif

#define ENCODER_STRUCTURE_type_specific_keypair         "type-specific"
#define ENCODER_STRUCTURE_type_specific_params          "type-specific"
#define ENCODER_STRUCTURE_type_specific                 "type-specific"
#define ENCODER_STRUCTURE_type_specific_no_pub          "type-specific"
#define ENCODER_STRUCTURE_PKCS8                         "pkcs8"
#define ENCODER_STRUCTURE_SubjectPublicKeyInfo          "SubjectPublicKeyInfo"
#define ENCODER_STRUCTURE_PrivateKeyInfo                "PrivateKeyInfo"
#define ENCODER_STRUCTURE_EncryptedPrivateKeyInfo       "EncryptedPrivateKeyInfo"
#define ENCODER_STRUCTURE_PKCS1                         "pkcs1"
#define ENCODER_STRUCTURE_PKCS3                         "pkcs3"

/* Arguments are prefixed with '_' to avoid build breaks on certain platforms */
#define ENCODER_TEXT(_name, _sym)                                \
    { _name,                                                            \
      "provider=" ENCODER_PROVIDER ",output=text",      \
      (oqs_##_sym##_to_text_encoder_functions) }
#define ENCODER(_name, _sym, _fips, _output)                            \
    { _name,                                                            \
      "provider=" ENCODER_PROVIDER ",output=" #_output, \
      (oqs_##_sym##_to_##_output##_encoder_functions) }

#define ENCODER_w_structure(_name, _sym, _output, _structure)    \
    { _name,                                                            \
      "provider=" ENCODER_PROVIDER ",output=" #_output  \
      ",structure=" ENCODER_STRUCTURE_##_structure,                     \
      (oqs_##_sym##_to_##_structure##_##_output##_encoder_functions) }

/*
 * Entries for human text "encoders"
 */

/*
 * Entries for key type specific output formats.  The structure name on these
 * is the same as the key type name.  This allows us to say something like:
 *
 * To replace i2d_{TYPE}PrivateKey(), i2d_{TYPE}PublicKey() and
 * i2d_{TYPE}Params(), use OSSL_ENCODER functions with an OSSL_ENCODER_CTX
 * created like this:
 *
 * OSSL_ENCODER_CTX *ctx =
 *     OSSL_ENCODER_CTX_new_for_pkey(pkey, selection, "DER", "type-specific",
 *                                   NULL, NULL);
 *
 * To replace PEM_write_bio_{TYPE}PrivateKey(), PEM_write_bio_{TYPE}PublicKey()
 * and PEM_write_bio_{TYPE}Params(), use OSSL_ENCODER functions with an
 * OSSL_ENCODER_CTX created like this:
 *
 * OSSL_ENCODER_CTX *ctx =
 *     OSSL_ENCODER_CTX_new_for_pkey(pkey, selection, "PEM", "type-specific",
 *                                   NULL, NULL);
 *
 * We only implement those for which there are current i2d_ and PEM_write_bio
 * implementations.
 */

/*
 * Entries for PKCS#8 and SubjectPublicKeyInfo.
 * The "der" ones are added convenience for any user that wants to use
 * OSSL_ENCODER directly.
 * The "pem" ones also support PEM_write_bio_PrivateKey() and
 * PEM_write_bio_PUBKEY().
 */

///// OQS_TEMPLATE_FRAGMENT_MAKE_START
#ifdef OQS_ENABLE_SIG_dilithium_2
ENCODER_w_structure("dilithium2", dilithium2, der, PrivateKeyInfo),
ENCODER_w_structure("dilithium2", dilithium2, pem, PrivateKeyInfo),
ENCODER_w_structure("dilithium2", dilithium2, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("dilithium2", dilithium2, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("dilithium2", dilithium2, der, SubjectPublicKeyInfo),
ENCODER_w_structure("dilithium2", dilithium2, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("dilithium2", dilithium2),
ENCODER_w_structure("p256_dilithium2", p256_dilithium2, der, PrivateKeyInfo),
ENCODER_w_structure("p256_dilithium2", p256_dilithium2, pem, PrivateKeyInfo),
ENCODER_w_structure("p256_dilithium2", p256_dilithium2, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p256_dilithium2", p256_dilithium2, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p256_dilithium2", p256_dilithium2, der, SubjectPublicKeyInfo),
ENCODER_w_structure("p256_dilithium2", p256_dilithium2, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("p256_dilithium2", p256_dilithium2),
ENCODER_w_structure("rsa3072_dilithium2", rsa3072_dilithium2, der, PrivateKeyInfo),
ENCODER_w_structure("rsa3072_dilithium2", rsa3072_dilithium2, pem, PrivateKeyInfo),
ENCODER_w_structure("rsa3072_dilithium2", rsa3072_dilithium2, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("rsa3072_dilithium2", rsa3072_dilithium2, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("rsa3072_dilithium2", rsa3072_dilithium2, der, SubjectPublicKeyInfo),
ENCODER_w_structure("rsa3072_dilithium2", rsa3072_dilithium2, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("rsa3072_dilithium2", rsa3072_dilithium2),
#endif
#ifdef OQS_ENABLE_SIG_dilithium_3
ENCODER_w_structure("dilithium3", dilithium3, der, PrivateKeyInfo),
ENCODER_w_structure("dilithium3", dilithium3, pem, PrivateKeyInfo),
ENCODER_w_structure("dilithium3", dilithium3, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("dilithium3", dilithium3, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("dilithium3", dilithium3, der, SubjectPublicKeyInfo),
ENCODER_w_structure("dilithium3", dilithium3, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("dilithium3", dilithium3),
ENCODER_w_structure("p384_dilithium3", p384_dilithium3, der, PrivateKeyInfo),
ENCODER_w_structure("p384_dilithium3", p384_dilithium3, pem, PrivateKeyInfo),
ENCODER_w_structure("p384_dilithium3", p384_dilithium3, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p384_dilithium3", p384_dilithium3, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p384_dilithium3", p384_dilithium3, der, SubjectPublicKeyInfo),
ENCODER_w_structure("p384_dilithium3", p384_dilithium3, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("p384_dilithium3", p384_dilithium3),
#endif
#ifdef OQS_ENABLE_SIG_dilithium_5
ENCODER_w_structure("dilithium5", dilithium5, der, PrivateKeyInfo),
ENCODER_w_structure("dilithium5", dilithium5, pem, PrivateKeyInfo),
ENCODER_w_structure("dilithium5", dilithium5, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("dilithium5", dilithium5, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("dilithium5", dilithium5, der, SubjectPublicKeyInfo),
ENCODER_w_structure("dilithium5", dilithium5, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("dilithium5", dilithium5),
ENCODER_w_structure("p521_dilithium5", p521_dilithium5, der, PrivateKeyInfo),
ENCODER_w_structure("p521_dilithium5", p521_dilithium5, pem, PrivateKeyInfo),
ENCODER_w_structure("p521_dilithium5", p521_dilithium5, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p521_dilithium5", p521_dilithium5, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p521_dilithium5", p521_dilithium5, der, SubjectPublicKeyInfo),
ENCODER_w_structure("p521_dilithium5", p521_dilithium5, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("p521_dilithium5", p521_dilithium5),
#endif
#ifdef OQS_ENABLE_SIG_dilithium_2_aes
ENCODER_w_structure("dilithium2_aes", dilithium2_aes, der, PrivateKeyInfo),
ENCODER_w_structure("dilithium2_aes", dilithium2_aes, pem, PrivateKeyInfo),
ENCODER_w_structure("dilithium2_aes", dilithium2_aes, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("dilithium2_aes", dilithium2_aes, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("dilithium2_aes", dilithium2_aes, der, SubjectPublicKeyInfo),
ENCODER_w_structure("dilithium2_aes", dilithium2_aes, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("dilithium2_aes", dilithium2_aes),
ENCODER_w_structure("p256_dilithium2_aes", p256_dilithium2_aes, der, PrivateKeyInfo),
ENCODER_w_structure("p256_dilithium2_aes", p256_dilithium2_aes, pem, PrivateKeyInfo),
ENCODER_w_structure("p256_dilithium2_aes", p256_dilithium2_aes, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p256_dilithium2_aes", p256_dilithium2_aes, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p256_dilithium2_aes", p256_dilithium2_aes, der, SubjectPublicKeyInfo),
ENCODER_w_structure("p256_dilithium2_aes", p256_dilithium2_aes, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("p256_dilithium2_aes", p256_dilithium2_aes),
ENCODER_w_structure("rsa3072_dilithium2_aes", rsa3072_dilithium2_aes, der, PrivateKeyInfo),
ENCODER_w_structure("rsa3072_dilithium2_aes", rsa3072_dilithium2_aes, pem, PrivateKeyInfo),
ENCODER_w_structure("rsa3072_dilithium2_aes", rsa3072_dilithium2_aes, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("rsa3072_dilithium2_aes", rsa3072_dilithium2_aes, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("rsa3072_dilithium2_aes", rsa3072_dilithium2_aes, der, SubjectPublicKeyInfo),
ENCODER_w_structure("rsa3072_dilithium2_aes", rsa3072_dilithium2_aes, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("rsa3072_dilithium2_aes", rsa3072_dilithium2_aes),
#endif
#ifdef OQS_ENABLE_SIG_dilithium_3_aes
ENCODER_w_structure("dilithium3_aes", dilithium3_aes, der, PrivateKeyInfo),
ENCODER_w_structure("dilithium3_aes", dilithium3_aes, pem, PrivateKeyInfo),
ENCODER_w_structure("dilithium3_aes", dilithium3_aes, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("dilithium3_aes", dilithium3_aes, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("dilithium3_aes", dilithium3_aes, der, SubjectPublicKeyInfo),
ENCODER_w_structure("dilithium3_aes", dilithium3_aes, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("dilithium3_aes", dilithium3_aes),
ENCODER_w_structure("p384_dilithium3_aes", p384_dilithium3_aes, der, PrivateKeyInfo),
ENCODER_w_structure("p384_dilithium3_aes", p384_dilithium3_aes, pem, PrivateKeyInfo),
ENCODER_w_structure("p384_dilithium3_aes", p384_dilithium3_aes, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p384_dilithium3_aes", p384_dilithium3_aes, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p384_dilithium3_aes", p384_dilithium3_aes, der, SubjectPublicKeyInfo),
ENCODER_w_structure("p384_dilithium3_aes", p384_dilithium3_aes, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("p384_dilithium3_aes", p384_dilithium3_aes),
#endif
#ifdef OQS_ENABLE_SIG_dilithium_5_aes
ENCODER_w_structure("dilithium5_aes", dilithium5_aes, der, PrivateKeyInfo),
ENCODER_w_structure("dilithium5_aes", dilithium5_aes, pem, PrivateKeyInfo),
ENCODER_w_structure("dilithium5_aes", dilithium5_aes, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("dilithium5_aes", dilithium5_aes, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("dilithium5_aes", dilithium5_aes, der, SubjectPublicKeyInfo),
ENCODER_w_structure("dilithium5_aes", dilithium5_aes, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("dilithium5_aes", dilithium5_aes),
ENCODER_w_structure("p521_dilithium5_aes", p521_dilithium5_aes, der, PrivateKeyInfo),
ENCODER_w_structure("p521_dilithium5_aes", p521_dilithium5_aes, pem, PrivateKeyInfo),
ENCODER_w_structure("p521_dilithium5_aes", p521_dilithium5_aes, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p521_dilithium5_aes", p521_dilithium5_aes, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p521_dilithium5_aes", p521_dilithium5_aes, der, SubjectPublicKeyInfo),
ENCODER_w_structure("p521_dilithium5_aes", p521_dilithium5_aes, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("p521_dilithium5_aes", p521_dilithium5_aes),
#endif
#ifdef OQS_ENABLE_SIG_falcon_512
ENCODER_w_structure("falcon512", falcon512, der, PrivateKeyInfo),
ENCODER_w_structure("falcon512", falcon512, pem, PrivateKeyInfo),
ENCODER_w_structure("falcon512", falcon512, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("falcon512", falcon512, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("falcon512", falcon512, der, SubjectPublicKeyInfo),
ENCODER_w_structure("falcon512", falcon512, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("falcon512", falcon512),
ENCODER_w_structure("p256_falcon512", p256_falcon512, der, PrivateKeyInfo),
ENCODER_w_structure("p256_falcon512", p256_falcon512, pem, PrivateKeyInfo),
ENCODER_w_structure("p256_falcon512", p256_falcon512, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p256_falcon512", p256_falcon512, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p256_falcon512", p256_falcon512, der, SubjectPublicKeyInfo),
ENCODER_w_structure("p256_falcon512", p256_falcon512, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("p256_falcon512", p256_falcon512),
ENCODER_w_structure("rsa3072_falcon512", rsa3072_falcon512, der, PrivateKeyInfo),
ENCODER_w_structure("rsa3072_falcon512", rsa3072_falcon512, pem, PrivateKeyInfo),
ENCODER_w_structure("rsa3072_falcon512", rsa3072_falcon512, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("rsa3072_falcon512", rsa3072_falcon512, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("rsa3072_falcon512", rsa3072_falcon512, der, SubjectPublicKeyInfo),
ENCODER_w_structure("rsa3072_falcon512", rsa3072_falcon512, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("rsa3072_falcon512", rsa3072_falcon512),
#endif
#ifdef OQS_ENABLE_SIG_falcon_1024
ENCODER_w_structure("falcon1024", falcon1024, der, PrivateKeyInfo),
ENCODER_w_structure("falcon1024", falcon1024, pem, PrivateKeyInfo),
ENCODER_w_structure("falcon1024", falcon1024, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("falcon1024", falcon1024, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("falcon1024", falcon1024, der, SubjectPublicKeyInfo),
ENCODER_w_structure("falcon1024", falcon1024, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("falcon1024", falcon1024),
ENCODER_w_structure("p521_falcon1024", p521_falcon1024, der, PrivateKeyInfo),
ENCODER_w_structure("p521_falcon1024", p521_falcon1024, pem, PrivateKeyInfo),
ENCODER_w_structure("p521_falcon1024", p521_falcon1024, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p521_falcon1024", p521_falcon1024, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p521_falcon1024", p521_falcon1024, der, SubjectPublicKeyInfo),
ENCODER_w_structure("p521_falcon1024", p521_falcon1024, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("p521_falcon1024", p521_falcon1024),
#endif
#ifdef OQS_ENABLE_SIG_sphincs_haraka_128f_robust
ENCODER_w_structure("sphincsharaka128frobust", sphincsharaka128frobust, der, PrivateKeyInfo),
ENCODER_w_structure("sphincsharaka128frobust", sphincsharaka128frobust, pem, PrivateKeyInfo),
ENCODER_w_structure("sphincsharaka128frobust", sphincsharaka128frobust, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("sphincsharaka128frobust", sphincsharaka128frobust, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("sphincsharaka128frobust", sphincsharaka128frobust, der, SubjectPublicKeyInfo),
ENCODER_w_structure("sphincsharaka128frobust", sphincsharaka128frobust, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("sphincsharaka128frobust", sphincsharaka128frobust),
ENCODER_w_structure("p256_sphincsharaka128frobust", p256_sphincsharaka128frobust, der, PrivateKeyInfo),
ENCODER_w_structure("p256_sphincsharaka128frobust", p256_sphincsharaka128frobust, pem, PrivateKeyInfo),
ENCODER_w_structure("p256_sphincsharaka128frobust", p256_sphincsharaka128frobust, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p256_sphincsharaka128frobust", p256_sphincsharaka128frobust, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p256_sphincsharaka128frobust", p256_sphincsharaka128frobust, der, SubjectPublicKeyInfo),
ENCODER_w_structure("p256_sphincsharaka128frobust", p256_sphincsharaka128frobust, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("p256_sphincsharaka128frobust", p256_sphincsharaka128frobust),
ENCODER_w_structure("rsa3072_sphincsharaka128frobust", rsa3072_sphincsharaka128frobust, der, PrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincsharaka128frobust", rsa3072_sphincsharaka128frobust, pem, PrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincsharaka128frobust", rsa3072_sphincsharaka128frobust, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincsharaka128frobust", rsa3072_sphincsharaka128frobust, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincsharaka128frobust", rsa3072_sphincsharaka128frobust, der, SubjectPublicKeyInfo),
ENCODER_w_structure("rsa3072_sphincsharaka128frobust", rsa3072_sphincsharaka128frobust, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("rsa3072_sphincsharaka128frobust", rsa3072_sphincsharaka128frobust),
#endif
#ifdef OQS_ENABLE_SIG_sphincs_haraka_128f_simple
ENCODER_w_structure("sphincsharaka128fsimple", sphincsharaka128fsimple, der, PrivateKeyInfo),
ENCODER_w_structure("sphincsharaka128fsimple", sphincsharaka128fsimple, pem, PrivateKeyInfo),
ENCODER_w_structure("sphincsharaka128fsimple", sphincsharaka128fsimple, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("sphincsharaka128fsimple", sphincsharaka128fsimple, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("sphincsharaka128fsimple", sphincsharaka128fsimple, der, SubjectPublicKeyInfo),
ENCODER_w_structure("sphincsharaka128fsimple", sphincsharaka128fsimple, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("sphincsharaka128fsimple", sphincsharaka128fsimple),
ENCODER_w_structure("p256_sphincsharaka128fsimple", p256_sphincsharaka128fsimple, der, PrivateKeyInfo),
ENCODER_w_structure("p256_sphincsharaka128fsimple", p256_sphincsharaka128fsimple, pem, PrivateKeyInfo),
ENCODER_w_structure("p256_sphincsharaka128fsimple", p256_sphincsharaka128fsimple, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p256_sphincsharaka128fsimple", p256_sphincsharaka128fsimple, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p256_sphincsharaka128fsimple", p256_sphincsharaka128fsimple, der, SubjectPublicKeyInfo),
ENCODER_w_structure("p256_sphincsharaka128fsimple", p256_sphincsharaka128fsimple, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("p256_sphincsharaka128fsimple", p256_sphincsharaka128fsimple),
ENCODER_w_structure("rsa3072_sphincsharaka128fsimple", rsa3072_sphincsharaka128fsimple, der, PrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincsharaka128fsimple", rsa3072_sphincsharaka128fsimple, pem, PrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincsharaka128fsimple", rsa3072_sphincsharaka128fsimple, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincsharaka128fsimple", rsa3072_sphincsharaka128fsimple, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincsharaka128fsimple", rsa3072_sphincsharaka128fsimple, der, SubjectPublicKeyInfo),
ENCODER_w_structure("rsa3072_sphincsharaka128fsimple", rsa3072_sphincsharaka128fsimple, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("rsa3072_sphincsharaka128fsimple", rsa3072_sphincsharaka128fsimple),
#endif
#ifdef OQS_ENABLE_SIG_sphincs_sha256_128f_robust
ENCODER_w_structure("sphincssha256128frobust", sphincssha256128frobust, der, PrivateKeyInfo),
ENCODER_w_structure("sphincssha256128frobust", sphincssha256128frobust, pem, PrivateKeyInfo),
ENCODER_w_structure("sphincssha256128frobust", sphincssha256128frobust, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("sphincssha256128frobust", sphincssha256128frobust, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("sphincssha256128frobust", sphincssha256128frobust, der, SubjectPublicKeyInfo),
ENCODER_w_structure("sphincssha256128frobust", sphincssha256128frobust, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("sphincssha256128frobust", sphincssha256128frobust),
ENCODER_w_structure("p256_sphincssha256128frobust", p256_sphincssha256128frobust, der, PrivateKeyInfo),
ENCODER_w_structure("p256_sphincssha256128frobust", p256_sphincssha256128frobust, pem, PrivateKeyInfo),
ENCODER_w_structure("p256_sphincssha256128frobust", p256_sphincssha256128frobust, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p256_sphincssha256128frobust", p256_sphincssha256128frobust, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p256_sphincssha256128frobust", p256_sphincssha256128frobust, der, SubjectPublicKeyInfo),
ENCODER_w_structure("p256_sphincssha256128frobust", p256_sphincssha256128frobust, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("p256_sphincssha256128frobust", p256_sphincssha256128frobust),
ENCODER_w_structure("rsa3072_sphincssha256128frobust", rsa3072_sphincssha256128frobust, der, PrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincssha256128frobust", rsa3072_sphincssha256128frobust, pem, PrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincssha256128frobust", rsa3072_sphincssha256128frobust, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincssha256128frobust", rsa3072_sphincssha256128frobust, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincssha256128frobust", rsa3072_sphincssha256128frobust, der, SubjectPublicKeyInfo),
ENCODER_w_structure("rsa3072_sphincssha256128frobust", rsa3072_sphincssha256128frobust, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("rsa3072_sphincssha256128frobust", rsa3072_sphincssha256128frobust),
#endif
#ifdef OQS_ENABLE_SIG_sphincs_sha256_128s_simple
ENCODER_w_structure("sphincssha256128ssimple", sphincssha256128ssimple, der, PrivateKeyInfo),
ENCODER_w_structure("sphincssha256128ssimple", sphincssha256128ssimple, pem, PrivateKeyInfo),
ENCODER_w_structure("sphincssha256128ssimple", sphincssha256128ssimple, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("sphincssha256128ssimple", sphincssha256128ssimple, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("sphincssha256128ssimple", sphincssha256128ssimple, der, SubjectPublicKeyInfo),
ENCODER_w_structure("sphincssha256128ssimple", sphincssha256128ssimple, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("sphincssha256128ssimple", sphincssha256128ssimple),
ENCODER_w_structure("p256_sphincssha256128ssimple", p256_sphincssha256128ssimple, der, PrivateKeyInfo),
ENCODER_w_structure("p256_sphincssha256128ssimple", p256_sphincssha256128ssimple, pem, PrivateKeyInfo),
ENCODER_w_structure("p256_sphincssha256128ssimple", p256_sphincssha256128ssimple, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p256_sphincssha256128ssimple", p256_sphincssha256128ssimple, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p256_sphincssha256128ssimple", p256_sphincssha256128ssimple, der, SubjectPublicKeyInfo),
ENCODER_w_structure("p256_sphincssha256128ssimple", p256_sphincssha256128ssimple, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("p256_sphincssha256128ssimple", p256_sphincssha256128ssimple),
ENCODER_w_structure("rsa3072_sphincssha256128ssimple", rsa3072_sphincssha256128ssimple, der, PrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincssha256128ssimple", rsa3072_sphincssha256128ssimple, pem, PrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincssha256128ssimple", rsa3072_sphincssha256128ssimple, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincssha256128ssimple", rsa3072_sphincssha256128ssimple, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincssha256128ssimple", rsa3072_sphincssha256128ssimple, der, SubjectPublicKeyInfo),
ENCODER_w_structure("rsa3072_sphincssha256128ssimple", rsa3072_sphincssha256128ssimple, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("rsa3072_sphincssha256128ssimple", rsa3072_sphincssha256128ssimple),
#endif
#ifdef OQS_ENABLE_SIG_sphincs_shake256_128f_simple
ENCODER_w_structure("sphincsshake256128fsimple", sphincsshake256128fsimple, der, PrivateKeyInfo),
ENCODER_w_structure("sphincsshake256128fsimple", sphincsshake256128fsimple, pem, PrivateKeyInfo),
ENCODER_w_structure("sphincsshake256128fsimple", sphincsshake256128fsimple, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("sphincsshake256128fsimple", sphincsshake256128fsimple, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("sphincsshake256128fsimple", sphincsshake256128fsimple, der, SubjectPublicKeyInfo),
ENCODER_w_structure("sphincsshake256128fsimple", sphincsshake256128fsimple, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("sphincsshake256128fsimple", sphincsshake256128fsimple),
ENCODER_w_structure("p256_sphincsshake256128fsimple", p256_sphincsshake256128fsimple, der, PrivateKeyInfo),
ENCODER_w_structure("p256_sphincsshake256128fsimple", p256_sphincsshake256128fsimple, pem, PrivateKeyInfo),
ENCODER_w_structure("p256_sphincsshake256128fsimple", p256_sphincsshake256128fsimple, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p256_sphincsshake256128fsimple", p256_sphincsshake256128fsimple, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("p256_sphincsshake256128fsimple", p256_sphincsshake256128fsimple, der, SubjectPublicKeyInfo),
ENCODER_w_structure("p256_sphincsshake256128fsimple", p256_sphincsshake256128fsimple, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("p256_sphincsshake256128fsimple", p256_sphincsshake256128fsimple),
ENCODER_w_structure("rsa3072_sphincsshake256128fsimple", rsa3072_sphincsshake256128fsimple, der, PrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincsshake256128fsimple", rsa3072_sphincsshake256128fsimple, pem, PrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincsshake256128fsimple", rsa3072_sphincsshake256128fsimple, der, EncryptedPrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincsshake256128fsimple", rsa3072_sphincsshake256128fsimple, pem, EncryptedPrivateKeyInfo),
ENCODER_w_structure("rsa3072_sphincsshake256128fsimple", rsa3072_sphincsshake256128fsimple, der, SubjectPublicKeyInfo),
ENCODER_w_structure("rsa3072_sphincsshake256128fsimple", rsa3072_sphincsshake256128fsimple, pem, SubjectPublicKeyInfo),
ENCODER_TEXT("rsa3072_sphincsshake256128fsimple", rsa3072_sphincsshake256128fsimple),
#endif
///// OQS_TEMPLATE_FRAGMENT_MAKE_END

