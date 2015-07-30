# filezilla
FileZilla FTP Client SVN fork - https://www.filezilla-project.org/

## Dependencies
 - libgnutls28-dev
 - libwxbase3.0-0-unofficial
 - libwxbase3.0-dev
 - libwxgtk3.0-0-unofficial
 - libwxgtk3.0-dev
 - wx-common
 - wx3.0-i18n

To compile the latest upstream trunk, you also need **GCC 4.9**, otherwise it won't compile. This is because of the inclusion of several C++ 14 features that are not supported by GCC 4.8. At the time of writing, GCC 4.9 is not yet available in the official repositories of Ubuntu and derivatives (Mint, etc.). Thus, if you're using one of those you'll have to pull it from somewhere else. For example, from the Debian repository. Add this line to your `/etc/apt/sources.list`:
```
deb http://ftp.es.debian.org/debian/ jessie main
```
Feel free to replace `es` with your own country code.

And then execute:
```
# aptitude update
# aptitude install gcc-4.9
```


## Set up external repositories
```
# apt-key adv --fetch-keys http://repos.codelite.org/CodeLite.asc
# apt-add-repository 'deb http://repos.codelite.org/wx3.0.2/ubuntu/ trusty universe'
# apt-get update
```
