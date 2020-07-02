
#include <objc/objc.h>

//////////////////////////////////////////////////////
// iOS Stuffs
#if defined(PLATFORM_IOS)
#import <UIKit/UIDevice.h>
#import <UIKit/UIKit.h>
#import <CommonCrypto/CommonDigest.h>

void _objc_sha1(unsigned char *input, int len, unsigned char output[20]);
void _objc_sha1(unsigned char *input, int len, unsigned char output[20])
{
    CC_SHA1(input, len, output);
}

void _objc_sha256(unsigned char *input, int len, unsigned char output[32]);
void _objc_sha256(unsigned char *input, int len, unsigned char output[32])
{
    CC_SHA256(input, len, output);
}

void _objc_sha384(unsigned char *input, int len, unsigned char output[48]);
void _objc_sha384(unsigned char *input, int len, unsigned char output[48])
{
    CC_SHA384(input, len, output);
}

void _objc_sha512(unsigned char *input, int len, unsigned char output[64]);
void _objc_sha512(unsigned char *input, int len, unsigned char output[64])
{
    CC_SHA512(input, len, output);
}

#endif
