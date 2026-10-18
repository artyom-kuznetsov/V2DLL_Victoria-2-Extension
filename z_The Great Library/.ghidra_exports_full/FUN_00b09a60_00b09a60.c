// FUN_00b09a60 @ 00b09a60 body=[[00b09a60, 00b09ae3]]


void FUN_00b09a60(void)

{
  uint uVar1;
  undefined4 *_Dst;
  undefined4 uVar2;
  char cVar3;
  undefined4 *in_ECX;
  undefined1 local_4c [76];
  
  uVar1 = in_ECX[1];
  if (uVar1 != 0) {
    if (*(int *)(in_ECX[4] + 8) == 0) {
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
    else {
      cVar3 = FUN_00b09850();
      if (cVar3 != '\0') {
        FUN_00b099f0();
        return;
      }
    }
  }
  return;
}

