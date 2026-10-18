// FUN_0073cd50 @ 0073cd50 body=[[0073cd50, 0073cd91] [0073cd95, 0073cec4] [0073cec8, 0073cee7] [0073ceeb, 0073cefb]]


void FUN_0073cd50(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  int in_EDX;
  byte *pbVar7;
  bool bVar8;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  uint in_stack_00000038;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4ba7b;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  if (in_EDX != 0) {
    pbVar2 = param_2;
    if (in_stack_0000001c < 0x10) {
      pbVar2 = (byte *)&param_2;
    }
    pbVar7 = &DAT_00ded94d;
    do {
      bVar1 = *pbVar2;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_0073cde5:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_0073cdea;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_0073cde5;
      pbVar2 = pbVar2 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0073cdea:
    ExceptionList = &local_10;
    if (iVar3 != 0) {
      ExceptionList = &local_10;
      in_ECX = (int *)(**(code **)(*in_ECX + 0x6c))(&param_2);
    }
    if (in_ECX != (int *)0x0) {
      bVar8 = false;
      iVar3 = (**(code **)(*in_ECX + 0x48))(&stack0x00000024);
      if (iVar3 != 0) {
        bVar8 = *(int *)(iVar3 + 0x6c) == 1;
      }
      uVar6 = *(undefined4 *)(in_EDX + 0x58);
      iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
      iVar4 = FUN_0053f3b0(uVar6,param_1);
      iVar5 = FUN_00aae9af(0x4c);
      local_8._0_1_ = 2;
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_00587a70(iVar5,param_1,*(undefined4 *)(iVar3 + 0x1c),
                             *(undefined4 *)(iVar3 + 0x20),iVar4 == 0,uVar6,bVar8);
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar6);
      if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_2);
      }
      goto joined_r0x0073cedd;
    }
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
joined_r0x0073cedd:
  if (in_stack_00000038 < 0x10) {
    ExceptionList = local_10;
    return;
  }
  in_stack_0000001c = 0xf;
  in_stack_00000018 = 0;
  param_2 = (byte *)((uint)param_2 & 0xffffff00);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_stack_00000024);
}

