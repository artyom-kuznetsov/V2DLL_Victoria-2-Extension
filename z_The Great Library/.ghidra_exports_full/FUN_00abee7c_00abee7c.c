// _raise @ 00abee7c body=[[00abee7c, 00abefdc] [00abeff2, 00abf01e]]


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2010 Release */

int __cdecl _raise(int _SigNum)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  PVOID pvVar4;
  PVOID *ppvVar5;
  _ptiddata p_Var6;
  int local_34;
  void *local_30;
  int local_28;
  int local_20;
  
  p_Var6 = (_ptiddata)0x0;
  local_20 = 0;
  if (_SigNum < 0xc) {
    if (_SigNum != 0xb) {
      if (_SigNum == 2) {
        ppvVar5 = &DAT_00f20874;
        pvVar4 = DAT_00f20874;
        goto LAB_00abef26;
      }
      if (_SigNum != 4) {
        if (_SigNum == 6) goto LAB_00abef04;
        if (_SigNum != 8) goto LAB_00abeef2;
      }
    }
    p_Var6 = __getptd_noexit();
    if (p_Var6 == (_ptiddata)0x0) {
      return -1;
    }
    iVar1 = siglookup(p_Var6->_pxcptacttab);
    ppvVar5 = (PVOID *)(iVar1 + 8);
    pcVar3 = *ppvVar5;
  }
  else {
    if (_SigNum == 0xf) {
      ppvVar5 = &DAT_00f20880;
      pvVar4 = DAT_00f20880;
    }
    else if (_SigNum == 0x15) {
      ppvVar5 = &DAT_00f20878;
      pvVar4 = DAT_00f20878;
    }
    else {
      if (_SigNum != 0x16) {
LAB_00abeef2:
        piVar2 = __errno();
        *piVar2 = 0x16;
        FUN_00ab7c17();
        return -1;
      }
LAB_00abef04:
      ppvVar5 = &Ptr_00f2087c;
      pvVar4 = Ptr_00f2087c;
    }
LAB_00abef26:
    local_20 = 1;
    pcVar3 = DecodePointer(pvVar4);
  }
  iVar1 = 0;
  if (pcVar3 == (code *)0x1) {
    return 0;
  }
  if (pcVar3 == (code *)0x0) {
    iVar1 = __exit(3);
  }
  if (local_20 != iVar1) {
    __lock(iVar1);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_30 = p_Var6->_tpxcptinfoptrs;
    p_Var6->_tpxcptinfoptrs = (void *)0x0;
    if (_SigNum == 8) {
      local_34 = p_Var6->_tfpecode;
      p_Var6->_tfpecode = 0x8c;
      goto LAB_00abef8a;
    }
  }
  else {
LAB_00abef8a:
    if (_SigNum == 8) {
      for (local_28 = 3; local_28 < 0xc; local_28 = local_28 + 1) {
        *(undefined4 *)(local_28 * 0xc + 8 + (int)p_Var6->_pxcptacttab) = 0;
      }
      goto LAB_00abefc2;
    }
  }
  pvVar4 = (PVOID)FUN_00ab96ff();
  *ppvVar5 = pvVar4;
LAB_00abefc2:
  FUN_00abefe3();
  if (_SigNum == 8) {
    (*pcVar3)(8,p_Var6->_tfpecode);
  }
  else {
    (*pcVar3)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  p_Var6->_tpxcptinfoptrs = local_30;
  if (_SigNum == 8) {
    p_Var6->_tfpecode = local_34;
  }
  return 0;
}

