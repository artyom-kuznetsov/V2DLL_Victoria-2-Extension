// FUN_009c3e20 @ 009c3e20 body=[[009c3e20, 009c4159] [009c415d, 009c416f]]


void FUN_009c3e20(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  uint in_stack_0000001c;
  int in_stack_00000024;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  puStack_c = &LAB_00b3a868;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((int *)param_1[0x25] != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(*(int *)param_1[0x25] + 0x80))();
    for (iVar4 = *(int *)(param_1[0x25] + 0xdc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xd8)) {
      *(undefined4 *)(iVar4 + 0xe4) = 0;
    }
    (**(code **)(*(int *)param_1[0x25] + 0x38))();
    if ((char)param_1[0x30] == '\0') {
      FUN_009962f0(param_1[0x28]);
    }
    else {
      FUN_009963d0(param_1[0x25]);
    }
  }
  if ((char)param_1[0x30] == '\0') {
    piVar2 = (int *)param_1[0x28];
    piVar3 = (int *)FUN_005c2ad0(&param_2);
    iVar4 = (**(code **)(*piVar3 + 0x48))();
    (**(code **)(*piVar2 + 0x10))(iVar4);
    param_1[0x25] = iVar4;
    FUN_0099a5c0();
    (**(code **)(*param_1 + 0xc4))(*(undefined8 *)(param_1 + 0x29),param_1[0x2b]);
    if (in_stack_00000024 != 0) {
      (**(code **)(*(int *)param_1[0x25] + 0x80))();
      (**(code **)(*(int *)param_1[0x25] + 0x74))(in_stack_00000024);
    }
    goto LAB_009c4139;
  }
  piVar2 = (int *)FUN_00996520();
  param_1[0x25] = (int)piVar2;
  (**(code **)(*piVar2 + 8))(0);
  FUN_0099e960();
  (**(code **)(*(int *)param_1[0x25] + 0x9c))(param_1[0x31]);
  (**(code **)(*(int *)param_1[0x25] + 0x88))();
  iVar4 = param_1[0x32];
  sVar6 = (short)(int)(float)param_1[0x29];
  sVar5 = (short)(int)(float)param_1[0x2a];
  if (iVar4 == 3) {
    iVar4 = *param_1;
    param_1 = (int *)CONCAT22((short)param_1[0x34] + sVar5,(short)param_1[0x33] + sVar6);
    (**(code **)(iVar4 + 200))(param_1);
    goto LAB_009c4139;
  }
  if (iVar4 == 1) {
    param_1 = (int *)CONCAT22(sVar5,(short)param_1[0x33] + sVar6);
LAB_009c4098:
    (**(code **)(*piVar1 + 200))(param_1);
    goto LAB_009c4139;
  }
  if (iVar4 == 2) {
    (**(code **)(*param_1 + 200))(CONCAT22((short)param_1[0x34] + sVar5,sVar6));
    goto LAB_009c4139;
  }
  if (iVar4 == 0) {
LAB_009c3ffb:
    param_1 = (int *)CONCAT22(sVar5,sVar6);
  }
  else {
    if (iVar4 != 4) {
      if (iVar4 == 5) {
        (**(code **)(*param_1 + 200))(CONCAT22(sVar5,(short)(param_1[0x33] / 2) + sVar6));
        goto LAB_009c4139;
      }
      if (iVar4 == 6) {
        param_1 = (int *)CONCAT22((short)param_1[0x34] + sVar5,(short)(param_1[0x33] / 2) + sVar6);
        goto LAB_009c4098;
      }
      goto LAB_009c3ffb;
    }
    param_1 = (int *)CONCAT22((short)(param_1[0x34] / 2) + sVar5,(short)(param_1[0x33] / 2) + sVar6)
    ;
  }
  (**(code **)(*piVar1 + 200))(param_1);
LAB_009c4139:
  *(undefined2 *)(piVar1 + 0x3d) = 0;
  piVar1[0x26] = in_stack_00000024;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  ExceptionList = local_10;
  return;
}

