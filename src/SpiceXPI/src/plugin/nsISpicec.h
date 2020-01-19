/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM ../../../../SpiceXPI/src/plugin/nsISpicec.idl
 */

#ifndef __gen_nsISpicec_h__
#define __gen_nsISpicec_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsISpicec */
#define NS_ISPICEC_IID_STR "d2d536a0-b6fc-11d5-9d10-0060b0fbd8ac"

#define NS_ISPICEC_IID \
  {0xd2d536a0, 0xb6fc, 0x11d5, \
    { 0x9d, 0x10, 0x00, 0x60, 0xb0, 0xfb, 0xd8, 0xac }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISpicec : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISPICEC_IID)

  /* attribute string hostIP; */
  NS_SCRIPTABLE NS_IMETHOD GetHostIP(char * *aHostIP) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetHostIP(const char * aHostIP) = 0;

  /* attribute string port; */
  NS_SCRIPTABLE NS_IMETHOD GetPort(char * *aPort) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPort(const char * aPort) = 0;

  /* attribute string SecurePort; */
  NS_SCRIPTABLE NS_IMETHOD GetSecurePort(char * *aSecurePort) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSecurePort(const char * aSecurePort) = 0;

  /* attribute string Password; */
  NS_SCRIPTABLE NS_IMETHOD GetPassword(char * *aPassword) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPassword(const char * aPassword) = 0;

  /* attribute string CipherSuite; */
  NS_SCRIPTABLE NS_IMETHOD GetCipherSuite(char * *aCipherSuite) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCipherSuite(const char * aCipherSuite) = 0;

  /* attribute string SSLChannels; */
  NS_SCRIPTABLE NS_IMETHOD GetSSLChannels(char * *aSSLChannels) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSSLChannels(const char * aSSLChannels) = 0;

  /* attribute string HostSubject; */
  NS_SCRIPTABLE NS_IMETHOD GetHostSubject(char * *aHostSubject) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetHostSubject(const char * aHostSubject) = 0;

  /* attribute boolean fullScreen; */
  NS_SCRIPTABLE NS_IMETHOD GetFullScreen(bool *aFullScreen) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFullScreen(bool aFullScreen) = 0;

  /* attribute boolean AdminConsole; */
  NS_SCRIPTABLE NS_IMETHOD GetAdminConsole(bool *aAdminConsole) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAdminConsole(bool aAdminConsole) = 0;

  /* attribute string Title; */
  NS_SCRIPTABLE NS_IMETHOD GetTitle(char * *aTitle) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTitle(const char * aTitle) = 0;

  /* attribute string dynamicMenu; */
  NS_SCRIPTABLE NS_IMETHOD GetDynamicMenu(char * *aDynamicMenu) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDynamicMenu(const char * aDynamicMenu) = 0;

  /* attribute string NumberOfMonitors; */
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfMonitors(char * *aNumberOfMonitors) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNumberOfMonitors(const char * aNumberOfMonitors) = 0;

  /* attribute string GuestHostName; */
  NS_SCRIPTABLE NS_IMETHOD GetGuestHostName(char * *aGuestHostName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetGuestHostName(const char * aGuestHostName) = 0;

  /* attribute string HotKey; */
  NS_SCRIPTABLE NS_IMETHOD GetHotKey(char * *aHotKey) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetHotKey(const char * aHotKey) = 0;

  /* attribute boolean NoTaskMgrExecution; */
  NS_SCRIPTABLE NS_IMETHOD GetNoTaskMgrExecution(bool *aNoTaskMgrExecution) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetNoTaskMgrExecution(bool aNoTaskMgrExecution) = 0;

  /* attribute boolean SendCtrlAltDelete; */
  NS_SCRIPTABLE NS_IMETHOD GetSendCtrlAltDelete(bool *aSendCtrlAltDelete) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSendCtrlAltDelete(bool aSendCtrlAltDelete) = 0;

  /* attribute unsigned short UsbListenPort; */
  NS_SCRIPTABLE NS_IMETHOD GetUsbListenPort(PRUint16 *aUsbListenPort) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetUsbListenPort(PRUint16 aUsbListenPort) = 0;

  /* attribute boolean UsbAutoShare; */
  NS_SCRIPTABLE NS_IMETHOD GetUsbAutoShare(bool *aUsbAutoShare) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetUsbAutoShare(bool aUsbAutoShare) = 0;

  /* attribute boolean Smartcard; */
  NS_SCRIPTABLE NS_IMETHOD GetSmartcard(bool *aSmartcard) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSmartcard(bool aSmartcard) = 0;

  /* attribute string ColorDepth; */
  NS_SCRIPTABLE NS_IMETHOD GetColorDepth(char * *aColorDepth) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetColorDepth(const char * aColorDepth) = 0;

  /* attribute string DisableEffects; */
  NS_SCRIPTABLE NS_IMETHOD GetDisableEffects(char * *aDisableEffects) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDisableEffects(const char * aDisableEffects) = 0;

  /* attribute string TrustStore; */
  NS_SCRIPTABLE NS_IMETHOD GetTrustStore(char * *aTrustStore) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTrustStore(const char * aTrustStore) = 0;

  /* void connect (); */
  NS_SCRIPTABLE NS_IMETHOD Connect(void) = 0;

  /* void show (); */
  NS_SCRIPTABLE NS_IMETHOD Show(void) = 0;

  /* void disconnect (); */
  NS_SCRIPTABLE NS_IMETHOD Disconnect(void) = 0;

  /* void SetLanguageStrings (in string section, in string lang); */
  NS_SCRIPTABLE NS_IMETHOD SetLanguageStrings(const char * section, const char * lang) = 0;

  /* void SetUsbFilter (in string filter); */
  NS_SCRIPTABLE NS_IMETHOD SetUsbFilter(const char * filter) = 0;

  /* long ConnectedStatus (); */
  NS_SCRIPTABLE NS_IMETHOD ConnectedStatus(PRInt32 *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISpicec, NS_ISPICEC_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISPICEC \
  NS_SCRIPTABLE NS_IMETHOD GetHostIP(char * *aHostIP); \
  NS_SCRIPTABLE NS_IMETHOD SetHostIP(const char * aHostIP); \
  NS_SCRIPTABLE NS_IMETHOD GetPort(char * *aPort); \
  NS_SCRIPTABLE NS_IMETHOD SetPort(const char * aPort); \
  NS_SCRIPTABLE NS_IMETHOD GetSecurePort(char * *aSecurePort); \
  NS_SCRIPTABLE NS_IMETHOD SetSecurePort(const char * aSecurePort); \
  NS_SCRIPTABLE NS_IMETHOD GetPassword(char * *aPassword); \
  NS_SCRIPTABLE NS_IMETHOD SetPassword(const char * aPassword); \
  NS_SCRIPTABLE NS_IMETHOD GetCipherSuite(char * *aCipherSuite); \
  NS_SCRIPTABLE NS_IMETHOD SetCipherSuite(const char * aCipherSuite); \
  NS_SCRIPTABLE NS_IMETHOD GetSSLChannels(char * *aSSLChannels); \
  NS_SCRIPTABLE NS_IMETHOD SetSSLChannels(const char * aSSLChannels); \
  NS_SCRIPTABLE NS_IMETHOD GetHostSubject(char * *aHostSubject); \
  NS_SCRIPTABLE NS_IMETHOD SetHostSubject(const char * aHostSubject); \
  NS_SCRIPTABLE NS_IMETHOD GetFullScreen(bool *aFullScreen); \
  NS_SCRIPTABLE NS_IMETHOD SetFullScreen(bool aFullScreen); \
  NS_SCRIPTABLE NS_IMETHOD GetAdminConsole(bool *aAdminConsole); \
  NS_SCRIPTABLE NS_IMETHOD SetAdminConsole(bool aAdminConsole); \
  NS_SCRIPTABLE NS_IMETHOD GetTitle(char * *aTitle); \
  NS_SCRIPTABLE NS_IMETHOD SetTitle(const char * aTitle); \
  NS_SCRIPTABLE NS_IMETHOD GetDynamicMenu(char * *aDynamicMenu); \
  NS_SCRIPTABLE NS_IMETHOD SetDynamicMenu(const char * aDynamicMenu); \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfMonitors(char * *aNumberOfMonitors); \
  NS_SCRIPTABLE NS_IMETHOD SetNumberOfMonitors(const char * aNumberOfMonitors); \
  NS_SCRIPTABLE NS_IMETHOD GetGuestHostName(char * *aGuestHostName); \
  NS_SCRIPTABLE NS_IMETHOD SetGuestHostName(const char * aGuestHostName); \
  NS_SCRIPTABLE NS_IMETHOD GetHotKey(char * *aHotKey); \
  NS_SCRIPTABLE NS_IMETHOD SetHotKey(const char * aHotKey); \
  NS_SCRIPTABLE NS_IMETHOD GetNoTaskMgrExecution(bool *aNoTaskMgrExecution); \
  NS_SCRIPTABLE NS_IMETHOD SetNoTaskMgrExecution(bool aNoTaskMgrExecution); \
  NS_SCRIPTABLE NS_IMETHOD GetSendCtrlAltDelete(bool *aSendCtrlAltDelete); \
  NS_SCRIPTABLE NS_IMETHOD SetSendCtrlAltDelete(bool aSendCtrlAltDelete); \
  NS_SCRIPTABLE NS_IMETHOD GetUsbListenPort(PRUint16 *aUsbListenPort); \
  NS_SCRIPTABLE NS_IMETHOD SetUsbListenPort(PRUint16 aUsbListenPort); \
  NS_SCRIPTABLE NS_IMETHOD GetUsbAutoShare(bool *aUsbAutoShare); \
  NS_SCRIPTABLE NS_IMETHOD SetUsbAutoShare(bool aUsbAutoShare); \
  NS_SCRIPTABLE NS_IMETHOD GetSmartcard(bool *aSmartcard); \
  NS_SCRIPTABLE NS_IMETHOD SetSmartcard(bool aSmartcard); \
  NS_SCRIPTABLE NS_IMETHOD GetColorDepth(char * *aColorDepth); \
  NS_SCRIPTABLE NS_IMETHOD SetColorDepth(const char * aColorDepth); \
  NS_SCRIPTABLE NS_IMETHOD GetDisableEffects(char * *aDisableEffects); \
  NS_SCRIPTABLE NS_IMETHOD SetDisableEffects(const char * aDisableEffects); \
  NS_SCRIPTABLE NS_IMETHOD GetTrustStore(char * *aTrustStore); \
  NS_SCRIPTABLE NS_IMETHOD SetTrustStore(const char * aTrustStore); \
  NS_SCRIPTABLE NS_IMETHOD Connect(void); \
  NS_SCRIPTABLE NS_IMETHOD Show(void); \
  NS_SCRIPTABLE NS_IMETHOD Disconnect(void); \
  NS_SCRIPTABLE NS_IMETHOD SetLanguageStrings(const char * section, const char * lang); \
  NS_SCRIPTABLE NS_IMETHOD SetUsbFilter(const char * filter); \
  NS_SCRIPTABLE NS_IMETHOD ConnectedStatus(PRInt32 *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISPICEC(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetHostIP(char * *aHostIP) { return _to GetHostIP(aHostIP); } \
  NS_SCRIPTABLE NS_IMETHOD SetHostIP(const char * aHostIP) { return _to SetHostIP(aHostIP); } \
  NS_SCRIPTABLE NS_IMETHOD GetPort(char * *aPort) { return _to GetPort(aPort); } \
  NS_SCRIPTABLE NS_IMETHOD SetPort(const char * aPort) { return _to SetPort(aPort); } \
  NS_SCRIPTABLE NS_IMETHOD GetSecurePort(char * *aSecurePort) { return _to GetSecurePort(aSecurePort); } \
  NS_SCRIPTABLE NS_IMETHOD SetSecurePort(const char * aSecurePort) { return _to SetSecurePort(aSecurePort); } \
  NS_SCRIPTABLE NS_IMETHOD GetPassword(char * *aPassword) { return _to GetPassword(aPassword); } \
  NS_SCRIPTABLE NS_IMETHOD SetPassword(const char * aPassword) { return _to SetPassword(aPassword); } \
  NS_SCRIPTABLE NS_IMETHOD GetCipherSuite(char * *aCipherSuite) { return _to GetCipherSuite(aCipherSuite); } \
  NS_SCRIPTABLE NS_IMETHOD SetCipherSuite(const char * aCipherSuite) { return _to SetCipherSuite(aCipherSuite); } \
  NS_SCRIPTABLE NS_IMETHOD GetSSLChannels(char * *aSSLChannels) { return _to GetSSLChannels(aSSLChannels); } \
  NS_SCRIPTABLE NS_IMETHOD SetSSLChannels(const char * aSSLChannels) { return _to SetSSLChannels(aSSLChannels); } \
  NS_SCRIPTABLE NS_IMETHOD GetHostSubject(char * *aHostSubject) { return _to GetHostSubject(aHostSubject); } \
  NS_SCRIPTABLE NS_IMETHOD SetHostSubject(const char * aHostSubject) { return _to SetHostSubject(aHostSubject); } \
  NS_SCRIPTABLE NS_IMETHOD GetFullScreen(bool *aFullScreen) { return _to GetFullScreen(aFullScreen); } \
  NS_SCRIPTABLE NS_IMETHOD SetFullScreen(bool aFullScreen) { return _to SetFullScreen(aFullScreen); } \
  NS_SCRIPTABLE NS_IMETHOD GetAdminConsole(bool *aAdminConsole) { return _to GetAdminConsole(aAdminConsole); } \
  NS_SCRIPTABLE NS_IMETHOD SetAdminConsole(bool aAdminConsole) { return _to SetAdminConsole(aAdminConsole); } \
  NS_SCRIPTABLE NS_IMETHOD GetTitle(char * *aTitle) { return _to GetTitle(aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD SetTitle(const char * aTitle) { return _to SetTitle(aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD GetDynamicMenu(char * *aDynamicMenu) { return _to GetDynamicMenu(aDynamicMenu); } \
  NS_SCRIPTABLE NS_IMETHOD SetDynamicMenu(const char * aDynamicMenu) { return _to SetDynamicMenu(aDynamicMenu); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfMonitors(char * *aNumberOfMonitors) { return _to GetNumberOfMonitors(aNumberOfMonitors); } \
  NS_SCRIPTABLE NS_IMETHOD SetNumberOfMonitors(const char * aNumberOfMonitors) { return _to SetNumberOfMonitors(aNumberOfMonitors); } \
  NS_SCRIPTABLE NS_IMETHOD GetGuestHostName(char * *aGuestHostName) { return _to GetGuestHostName(aGuestHostName); } \
  NS_SCRIPTABLE NS_IMETHOD SetGuestHostName(const char * aGuestHostName) { return _to SetGuestHostName(aGuestHostName); } \
  NS_SCRIPTABLE NS_IMETHOD GetHotKey(char * *aHotKey) { return _to GetHotKey(aHotKey); } \
  NS_SCRIPTABLE NS_IMETHOD SetHotKey(const char * aHotKey) { return _to SetHotKey(aHotKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetNoTaskMgrExecution(bool *aNoTaskMgrExecution) { return _to GetNoTaskMgrExecution(aNoTaskMgrExecution); } \
  NS_SCRIPTABLE NS_IMETHOD SetNoTaskMgrExecution(bool aNoTaskMgrExecution) { return _to SetNoTaskMgrExecution(aNoTaskMgrExecution); } \
  NS_SCRIPTABLE NS_IMETHOD GetSendCtrlAltDelete(bool *aSendCtrlAltDelete) { return _to GetSendCtrlAltDelete(aSendCtrlAltDelete); } \
  NS_SCRIPTABLE NS_IMETHOD SetSendCtrlAltDelete(bool aSendCtrlAltDelete) { return _to SetSendCtrlAltDelete(aSendCtrlAltDelete); } \
  NS_SCRIPTABLE NS_IMETHOD GetUsbListenPort(PRUint16 *aUsbListenPort) { return _to GetUsbListenPort(aUsbListenPort); } \
  NS_SCRIPTABLE NS_IMETHOD SetUsbListenPort(PRUint16 aUsbListenPort) { return _to SetUsbListenPort(aUsbListenPort); } \
  NS_SCRIPTABLE NS_IMETHOD GetUsbAutoShare(bool *aUsbAutoShare) { return _to GetUsbAutoShare(aUsbAutoShare); } \
  NS_SCRIPTABLE NS_IMETHOD SetUsbAutoShare(bool aUsbAutoShare) { return _to SetUsbAutoShare(aUsbAutoShare); } \
  NS_SCRIPTABLE NS_IMETHOD GetSmartcard(bool *aSmartcard) { return _to GetSmartcard(aSmartcard); } \
  NS_SCRIPTABLE NS_IMETHOD SetSmartcard(bool aSmartcard) { return _to SetSmartcard(aSmartcard); } \
  NS_SCRIPTABLE NS_IMETHOD GetColorDepth(char * *aColorDepth) { return _to GetColorDepth(aColorDepth); } \
  NS_SCRIPTABLE NS_IMETHOD SetColorDepth(const char * aColorDepth) { return _to SetColorDepth(aColorDepth); } \
  NS_SCRIPTABLE NS_IMETHOD GetDisableEffects(char * *aDisableEffects) { return _to GetDisableEffects(aDisableEffects); } \
  NS_SCRIPTABLE NS_IMETHOD SetDisableEffects(const char * aDisableEffects) { return _to SetDisableEffects(aDisableEffects); } \
  NS_SCRIPTABLE NS_IMETHOD GetTrustStore(char * *aTrustStore) { return _to GetTrustStore(aTrustStore); } \
  NS_SCRIPTABLE NS_IMETHOD SetTrustStore(const char * aTrustStore) { return _to SetTrustStore(aTrustStore); } \
  NS_SCRIPTABLE NS_IMETHOD Connect(void) { return _to Connect(); } \
  NS_SCRIPTABLE NS_IMETHOD Show(void) { return _to Show(); } \
  NS_SCRIPTABLE NS_IMETHOD Disconnect(void) { return _to Disconnect(); } \
  NS_SCRIPTABLE NS_IMETHOD SetLanguageStrings(const char * section, const char * lang) { return _to SetLanguageStrings(section, lang); } \
  NS_SCRIPTABLE NS_IMETHOD SetUsbFilter(const char * filter) { return _to SetUsbFilter(filter); } \
  NS_SCRIPTABLE NS_IMETHOD ConnectedStatus(PRInt32 *_retval NS_OUTPARAM) { return _to ConnectedStatus(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISPICEC(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetHostIP(char * *aHostIP) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHostIP(aHostIP); } \
  NS_SCRIPTABLE NS_IMETHOD SetHostIP(const char * aHostIP) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHostIP(aHostIP); } \
  NS_SCRIPTABLE NS_IMETHOD GetPort(char * *aPort) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPort(aPort); } \
  NS_SCRIPTABLE NS_IMETHOD SetPort(const char * aPort) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPort(aPort); } \
  NS_SCRIPTABLE NS_IMETHOD GetSecurePort(char * *aSecurePort) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSecurePort(aSecurePort); } \
  NS_SCRIPTABLE NS_IMETHOD SetSecurePort(const char * aSecurePort) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSecurePort(aSecurePort); } \
  NS_SCRIPTABLE NS_IMETHOD GetPassword(char * *aPassword) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPassword(aPassword); } \
  NS_SCRIPTABLE NS_IMETHOD SetPassword(const char * aPassword) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPassword(aPassword); } \
  NS_SCRIPTABLE NS_IMETHOD GetCipherSuite(char * *aCipherSuite) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCipherSuite(aCipherSuite); } \
  NS_SCRIPTABLE NS_IMETHOD SetCipherSuite(const char * aCipherSuite) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCipherSuite(aCipherSuite); } \
  NS_SCRIPTABLE NS_IMETHOD GetSSLChannels(char * *aSSLChannels) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSSLChannels(aSSLChannels); } \
  NS_SCRIPTABLE NS_IMETHOD SetSSLChannels(const char * aSSLChannels) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSSLChannels(aSSLChannels); } \
  NS_SCRIPTABLE NS_IMETHOD GetHostSubject(char * *aHostSubject) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHostSubject(aHostSubject); } \
  NS_SCRIPTABLE NS_IMETHOD SetHostSubject(const char * aHostSubject) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHostSubject(aHostSubject); } \
  NS_SCRIPTABLE NS_IMETHOD GetFullScreen(bool *aFullScreen) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFullScreen(aFullScreen); } \
  NS_SCRIPTABLE NS_IMETHOD SetFullScreen(bool aFullScreen) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFullScreen(aFullScreen); } \
  NS_SCRIPTABLE NS_IMETHOD GetAdminConsole(bool *aAdminConsole) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAdminConsole(aAdminConsole); } \
  NS_SCRIPTABLE NS_IMETHOD SetAdminConsole(bool aAdminConsole) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAdminConsole(aAdminConsole); } \
  NS_SCRIPTABLE NS_IMETHOD GetTitle(char * *aTitle) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTitle(aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD SetTitle(const char * aTitle) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTitle(aTitle); } \
  NS_SCRIPTABLE NS_IMETHOD GetDynamicMenu(char * *aDynamicMenu) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDynamicMenu(aDynamicMenu); } \
  NS_SCRIPTABLE NS_IMETHOD SetDynamicMenu(const char * aDynamicMenu) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDynamicMenu(aDynamicMenu); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumberOfMonitors(char * *aNumberOfMonitors) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumberOfMonitors(aNumberOfMonitors); } \
  NS_SCRIPTABLE NS_IMETHOD SetNumberOfMonitors(const char * aNumberOfMonitors) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNumberOfMonitors(aNumberOfMonitors); } \
  NS_SCRIPTABLE NS_IMETHOD GetGuestHostName(char * *aGuestHostName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGuestHostName(aGuestHostName); } \
  NS_SCRIPTABLE NS_IMETHOD SetGuestHostName(const char * aGuestHostName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGuestHostName(aGuestHostName); } \
  NS_SCRIPTABLE NS_IMETHOD GetHotKey(char * *aHotKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHotKey(aHotKey); } \
  NS_SCRIPTABLE NS_IMETHOD SetHotKey(const char * aHotKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHotKey(aHotKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetNoTaskMgrExecution(bool *aNoTaskMgrExecution) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNoTaskMgrExecution(aNoTaskMgrExecution); } \
  NS_SCRIPTABLE NS_IMETHOD SetNoTaskMgrExecution(bool aNoTaskMgrExecution) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNoTaskMgrExecution(aNoTaskMgrExecution); } \
  NS_SCRIPTABLE NS_IMETHOD GetSendCtrlAltDelete(bool *aSendCtrlAltDelete) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSendCtrlAltDelete(aSendCtrlAltDelete); } \
  NS_SCRIPTABLE NS_IMETHOD SetSendCtrlAltDelete(bool aSendCtrlAltDelete) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSendCtrlAltDelete(aSendCtrlAltDelete); } \
  NS_SCRIPTABLE NS_IMETHOD GetUsbListenPort(PRUint16 *aUsbListenPort) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUsbListenPort(aUsbListenPort); } \
  NS_SCRIPTABLE NS_IMETHOD SetUsbListenPort(PRUint16 aUsbListenPort) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUsbListenPort(aUsbListenPort); } \
  NS_SCRIPTABLE NS_IMETHOD GetUsbAutoShare(bool *aUsbAutoShare) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUsbAutoShare(aUsbAutoShare); } \
  NS_SCRIPTABLE NS_IMETHOD SetUsbAutoShare(bool aUsbAutoShare) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUsbAutoShare(aUsbAutoShare); } \
  NS_SCRIPTABLE NS_IMETHOD GetSmartcard(bool *aSmartcard) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSmartcard(aSmartcard); } \
  NS_SCRIPTABLE NS_IMETHOD SetSmartcard(bool aSmartcard) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSmartcard(aSmartcard); } \
  NS_SCRIPTABLE NS_IMETHOD GetColorDepth(char * *aColorDepth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetColorDepth(aColorDepth); } \
  NS_SCRIPTABLE NS_IMETHOD SetColorDepth(const char * aColorDepth) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetColorDepth(aColorDepth); } \
  NS_SCRIPTABLE NS_IMETHOD GetDisableEffects(char * *aDisableEffects) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDisableEffects(aDisableEffects); } \
  NS_SCRIPTABLE NS_IMETHOD SetDisableEffects(const char * aDisableEffects) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDisableEffects(aDisableEffects); } \
  NS_SCRIPTABLE NS_IMETHOD GetTrustStore(char * *aTrustStore) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTrustStore(aTrustStore); } \
  NS_SCRIPTABLE NS_IMETHOD SetTrustStore(const char * aTrustStore) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTrustStore(aTrustStore); } \
  NS_SCRIPTABLE NS_IMETHOD Connect(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Connect(); } \
  NS_SCRIPTABLE NS_IMETHOD Show(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Show(); } \
  NS_SCRIPTABLE NS_IMETHOD Disconnect(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Disconnect(); } \
  NS_SCRIPTABLE NS_IMETHOD SetLanguageStrings(const char * section, const char * lang) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLanguageStrings(section, lang); } \
  NS_SCRIPTABLE NS_IMETHOD SetUsbFilter(const char * filter) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUsbFilter(filter); } \
  NS_SCRIPTABLE NS_IMETHOD ConnectedStatus(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConnectedStatus(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSpicec : public nsISpicec
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISPICEC

  nsSpicec();

private:
  ~nsSpicec();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSpicec, nsISpicec)

nsSpicec::nsSpicec()
{
  /* member initializers and constructor code */
}

nsSpicec::~nsSpicec()
{
  /* destructor code */
}

/* attribute string hostIP; */
NS_IMETHODIMP nsSpicec::GetHostIP(char * *aHostIP)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetHostIP(const char * aHostIP)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string port; */
NS_IMETHODIMP nsSpicec::GetPort(char * *aPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetPort(const char * aPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string SecurePort; */
NS_IMETHODIMP nsSpicec::GetSecurePort(char * *aSecurePort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetSecurePort(const char * aSecurePort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string Password; */
NS_IMETHODIMP nsSpicec::GetPassword(char * *aPassword)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetPassword(const char * aPassword)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string CipherSuite; */
NS_IMETHODIMP nsSpicec::GetCipherSuite(char * *aCipherSuite)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetCipherSuite(const char * aCipherSuite)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string SSLChannels; */
NS_IMETHODIMP nsSpicec::GetSSLChannels(char * *aSSLChannels)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetSSLChannels(const char * aSSLChannels)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string HostSubject; */
NS_IMETHODIMP nsSpicec::GetHostSubject(char * *aHostSubject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetHostSubject(const char * aHostSubject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean fullScreen; */
NS_IMETHODIMP nsSpicec::GetFullScreen(bool *aFullScreen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetFullScreen(bool aFullScreen)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean AdminConsole; */
NS_IMETHODIMP nsSpicec::GetAdminConsole(bool *aAdminConsole)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetAdminConsole(bool aAdminConsole)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string Title; */
NS_IMETHODIMP nsSpicec::GetTitle(char * *aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetTitle(const char * aTitle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string dynamicMenu; */
NS_IMETHODIMP nsSpicec::GetDynamicMenu(char * *aDynamicMenu)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetDynamicMenu(const char * aDynamicMenu)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string NumberOfMonitors; */
NS_IMETHODIMP nsSpicec::GetNumberOfMonitors(char * *aNumberOfMonitors)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetNumberOfMonitors(const char * aNumberOfMonitors)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string GuestHostName; */
NS_IMETHODIMP nsSpicec::GetGuestHostName(char * *aGuestHostName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetGuestHostName(const char * aGuestHostName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string HotKey; */
NS_IMETHODIMP nsSpicec::GetHotKey(char * *aHotKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetHotKey(const char * aHotKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean NoTaskMgrExecution; */
NS_IMETHODIMP nsSpicec::GetNoTaskMgrExecution(bool *aNoTaskMgrExecution)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetNoTaskMgrExecution(bool aNoTaskMgrExecution)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean SendCtrlAltDelete; */
NS_IMETHODIMP nsSpicec::GetSendCtrlAltDelete(bool *aSendCtrlAltDelete)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetSendCtrlAltDelete(bool aSendCtrlAltDelete)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned short UsbListenPort; */
NS_IMETHODIMP nsSpicec::GetUsbListenPort(PRUint16 *aUsbListenPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetUsbListenPort(PRUint16 aUsbListenPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean UsbAutoShare; */
NS_IMETHODIMP nsSpicec::GetUsbAutoShare(bool *aUsbAutoShare)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetUsbAutoShare(bool aUsbAutoShare)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean Smartcard; */
NS_IMETHODIMP nsSpicec::GetSmartcard(bool *aSmartcard)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetSmartcard(bool aSmartcard)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string ColorDepth; */
NS_IMETHODIMP nsSpicec::GetColorDepth(char * *aColorDepth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetColorDepth(const char * aColorDepth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string DisableEffects; */
NS_IMETHODIMP nsSpicec::GetDisableEffects(char * *aDisableEffects)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetDisableEffects(const char * aDisableEffects)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute string TrustStore; */
NS_IMETHODIMP nsSpicec::GetTrustStore(char * *aTrustStore)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSpicec::SetTrustStore(const char * aTrustStore)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void connect (); */
NS_IMETHODIMP nsSpicec::Connect()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void show (); */
NS_IMETHODIMP nsSpicec::Show()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void disconnect (); */
NS_IMETHODIMP nsSpicec::Disconnect()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetLanguageStrings (in string section, in string lang); */
NS_IMETHODIMP nsSpicec::SetLanguageStrings(const char * section, const char * lang)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void SetUsbFilter (in string filter); */
NS_IMETHODIMP nsSpicec::SetUsbFilter(const char * filter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long ConnectedStatus (); */
NS_IMETHODIMP nsSpicec::ConnectedStatus(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISpicec_h__ */
