project('c_bars', ['c'],default_options:['warning_level=0','c_std=gnu99'],
  subproject_dir: 'subprojects',version: '0.0.1',
  )
cc = meson.get_compiler('c')
pwd = meson.current_source_dir()
inc = [
  include_directories(
   'bars',
  ),
]
#############################################################################
subdir('meson/deps/greatest')
#############################################################################
subdir('bars')
subdir('bars-test')
