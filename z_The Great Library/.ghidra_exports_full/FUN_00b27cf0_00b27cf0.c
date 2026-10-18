// FUN_00b27cf0 @ 00b27cf0 body=[[00b27cf0, 00b27d61]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b27cf0(code *param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  undefined1 *puVar3;
  size_t unaff_EDI;
  
  uVar2 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  iVar1 = unaff_EDI + 1;
  if (iVar1 < 0x80) {
    puVar3 = &stack0xfffffff4;
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
  _Dst = (void *)FUN_00b20970(puVar3,iVar1,iVar1 >> 0x1f);
  if (_Dst != (void *)0x0) {
    FID_conflict__memcpy(_Dst,param_4,unaff_EDI);
    *(undefined1 *)((int)_Dst + unaff_EDI) = 0;
    (*param_1)(param_2,param_3,_Dst);
    FUN_00b209b0(_Dst);
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

