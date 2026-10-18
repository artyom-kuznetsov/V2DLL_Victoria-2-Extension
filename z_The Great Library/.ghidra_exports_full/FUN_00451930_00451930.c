// FUN_00451930 @ 00451930 body=[[00451930, 004519bb] [004519c0, 00451a59] [00451a5d, 00451a98] [00451a9c, 00451aae]]


/* WARNING: Removing unreachable block (ram,0x00451a10) */

void FUN_00451930(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  int *local_24;
  int local_1c;
  int local_18;
  uint *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3d3a0;
  local_10 = ExceptionList;
  local_8 = 0;
  uStack_7 = 0;
  local_14 = (uint *)(DAT_012587e4 + 4);
  piVar3 = *(int **)(DAT_012587e4 + 4);
  ExceptionList = &local_10;
LAB_00451963:
  do {
    do {
      if ((piVar3 < (int *)*local_14) || ((int *)local_14[1] <= piVar3)) {
        if (in_stack_0000001c < 0x10) {
          ExceptionList = local_10;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_2);
      }
      local_18 = *piVar3;
      local_24 = piVar3 + 1;
      piVar3 = local_24;
    } while (((*(int *)(local_18 + 0x20) == 0) ||
             (((local_1c = local_18 + 0x1c, *(char *)(local_18 + 0x1c) == 'R' &&
               (*(char *)(local_18 + 0x1d) == 'E')) && (*(char *)(local_18 + 0x1e) == 'B')))) ||
            ((int)(*(int *)(local_18 + 0x9dc) - *(int *)(local_18 + 0x9d8) & 0xfffffffcU) < 1));
    piVar5 = *(int **)(local_18 + 0x9d8);
    do {
      piVar3 = local_24;
      if ((piVar5 < *(int **)(local_18 + 0x9d8)) || (*(int **)(local_18 + 0x9dc) <= piVar5))
      goto LAB_00451963;
      iVar1 = *piVar5;
      piVar5 = piVar5 + 1;
      iVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar1 * 4) + 0x16c)
                          + 0x2c))(local_40);
      uVar2 = *(uint *)(iVar1 + 0x10);
      uVar4 = uVar2;
      if (in_stack_00000018 <= uVar2) {
        uVar4 = in_stack_00000018;
      }
      iVar1 = FUN_00414bd0(uVar4);
      bVar6 = false;
      if (iVar1 == 0) {
        if (uVar2 < in_stack_00000018) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = (uint)(uVar2 != in_stack_00000018);
        }
        bVar6 = uVar2 == 0;
      }
      local_8 = 0;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
    } while (!bVar6);
    FUN_004d61d0();
    piVar3 = local_24;
  } while( true );
}

