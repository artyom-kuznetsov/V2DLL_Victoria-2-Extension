// FUN_0057e450 @ 0057e450 body=[[0057e450, 0057e530]]


void FUN_0057e450(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_2 < 0x2f1) {
    if (param_2 == 0x2f0) {
      puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x3c) = *puVar2;
      *(undefined4 *)(in_ECX + 0x40) = puVar2[1];
      return;
    }
    if (param_2 == 0xb) {
      FUN_009a19f0(param_1,in_ECX + 0x48);
      return;
    }
    if (param_2 == 0xd9) {
      uVar1 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x58) = uVar1;
      return;
    }
    if (param_2 == 0x297) {
      FUN_009a1c10();
      return;
    }
  }
  else {
    if (param_2 == 0x2f9) {
      FUN_009a19f0(param_1,in_ECX + 0x50);
      return;
    }
    if (param_2 == 0x609) {
      FUN_009a1bb0(in_ECX + 0x5d);
      return;
    }
  }
  FUN_009a2620(param_1,param_2);
  return;
}

