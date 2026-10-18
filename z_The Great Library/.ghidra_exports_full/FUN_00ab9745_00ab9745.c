// __mtterm @ 00ab9745 body=[[00ab9745, 00ab9781]]


/* Library Function - Single Match
    __mtterm
   
   Library: Visual Studio 2010 Release */

void __cdecl __mtterm(void)

{
  code *pcVar1;
  int iVar2;
  
  if (DAT_00ef2ed4 != -1) {
    iVar2 = DAT_00ef2ed4;
    pcVar1 = DecodePointer(Ptr_00f202e4);
    (*pcVar1)(iVar2);
    DAT_00ef2ed4 = -1;
  }
  if (dwTlsIndex_00ef2ed8 != 0xffffffff) {
    TlsFree(dwTlsIndex_00ef2ed8);
    dwTlsIndex_00ef2ed8 = 0xffffffff;
  }
  __mtdeletelocks();
  return;
}

