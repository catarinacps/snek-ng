project('snek-ng', 'cpp',
  version : '0.1',
  default_options : [
    'warning_level=3',
    'cpp_std=gnu++20'])

cmake = import('cmake')

curses_dep = dependency('curses', method : 'auto')

cxxcurses_proj = cmake.subproject('cxxcurses')
cxxcurses_dep = cxxcurses_proj.dependency('cxxcurses')

# include_dir = include_directories('include')

subdir('src') # sources

exe = executable('snek-ng', proj_sources,
                 dependencies : [curses_dep, cxxcurses_dep],
                 install : true)

test('basic', exe)
