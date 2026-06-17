Pod::Spec.new do |s|
  s.name = 'CUniqAlibabaIDVerificationSDK'
  s.version = '1.0.0'
  s.summary = 'Alibaba ID Verification binary SDK for CUnique UTS plugin'
  s.description = 'Vendored Alibaba ID Verification frameworks and resource bundles used by the CUnique UTS plugin.'
  s.homepage = 'https://REPLACE_WITH_YOUR_GIT_REPO_URL'
  s.license = { :type => 'Commercial' }
  s.author = { 'CUniq' => 'dev@example.com' }

  s.platform = :ios, '13.0'
  s.source = {
    :git => 'https://REPLACE_WITH_YOUR_GIT_REPO_URL.git',
    :tag => s.version.to_s
  }

  s.ios.vendored_frameworks = [
    'Frameworks/AliyunIdentityPlatform.framework',
    'Frameworks/AliyunIdentityFace.framework',
    'Frameworks/AliyunIdentityOcr.framework',
    'Frameworks/AliyunIdentityNFC.framework',
    'Frameworks/AliyunIdentityUtils.framework',
    'Frameworks/AliyunOSSiOS.framework',
    'Frameworks/IDVMNN.framework',
    'Frameworks/OpenSSL.framework',
    'Frameworks/faceguard.framework',
    'Frameworks/AliyunIdentityNFC.framework/Frameworks/AliyunIdentityPlatform.framework'
  ]

  s.ios.resources = [
    'Resources/*.bundle',
    'Frameworks/**/*.bundle'
  ]

  s.preserve_paths = [
    'Frameworks/**/*.framework',
    'Resources/*.bundle'
  ]

  s.frameworks = [
    'AudioToolbox',
    'CoreML',
    'Accelerate',
    'AVFoundation',
    'CoreTelephony',
    'SystemConfiguration',
    'UIKit',
    'Foundation',
    'WebKit',
    'CoreMotion',
    'CoreMedia',
    'CoreVideo',
    'CoreNFC',
    'CryptoKit',
    'CryptoTokenKit',
    'Security'
  ]

  s.libraries = [
    'c++',
    'z',
    'resolv',
    'sqlite3'
  ]
end
