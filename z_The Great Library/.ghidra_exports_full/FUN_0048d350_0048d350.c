// FUN_0048d350 @ 0048d350 body=[[0048d350, 0048d463] [0048d47b, 0048d4da]]


void FUN_0048d350(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  int local_38;
  undefined1 local_30 [8];
  int local_28;
  int local_24;
  undefined4 local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb8828;
  local_14 = ExceptionList;
  if (param_2 < 0x4f9) {
    if (param_2 == 0x4f8) {
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x18);
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x285) {
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_c = 0;
      ExceptionList = &local_14;
      FUN_005e5a20(param_1,&local_28);
      iVar5 = local_24 - local_28 >> 2;
      local_38 = 0;
      if (0 < iVar5) {
        do {
          uVar1 = *(undefined4 *)
                   (*(int *)(DAT_012588e8 + 0xacc) + *(int *)(local_28 + local_38 * 4) * 4);
          iVar2 = *(int *)(in_ECX + 0xc);
          puVar4 = (undefined4 *)FUN_00aae9af(0x10);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = uVar1;
            puVar4[1] = iVar2;
            puVar4[2] = 0;
            *(undefined1 *)(puVar4 + 3) = 0;
          }
          iVar3 = *(int *)(in_ECX + 0x10);
          *(undefined4 **)(in_ECX + 0xc) = puVar4;
          *(int *)(in_ECX + 0x10) = iVar3 + 1;
          if (iVar3 == 0) {
            *(undefined4 **)(in_ECX + 8) = puVar4;
          }
          else {
            *(undefined4 **)(iVar2 + 8) = puVar4;
          }
          local_38 = local_38 + 1;
        } while (local_38 < iVar5);
      }
      if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_28);
      }
    }
    else if (param_2 == 0x424) {
      ExceptionList = &local_14;
      FUN_009a1bb0(in_ECX + 0x28);
      ExceptionList = local_14;
      return;
    }
  }
  else if (param_2 == 0x717) {
    ExceptionList = &local_14;
    puVar4 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_30,param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x1c) = *puVar4;
    *(undefined4 *)(in_ECX + 0x20) = puVar4[1];
  }
  ExceptionList = local_14;
  return;
}

