// FUN_00b099f0 @ 00b099f0 body=[[00b099f0, 00b09a55]]


void FUN_00b099f0(void)

{
  uint uVar1;
  undefined4 *_Dst;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined1 local_4c [76];
  
  uVar1 = in_ECX[1];
  if (uVar1 != 0) {
    _Dst = (undefined4 *)*in_ECX;
    uVar2 = *_Dst;
    FUN_00b09700(_Dst + 1);
    if (uVar1 != 0) {
      if ((1 < uVar1) && (uVar1 - 1 != 0)) {
        FID_conflict__memcpy(_Dst,_Dst + 0x14,(uVar1 - 1) * 0x50);
      }
      in_ECX[1] = in_ECX[1] + -1;
    }
    (**(code **)(*(int *)in_ECX[4] + 0x2c))(uVar2,local_4c);
  }
  return;
}

