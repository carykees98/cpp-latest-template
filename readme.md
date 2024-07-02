# C++ Latest Template

## Setup

```sh
git clone https://github.com/carykees98/cpp-latest-template --recursive
```

### Configuration

- Update `project` name in `CMakeLists.txt`
- Update `target` names in `src/CMakeLists.txt` and `core/CMakeLists.txt`

### Build Instructions

### With `make`
```sh
cmake -B build
cmake --build build
```

### With `ninja`
If you don't have `ninja` installed it can be installed in Debian and its derivatives with the following command
```sh
sudo apt install ninja-build
```

Then run the following to configure CMake and build the project

```sh
cmake -G Ninja -B build
cmake --build build
```

## Default Github Actions
- [check-format.yml](./.github/workflows/check-format.yml): Checks to see if code is properly formatted using `clang-format` according to the style guide layed out in `.clang-format`
- [generate-doxygen.yml](./.github/workflows/generate-doxygen.yml): Generates `doxygen` documentation according to the spec layed out in the [Doxyfile](./doxygen/Doxyfile.in) and deploys it to Github Pages at `https://<github_username>.github.io/<repo_name>`
