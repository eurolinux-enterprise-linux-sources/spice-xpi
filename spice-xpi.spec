Name:           spice-xpi
Version:        2.8
Release:        8%{?dist}
Summary:        SPICE extension for Mozilla
Group:          Applications/Internet
License:        MPLv1.1 or GPLv2+ or LGPLv2+
URL:            http://spice-space.org
Source0:        http://spice-space.org/download/releases/%{name}-%{version}.tar.bz2
Patch0:         0001-xpi-add-Proxy-member.patch
Patch1:         xulrunner-31.patch

BuildRequires:  xulrunner-devel >= 31
BuildRequires:  autoconf automake libtool

ExclusiveArch:  i686 x86_64 armv6l armv7l armv7hl aarch64

Requires:       virt-viewer >= 0.5.3-1
Requires(post): policycoreutils

%description
Spice extension for Mozilla allows the client to be used from a web browser.

%prep
%setup -q -n %{name}-%{version}
%patch0 -p1
%patch1 -p1

%build

autoreconf -fi
%configure --enable-generator
make %{?_smp_mflags} CXXFLAGS="-std=gnu++1y"

%install
make install DESTDIR=$RPM_BUILD_ROOT
mkdir -p $RPM_BUILD_ROOT/%{_docdir}/spice-xpi/
mv $RPM_BUILD_ROOT/usr/share/spice-xpi/test.html $RPM_BUILD_ROOT/%{_docdir}/spice-xpi/test.html

%post
setsebool -P mozilla_plugin_use_spice true

%postun
setsebool -P mozilla_plugin_use_spice false

%files
%doc COPYING README
%doc %{_docdir}/spice-xpi/test.html
%defattr(-, root, root, -)
%{_libdir}/mozilla/*
%exclude %{_bindir}/spice-xpi-generator
%exclude %{_libdir}/mozilla/*.rdf
%exclude %{_libdir}/mozilla/plugins/*.a
%exclude %{_libdir}/mozilla/plugins/*.la

%changelog
* Wed Dec 03 2014 Christophe Fergeau <cfergeau@redhat.com> 2.8-8
- Fix compilation with xulrunner 31
  Resolves: rhbz#1165784

* Tue Aug 19 2014 Christophe Fergeau <cfergeau@redhat.com> 2.8-7
- Adjust selinux policy to allow use of USB redirection
  Resolves: rhbz#1075173
- Add test page to package
  Resolves: rhbz#959194

* Tue Aug 05 2014 Christophe Fergeau <cfergeau@redhat.com> 2.8-6
- Build on aarch64
  Resolves: rhbz#1068825

* Fri Dec 27 2013 Daniel Mach <dmach@redhat.com> - 2.8-5
- Mass rebuild 2013-12-27

* Fri Sep 13 2013 Christophe Fergeau <cfergeau@redhat.com> 2.8-4
- Add support for setting SPICE proxy through spice-xpi

* Fri Feb 15 2013 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 2.8-3
- Rebuilt for https://fedoraproject.org/wiki/Fedora_19_Mass_Rebuild

* Tue Nov 20 2012 Peter Hatina <phatina@redhat.com> - 2.8-2
- Extend build architectures

* Tue Nov 20 2012 Peter Hatina <phatina@redhat.com> - 2.8-1
- Upgrade to v2.8

* Sat Jul 21 2012 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 2.7-4
- Rebuilt for https://fedoraproject.org/wiki/Fedora_18_Mass_Rebuild

* Tue Jul 10 2012 Christophe Fergeau <cfergeau@redhat.com> - 2.7-3
- require virt-viewer instead of spice-client

* Wed Jun 06 2012 Peter Hatina <phatina@redhat.com> 2.7-2
- Fix updating connected status

* Mon Jan 30 2012 Peter Hatina <phatina@redhat.com> 2.7-1
- Update to 2.7

* Sat Jan 14 2012 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 2.5-5
- Rebuilt for https://fedoraproject.org/wiki/Fedora_17_Mass_Rebuild

* Mon Nov 21 2011 Peter Hatina <phatina@redhat.com> 2.5-4
- Fixed compile error

* Tue Aug 30 2011 Peter Hatina <phatina@redhat.com> 2.5-3
- Fixed invalid socket descriptor on reconnect

* Tue Jun 07 2011 Peter Hatina <phatina@redhat.com> 2.5-2
- Fixed logging
- Fixed SpiceController::Connect
- Fixed compiler warnings

* Mon May 09 2011 Peter Hatina <phatina@redhat.com> 2.5-1
- Initial package

