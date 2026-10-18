// FUN_00582630 @ 00582630 body=[[00582630, 0058269f]]


void FUN_00582630(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_10 [12];
  
  if (param_2 == 0x87) {
    FUN_009a1d40();
    return;
  }
  if (param_2 != 0x2f0) {
    FUN_009a2620(param_1,param_2);
    return;
  }
  puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_10,param_1 + 0x22c);
  *(undefined4 *)(in_ECX + 0x48) = *puVar1;
  *(undefined4 *)(in_ECX + 0x4c) = puVar1[1];
  return;
}

