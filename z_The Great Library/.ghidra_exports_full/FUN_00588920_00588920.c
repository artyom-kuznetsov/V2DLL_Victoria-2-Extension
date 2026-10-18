// FUN_00588920 @ 00588920 body=[[00588920, 005889b2]]


void FUN_00588920(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_10 [12];
  
  if (param_2 == 0x1ca) {
    uVar2 = FUN_00aaf0c5(param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x44) = uVar2;
    return;
  }
  if (param_2 != 0x2f0) {
    if (param_2 != 0x4f0) {
      FUN_009a2620(param_1,param_2);
      return;
    }
    FUN_009a1d40();
    return;
  }
  puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_10,param_1 + 0x22c);
  *(undefined4 *)(in_ECX + 0x3c) = *puVar1;
  *(undefined4 *)(in_ECX + 0x40) = puVar1[1];
  return;
}

