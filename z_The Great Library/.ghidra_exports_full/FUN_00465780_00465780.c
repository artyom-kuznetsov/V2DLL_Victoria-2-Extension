// FUN_00465780 @ 00465780 body=[[00465780, 004657c9] [004657d0, 0046585d] [00465861, 004658bd] [004658c5, 004658e2] [004658e8, 004659ed]]


void FUN_00465780(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  int local_158;
  int local_150;
  undefined4 *local_14c;
  undefined4 *local_148;
  undefined4 local_144;
  int *local_13c;
  undefined4 local_138 [5];
  uint local_124;
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b608f6;
  local_14 = ExceptionList;
  iVar3 = *param_1;
  local_150 = 0;
  if (0 < (int)(param_1[1] - iVar3 & 0xfffffff0U)) {
    local_158 = 0;
    ExceptionList = &local_14;
    do {
      local_13c = (int *)(local_158 + 4 + iVar3);
      iVar2 = *local_13c - *(int *)(local_158 + iVar3) >> 2;
      if (iVar2 < 1) {
        FUN_009a0940(unaff_ESI);
        if (*(int *)(unaff_ESI + 4) == -1) {
          *(undefined4 *)(unaff_ESI + 4) = 0;
        }
        else {
          FUN_004013e0(unaff_ESI);
          if ((*(char *)(unaff_ESI + 0xc) == '\0') && (*(int *)(unaff_ESI + 4) != 0)) {
            FUN_009a08a0(unaff_ESI,*(int *)(unaff_ESI + 4) + -1);
          }
          FUN_004013e0(unaff_ESI);
          FUN_004013e0(unaff_ESI);
        }
        *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) + 1;
        local_11c = 0xf;
        __snprintf(local_118,0xff,"%s",&DAT_00ded950);
        FUN_0099ff90(unaff_ESI);
        *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) + -1;
        if ((*(char *)(unaff_ESI + 0xc) == '\0') && (*(int *)(unaff_ESI + 4) != 0)) {
          FUN_009a08a0(unaff_ESI,*(int *)(unaff_ESI + 4) + -1);
        }
        if (*(int *)(unaff_ESI + 4) != -1) {
          FUN_004013e0(unaff_ESI);
          FUN_004013e0(unaff_ESI);
        }
      }
      else {
        local_14c = (undefined4 *)0x0;
        local_148 = (undefined4 *)0x0;
        local_144 = 0;
        local_c._0_1_ = 0;
        local_c._1_3_ = 0;
        FUN_00419660(iVar2);
        iVar2 = 0;
        if (0 < (int)(*local_13c - *(int *)(local_158 + iVar3) & 0xfffffffcU)) {
          do {
            FUN_004643b0(local_138);
            local_c._0_1_ = 1;
            FUN_00a840b0();
            local_c._0_1_ = 0;
            if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_138[0]);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < *local_13c - *(int *)(local_158 + iVar3) >> 2);
        }
        FUN_00457540(0x9cf,&local_14c,1);
        local_c = 0xffffffff;
        puVar1 = local_14c;
        if (local_14c != (undefined4 *)0x0) {
          while( true ) {
            if (puVar1 == local_148) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_14c);
            }
            if (0xf < (uint)puVar1[5]) break;
            puVar1[5] = 0xf;
            puVar1[4] = 0;
            *(undefined1 *)puVar1 = 0;
            puVar1 = puVar1 + 7;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(*puVar1);
        }
        local_14c = (undefined4 *)0x0;
        local_148 = (undefined4 *)0x0;
        local_144 = 0;
      }
      iVar3 = *param_1;
      local_150 = local_150 + 1;
      local_158 = local_158 + 0x10;
    } while (local_150 < param_1[1] - iVar3 >> 4);
  }
  ExceptionList = local_14;
  return;
}

