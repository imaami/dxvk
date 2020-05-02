#include "dxvk_options.h"

namespace dxvk {

  DxvkOptions::DxvkOptions(const Config& config) {
    enableAsync           = config.getOption<bool>    ("dxvk.enableAsync",            false);
    enableStateCache      = config.getOption<bool>    ("dxvk.enableStateCache",       true);
    enableOpenVR          = config.getOption<bool>    ("dxvk.enableOpenVR",           true);
    enableOpenXR          = config.getOption<bool>    ("dxvk.enableOpenXR",           true);
    numAsyncThreads       = config.getOption<int32_t> ("dxvk.numAsyncThreads",        0);
    numCompilerThreads    = config.getOption<int32_t> ("dxvk.numCompilerThreads",     0);
    useRawSsbo            = config.getOption<Tristate>("dxvk.useRawSsbo",             Tristate::Auto);
    useEarlyDiscard       = config.getOption<Tristate>("dxvk.useEarlyDiscard",        Tristate::Auto);
    halveNvidiaHVVHeap    = config.getOption<Tristate>("dxvk.halveNvidiaHVVHeap",     Tristate::Auto);
    hud                   = config.getOption<std::string>("dxvk.hud", "");
  }

}
