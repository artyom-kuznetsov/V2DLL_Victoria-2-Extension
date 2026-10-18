// FUN_00732520 @ 00732520 body=[[00732520, 007325cc] [007325d0, 00732645]]


void FUN_00732520(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *unaff_EDI;
  int local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9fb7b;
  local_14 = ExceptionList;
  if (unaff_EDI[4] == 0) {
    iVar2 = DAT_01258a94;
    if (*unaff_EDI < 0x1269) {
      iVar2 = DAT_01258a98;
    }
    if (iVar2 == 0) {
      iVar2 = 0;
      ExceptionList = &local_14;
    }
    else {
      ExceptionList = &local_14;
      iVar2 = FUN_009c1d40();
    }
    local_24 = 1;
    if (((*(char *)(unaff_EDI[2] + 0x39) != '\0') && (iVar2 != 0)) &&
       (cVar1 = (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xb24) + 0x1c) + 0x28))(),
       cVar1 != '\0')) {
      iVar3 = FUN_00965930(0);
      local_24 = FUN_00965870(iVar2,0);
      local_24 = local_24 - iVar3;
    }
    if (0 < local_24) {
      do {
        iVar3 = FUN_00aae9af(0x68);
        uVar4 = 0;
        uStack_c = 0;
        if (iVar3 != 0) {
          uVar4 = FUN_0057d1b0(iVar3,unaff_EDI[2],*(undefined4 *)(unaff_EDI[3] + 0x58),iVar2,
                               *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
        }
        uStack_c = 0xffffffff;
        iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
        (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar4);
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
  }
  ExceptionList = local_14;
  return;
}

