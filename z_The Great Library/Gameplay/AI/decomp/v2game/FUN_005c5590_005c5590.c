// FUN_005c5590 @ 005c5590 body=[[005c5590, 005c56b2] [005c56b6, 005c5740]]


void FUN_005c5590(int *param_1)

{
  undefined4 ***pppuVar1;
  int in_ECX;
  int iVar2;
  int local_140;
  int local_13c;
  undefined4 **appuStack_138 [4];
  undefined4 uStack_128;
  uint uStack_124;
  undefined4 uStack_11c;
  char acStack_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b619bb;
  local_14 = ExceptionList;
  iVar2 = param_1[1] - *param_1 >> 0x1f;
  if ((param_1[1] - *param_1) / 0x1c + iVar2 != iVar2) {
    ExceptionList = &local_14;
    FUN_009a0940(in_ECX);
    FUN_0099fe90(0);
    iVar2 = *param_1;
    local_140 = 0;
    if (0 < (param_1[1] - iVar2) / 0x1c) {
      local_13c = 0;
      do {
        (**(code **)(*(int *)(local_13c + iVar2) + 4))();
        if (*(char *)(in_ECX + 0xc) == '\0') {
          uStack_124 = 0xf;
          uStack_128 = 0;
          appuStack_138[0] = (undefined4 **)((uint)appuStack_138[0] & 0xffffff00);
          FUN_00409350(&DAT_00ded950,1);
          uStack_c = 0;
          uStack_11c = 0xf;
          pppuVar1 = (undefined4 ***)appuStack_138[0];
          if (uStack_124 < 0x10) {
            pppuVar1 = appuStack_138;
          }
          __snprintf(acStack_118,0xff,"%s",pppuVar1);
          FUN_0099ff90(in_ECX);
          uStack_c = 0xffffffff;
          if (0xf < uStack_124) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(appuStack_138[0]);
          }
          uStack_124 = 0xf;
          uStack_128 = 0;
          appuStack_138[0] = (undefined4 **)((uint)appuStack_138[0] & 0xffffff00);
        }
        iVar2 = *param_1;
        local_140 = local_140 + 1;
        local_13c = local_13c + 0x1c;
      } while (local_140 < (param_1[1] - iVar2) / 0x1c);
    }
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + -1;
    if ((*(char *)(in_ECX + 0xc) == '\0') && (*(int *)(in_ECX + 4) != 0)) {
      FUN_009a08a0(in_ECX,*(int *)(in_ECX + 4) + -1);
    }
    if (*(int *)(in_ECX + 4) != -1) {
      FUN_004013e0(in_ECX);
      FUN_004013e0(in_ECX);
    }
  }
  ExceptionList = local_14;
  return;
}

