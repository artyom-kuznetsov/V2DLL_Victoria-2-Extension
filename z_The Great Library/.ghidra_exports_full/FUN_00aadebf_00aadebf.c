// __CreateLocForCP @ 00aadebf body=[[00aadebf, 00aadf00]]


/* Library Function - Single Match
    __CreateLocForCP
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __CreateLocForCP(uint param_1)

{
  char local_28;
  char local_27 [31];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_28 = '.';
  __ui64toa_s((ulonglong)param_1,local_27,0x1f,10);
  __create_locale(0,&local_28);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

