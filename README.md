# c_utils
C utils I like to have.
## Add to your repo
In your repo root folder
* `git submodule add https://github.com/lakazatong/c_utils`
## Include
* `#include "c_utils/utils/all.h"`
## Update your submodules
* `git submodule update --remote --merge`
## Remove a submodule
* `git submodule deinit -f path/to/submodule`
* `rm -rf .git/modules/path/to/submodule`
* `git rm -f path/to/submodule`

Taken from [here](https://gist.github.com/myusuf3/7f645819ded92bda6677?permalink_comment_id=3915500#gistcomment-3915500)
## Example Makefile
An example Makefile can be found [here](https://github.com/lakazatong/beatmap_parser/blob/main/Makefile)