// FUN_00a71560 @ 00a71560 body=[[00a71560, 00a71737] [00a7173b, 00a717a4] [00a717a8, 00a717f6]]


void FUN_00a71560(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  uint local_258;
  uint local_244;
  undefined4 local_23c;
  uint local_228;
  char local_21c [256];
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b60de6;
  local_14 = ExceptionList;
  local_260 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) & 0xfffffff0U)) {
    local_264 = 0;
    ExceptionList = &local_14;
    do {
      piVar2 = (int *)(*(int *)(in_ECX + 8) + local_264);
      iVar3 = piVar2[1] - *piVar2 >> 0x1f;
      if ((piVar2[1] - *piVar2) / 0x1c + iVar3 != iVar3) {
        FUN_009a0940(param_1);
        if (*(int *)(param_1 + 4) == -1) {
          *(undefined4 *)(param_1 + 4) = 0;
        }
        else {
          FUN_004013e0(param_1);
          if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
            FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
          }
          FUN_004013e0(param_1);
          FUN_004013e0(param_1);
        }
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        iVar3 = *piVar2;
        local_26c = 0;
        if (0 < (piVar2[1] - iVar3) / 0x1c) {
          local_268 = 0;
          do {
            puVar1 = (undefined4 *)(local_268 + iVar3);
            if (0xf < (uint)puVar1[5]) {
              puVar1 = (undefined4 *)*puVar1;
            }
            __snprintf(local_21c,0xff,"%s",puVar1);
            FUN_0099ff90(param_1);
            iVar3 = *piVar2;
            local_26c = local_26c + 1;
            local_268 = local_268 + 0x1c;
          } while (local_26c < (piVar2[1] - iVar3) / 0x1c);
        }
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
          FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
        }
        if (*(int *)(param_1 + 4) != -1) {
          puVar1 = (undefined4 *)FUN_00990880();
          local_c = 2;
          if (0xf < (uint)puVar1[5]) {
            puVar1 = (undefined4 *)*puVar1;
          }
          __snprintf(local_21c,0xff,"%s",puVar1);
          FUN_0099ff90(param_1);
          local_c = 0xffffffff;
          if (0xf < local_228) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_23c);
          }
          puVar1 = (undefined4 *)FUN_00990880();
          local_c = 3;
          local_11c = 0x10;
          if (0xf < (uint)puVar1[5]) {
            puVar1 = (undefined4 *)*puVar1;
          }
          __snprintf(local_118,0xff,"%s",puVar1);
          FUN_0099ff90(param_1);
          local_c = 0xffffffff;
          if (0xf < local_244) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_258);
          }
          local_244 = 0xf;
          local_258 = local_258 & 0xffffff00;
        }
      }
      local_264 = local_264 + 0x10;
      local_260 = local_260 + 1;
    } while (local_260 < *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 4);
  }
  ExceptionList = local_14;
  return;
}

