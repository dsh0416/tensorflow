#ifndef THIRD_PARTY_TENSORFLOW_CORE_PUBLIC_VERSION_H_
#define THIRD_PARTY_TENSORFLOW_CORE_PUBLIC_VERSION_H_

// TensorFlow uses semantic versioning, see http://semver.org/.

#define TF_MAJOR_VERSION 0
#define TF_MINOR_VERSION 5
#define TF_PATCH_VERSION 0

// TF_VERSION_SUFFIX is non-empty for pre-releases (e.g. "-alpha", "-alpha.1",
// "-beta", "-rc", "-rc.1")
#define TF_VERSION_SUFFIX ""

#define TF_STR_HELPER(x) #x
#define TF_STR(x) TF_STR_HELPER(x)

// e.g. "0.5.0" or "0.6.0-alpha".
#define TF_VERSION_STRING                                            \
  (TF_STR(TF_MAJOR_VERSION) "." TF_STR(TF_MINOR_VERSION) "." TF_STR( \
      TF_PATCH_VERSION) TF_VERSION_SUFFIX)

// TODO(josh11b): Public API functions for exporting the above.

#endif  // THIRD_PARTY_TENSORFLOW_CORE_PUBLIC_VERSION_H_
