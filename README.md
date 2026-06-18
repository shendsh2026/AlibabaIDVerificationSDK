# AlibabaIDVerificationSDK

Binary CocoaPods package for the ue Alibaba ID Verification UTS plugin.

This repository contains the Alibaba ID Verification iOS frameworks and resource bundles that were previously stored directly in:

`uni_modules/-Alibaba-ID-Verification/utssdk/app-ios`

## Contents

- `Frameworks/*.framework`: Alibaba ID Verification and related binary frameworks
- `Frameworks/**/*.bundle`: resource bundles packaged inside vendor frameworks
- `Resources/*.bundle`: top-level resource bundles required by the SDK
- `AlibabaIDVerificationSDK.podspec`: CocoaPods binary podspec
- `strip-report.txt`: record of the safe `strip -S` pass applied to the copied binaries

## Publish

Replace the placeholder Git URL in `AlibabaIDVerificationSDK.podspec`, then push the repository and tag:

```bash
git remote add origin <YOUR_GIT_REPO_URL>
git push -u origin main
git tag 1.0.0
git push origin 1.0.0
```

The Git repository must be reachable by the DCloud cloud packaging environment. A private repository that requires interactive login may fail during cloud build.

## Local Smoke Test

```bash
mkdir -p /tmp/-pod-test
cd /tmp/-pod-test
pod init
```

Edit `Podfile`:

```ruby
platform :ios, '13.0'

target 'TestApp' do
  pod 'AlibabaIDVerificationSDK',
      :git => '<YOUR_GIT_REPO_URL>',
      :tag => '1.0.0'
end
```

Then run:

```bash
pod install --verbose
```

## UTS Plugin Config

After the remote Pod is available, update:

`uni_modules/-Alibaba-ID-Verification/utssdk/app-ios/config.json`

Use `UTS-config-snippet.json` as the reference, then remove local `Frameworks` and `Resources` from the UTS plugin directory.
