Algorithms supported
====================

This page lists all quantum-safe algorithms supported by oqs-provider.

Some algorithms by default may not be enabled for use in the master code-generator template file.

As standardization for these algorithms within TLS is not done, all TLS code points/IDs can be changed from their default values to values set by environment variables. This facilitates interoperability testing with TLS1.3 implementations that use different IDs.

# Code points / algorithm IDs

<!--- OQS_TEMPLATE_FRAGMENT_IDS_START -->

|Algorithm name | default ID | enabled | environment variable |
|---------------|:----------:|:-------:|----------------------|
| frodo640aes | 0x0200 | Yes | OQS_CODEPOINT_FRODO640AES 
| p256_frodo640aes | 0x2F00 | Yes | OQS_CODEPOINT_P256_FRODO640AES
| x25519_frodo640aes | 0x2F80 | Yes | OQS_CODEPOINT_X25519_FRODO640AES
| frodo640shake | 0x0201 | Yes | OQS_CODEPOINT_FRODO640SHAKE 
| p256_frodo640shake | 0x2F01 | Yes | OQS_CODEPOINT_P256_FRODO640SHAKE
| x25519_frodo640shake | 0x2F81 | Yes | OQS_CODEPOINT_X25519_FRODO640SHAKE
| frodo976aes | 0x0202 | Yes | OQS_CODEPOINT_FRODO976AES 
| p384_frodo976aes | 0x2F02 | Yes | OQS_CODEPOINT_P384_FRODO976AES
| x448_frodo976aes | 0x2F82 | Yes | OQS_CODEPOINT_X448_FRODO976AES
| frodo976shake | 0x0203 | Yes | OQS_CODEPOINT_FRODO976SHAKE 
| p384_frodo976shake | 0x2F03 | Yes | OQS_CODEPOINT_P384_FRODO976SHAKE
| x448_frodo976shake | 0x2F83 | Yes | OQS_CODEPOINT_X448_FRODO976SHAKE
| frodo1344aes | 0x0204 | Yes | OQS_CODEPOINT_FRODO1344AES 
| p521_frodo1344aes | 0x2F04 | Yes | OQS_CODEPOINT_P521_FRODO1344AES
| frodo1344shake | 0x0205 | Yes | OQS_CODEPOINT_FRODO1344SHAKE 
| p521_frodo1344shake | 0x2F05 | Yes | OQS_CODEPOINT_P521_FRODO1344SHAKE
| kyber512 | 0x023A | Yes | OQS_CODEPOINT_KYBER512 
| p256_kyber512 | 0x2F3A | Yes | OQS_CODEPOINT_P256_KYBER512
| x25519_kyber512 | 0x2F39 | Yes | OQS_CODEPOINT_X25519_KYBER512
| kyber768 | 0x023C | Yes | OQS_CODEPOINT_KYBER768 
| p384_kyber768 | 0x2F3C | Yes | OQS_CODEPOINT_P384_KYBER768
| x448_kyber768 | 0x2F90 | Yes | OQS_CODEPOINT_X448_KYBER768
| kyber1024 | 0x023D | Yes | OQS_CODEPOINT_KYBER1024 
| p521_kyber1024 | 0x2F3D | Yes | OQS_CODEPOINT_P521_KYBER1024
| bikel1 | 0x0241 | Yes | OQS_CODEPOINT_BIKEL1 
| p256_bikel1 | 0x2F41 | Yes | OQS_CODEPOINT_P256_BIKEL1
| x25519_bikel1 | 0x2FAE | Yes | OQS_CODEPOINT_X25519_BIKEL1
| bikel3 | 0x0242 | Yes | OQS_CODEPOINT_BIKEL3 
| p384_bikel3 | 0x2F42 | Yes | OQS_CODEPOINT_P384_BIKEL3
| x448_bikel3 | 0x2FAF | Yes | OQS_CODEPOINT_X448_BIKEL3
| bikel5 | 0x0243 | Yes | OQS_CODEPOINT_BIKEL5 
| p521_bikel5 | 0x2F43 | Yes | OQS_CODEPOINT_P521_BIKEL5
| kyber90s512 | 0x023E | Yes | OQS_CODEPOINT_KYBER90S512 
| p256_kyber90s512 | 0x2F3E | Yes | OQS_CODEPOINT_P256_KYBER90S512
| x25519_kyber90s512 | 0x2FA9 | Yes | OQS_CODEPOINT_X25519_KYBER90S512
| kyber90s768 | 0x023F | Yes | OQS_CODEPOINT_KYBER90S768 
| p384_kyber90s768 | 0x2F3F | Yes | OQS_CODEPOINT_P384_KYBER90S768
| x448_kyber90s768 | 0x2FAA | Yes | OQS_CODEPOINT_X448_KYBER90S768
| kyber90s1024 | 0x0240 | Yes | OQS_CODEPOINT_KYBER90S1024 
| p521_kyber90s1024 | 0x2F40 | Yes | OQS_CODEPOINT_P521_KYBER90S1024
| hqc128 | 0x022C | Yes | OQS_CODEPOINT_HQC128 
| p256_hqc128 | 0x2F2C | Yes | OQS_CODEPOINT_P256_HQC128
| x25519_hqc128 | 0x2FAC | Yes | OQS_CODEPOINT_X25519_HQC128
| hqc192 | 0x022D | Yes | OQS_CODEPOINT_HQC192 
| p384_hqc192 | 0x2F2D | Yes | OQS_CODEPOINT_P384_HQC192
| x448_hqc192 | 0x2FAD | Yes | OQS_CODEPOINT_X448_HQC192
| hqc256 | 0x022E | Yes | OQS_CODEPOINT_HQC256 
| p521_hqc256 | 0x2F2E | Yes | OQS_CODEPOINT_P521_HQC256
| dilithium2 | 0xfea0 |Yes| OQS_CODEPOINT_DILITHIUM2
| p256_dilithium2 | 0xfea1 |Yes| OQS_CODEPOINT_P256_DILITHIUM2
| rsa3072_dilithium2 | 0xfea2 |Yes| OQS_CODEPOINT_RSA3072_DILITHIUM2
| dilithium3 | 0xfea3 |Yes| OQS_CODEPOINT_DILITHIUM3
| p384_dilithium3 | 0xfea4 |Yes| OQS_CODEPOINT_P384_DILITHIUM3
| dilithium5 | 0xfea5 |Yes| OQS_CODEPOINT_DILITHIUM5
| p521_dilithium5 | 0xfea6 |Yes| OQS_CODEPOINT_P521_DILITHIUM5
| dilithium2_aes | 0xfea7 |Yes| OQS_CODEPOINT_DILITHIUM2_AES
| p256_dilithium2_aes | 0xfea8 |Yes| OQS_CODEPOINT_P256_DILITHIUM2_AES
| rsa3072_dilithium2_aes | 0xfea9 |Yes| OQS_CODEPOINT_RSA3072_DILITHIUM2_AES
| dilithium3_aes | 0xfeaa |Yes| OQS_CODEPOINT_DILITHIUM3_AES
| p384_dilithium3_aes | 0xfeab |Yes| OQS_CODEPOINT_P384_DILITHIUM3_AES
| dilithium5_aes | 0xfeac |Yes| OQS_CODEPOINT_DILITHIUM5_AES
| p521_dilithium5_aes | 0xfead |Yes| OQS_CODEPOINT_P521_DILITHIUM5_AES
| falcon512 | 0xfeae |Yes| OQS_CODEPOINT_FALCON512
| p256_falcon512 | 0xfeaf |Yes| OQS_CODEPOINT_P256_FALCON512
| rsa3072_falcon512 | 0xfeb0 |Yes| OQS_CODEPOINT_RSA3072_FALCON512
| falcon1024 | 0xfeb1 |Yes| OQS_CODEPOINT_FALCON1024
| p521_falcon1024 | 0xfeb2 |Yes| OQS_CODEPOINT_P521_FALCON1024
| sphincsharaka128frobust | 0xfe42 |Yes| OQS_CODEPOINT_SPHINCSHARAKA128FROBUST
| p256_sphincsharaka128frobust | 0xfe43 |Yes| OQS_CODEPOINT_P256_SPHINCSHARAKA128FROBUST
| rsa3072_sphincsharaka128frobust | 0xfe44 |Yes| OQS_CODEPOINT_RSA3072_SPHINCSHARAKA128FROBUST
| sphincsharaka128fsimple | 0xfe45 |Yes| OQS_CODEPOINT_SPHINCSHARAKA128FSIMPLE
| p256_sphincsharaka128fsimple | 0xfe46 |Yes| OQS_CODEPOINT_P256_SPHINCSHARAKA128FSIMPLE
| rsa3072_sphincsharaka128fsimple | 0xfe47 |Yes| OQS_CODEPOINT_RSA3072_SPHINCSHARAKA128FSIMPLE
| sphincsharaka128srobust | 0xfe48 |No| OQS_CODEPOINT_SPHINCSHARAKA128SROBUST
| p256_sphincsharaka128srobust | 0xfe49 |No| OQS_CODEPOINT_P256_SPHINCSHARAKA128SROBUST
| rsa3072_sphincsharaka128srobust | 0xfe4a |No| OQS_CODEPOINT_RSA3072_SPHINCSHARAKA128SROBUST
| sphincsharaka128ssimple | 0xfe4b |No| OQS_CODEPOINT_SPHINCSHARAKA128SSIMPLE
| p256_sphincsharaka128ssimple | 0xfe4c |No| OQS_CODEPOINT_P256_SPHINCSHARAKA128SSIMPLE
| rsa3072_sphincsharaka128ssimple | 0xfe4d |No| OQS_CODEPOINT_RSA3072_SPHINCSHARAKA128SSIMPLE
| sphincsharaka192frobust | 0xfe4e |No| OQS_CODEPOINT_SPHINCSHARAKA192FROBUST
| p384_sphincsharaka192frobust | 0xfe4f |No| OQS_CODEPOINT_P384_SPHINCSHARAKA192FROBUST
| sphincsharaka192fsimple | 0xfe50 |No| OQS_CODEPOINT_SPHINCSHARAKA192FSIMPLE
| p384_sphincsharaka192fsimple | 0xfe51 |No| OQS_CODEPOINT_P384_SPHINCSHARAKA192FSIMPLE
| sphincsharaka192srobust | 0xfe52 |No| OQS_CODEPOINT_SPHINCSHARAKA192SROBUST
| p384_sphincsharaka192srobust | 0xfe53 |No| OQS_CODEPOINT_P384_SPHINCSHARAKA192SROBUST
| sphincsharaka192ssimple | 0xfe54 |No| OQS_CODEPOINT_SPHINCSHARAKA192SSIMPLE
| p384_sphincsharaka192ssimple | 0xfe55 |No| OQS_CODEPOINT_P384_SPHINCSHARAKA192SSIMPLE
| sphincsharaka256frobust | 0xfe56 |No| OQS_CODEPOINT_SPHINCSHARAKA256FROBUST
| p521_sphincsharaka256frobust | 0xfe57 |No| OQS_CODEPOINT_P521_SPHINCSHARAKA256FROBUST
| sphincsharaka256fsimple | 0xfe58 |No| OQS_CODEPOINT_SPHINCSHARAKA256FSIMPLE
| p521_sphincsharaka256fsimple | 0xfe59 |No| OQS_CODEPOINT_P521_SPHINCSHARAKA256FSIMPLE
| sphincsharaka256srobust | 0xfe5a |No| OQS_CODEPOINT_SPHINCSHARAKA256SROBUST
| p521_sphincsharaka256srobust | 0xfe5b |No| OQS_CODEPOINT_P521_SPHINCSHARAKA256SROBUST
| sphincsharaka256ssimple | 0xfe5c |No| OQS_CODEPOINT_SPHINCSHARAKA256SSIMPLE
| p521_sphincsharaka256ssimple | 0xfe5d |No| OQS_CODEPOINT_P521_SPHINCSHARAKA256SSIMPLE
| sphincssha256128frobust | 0xfe5e |Yes| OQS_CODEPOINT_SPHINCSSHA256128FROBUST
| p256_sphincssha256128frobust | 0xfe5f |Yes| OQS_CODEPOINT_P256_SPHINCSSHA256128FROBUST
| rsa3072_sphincssha256128frobust | 0xfe60 |Yes| OQS_CODEPOINT_RSA3072_SPHINCSSHA256128FROBUST
| sphincssha256128fsimple | 0xfe61 |No| OQS_CODEPOINT_SPHINCSSHA256128FSIMPLE
| p256_sphincssha256128fsimple | 0xfe62 |No| OQS_CODEPOINT_P256_SPHINCSSHA256128FSIMPLE
| rsa3072_sphincssha256128fsimple | 0xfe63 |No| OQS_CODEPOINT_RSA3072_SPHINCSSHA256128FSIMPLE
| sphincssha256128srobust | 0xfe64 |No| OQS_CODEPOINT_SPHINCSSHA256128SROBUST
| p256_sphincssha256128srobust | 0xfe65 |No| OQS_CODEPOINT_P256_SPHINCSSHA256128SROBUST
| rsa3072_sphincssha256128srobust | 0xfe66 |No| OQS_CODEPOINT_RSA3072_SPHINCSSHA256128SROBUST
| sphincssha256128ssimple | 0xfe67 |Yes| OQS_CODEPOINT_SPHINCSSHA256128SSIMPLE
| p256_sphincssha256128ssimple | 0xfe68 |Yes| OQS_CODEPOINT_P256_SPHINCSSHA256128SSIMPLE
| rsa3072_sphincssha256128ssimple | 0xfe69 |Yes| OQS_CODEPOINT_RSA3072_SPHINCSSHA256128SSIMPLE
| sphincssha256192frobust | 0xfe6a |No| OQS_CODEPOINT_SPHINCSSHA256192FROBUST
| p384_sphincssha256192frobust | 0xfe6b |No| OQS_CODEPOINT_P384_SPHINCSSHA256192FROBUST
| sphincssha256192fsimple | 0xfe6c |No| OQS_CODEPOINT_SPHINCSSHA256192FSIMPLE
| p384_sphincssha256192fsimple | 0xfe6d |No| OQS_CODEPOINT_P384_SPHINCSSHA256192FSIMPLE
| sphincssha256192srobust | 0xfe6e |No| OQS_CODEPOINT_SPHINCSSHA256192SROBUST
| p384_sphincssha256192srobust | 0xfe6f |No| OQS_CODEPOINT_P384_SPHINCSSHA256192SROBUST
| sphincssha256192ssimple | 0xfe70 |No| OQS_CODEPOINT_SPHINCSSHA256192SSIMPLE
| p384_sphincssha256192ssimple | 0xfe71 |No| OQS_CODEPOINT_P384_SPHINCSSHA256192SSIMPLE
| sphincssha256256frobust | 0xfe72 |No| OQS_CODEPOINT_SPHINCSSHA256256FROBUST
| p521_sphincssha256256frobust | 0xfe73 |No| OQS_CODEPOINT_P521_SPHINCSSHA256256FROBUST
| sphincssha256256fsimple | 0xfe74 |No| OQS_CODEPOINT_SPHINCSSHA256256FSIMPLE
| p521_sphincssha256256fsimple | 0xfe75 |No| OQS_CODEPOINT_P521_SPHINCSSHA256256FSIMPLE
| sphincssha256256srobust | 0xfe76 |No| OQS_CODEPOINT_SPHINCSSHA256256SROBUST
| p521_sphincssha256256srobust | 0xfe77 |No| OQS_CODEPOINT_P521_SPHINCSSHA256256SROBUST
| sphincssha256256ssimple | 0xfe78 |No| OQS_CODEPOINT_SPHINCSSHA256256SSIMPLE
| p521_sphincssha256256ssimple | 0xfe79 |No| OQS_CODEPOINT_P521_SPHINCSSHA256256SSIMPLE
| sphincsshake256128frobust | 0xfe7a |No| OQS_CODEPOINT_SPHINCSSHAKE256128FROBUST
| p256_sphincsshake256128frobust | 0xfe7b |No| OQS_CODEPOINT_P256_SPHINCSSHAKE256128FROBUST
| rsa3072_sphincsshake256128frobust | 0xfe7c |No| OQS_CODEPOINT_RSA3072_SPHINCSSHAKE256128FROBUST
| sphincsshake256128fsimple | 0xfe7d |Yes| OQS_CODEPOINT_SPHINCSSHAKE256128FSIMPLE
| p256_sphincsshake256128fsimple | 0xfe7e |Yes| OQS_CODEPOINT_P256_SPHINCSSHAKE256128FSIMPLE
| rsa3072_sphincsshake256128fsimple | 0xfe7f |Yes| OQS_CODEPOINT_RSA3072_SPHINCSSHAKE256128FSIMPLE
| sphincsshake256128srobust | 0xfe80 |No| OQS_CODEPOINT_SPHINCSSHAKE256128SROBUST
| p256_sphincsshake256128srobust | 0xfe81 |No| OQS_CODEPOINT_P256_SPHINCSSHAKE256128SROBUST
| rsa3072_sphincsshake256128srobust | 0xfe82 |No| OQS_CODEPOINT_RSA3072_SPHINCSSHAKE256128SROBUST
| sphincsshake256128ssimple | 0xfe83 |No| OQS_CODEPOINT_SPHINCSSHAKE256128SSIMPLE
| p256_sphincsshake256128ssimple | 0xfe84 |No| OQS_CODEPOINT_P256_SPHINCSSHAKE256128SSIMPLE
| rsa3072_sphincsshake256128ssimple | 0xfe85 |No| OQS_CODEPOINT_RSA3072_SPHINCSSHAKE256128SSIMPLE
| sphincsshake256192frobust | 0xfe86 |No| OQS_CODEPOINT_SPHINCSSHAKE256192FROBUST
| p384_sphincsshake256192frobust | 0xfe87 |No| OQS_CODEPOINT_P384_SPHINCSSHAKE256192FROBUST
| sphincsshake256192fsimple | 0xfe88 |No| OQS_CODEPOINT_SPHINCSSHAKE256192FSIMPLE
| p384_sphincsshake256192fsimple | 0xfe89 |No| OQS_CODEPOINT_P384_SPHINCSSHAKE256192FSIMPLE
| sphincsshake256192srobust | 0xfe8a |No| OQS_CODEPOINT_SPHINCSSHAKE256192SROBUST
| p384_sphincsshake256192srobust | 0xfe8b |No| OQS_CODEPOINT_P384_SPHINCSSHAKE256192SROBUST
| sphincsshake256192ssimple | 0xfe8c |No| OQS_CODEPOINT_SPHINCSSHAKE256192SSIMPLE
| p384_sphincsshake256192ssimple | 0xfe8d |No| OQS_CODEPOINT_P384_SPHINCSSHAKE256192SSIMPLE
| sphincsshake256256frobust | 0xfe8e |No| OQS_CODEPOINT_SPHINCSSHAKE256256FROBUST
| p521_sphincsshake256256frobust | 0xfe8f |No| OQS_CODEPOINT_P521_SPHINCSSHAKE256256FROBUST
| sphincsshake256256fsimple | 0xfe90 |No| OQS_CODEPOINT_SPHINCSSHAKE256256FSIMPLE
| p521_sphincsshake256256fsimple | 0xfe91 |No| OQS_CODEPOINT_P521_SPHINCSSHAKE256256FSIMPLE
| sphincsshake256256srobust | 0xfe92 |No| OQS_CODEPOINT_SPHINCSSHAKE256256SROBUST
| p521_sphincsshake256256srobust | 0xfe93 |No| OQS_CODEPOINT_P521_SPHINCSSHAKE256256SROBUST
| sphincsshake256256ssimple | 0xfe94 |No| OQS_CODEPOINT_SPHINCSSHAKE256256SSIMPLE
| p521_sphincsshake256256ssimple | 0xfe95 |No| OQS_CODEPOINT_P521_SPHINCSSHAKE256256SSIMPLE
<!--- OQS_TEMPLATE_FRAGMENT_IDS_END -->

Changing code points
--------------------

In order to dynamically change the code point of any one algorithm, the respective
environment variable listed above has to be set to the `INT`eger value of the
desired code point. For example, as Cloudflare has chosen `0xfe30` as the code
point for their hybrid X25519_kyber512 implementation, the following command
can be used to successfully confirm interoperability between the oqs-provider
and the Cloudflare infrastructure using this hybrid classic/quantum-safe algorithm:

```
OQS_CODEPOINT_X25519_KYBER512=65072  ./openssl/apps/openssl s_client -groups x25519_kyber512 -connect cloudflare.com:443 -provider-path _build/oqsprov -provider oqsprovider -provider default
```

# OIDs

Along the same lines as the code points, X.509 OIDs may be subject to change
prior to final standardization. The environment variables below permit
adapting the OIDs of all supported signature algorithms as per the table below.

<!--- OQS_TEMPLATE_FRAGMENT_OIDS_START -->
|Algorithm name |    default OID    | enabled | environment variable |
|---------------|:-----------------:|:-------:|----------------------|
| dilithium2 | 1.3.6.1.4.1.2.267.7.4.4 |Yes| OQS_OID_DILITHIUM2
| p256_dilithium2 | 1.3.9999.2.7.1 |Yes| OQS_OID_P256_DILITHIUM2
| rsa3072_dilithium2 | 1.3.9999.2.7.2 |Yes| OQS_OID_RSA3072_DILITHIUM2
| dilithium3 | 1.3.6.1.4.1.2.267.7.6.5 |Yes| OQS_OID_DILITHIUM3
| p384_dilithium3 | 1.3.9999.2.7.3 |Yes| OQS_OID_P384_DILITHIUM3
| dilithium5 | 1.3.6.1.4.1.2.267.7.8.7 |Yes| OQS_OID_DILITHIUM5
| p521_dilithium5 | 1.3.9999.2.7.4 |Yes| OQS_OID_P521_DILITHIUM5
| dilithium2_aes | 1.3.6.1.4.1.2.267.11.4.4 |Yes| OQS_OID_DILITHIUM2_AES
| p256_dilithium2_aes | 1.3.9999.2.11.1 |Yes| OQS_OID_P256_DILITHIUM2_AES
| rsa3072_dilithium2_aes | 1.3.9999.2.11.2 |Yes| OQS_OID_RSA3072_DILITHIUM2_AES
| dilithium3_aes | 1.3.6.1.4.1.2.267.11.6.5 |Yes| OQS_OID_DILITHIUM3_AES
| p384_dilithium3_aes | 1.3.9999.2.11.3 |Yes| OQS_OID_P384_DILITHIUM3_AES
| dilithium5_aes | 1.3.6.1.4.1.2.267.11.8.7 |Yes| OQS_OID_DILITHIUM5_AES
| p521_dilithium5_aes | 1.3.9999.2.11.4 |Yes| OQS_OID_P521_DILITHIUM5_AES
| falcon512 | 1.3.9999.3.6 |Yes| OQS_OID_FALCON512
| p256_falcon512 | 1.3.9999.3.7 |Yes| OQS_OID_P256_FALCON512
| rsa3072_falcon512 | 1.3.9999.3.8 |Yes| OQS_OID_RSA3072_FALCON512
| falcon1024 | 1.3.9999.3.9 |Yes| OQS_OID_FALCON1024
| p521_falcon1024 | 1.3.9999.3.10 |Yes| OQS_OID_P521_FALCON1024
| sphincsharaka128frobust | 1.3.9999.6.1.1 |Yes| OQS_OID_SPHINCSHARAKA128FROBUST
| p256_sphincsharaka128frobust | 1.3.9999.6.1.2 |Yes| OQS_OID_P256_SPHINCSHARAKA128FROBUST
| rsa3072_sphincsharaka128frobust | 1.3.9999.6.1.3 |Yes| OQS_OID_RSA3072_SPHINCSHARAKA128FROBUST
| sphincsharaka128fsimple | 1.3.9999.6.1.4 |Yes| OQS_OID_SPHINCSHARAKA128FSIMPLE
| p256_sphincsharaka128fsimple | 1.3.9999.6.1.5 |Yes| OQS_OID_P256_SPHINCSHARAKA128FSIMPLE
| rsa3072_sphincsharaka128fsimple | 1.3.9999.6.1.6 |Yes| OQS_OID_RSA3072_SPHINCSHARAKA128FSIMPLE
| sphincsharaka128srobust | 1.3.9999.6.1.7 |No| OQS_OID_SPHINCSHARAKA128SROBUST
| p256_sphincsharaka128srobust | 1.3.9999.6.1.8 |No| OQS_OID_P256_SPHINCSHARAKA128SROBUST
| rsa3072_sphincsharaka128srobust | 1.3.9999.6.1.9 |No| OQS_OID_RSA3072_SPHINCSHARAKA128SROBUST
| sphincsharaka128ssimple | 1.3.9999.6.1.10 |No| OQS_OID_SPHINCSHARAKA128SSIMPLE
| p256_sphincsharaka128ssimple | 1.3.9999.6.1.11 |No| OQS_OID_P256_SPHINCSHARAKA128SSIMPLE
| rsa3072_sphincsharaka128ssimple | 1.3.9999.6.1.12 |No| OQS_OID_RSA3072_SPHINCSHARAKA128SSIMPLE
| sphincsharaka192frobust | 1.3.9999.6.2.1 |No| OQS_OID_SPHINCSHARAKA192FROBUST
| p384_sphincsharaka192frobust | 1.3.9999.6.2.2 |No| OQS_OID_P384_SPHINCSHARAKA192FROBUST
| sphincsharaka192fsimple | 1.3.9999.6.2.3 |No| OQS_OID_SPHINCSHARAKA192FSIMPLE
| p384_sphincsharaka192fsimple | 1.3.9999.6.2.4 |No| OQS_OID_P384_SPHINCSHARAKA192FSIMPLE
| sphincsharaka192srobust | 1.3.9999.6.2.5 |No| OQS_OID_SPHINCSHARAKA192SROBUST
| p384_sphincsharaka192srobust | 1.3.9999.6.2.6 |No| OQS_OID_P384_SPHINCSHARAKA192SROBUST
| sphincsharaka192ssimple | 1.3.9999.6.2.7 |No| OQS_OID_SPHINCSHARAKA192SSIMPLE
| p384_sphincsharaka192ssimple | 1.3.9999.6.2.8 |No| OQS_OID_P384_SPHINCSHARAKA192SSIMPLE
| sphincsharaka256frobust | 1.3.9999.6.3.1 |No| OQS_OID_SPHINCSHARAKA256FROBUST
| p521_sphincsharaka256frobust | 1.3.9999.6.3.2 |No| OQS_OID_P521_SPHINCSHARAKA256FROBUST
| sphincsharaka256fsimple | 1.3.9999.6.3.3 |No| OQS_OID_SPHINCSHARAKA256FSIMPLE
| p521_sphincsharaka256fsimple | 1.3.9999.6.3.4 |No| OQS_OID_P521_SPHINCSHARAKA256FSIMPLE
| sphincsharaka256srobust | 1.3.9999.6.3.5 |No| OQS_OID_SPHINCSHARAKA256SROBUST
| p521_sphincsharaka256srobust | 1.3.9999.6.3.6 |No| OQS_OID_P521_SPHINCSHARAKA256SROBUST
| sphincsharaka256ssimple | 1.3.9999.6.3.7 |No| OQS_OID_SPHINCSHARAKA256SSIMPLE
| p521_sphincsharaka256ssimple | 1.3.9999.6.3.8 |No| OQS_OID_P521_SPHINCSHARAKA256SSIMPLE
| sphincssha256128frobust | 1.3.9999.6.4.1 |Yes| OQS_OID_SPHINCSSHA256128FROBUST
| p256_sphincssha256128frobust | 1.3.9999.6.4.2 |Yes| OQS_OID_P256_SPHINCSSHA256128FROBUST
| rsa3072_sphincssha256128frobust | 1.3.9999.6.4.3 |Yes| OQS_OID_RSA3072_SPHINCSSHA256128FROBUST
| sphincssha256128fsimple | 1.3.9999.6.4.4 |No| OQS_OID_SPHINCSSHA256128FSIMPLE
| p256_sphincssha256128fsimple | 1.3.9999.6.4.5 |No| OQS_OID_P256_SPHINCSSHA256128FSIMPLE
| rsa3072_sphincssha256128fsimple | 1.3.9999.6.4.6 |No| OQS_OID_RSA3072_SPHINCSSHA256128FSIMPLE
| sphincssha256128srobust | 1.3.9999.6.4.7 |No| OQS_OID_SPHINCSSHA256128SROBUST
| p256_sphincssha256128srobust | 1.3.9999.6.4.8 |No| OQS_OID_P256_SPHINCSSHA256128SROBUST
| rsa3072_sphincssha256128srobust | 1.3.9999.6.4.9 |No| OQS_OID_RSA3072_SPHINCSSHA256128SROBUST
| sphincssha256128ssimple | 1.3.9999.6.4.10 |Yes| OQS_OID_SPHINCSSHA256128SSIMPLE
| p256_sphincssha256128ssimple | 1.3.9999.6.4.11 |Yes| OQS_OID_P256_SPHINCSSHA256128SSIMPLE
| rsa3072_sphincssha256128ssimple | 1.3.9999.6.4.12 |Yes| OQS_OID_RSA3072_SPHINCSSHA256128SSIMPLE
| sphincssha256192frobust | 1.3.9999.6.5.1 |No| OQS_OID_SPHINCSSHA256192FROBUST
| p384_sphincssha256192frobust | 1.3.9999.6.5.2 |No| OQS_OID_P384_SPHINCSSHA256192FROBUST
| sphincssha256192fsimple | 1.3.9999.6.5.3 |No| OQS_OID_SPHINCSSHA256192FSIMPLE
| p384_sphincssha256192fsimple | 1.3.9999.6.5.4 |No| OQS_OID_P384_SPHINCSSHA256192FSIMPLE
| sphincssha256192srobust | 1.3.9999.6.5.5 |No| OQS_OID_SPHINCSSHA256192SROBUST
| p384_sphincssha256192srobust | 1.3.9999.6.5.6 |No| OQS_OID_P384_SPHINCSSHA256192SROBUST
| sphincssha256192ssimple | 1.3.9999.6.5.7 |No| OQS_OID_SPHINCSSHA256192SSIMPLE
| p384_sphincssha256192ssimple | 1.3.9999.6.5.8 |No| OQS_OID_P384_SPHINCSSHA256192SSIMPLE
| sphincssha256256frobust | 1.3.9999.6.6.1 |No| OQS_OID_SPHINCSSHA256256FROBUST
| p521_sphincssha256256frobust | 1.3.9999.6.6.2 |No| OQS_OID_P521_SPHINCSSHA256256FROBUST
| sphincssha256256fsimple | 1.3.9999.6.6.3 |No| OQS_OID_SPHINCSSHA256256FSIMPLE
| p521_sphincssha256256fsimple | 1.3.9999.6.6.4 |No| OQS_OID_P521_SPHINCSSHA256256FSIMPLE
| sphincssha256256srobust | 1.3.9999.6.6.5 |No| OQS_OID_SPHINCSSHA256256SROBUST
| p521_sphincssha256256srobust | 1.3.9999.6.6.6 |No| OQS_OID_P521_SPHINCSSHA256256SROBUST
| sphincssha256256ssimple | 1.3.9999.6.6.7 |No| OQS_OID_SPHINCSSHA256256SSIMPLE
| p521_sphincssha256256ssimple | 1.3.9999.6.6.8 |No| OQS_OID_P521_SPHINCSSHA256256SSIMPLE
| sphincsshake256128frobust | 1.3.9999.6.7.1 |No| OQS_OID_SPHINCSSHAKE256128FROBUST
| p256_sphincsshake256128frobust | 1.3.9999.6.7.2 |No| OQS_OID_P256_SPHINCSSHAKE256128FROBUST
| rsa3072_sphincsshake256128frobust | 1.3.9999.6.7.3 |No| OQS_OID_RSA3072_SPHINCSSHAKE256128FROBUST
| sphincsshake256128fsimple | 1.3.9999.6.7.4 |Yes| OQS_OID_SPHINCSSHAKE256128FSIMPLE
| p256_sphincsshake256128fsimple | 1.3.9999.6.7.5 |Yes| OQS_OID_P256_SPHINCSSHAKE256128FSIMPLE
| rsa3072_sphincsshake256128fsimple | 1.3.9999.6.7.6 |Yes| OQS_OID_RSA3072_SPHINCSSHAKE256128FSIMPLE
| sphincsshake256128srobust | 1.3.9999.6.7.7 |No| OQS_OID_SPHINCSSHAKE256128SROBUST
| p256_sphincsshake256128srobust | 1.3.9999.6.7.8 |No| OQS_OID_P256_SPHINCSSHAKE256128SROBUST
| rsa3072_sphincsshake256128srobust | 1.3.9999.6.7.9 |No| OQS_OID_RSA3072_SPHINCSSHAKE256128SROBUST
| sphincsshake256128ssimple | 1.3.9999.6.7.10 |No| OQS_OID_SPHINCSSHAKE256128SSIMPLE
| p256_sphincsshake256128ssimple | 1.3.9999.6.7.11 |No| OQS_OID_P256_SPHINCSSHAKE256128SSIMPLE
| rsa3072_sphincsshake256128ssimple | 1.3.9999.6.7.12 |No| OQS_OID_RSA3072_SPHINCSSHAKE256128SSIMPLE
| sphincsshake256192frobust | 1.3.9999.6.8.1 |No| OQS_OID_SPHINCSSHAKE256192FROBUST
| p384_sphincsshake256192frobust | 1.3.9999.6.8.2 |No| OQS_OID_P384_SPHINCSSHAKE256192FROBUST
| sphincsshake256192fsimple | 1.3.9999.6.8.3 |No| OQS_OID_SPHINCSSHAKE256192FSIMPLE
| p384_sphincsshake256192fsimple | 1.3.9999.6.8.4 |No| OQS_OID_P384_SPHINCSSHAKE256192FSIMPLE
| sphincsshake256192srobust | 1.3.9999.6.8.5 |No| OQS_OID_SPHINCSSHAKE256192SROBUST
| p384_sphincsshake256192srobust | 1.3.9999.6.8.6 |No| OQS_OID_P384_SPHINCSSHAKE256192SROBUST
| sphincsshake256192ssimple | 1.3.9999.6.8.7 |No| OQS_OID_SPHINCSSHAKE256192SSIMPLE
| p384_sphincsshake256192ssimple | 1.3.9999.6.8.8 |No| OQS_OID_P384_SPHINCSSHAKE256192SSIMPLE
| sphincsshake256256frobust | 1.3.9999.6.9.1 |No| OQS_OID_SPHINCSSHAKE256256FROBUST
| p521_sphincsshake256256frobust | 1.3.9999.6.9.2 |No| OQS_OID_P521_SPHINCSSHAKE256256FROBUST
| sphincsshake256256fsimple | 1.3.9999.6.9.3 |No| OQS_OID_SPHINCSSHAKE256256FSIMPLE
| p521_sphincsshake256256fsimple | 1.3.9999.6.9.4 |No| OQS_OID_P521_SPHINCSSHAKE256256FSIMPLE
| sphincsshake256256srobust | 1.3.9999.6.9.5 |No| OQS_OID_SPHINCSSHAKE256256SROBUST
| p521_sphincsshake256256srobust | 1.3.9999.6.9.6 |No| OQS_OID_P521_SPHINCSSHAKE256256SROBUST
| sphincsshake256256ssimple | 1.3.9999.6.9.7 |No| OQS_OID_SPHINCSSHAKE256256SSIMPLE
| p521_sphincsshake256256ssimple | 1.3.9999.6.9.8 |No| OQS_OID_P521_SPHINCSSHAKE256256SSIMPLE
<!--- OQS_TEMPLATE_FRAGMENT_OIDS_END -->

# Key Encodings

By setting environment variables, oqs-provider can be configured to encode keys (subjectPublicKey and and privateKey ASN.1 structures) according to the following IETF drafts:

- https://datatracker.ietf.org/doc/draft-uni-qsckeys-dilithium/00/
- https://datatracker.ietf.org/doc/draft-uni-qsckeys-falcon/00/
- https://datatracker.ietf.org/doc/draft-uni-qsckeys-sphincsplus/00/

<!--- OQS_TEMPLATE_FRAGMENT_ENCODINGS_START -->
|Environment Variable | Permissible Values |
| --- | --- |
|`OQS_ENCODING_DILITHIUM2`|`draft-uni-qsckeys-dilithium-00/sk-pk`|
|`OQS_ENCODING_DILITHIUM3`|`draft-uni-qsckeys-dilithium-00/sk-pk`|
|`OQS_ENCODING_DILITHIUM5`|`draft-uni-qsckeys-dilithium-00/sk-pk`|
|`OQS_ENCODING_DILITHIUM2_AES`|`draft-uni-qsckeys-dilithium-00/sk-pk`|
|`OQS_ENCODING_DILITHIUM3_AES`|`draft-uni-qsckeys-dilithium-00/sk-pk`|
|`OQS_ENCODING_DILITHIUM5_AES`|`draft-uni-qsckeys-dilithium-00/sk-pk`|
|`OQS_ENCODING_FALCON512`|`draft-uni-qsckeys-falcon-00/sk-pk`|
|`OQS_ENCODING_FALCON1024`|`draft-uni-qsckeys-falcon-00/sk-pk`|
|`OQS_ENCODING_SPHINCSHARAKA128FROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSHARAKA128FSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSHARAKA128SROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSHARAKA128SSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSHARAKA192FROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSHARAKA192FSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSHARAKA192SROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSHARAKA192SSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSHARAKA256FROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSHARAKA256FSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSHARAKA256SROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSHARAKA256SSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHA256128FROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHA256128FSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHA256128SROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHA256128SSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHA256192FROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHA256192FSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHA256192SROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHA256192SSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHA256256FROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHA256256FSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHA256256SROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHA256256SSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHAKE256128FROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHAKE256128FSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHAKE256128SROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHAKE256128SSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHAKE256192FROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHAKE256192FSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHAKE256192SROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHAKE256192SSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHAKE256256FROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHAKE256256FSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHAKE256256SROBUST`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
|`OQS_ENCODING_SPHINCSSHAKE256256SSIMPLE`|`draft-uni-qsckeys-sphincsplus-00/sk-pk`|
<!--- OQS_TEMPLATE_FRAGMENT_ENCODINGS_END -->

If no environment variable is set, or if an unknown value is set, the default is 'no' encoding, meaning that key serialization uses the 'raw' keys of the crypto implementations. 

The test script `scripts/runtests_encodings.sh` (instead of `scripts/runtests.sh`) can be used for a test run with all supported encodings activated.