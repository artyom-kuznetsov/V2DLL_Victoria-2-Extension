// __Tolower @ 00aadb1d body=[[00aadb1d, 00aadc29]]


/* Library Function - Single Match
    __Tolower
   
   Library: Visual Studio 2010 Release */

int __cdecl __Tolower(int param_1,_Ctypevec *param_2)

{
  _Ctypevec *p_Var1;
  int iVar2;
  short *_Code_page;
  ushort *puVar3;
  uint uVar4;
  LPCWSTR local_10;
  undefined1 local_c;
  byte local_8;
  undefined1 local_7;
  
  p_Var1 = param_2;
  if (param_2 == (_Ctypevec *)0x0) {
    iVar2 = ____lc_handle_func();
    local_10 = *(LPCWSTR *)(iVar2 + 8);
    _Code_page = (short *)____lc_codepage_func();
  }
  else {
    local_10 = (LPCWSTR)param_2->_Page;
    _Code_page = param_2->_Table;
  }
  if (local_10 == (LPCWSTR)0x0) {
    if (0x19 < param_1 - 0x41U) {
      return param_1;
    }
    return param_1 + 0x20;
  }
  if ((uint)param_1 < 0x100) {
    if (p_Var1 != (_Ctypevec *)0x0) {
      if ((*(byte *)(p_Var1->_Delfl + param_1 * 2) & 1) == 0) {
        return param_1;
      }
      goto LAB_00aadb92;
    }
    iVar2 = _isupper(param_1);
    if (iVar2 == 0) {
      return param_1;
    }
  }
  else {
LAB_00aadb92:
    if (p_Var1 != (_Ctypevec *)0x0) {
      uVar4 = (uint)(int)*(short *)(p_Var1->_Delfl + (param_1 >> 8 & 0xffU) * 2) >> 0xf & 1;
      goto LAB_00aadbcd;
    }
  }
  puVar3 = ___pctype_func();
  uVar4 = puVar3[param_1 >> 8 & 0xff] & 0x8000;
LAB_00aadbcd:
  p_Var1 = param_2;
  if (uVar4 == 0) {
    param_2._0_2_ = (ushort)(byte)param_1;
    iVar2 = 1;
  }
  else {
    local_c = (undefined1)((uint)param_1 >> 8);
    param_2._0_2_ = CONCAT11((byte)param_1,local_c);
    param_2._3_1_ = SUB41(p_Var1,3);
    param_2._0_3_ = (uint3)(ushort)param_2;
    iVar2 = 2;
  }
  iVar2 = ___crtLCMapStringA((_locale_t)0x0,local_10,0x100,(LPCSTR)&param_2,iVar2,(LPSTR)&local_8,3,
                             (int)_Code_page,1);
  if ((iVar2 != 0) && (param_1 = (int)local_8, iVar2 != 1)) {
    param_1 = (int)CONCAT11(local_8,local_7);
  }
  return param_1;
}

