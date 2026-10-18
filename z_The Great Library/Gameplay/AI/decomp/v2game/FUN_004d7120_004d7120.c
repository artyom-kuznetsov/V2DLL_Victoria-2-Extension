// FUN_004d7120 @ 004d7120 body=[[004d7120, 004d71eb] [004d71f0, 004d7292] [004d7296, 004d737f] [004d7383, 004d738c] [004d7390, 004d73a2]]


void FUN_004d7120(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  void *_Dst;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_68 [12];
  undefined4 uStack_5c;
  int *piStack_58;
  int local_3c [4];
  int *local_2c;
  undefined4 *local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  undefined1 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b936d1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_0125ce80 == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    local_28 = (undefined4 *)FUN_00aae9af();
    local_8 = 0;
    if (local_28 != (undefined4 *)0x0) {
      FUN_004dada0();
    }
    local_8 = 0xffffffff;
    FUN_004dc340();
  }
  local_20 = (int *)(param_1 + 0x34);
  uVar4 = (int)(DAT_0125ce80[4] - DAT_0125ce80[3]) >> 2;
  uVar5 = *(int *)(param_1 + 0x38) - *local_20;
  local_18 = 0;
  if (uVar5 < uVar4) {
    uStack_5c = 0x4d71af;
    piStack_58 = local_20;
    FUN_004d8570();
  }
  else if (uVar4 < uVar5) {
    piStack_58 = (int *)0x4d71c4;
    FUN_009d69b0();
  }
  local_1c = (int *)(param_1 + 0x44);
  local_24 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) & 0xffffffe0U)) {
    param_1 = 0;
    do {
      if (DAT_0125ce80 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)FUN_00aae9af();
        local_8 = 1;
        local_28 = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar2[1] = 0x1ff;
          *puVar2 = 0;
          _Dst = (void *)FUN_00aad56b();
          puVar2[2] = _Dst;
          piStack_58 = (int *)0x4d7251;
          _memset(_Dst,0,puVar2[1] * 4);
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2[9] = 0;
        }
        local_8 = 2;
        local_2c = (int *)0x0;
        if ((puVar2 != DAT_0125ce80) && (local_28 = DAT_0125ce80, DAT_0125ce80 != (undefined4 *)0x0)
           ) {
          FUN_004dadf0();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        DAT_0125ce80 = puVar2;
      }
      piVar3 = (int *)FUN_004dc420();
      if ((piVar3 == (int *)0x0) && (piVar3 = DAT_01258730, DAT_01258730 == (int *)0x0)) {
        piVar3 = (int *)FUN_00aae9af();
        local_8 = 3;
        local_2c = piVar3;
        if (piVar3 == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          local_28 = (undefined4 *)auStack_68;
          piStack_58 = (int *)0x0;
          auStack_68[0] = 0;
          FUN_00409350("nobuilding",10);
          FUN_004d8b60(piVar3);
          *piVar3 = (int)CNullBuilding::vftable;
        }
        local_8 = 0xffffffff;
        DAT_01258730 = piVar3;
      }
      if ((piVar3 != (int *)0x0) && (cVar1 = (**(code **)(*piVar3 + 0x24))(), cVar1 != '\0')) {
        *(undefined1 *)(piVar3[0x16] + *local_20) = *(undefined1 *)(*local_1c + 0x1c + param_1);
      }
      param_1 = param_1 + 0x20;
      local_24 = local_24 + 1;
    } while (local_24 < local_1c[1] - *local_1c >> 5);
  }
  if (local_1c != local_3c) {
    if (*local_1c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *local_1c = 0;
    local_1c[1] = 0;
    local_1c[2] = 0;
  }
  ExceptionList = local_10;
  return;
}

