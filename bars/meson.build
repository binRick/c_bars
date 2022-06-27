bars_srcs = [
  'bars.c',
  'bars.h',
]
bars_inc_dirs = [
  '.',
  inc,
]
bars_deps = [
]
bars_lib = static_library('bars',
  bars_srcs,
  install: true,
  dependencies: bars_deps,
  include_directories: bars_inc_dirs,
)

bars_dep = declare_dependency(
  include_directories: bars_inc_dirs,
  link_with: bars_lib,
)
