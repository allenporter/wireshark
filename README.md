This fork of wireshark is basically just adding support for pyreshark.  The
motivation is to have a binary available for machsniff to use.  machsniff has
separate instructions for installing its own dissector.

See README.macos for install instructions.  I used macports to install all of
my dependencies for me (e.g. "port install foo"), with the exception of Qt which
came from their mac installer and was installed into `$QT_DIR` below.  If you already
have all of the depenencies, then you can probably get away with just running
autogen.sh.

```
$ QT_DIR=/Users/$USER/Qt/5.4/clang_64
$ export PKG_CONFIG_PATH=/usr/local/lib/pkgconfig:/usr/X11/lib/pkgconfig:$QT_DIR/lib/pkgconfig
$ export PATH=$QT_DIR/bin/:$PATH
$ ./autogen.sh
$ ./configure
$ make
```

Note that make install currently doesn't work because pyreshark doesn't support
install.
