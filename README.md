Portable Ping, pinging made easy
================================

PPing is a C library allowing to make ping requests. It aims at being portable
and not requiring non-necessary privileges. As such, you can use the same
simple interface on Linux, Windows and OSX without requiring root or
administrator permissions.

It also comes without dependencies outside of standard system libraries,
no include path, nor library to install.

If you want a header-only version, just include the .c

How does it work
----------------

This lib knows three ways to emit ping requests: raw socket, icmp socket and IcmpSendEcho.

* raw socket: universally supported, but requires root/administrator privileges.
* icmp socket: supported by Linux and some other Unix, does not require root privileges.
* IcmpSendEcho: supported by Windows (since Windows 2000 and Windows XP), does not require administrator privileges.

The lib selects its implementation based on whatever works.

Incredibly interesting facts
----------------------------

Author: Sylvain Gadrat

License: WTFPL v2 (except for parts annotated as copy-pasted from random locations, they are the property of their authors)
