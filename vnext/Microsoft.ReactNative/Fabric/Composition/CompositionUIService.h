// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma once
#include "Composition.CompositionUIService.g.h"

namespace winrt::Microsoft::ReactNative::Composition::implementation {

struct CompositionUIService : CompositionUIServiceT<CompositionUIService> {
  CompositionUIService() = default;

  static void SetCompositionContext(
      const IReactPropertyBag &properties,
      const ICompositionContext &compositionContext) noexcept;

  static ICompositionContext GetCompositionContext(const IReactPropertyBag &properties) noexcept;

  static uint64_t GetTopLevelWindowHandle(const IReactPropertyBag &properties) noexcept;
  static void SetTopLevelWindowHandle(const IReactPropertyBag &properties, uint64_t windowHandle) noexcept;
};

} // namespace winrt::Microsoft::ReactNative::Composition::implementation

namespace winrt::Microsoft::ReactNative::Composition::factory_implementation {
struct CompositionUIService : CompositionUIServiceT<CompositionUIService, implementation::CompositionUIService> {};
} // namespace winrt::Microsoft::ReactNative::Composition::factory_implementation
