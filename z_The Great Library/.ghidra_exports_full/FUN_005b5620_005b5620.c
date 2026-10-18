// FUN_005b5620 @ 005b5620 body=[[005b5620, 005b5709]]


int FUN_005b5620(undefined4 param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int *local_8;
  
  iVar3 = param_2;
  if (((param_3[0x1d] != 0) && (*(int *)(param_3[0x1d] + 0x18) == param_2)) || (0 < param_3[0x22]))
  {
    return 0;
  }
  puVar1 = *(undefined4 **)(param_2 + 0xec);
  local_8 = (int *)0x0;
  do {
    if (puVar1 == (undefined4 *)0x0) goto LAB_005b56b8;
    piVar2 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    cVar4 = FUN_005cbf60(param_2);
  } while (cVar4 == '\0');
  local_8 = piVar2;
  if (*(char *)(*(int *)(param_2 + 0x5c) + 0x2a) == '\0') {
    uVar5 = (**(code **)(*piVar2 + 0x30))();
    (**(code **)(*param_3 + 0x30))(uVar5);
    cVar4 = FUN_005b5bc0(uVar5);
    if (cVar4 == '\x01') {
      param_2 = 2;
    }
    else {
LAB_005b56b8:
      if (param_3[0x1c] != 0) {
        return 0;
      }
      param_2 = FUN_005b5710();
      if (param_2 == 0) {
        return 0;
      }
    }
  }
  else {
    param_2 = 1;
  }
  if ((*(int *)(iVar3 + 0x10c) == 0) ||
     (iVar6 = (**(code **)(**(int **)(iVar3 + 0x10c) + 0x24))(), iVar6 != param_2)) {
    FUN_005b5840(param_1,iVar3,param_3,local_8);
  }
  return param_2;
}

