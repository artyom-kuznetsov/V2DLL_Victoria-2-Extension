// ___set_flsgetvalue @ 00ab9711 body=[[00ab9711, 00ab9744]]


/* Library Function - Single Match
    ___set_flsgetvalue
   
   Library: Visual Studio 2010 Release */

LPVOID ___set_flsgetvalue(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(dwTlsIndex_00ef2ed8);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = DecodePointer(lpTlsValue_00f202dc);
    TlsSetValue(dwTlsIndex_00ef2ed8,lpTlsValue);
  }
  return lpTlsValue;
}

