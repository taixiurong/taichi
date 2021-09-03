#pragma once

#include "taichi/ir/pass.h"

namespace taichi {
namespace lang {

class MakeMeshAttributeLocal : public Pass {
 public:
  static const PassID id;

  struct Args {
    std::string kernel_name;
  };
};

}  // namespace lang
}  // namespace taichi
