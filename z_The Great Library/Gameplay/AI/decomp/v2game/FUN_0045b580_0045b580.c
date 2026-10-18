// FUN_0045b580 @ 0045b580 body=[[0045b580, 0045b643] [0045b647, 0045b6e2] [0045b6e6, 0045b759] [0045b75d, 0045b7b8] [0045b7be, 0045b805] [0045b809, 0045b8a0] [0045b8a4, 0045b90e] [0045b912, 0045b96d] [0045b971, 0045ba34] [0045ba38, 0045bad2] [0045bad6, 0045bb19]]


void FUN_0045b580(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  char local_264 [256];
  undefined4 local_164;
  char local_160 [256];
  uint local_60;
  undefined4 local_50;
  uint local_4c;
  int local_44;
  int local_40;
  undefined4 local_3c [5];
  uint local_28;
  int local_20;
  int local_1c;
  int *local_18;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5be80;
  local_10 = ExceptionList;
  local_14 = *(char *)(in_ECX + 0x90);
  ExceptionList = &local_10;
  local_1c = in_ECX;
  FUN_009a0940(param_1);
  local_164 = 0xe;
  puVar4 = &DAT_00dfbbd0;
  if (local_14 == '\0') {
    puVar4 = &DAT_00dfbbd4;
  }
  _sprintf(local_160,"%s",puVar4);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_0043acd0(in_ECX + 8,local_3c);
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_18 = (int *)(in_ECX + 0x3c);
  local_20 = 0;
  do {
    param_1 = 0;
    local_44 = local_18[1] - *local_18 >> 2;
    if (0 < local_44) {
      do {
        FUN_009a0940(iVar3);
        if (*(int *)(iVar3 + 4) == -1) {
          *(undefined4 *)(iVar3 + 4) = 0;
        }
        else {
          puVar5 = (undefined4 *)FUN_00990880();
          local_8 = 2;
          local_164 = 0x10;
          if (0xf < (uint)puVar5[5]) {
            puVar5 = (undefined4 *)*puVar5;
          }
          __snprintf(local_160,0xff,"%s",puVar5);
          FUN_0099ff90(iVar3);
          local_8 = 0xffffffff;
          if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_3c[0]);
          }
          if ((*(char *)(iVar3 + 0xc) == '\0') && (*(int *)(iVar3 + 4) != 0)) {
            FUN_009a08a0(iVar3,*(int *)(iVar3 + 4) + -1);
          }
          puVar5 = (undefined4 *)FUN_00990880();
          local_8 = 3;
          local_164 = 3;
          if (0xf < (uint)puVar5[5]) {
            puVar5 = (undefined4 *)*puVar5;
          }
          __snprintf(local_160,0xff,"%s",puVar5);
          FUN_0099ff90(iVar3);
          local_8 = 0xffffffff;
          if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_3c[0]);
          }
          puVar5 = (undefined4 *)FUN_00990880();
          local_8 = 4;
          local_164 = 0x10;
          if (0xf < (uint)puVar5[5]) {
            puVar5 = (undefined4 *)*puVar5;
          }
          __snprintf(local_160,0xff,"%s",puVar5);
          FUN_0099ff90(iVar3);
          local_8 = 0xffffffff;
          if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_3c[0]);
          }
        }
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
        FUN_004577c0();
        local_8 = 5;
        FUN_009a0940(iVar3);
        FUN_0099f770(iVar3,0);
        local_8 = 0xffffffff;
        if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_3c[0]);
        }
        piVar1 = *(int **)(*local_18 + param_1 * 4);
        FUN_009a0940(iVar3);
        (**(code **)(*piVar1 + 4))(iVar3);
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
        if ((*(char *)(iVar3 + 0xc) == '\0') && (*(int *)(iVar3 + 4) != 0)) {
          local_40 = *(int *)(iVar3 + 4) + -1;
          puVar5 = (undefined4 *)FUN_00990880();
          local_8 = 8;
          local_164 = 0x11;
          if (0xf < (uint)puVar5[5]) {
            puVar5 = (undefined4 *)*puVar5;
          }
          __snprintf(local_160,0xff,"%s",puVar5);
          FUN_009a0530(iVar3);
          local_8 = 0xffffffff;
          if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_3c[0]);
          }
        }
        if (*(int *)(iVar3 + 4) != -1) {
          puVar5 = (undefined4 *)FUN_00990880();
          local_8 = 9;
          local_164 = 4;
          if (0xf < (uint)puVar5[5]) {
            puVar5 = (undefined4 *)*puVar5;
          }
          __snprintf(local_160,0xff,"%s",puVar5);
          FUN_0099ff90(iVar3);
          local_8 = 0xffffffff;
          if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_3c[0]);
          }
          puVar5 = (undefined4 *)FUN_00990880();
          local_8 = 10;
          local_164 = 0x10;
          if (0xf < (uint)puVar5[5]) {
            puVar5 = (undefined4 *)*puVar5;
          }
          __snprintf(local_160,0xff,"%s",puVar5);
          FUN_0099ff90(iVar3);
          local_8 = 0xffffffff;
          if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_3c[0]);
          }
        }
        param_1 = param_1 + 1;
        in_ECX = local_1c;
      } while (param_1 < local_44);
    }
    local_20 = local_20 + 1;
    local_18 = local_18 + 4;
  } while (local_20 < 3);
  uVar2 = *(undefined4 *)(in_ECX + 0x88);
  FUN_009a0940(iVar3);
  local_164 = 0xc;
  _sprintf(local_160,"%d",uVar2);
  FUN_0099ff90(iVar3);
  puVar5 = (undefined4 *)FUN_00990880();
  local_8 = 0xb;
  local_164 = 0x10;
  if (0xf < (uint)puVar5[5]) {
    puVar5 = (undefined4 *)*puVar5;
  }
  __snprintf(local_160,0xff,"%s",puVar5);
  FUN_0099ff90(iVar3);
  local_8 = 0xffffffff;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  uVar2 = *(undefined4 *)(local_1c + 0x8c);
  FUN_009a0940(iVar3);
  local_164 = 0xc;
  _sprintf(local_160,"%d",uVar2);
  FUN_0099ff90(iVar3);
  puVar5 = (undefined4 *)FUN_00990880();
  local_8 = 0xc;
  if (0xf < (uint)puVar5[5]) {
    puVar5 = (undefined4 *)*puVar5;
  }
  __snprintf(local_264,0xff,"%s",puVar5);
  FUN_0099ff90(iVar3);
  local_8 = 0xffffffff;
  if (local_4c < 0x10) {
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    if (*(int *)(local_1c + 0x7c) != 0) {
      FUN_009a0940(iVar3);
      FUN_0099f770(iVar3,0);
    }
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_60);
}

