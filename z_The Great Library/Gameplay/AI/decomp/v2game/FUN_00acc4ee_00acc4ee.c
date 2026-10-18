// __validdrive @ 00acc4ee body=[[00acc4ee, 00acc547]]


/* Library Function - Single Match
    __validdrive
   
   Library: Visual Studio 2010 Release */

int __cdecl __validdrive(uint param_1)

{
  int iVar1;
  WCHAR local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (param_1 != 0) {
    local_10 = (short)param_1 + L'@';
    local_e = 0x3a;
    local_c = 0x5c;
    local_a = 0;
    GetDriveTypeW(&local_10);
  }
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

