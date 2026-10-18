// FUN_00b260e0 @ 00b260e0 body=[[00b260e0, 00b2614f]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b260e0(code *param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  void *_Dst;
  size_t unaff_EDI;
  
  uVar1 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (unaff_EDI + 1 < 0x80) {
    puVar2 = &stack0xfffffff4;
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  _Dst = (void *)FUN_00b20970(puVar2,unaff_EDI + 1,0);
  if (_Dst != (void *)0x0) {
    FID_conflict__memcpy(_Dst,param_4,unaff_EDI);
    *(undefined1 *)((int)_Dst + unaff_EDI) = 0;
    (*param_1)(param_2,param_3,_Dst);
    FUN_00b209b0(_Dst);
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

