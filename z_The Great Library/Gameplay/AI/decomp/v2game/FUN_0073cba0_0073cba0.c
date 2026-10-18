// FUN_0073cba0 @ 0073cba0 body=[[0073cba0, 0073cbec] [0073cbf0, 0073ccfb] [0073ccff, 0073cd1a] [0073cd1e, 0073cd34] [0073cd38, 0073cd48]]


void FUN_0073cba0(undefined4 param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 in_stack_0000001c;
  uint in_stack_00000020;
  uint in_stack_00000028;
  undefined4 in_stack_00000038;
  uint in_stack_0000003c;
  undefined4 in_stack_00000044;
  uint in_stack_00000058;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4bab3;
  local_10 = ExceptionList;
  local_8 = 2;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    bVar8 = false;
    bVar9 = false;
    pbVar2 = param_3;
    if (in_stack_00000020 < 0x10) {
      pbVar2 = (byte *)&param_3;
    }
    pbVar6 = &DAT_00ded94d;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0073cc10:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0073cc15;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0073cc10;
      pbVar2 = pbVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0073cc15:
    ExceptionList = &local_10;
    if (iVar3 != 0) {
      ExceptionList = &local_10;
      in_ECX = (int *)(**(code **)(*in_ECX + 0x6c))(&param_3);
    }
    if (in_ECX != (int *)0x0) {
      iVar3 = (**(code **)(*in_ECX + 0x48))(&stack0x00000028);
      iVar4 = (**(code **)(*in_ECX + 0x48))(&stack0x00000044);
      if (iVar3 != 0) {
        bVar8 = *(int *)(iVar3 + 0x6c) == 1;
      }
      if (iVar4 != 0) {
        bVar9 = *(int *)(iVar4 + 0x6c) == 1;
      }
      uVar5 = *(undefined4 *)(param_2 + 0x58);
      iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
      iVar4 = FUN_00aae9af(0x4c);
      local_8._0_1_ = 3;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_00587a70(iVar4,param_1,*(undefined4 *)(iVar3 + 0x1c),
                             *(undefined4 *)(iVar3 + 0x20),bVar8,uVar5,bVar9);
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar5);
    }
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  in_stack_00000020 = 0xf;
  in_stack_0000001c = 0;
  param_3 = (byte *)((uint)param_3 & 0xffffff00);
  if (0xf < in_stack_0000003c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000028);
  }
  in_stack_0000003c = 0xf;
  in_stack_00000038 = 0;
  in_stack_00000028 = in_stack_00000028 & 0xffffff00;
  if (0xf < in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000044);
  }
  ExceptionList = local_10;
  return;
}

