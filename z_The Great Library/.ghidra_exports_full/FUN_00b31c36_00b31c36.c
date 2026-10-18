// FUN_00b31c36 @ 00b31c36 body=[[00b31c36, 00b31caa]]


ulonglong FUN_00b31c36(void)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = (ulonglong)ROUND(in_ST0);
  local_20 = (uint)uVar1;
  uStack_1c = (float)(uVar1 >> 0x20);
  fVar3 = (float)in_ST0;
  if ((local_20 != 0) || (fVar3 = uStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
    if ((int)fVar3 < 0) {
      uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
    }
    else {
      uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
      uVar1 = CONCAT44((int)uStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
    }
  }
  return uVar1;
}

