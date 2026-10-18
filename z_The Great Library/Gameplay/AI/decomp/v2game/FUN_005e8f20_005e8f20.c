// FUN_005e8f20 @ 005e8f20 body=[[005e8f20, 005e9191]]


void FUN_005e8f20(char param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  iVar1 = FUN_005c5df0();
  if (iVar1 == 2) {
    if (param_1 == '\0') {
      FUN_005267f0(*(undefined4 *)(in_ECX + 0x14));
    }
    else {
      FUN_004f62c0();
      puVar2 = (undefined4 *)FUN_00416e30();
      *(undefined4 *)(in_ECX + 0x14) = *puVar2;
      FUN_005267f0(*(undefined4 *)(in_ECX + 0x10));
    }
  }
  else {
    iVar1 = FUN_005c5df0();
    if (iVar1 == 3) {
      if (param_1 == '\0') {
        FUN_00526810(*(undefined4 *)(in_ECX + 0x14));
      }
      else {
        FUN_004f62c0();
        puVar2 = (undefined4 *)FUN_00416e30();
        *(undefined4 *)(in_ECX + 0x14) = *puVar2;
        FUN_00526810(*(undefined4 *)(in_ECX + 0x10));
      }
    }
    else {
      iVar1 = FUN_005c5df0();
      if (iVar1 == 5) {
        if (param_1 == '\0') {
          FUN_00526850(*(undefined4 *)(in_ECX + 0x14));
        }
        else {
          FUN_004f62c0();
          puVar2 = (undefined4 *)FUN_00416e30();
          *(undefined4 *)(in_ECX + 0x14) = *puVar2;
          FUN_00526850(*(undefined4 *)(in_ECX + 0x10));
        }
      }
      else {
        iVar1 = FUN_005c5df0();
        if (iVar1 == 4) {
          if (param_1 == '\0') {
            FUN_00526830(*(undefined4 *)(in_ECX + 0x14));
          }
          else {
            FUN_004f62c0();
            puVar2 = (undefined4 *)FUN_00416e30();
            *(undefined4 *)(in_ECX + 0x14) = *puVar2;
            FUN_00526830(*(undefined4 *)(in_ECX + 0x10));
          }
        }
      }
    }
  }
  return;
}

