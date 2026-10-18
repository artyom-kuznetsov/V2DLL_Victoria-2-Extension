// FUN_004dca10 @ 004dca10 body=[[004dca10, 004dcac9]]


int * FUN_004dca10(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 local_4c [16];
  undefined4 local_3c;
  undefined4 local_34;
  
  iVar4 = *(int *)(param_1 + 0x154);
  iVar3 = *(int *)(param_1 + 0x150);
  *param_2 = 0;
  iVar4 = iVar4 - iVar3 >> 2;
  if (0 < iVar4) {
    FUN_008a8650(0);
    local_3c = *(undefined4 *)(param_3 + 0x58);
    cVar2 = (**(code **)(**(int **)(param_3 + 0x188) + 0x24))();
    if ((cVar2 == '\0') ||
       (iVar3 = *(int *)(param_3 + 0x188),
       (*(int *)(iVar3 + 0x4c) - *(int *)(iVar3 + 0x48) & 0xfffffffcU) == 0)) {
      local_34 = 0;
    }
    else {
      local_34 = **(undefined4 **)(iVar3 + 0x48);
    }
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x150) + iVar3 * 4);
        cVar2 = (**(code **)(*(int *)(iVar1 + 8) + 0x18))(local_4c);
        if (cVar2 != '\0') {
          *param_2 = *param_2 + *(int *)(iVar1 + 0x24);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
  }
  if (param_4 != 0) {
    *(bool *)param_4 = 0 < iVar4;
  }
  return param_2;
}

