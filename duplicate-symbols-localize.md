# Duplicate Symbol Patch

Version `1.0.3` localizes three duplicate C++ symbols in:

`Frameworks/AliyunIdentityFace.framework/AliyunIdentityFace`

The same global symbols are also defined by:

`Frameworks/AliyunIdentityOcr.framework/AliyunIdentityOcr`

DCloud UTS cloud packaging links both static frameworks into `unimoduleCUniqAlibabaIDVerification.framework`, so duplicate global symbols fail the link step.

The symbols localized in the Face framework are:

```text
__Z9cropImagePKhiiiiiii
__Z16saveTensorToTxt2PN6IDVMNN6TensorERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
__Z22normalizeTensorInPlacePN6IDVMNN6TensorE
```

Command used:

```bash
xcrun nmedit -R duplicate-symbols-localize.txt Frameworks/AliyunIdentityFace.framework/AliyunIdentityFace
```
