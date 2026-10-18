// FUN_00795560 @ 00795560 body=[[00795560, 0079560f] [00795613, 00795620] [00795624, 00795637]]


undefined4 FUN_00795560(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EDI;
  undefined4 local_48;
  uint local_34;
  undefined4 local_2c [5];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43860;
  local_10 = ExceptionList;
  iVar4 = 0;
  ExceptionList = &local_10;
  if (0 < *(int *)(unaff_EDI + 4)) {
    do {
      cVar1 = (**(code **)(*(int *)(*(int *)(*(int *)(unaff_EDI + 8) + iVar4 * 4) + 0x1c) + 0x58))
                        (param_1);
      if (cVar1 != '\0') {
        FUN_00788d30();
        local_8 = 0;
        iVar4 = FUN_00967f50();
        if (iVar4 != 0) {
          piVar2 = (int *)FUN_00967f10();
          uVar3 = (**(code **)(*piVar2 + 0x40))(local_2c);
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_00408ed0(uVar3,0,0xffffffff);
          if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_2c[0]);
          }
        }
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_48);
        }
        ExceptionList = local_10;
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(unaff_EDI + 4));
  }
  ExceptionList = local_10;
  return 0;
}

