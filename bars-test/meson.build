bars_test_srcs = [
  'bars-test.c',
]
bars_include_dirs = [
  '.',
]
bars_test_deps = [
  bars_dep,
  c_greatest_dep,
]

if get_option('enable-binaries')
  bars_test_exec = executable('bars-test',
     bars_test_srcs,
     dependencies: bars_test_deps,
     include_directories: [
       inc,
       bars_include_dirs,
     ],
  )
endif
