%define tarname spice-xpi
%define tarversion 2.7
Name:           spice-xpi
Version:        2.7
Release:        25%{?dist}
Summary: SPICE extension for Mozilla
Group: Applications/Internet
License:        GPLv2+
URL:            http://www.redhat.com/
Source0:        %{tarname}-%{tarversion}.tar.bz2
Patch1:         spice-xpi-01-build-cachedir.patch
Patch2:         spice-xpi-02-usbrdrctrl.patch
Patch3:         spice-xpi-03-logging.patch
Patch4:         spice-xpi-04-logger-config-path.patch
Patch5:         spice-xpi-05-connected-status.patch
Patch6:         spice-xpi-06-remove-trust-store-file.patch
Patch7:         spice-xpi-07-export-an-environment-variable-with-the-foreign-menu.patch
Patch8:         spice-xpi-08-add-smartcard-option.patch
Patch9:         spice-xpi-09-send-ctrlaltdelete-message.patch
Patch10:        spice-xpi-10-log-set-title.patch
Patch11:        spice-xpi-11-disconnect.patch
Patch12:        spice-xpi-12-coverity-warnings-fix.patch
Patch13:        spice-xpi-13-add-support-for-DisableEffects-and-ColorDepth.patch
Patch14:        spice-xpi-14-Add-support-for-new-USB-redirection.patch
Patch15:        spice-xpi-15-remove-leading-s-from-ssl-channels.patch
Patch16:        spice-xpi-16-SetSSLChannels-add-ssmartcard-susbredir-stunnel.patch
Patch17:        spice-xpi-17-disconnect-signal-handling.patch
Patch18:        spice-xpi-18-validate-ports.patch
Patch19:        spice-xpi-19-remove-foreign-file.patch
Patch20:        spice-xpi-20-xpi-add-Proxy-member.patch
Patch21:        spice-xpi-21-avoid-crash-after-45s.patch
Patch22:        spice-xpi-22-exit-if-already-connected.patch

BuildRoot:      %{_tmppath}/%{tarname}-%{version}-%{release}-root-%(%{__id_u} -n)

BuildRequires:  gcc-c++
BuildRequires:  zip
BuildRequires:  log4cpp-devel
BuildRequires:  libX11-devel
BuildRequires:  xulrunner-devel
# for autoreconf
BuildRequires:  automake
BuildRequires:  autoconf
BuildRequires:  libtool

ExclusiveArch:  x86_64 %{ix86}

Requires: firefox
Requires: virt-viewer >= 0.5.2-4
Requires: log4cpp

%description
SPICE extension for mozilla allows the client to be used from a web browser.

%prep
%setup -q -n %{tarname}-%{tarversion}
%patch1 -p1
%patch2 -p1
%patch3 -p1
%patch4 -p1
%patch5 -p1
%patch6 -p1
%patch7 -p1
%patch8 -p1
%patch9 -p1
%patch10 -p1
%patch11 -p1
%patch12 -p1
%patch13 -p1
%patch14 -p1
%patch15 -p1
%patch16 -p1
%patch17 -p1
%patch18 -p1
%patch19 -p1
%patch20 -p1
%patch21 -p1
%patch22 -p1

%build
autoreconf
%configure
make %{?_smp_mflags}


%install
rm -rf $RPM_BUILD_ROOT
make install DESTDIR=$RPM_BUILD_ROOT


%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-, root, root)
%{_libdir}/mozilla/plugins/*
%{_sysconfdir}/spice/
%exclude %{_libdir}/mozilla/*.rdf
%exclude %{_libdir}/mozilla/plugins/*.a
%exclude %{_libdir}/mozilla/plugins/*.la
%doc COPYING README

%changelog
* Tue Jun 03 2014 Marc-André Lureau <marcandre.lureau@redhat.com> - 2.7-25
- Don't crash after unsuccessful connection attempt.
  Resolves: rhbz#1073461

* Thu Aug 08 2013 Christophe Fergeau <cfergeau@redhat.com> 2.7-24
- Add support for setting proxy through controller
  Resolves: rhbz#994613

* Mon Jun 17 2013 Peter Hatina <phatina@redhat.com> 2.7-23
- Fix remove foreign file
  Resolves: rhbz#882339

* Tue Jul 31 2012 Peter Hatina <phatina@redhat.com> 2.7-22
- Add tcp ports validation
  Resolves: rhbz#805602

* Tue Jul 31 2012 Peter Hatina <phatina@redhat.com> - 2.7-21
- Fix signal handling when disconnecting by page
  Resolves: rhbz#810583

* Mon May 21 2012 Alon Levy <alevy@redhat.com> - 2.7-20
- Remove leading 's' from smartcard, usbredir and tunnel channels.
  Resolves: rhbz#823579

* Mon Apr 23 2012 Peter Hatina <phatina@redhat.com> - 2.7-19
- Remove leading 's' from all spice channel names
  Resolves: rhbz#790416

* Tue Apr 17 2012 Christophe Fergeau <cfergeau@redhat.com> - 2.7-18
- Replace the Requires: spice-client with a Requires: virt-viewer
  Resolves: rhbz#813231

* Thu Apr 05 2012 Christophe Fergeau <cfergeau@redhat.com> - 2.7-17
- Add WAN options to spice-xpi plugin
  Resolves: rhbz#747313
- Add controller messages for new USB redirection
  Resolves: rhbz#807303

* Mon Mar 26 2012 Peter Hatina <phatina@redhat.com> 2.7.16
- Fix coverity warnings
  Resolves: rhbz#806215

* Wed Mar 21 2012 Peter Hatina <phatina@redhat.com> 2.7.15
- Fix send SIGTERM to every process
  Resolves: rhbz#803876

* Wed Mar 07 2012 Peter Hatina <phatina@redhat.com> 2.7.14
- Fix malformed log string for title
  Resolves: rhbz#798995

* Tue Mar 06 2012 Christophe Fergeau <cfergeau@redhat.com> - 2.7-13
- Fix SendCtrlAltDelete property name so that enabling/disabling
  Ctrl+Alt+Del from the rhev/ovirt portal actually works
  Related: rhbz#752090

* Mon Mar 05 2012 Marc-André Lureau <marcandre.lureau@redhat.com> - 2.7-12
- Requires spice-client 0.8.2-13.
  Resolves: rhbz#784846

* Mon Mar 05 2012 Christophe Fergeau <cfergeau@redhat.com> - 2.7-11
- Add support for sending the CONTROLLER_SEND_CAD message
  Resolves: rhbz#752090

* Fri Mar 02 2012 Marc-André Lureau <marcandre.lureau@redhat.com> 2.7-10
- Add smartcard attribute.
  Resolves: rhbz#641828

* Wed Feb 29 2012 Marc-André Lureau <marcandre.lureau@redhat.com> 2.7-9
- Export foreign menu path for alternative clients
  Resolves: rhbz#784846

* Tue Feb 28 2012 Peter Hatina <phatina@redhat.com> 2.7-8
- Fixed trust store file removal
  Resolves: rhbz#798283

* Tue Feb 28 2012 Peter Hatina <phatina@redhat.com> 2.7-7
- Fixed updating connected status
  Resolves: rhbz#798266

* Tue Feb 21 2012 Peter Hatina <phatina@redhat.com> 2.7-6
- Fixed mozilla plugins directory ownership
  Resolves: rhbz#795514

* Thu Feb 16 2012 Peter Hatina <phatina@redhat.com> 2.7-5
- Fixed logger config path
  Resolves: rhbz#790391

* Tue Feb 14 2012 Peter Hatina <phatina@redhat.com> 2.7-4
- Additional logging
  Resolves: rhbz#753155

* Thu Feb 09 2012 Peter Hatina <phatina@redhat.com> 2.7-3
- Re-add usbrdrctrl
  Resolves: rhbz#787614

* Tue Feb 07 2012 Peter Hatina <phatina@redhat.com> 2.7-2
- Build fix
  Resolves: rhbz#788026

* Fri Jan 27 2012 Marc-Andre Lureau <marcandre.lureau@redhat.com> 2.7-1
- Update to upstream 2.7 release, support /usr/libexe/spice-xpi-client
  Resolves: rhbz#784846

* Thu Mar 31 2011 Peter Hatina <phatina@redhat.com> 2.4-4
- Fix security vulnerability CVE-2011-0012 (rhbz#639869)
  Resolves: rhbz#639871

* Wed Mar 23 2011 Peter Hatina <phatina@redhat.com> 2.4-3
- Fix security vulnerability CVE-2011-1179 (rhbz#689931)
  Resolves: rhbz#689933

* Thu Feb 3 2011 Uri Lublin <uril@redhat.com> 2.4-2
- add npplat.h to Makefile.am sources
- add nsISpicec.xpt to Makefile.am EXTRA_DIST
- add version to plugin name string
Resolves: #672761
- change location & name  of logfile & unix-domain-socket
Resolves: #630601
- look for spicec in /usr/bin if not found in /usr/libexec
Resolves: #672497


* Wed Aug 4 2010 Martin Stransky <stransky@redhat.com > 2.4-1
- fixed rhbz#620445, rhbz#620447, rhbz#620448

* Tue Jul 27 2010 Martin Stransky <stransky@redhat.com > 2.3-0.5
- rhbz#618292 - NPRuntime support

* Wed Jul 14 2010 Uri Lublin <uril@redhat.com> 2.3-0.4
- ~nsPluginInstance: check mScriptablePeer before accessing it
  Resolves: #604678

* Thu Jun 24 2010 Uri Lublin <uril@redhat.com> 2.3-0.3
- Build packages for i686 too.
  Resolves: #604661

* Tue Jun 15 2010 Ray Strode <rstrode@redhat.com> 2.3-0.2
- Change dep to spice-client from qspice-client
  Resolves: #604202

* Thu Jun 10 2010 Dennis Gregorovic <dgregor@redhat.com> - 2.3-0.1
- Rebuilt for RHEL 6
- Related: rhbz#552646

* Mon Feb 01 2010 Yuval Kashtan <ykashtan@redhat.com> - 2.3-0.el6
- RHEL-6.0 with new controller

* Wed Jan 20 2010 Yuval Kashtan <ykashtan@redhat.com> - 2.2-0.el5
- Initial package

