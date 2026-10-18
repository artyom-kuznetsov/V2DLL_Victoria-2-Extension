// FUN_0099ae10 @ 0099ae10 body=[[0099ae10, 0099b3ac] [0099b3b0, 0099b3c4]]


undefined4 * FUN_0099ae10(int param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int in_stack_0000004c;
  int in_stack_00000050;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a8c8;
  local_10 = ExceptionList;
  iVar9 = 0;
  local_8 = 0;
  if (((param_2[1] - *param_2 & 0xfffffff8U) == 0) ||
     ((in_stack_00000050 - in_stack_0000004c & 0xfffffffcU) == 0)) {
    piVar3 = *(int **)(param_1 + 100);
    local_18 = (int *)0x0;
    if ((in_stack_00000050 - in_stack_0000004c & 0xfffffffcU) == 0) {
      ExceptionList = &local_10;
      (**(code **)(*piVar3 + 0x68))
                (piVar3,((in_ECX[1] - *in_ECX) / 0xc) * 0x20,8,0x12,1,&local_18,0);
      (**(code **)(*local_18 + 0x2c))(local_18,0,0,&local_14,0x800);
      uVar2 = DAT_00f092fc;
      iVar7 = *in_ECX;
      if (0 < (in_ECX[1] - iVar7) / 0xc) {
        iVar6 = 0;
        iVar4 = 0;
        do {
          *(undefined4 *)(iVar6 + local_14) = *(undefined4 *)(iVar4 + iVar7);
          *(undefined4 *)(iVar6 + 4 + local_14) = *(undefined4 *)(*in_ECX + 4 + iVar4);
          *(undefined4 *)(iVar6 + 8 + local_14) = *(undefined4 *)(*in_ECX + 8 + iVar4);
          *(undefined4 *)(iVar6 + 0xc + local_14) = uVar2;
          *(undefined4 *)(iVar6 + 0x10 + local_14) = uVar2;
          *(undefined4 *)(iVar6 + 0x14 + local_14) = 0;
          *(undefined4 *)(iVar6 + 0x18 + local_14) = *(undefined4 *)(*param_2 + iVar9 * 8);
          *(undefined4 *)(iVar6 + 0x1c + local_14) = *(undefined4 *)(*param_2 + 4 + iVar9 * 8);
          if (1 < iVar9) {
            puVar1 = (undefined8 *)(iVar6 + 0xc + local_14);
            *puVar1 = CONCAT44(uVar2,uVar2);
            *(undefined4 *)(puVar1 + 1) = uVar2;
          }
          iVar7 = *in_ECX;
          iVar4 = iVar4 + 0xc;
          iVar9 = iVar9 + 1;
          iVar6 = iVar6 + 0x20;
        } while (iVar9 < (in_ECX[1] - iVar7) / 0xc);
      }
      *(undefined8 *)(local_14 + 0xc) = *(undefined8 *)(local_14 + 0x6c);
      *(undefined4 *)(local_14 + 0x14) = *(undefined4 *)(local_14 + 0x74);
      *(undefined8 *)(local_14 + 0x2c) = *(undefined8 *)(local_14 + 0x6c);
      *(undefined4 *)(local_14 + 0x34) = *(undefined4 *)(local_14 + 0x74);
      (**(code **)(*local_18 + 0x30))(local_18);
      puVar5 = (undefined4 *)FUN_00aae9af(0x50);
      if (puVar5 != (undefined4 *)0x0) {
        iVar9 = in_ECX[1] - *in_ECX;
        uVar2 = *(undefined4 *)(param_1 + 100);
        puVar5[1] = local_18;
        *(undefined2 *)(puVar5 + 2) = 0x20;
        *puVar5 = uVar2;
        *(short *)((int)puVar5 + 10) =
             ((short)(iVar9 / 0xc) + (short)(iVar9 >> 0x1f)) -
             (short)((longlong)iVar9 * 0x2aaaaaab >> 0x3f);
        puVar5[3] = 0x12;
        puVar8 = (undefined4 *)&stack0x0000000c;
        puVar10 = puVar5 + 4;
        for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        goto LAB_0099b3a0;
      }
    }
    else {
      param_2 = (int *)*piVar3;
      ExceptionList = &local_10;
      (*(code *)param_2[0x1a])(piVar3,((in_ECX[1] - *in_ECX) / 0xc) * 0x1c,8,0x52);
      (**(code **)(*local_18 + 0x2c))(local_18,0,0,&param_2,0x800);
      uVar2 = DAT_00f092fc;
      iVar9 = *in_ECX;
      iVar7 = 0;
      if (0 < (in_ECX[1] - iVar9) / 0xc) {
        iVar6 = 0;
        iVar4 = 0;
        do {
          *(undefined4 *)(iVar6 + (int)param_2) = *(undefined4 *)(iVar4 + iVar9);
          *(undefined4 *)(iVar6 + 4 + (int)param_2) = *(undefined4 *)(*in_ECX + 4 + iVar4);
          *(undefined4 *)(iVar6 + 8 + (int)param_2) = *(undefined4 *)(*in_ECX + 8 + iVar4);
          *(undefined4 *)(iVar6 + 0xc + (int)param_2) = uVar2;
          *(undefined4 *)(iVar6 + 0x10 + (int)param_2) = uVar2;
          *(undefined4 *)(iVar6 + 0x14 + (int)param_2) = 0;
          if (1 < iVar7) {
            puVar1 = (undefined8 *)(iVar6 + 0xc + (int)param_2);
            *puVar1 = CONCAT44(uVar2,uVar2);
            *(undefined4 *)(puVar1 + 1) = uVar2;
          }
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)(iVar6 + 0x18 + (int)param_2) =
               *(undefined4 *)(in_stack_0000004c + iVar7 * 4);
          iVar9 = *in_ECX;
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x1c;
        } while (iVar7 < (in_ECX[1] - iVar9) / 0xc);
      }
      *(undefined8 *)(param_2 + 3) = *(undefined8 *)(param_2 + 0x18);
      param_2[5] = param_2[0x1a];
      *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_2 + 0x18);
      param_2[0xc] = param_2[0x1a];
      (**(code **)(*local_18 + 0x30))(local_18);
      puVar5 = (undefined4 *)FUN_00aae9af(0x50);
      if (puVar5 != (undefined4 *)0x0) {
        iVar9 = in_ECX[1] - *in_ECX;
        uVar2 = *(undefined4 *)(param_1 + 100);
        puVar5[1] = local_18;
        *(undefined2 *)(puVar5 + 2) = 0x1c;
        *puVar5 = uVar2;
        *(short *)((int)puVar5 + 10) =
             ((short)(iVar9 / 0xc) + (short)(iVar9 >> 0x1f)) -
             (short)((longlong)iVar9 * 0x2aaaaaab >> 0x3f);
        puVar5[3] = 0x52;
        puVar8 = (undefined4 *)&stack0x0000000c;
        puVar10 = puVar5 + 4;
        for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        goto LAB_0099b3a0;
      }
    }
  }
  else {
    local_18 = (int *)0x0;
    local_14 = **(int **)(param_1 + 100);
    ExceptionList = &local_10;
    (**(code **)(local_14 + 0x68))
              (*(int **)(param_1 + 100),((in_ECX[1] - *in_ECX) / 0xc) * 0x24,8,0x152,1,&local_18,0);
    (**(code **)(*local_18 + 0x2c))(local_18,0,0,&local_14,0x800);
    uVar2 = DAT_00f092fc;
    iVar7 = *in_ECX;
    if (0 < (in_ECX[1] - iVar7) / 0xc) {
      iVar6 = 0;
      iVar4 = 0;
      do {
        *(undefined4 *)(iVar6 + local_14) = *(undefined4 *)(iVar4 + iVar7);
        *(undefined4 *)(iVar6 + 4 + local_14) = *(undefined4 *)(*in_ECX + 4 + iVar4);
        *(undefined4 *)(iVar6 + 8 + local_14) = *(undefined4 *)(*in_ECX + 8 + iVar4);
        *(undefined4 *)(iVar6 + 0xc + local_14) = uVar2;
        *(undefined4 *)(iVar6 + 0x10 + local_14) = uVar2;
        *(undefined4 *)(iVar6 + 0x14 + local_14) = 0;
        *(undefined4 *)(iVar6 + 0x1c + local_14) = *(undefined4 *)(*param_2 + iVar9 * 8);
        *(undefined4 *)(iVar6 + 0x20 + local_14) = *(undefined4 *)(*param_2 + 4 + iVar9 * 8);
        if (1 < iVar9) {
          puVar1 = (undefined8 *)(iVar6 + 0xc + local_14);
          *puVar1 = CONCAT44(uVar2,uVar2);
          *(undefined4 *)(puVar1 + 1) = uVar2;
        }
        iVar4 = iVar4 + 0xc;
        *(undefined4 *)(iVar6 + 0x18 + local_14) = *(undefined4 *)(in_stack_0000004c + iVar9 * 4);
        iVar7 = *in_ECX;
        iVar9 = iVar9 + 1;
        iVar6 = iVar6 + 0x24;
      } while (iVar9 < (in_ECX[1] - iVar7) / 0xc);
    }
    *(undefined8 *)(local_14 + 0xc) = *(undefined8 *)(local_14 + 0x78);
    *(undefined4 *)(local_14 + 0x14) = *(undefined4 *)(local_14 + 0x80);
    *(undefined8 *)(local_14 + 0x30) = *(undefined8 *)(local_14 + 0x78);
    *(undefined4 *)(local_14 + 0x38) = *(undefined4 *)(local_14 + 0x80);
    (**(code **)(*local_18 + 0x30))(local_18);
    puVar5 = (undefined4 *)FUN_00aae9af(0x50);
    if (puVar5 != (undefined4 *)0x0) {
      iVar9 = in_ECX[1] - *in_ECX;
      uVar2 = *(undefined4 *)(param_1 + 100);
      puVar5[1] = local_18;
      *(undefined2 *)(puVar5 + 2) = 0x24;
      *puVar5 = uVar2;
      *(short *)((int)puVar5 + 10) =
           ((short)(iVar9 / 0xc) + (short)(iVar9 >> 0x1f)) -
           (short)((longlong)iVar9 * 0x2aaaaaab >> 0x3f);
      puVar5[3] = 0x152;
      puVar8 = (undefined4 *)&stack0x0000000c;
      puVar10 = puVar5 + 4;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      goto LAB_0099b3a0;
    }
  }
  puVar5 = (undefined4 *)0x0;
LAB_0099b3a0:
  if (in_stack_0000004c == 0) {
    ExceptionList = local_10;
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_stack_0000004c);
}

