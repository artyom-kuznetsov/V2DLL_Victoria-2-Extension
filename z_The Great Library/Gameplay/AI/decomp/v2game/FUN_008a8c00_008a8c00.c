// FUN_008a8c00 @ 008a8c00 body=[[008a8c00, 008a8d6a]]


void FUN_008a8c00(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_ECX;
  int local_20;
  int local_1c;
  undefined1 local_18 [8];
  undefined1 local_10 [12];
  
  if (param_2 < 0x3e6) {
    if (param_2 == 0x3e5) {
      uVar1 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x20) = uVar1;
      return;
    }
    if (param_2 < 0x298) {
      if (param_2 == 0x297) {
        uVar1 = FUN_00aaf0c5(param_1 + 0x22c);
        *(undefined4 *)(in_ECX + 0x10) = uVar1;
        return;
      }
      if (param_2 == 0x1ca) {
        uVar1 = FUN_00aaf0c5(param_1 + 0x22c);
        *(undefined4 *)(in_ECX + 0x18) = uVar1;
        return;
      }
      local_20 = param_2 + -0x1d4;
      if (local_20 == 0) {
        local_1c = local_20;
        FUN_009a19f0(param_1,&local_20);
        uVar1 = FUN_009c16d0(local_20,local_1c);
        *(undefined4 *)(in_ECX + 0x14) = uVar1;
        return;
      }
    }
    else if (param_2 == 0x2f0) {
      puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_18,param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 8) = *puVar2;
      *(undefined4 *)(in_ECX + 0xc) = puVar2[1];
      return;
    }
  }
  else if (param_2 == 0x711) {
    puVar2 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_10,param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x2c) = *puVar2;
    *(undefined4 *)(in_ECX + 0x30) = puVar2[1];
  }
  else {
    if (param_2 == 0x712) {
      uVar1 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x34) = uVar1;
      return;
    }
    if (param_2 == 0x73a) {
      FUN_009a19f0(param_1,in_ECX + 0x38);
      return;
    }
  }
  return;
}

