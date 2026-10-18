// FUN_00582ed0 @ 00582ed0 body=[[00582ed0, 00582ff8]]


void FUN_00582ed0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  if (param_2 < 0x2f1) {
    if (param_2 == 0x2f0) {
      puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_14,param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x3c) = *puVar1;
      *(undefined4 *)(in_ECX + 0x40) = puVar1[1];
      return;
    }
    if (param_2 < 0x1cb) {
      if (param_2 == 0x1ca) {
        FUN_009a19f0(param_1,in_ECX + 0x4c);
        return;
      }
      if (param_2 == 0x6a) {
        puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,param_1 + 0x22c);
        *(undefined4 *)(in_ECX + 0x44) = *puVar1;
        *(undefined4 *)(in_ECX + 0x48) = puVar1[1];
        return;
      }
      if (param_2 == 0x8a) {
        FUN_009a1c10();
        return;
      }
    }
    else if (param_2 == 0x2a7) {
      FUN_009a1c10();
      return;
    }
  }
  else {
    if (param_2 == 0x85c) {
      FUN_009a1bb0(in_ECX + 0x60);
      return;
    }
    if (param_2 == 0x860) {
      FUN_009a1bb0(in_ECX + 0x59);
      return;
    }
    if (param_2 == 0x861) {
      FUN_009a1bb0(in_ECX + 0x58);
      return;
    }
  }
  FUN_009a2620(param_1,param_2);
  return;
}

