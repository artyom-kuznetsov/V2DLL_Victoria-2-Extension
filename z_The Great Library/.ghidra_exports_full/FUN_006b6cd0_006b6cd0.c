// FUN_006b6cd0 @ 006b6cd0 body=[[006b6cd0, 006b6ddc] [006b6de0, 006b6e68]]


void FUN_006b6cd0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *_Dst;
  int iVar6;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6200e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0125ce80 == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    iVar3 = FUN_00aae9af(0x3c);
    local_8 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_004dada0();
    }
    local_8 = 0xffffffff;
    FUN_004dc340(uVar4);
  }
  iVar3 = (int)(DAT_0125ce80[4] - DAT_0125ce80[3]) >> 2;
  local_18 = 1;
  puVar5 = DAT_0125ce80;
  if (1 < iVar3) {
    do {
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)FUN_00aae9af(0x3c);
        local_8 = 1;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5[1] = 0x1ff;
          *puVar5 = 0;
          _Dst = (void *)FUN_00aad56b(0x7fc);
          puVar5[2] = _Dst;
          _memset(_Dst,0,puVar5[1] * 4);
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0;
        }
        puVar2 = DAT_0125ce80;
        local_8 = 2;
        if ((puVar5 != DAT_0125ce80) && (DAT_0125ce80 != (undefined4 *)0x0)) {
          FUN_004dadf0(DAT_0125ce80);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puVar2);
        }
        local_8 = 0xffffffff;
        DAT_0125ce80 = puVar5;
      }
      iVar1 = *(int *)(puVar5[3] + local_18 * 4);
      if ((*(char *)(iVar1 + 0xe0) != '\0') && (*(char *)(iVar1 + 0x131) != '\0')) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x118) + *(int *)(iVar1 + 0x134) * 4);
        *(undefined4 *)(iVar1 + 0x20) = 0;
        iVar6 = *(int *)(*(int *)(iVar1 + 0x18) + 0xc4) * 1000;
        if (iVar6 < 0) {
          *(int *)(iVar1 + 0x20) = iVar6;
        }
        if (*(int *)(iVar1 + 0x20) < 0) {
          *(undefined4 *)(iVar1 + 0x20) = 0;
        }
        *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x20);
        puVar5 = DAT_0125ce80;
      }
      local_18 = local_18 + 1;
    } while (local_18 < iVar3);
  }
  ExceptionList = local_10;
  return;
}

