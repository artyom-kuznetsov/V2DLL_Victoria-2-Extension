// FUN_00b1f9b0 @ 00b1f9b0 body=[[00b1f9b0, 00b1fa2c] [00b1fa30, 00b1fb4d]]


int * FUN_00b1f9b0(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined **local_c;
  
  piVar3 = (int *)0x0;
  iVar2 = FUN_00b295a0(param_1);
  if (iVar2 == 0) {
    FUN_00b1f840("File not found");
    return (int *)0x0;
  }
  iVar2 = FUN_00ab4790(param_1,0x2e);
  if (iVar2 == 0) {
LAB_00b1fb01:
    ppuVar4 = &PTR_PTR_00f05e80;
    if (PTR_PTR_00f05e80 == (undefined *)0x0) goto LAB_00b1fb2f;
    do {
      if (piVar3 != (int *)0x0) {
        return piVar3;
      }
      piVar3 = (int *)FUN_00b1f950();
      ppuVar4 = ppuVar4 + 1;
    } while (*ppuVar4 != (undefined *)0x0);
  }
  else {
    do {
      iVar5 = iVar2;
      iVar2 = FUN_00ab4790(iVar5 + 1,0x2e);
    } while (iVar2 != 0);
    if ((iVar5 == 0) || (iVar5 = iVar5 + 1, iVar5 == 0)) goto LAB_00b1fb01;
    ppuVar4 = &PTR_PTR_00f05e80;
    puVar1 = PTR_PTR_00f05e80;
    while ((puVar1 != (undefined *)0x0 && (piVar3 == (int *)0x0))) {
      iVar2 = FUN_00b23450(iVar5,**(undefined4 **)*ppuVar4);
      if (iVar2 == 0) {
        piVar3 = (int *)FUN_00b1f950();
      }
      ppuVar4 = ppuVar4 + 1;
      puVar1 = *ppuVar4;
    }
    local_c = &PTR_PTR_00f05e80;
    puVar1 = PTR_PTR_00f05e80;
    while (puVar1 != (undefined *)0x0) {
      if (piVar3 != (int *)0x0) {
        return piVar3;
      }
      iVar2 = FUN_00b23450(iVar5,**(undefined4 **)*local_c);
      if (iVar2 != 0) {
        puVar1 = *local_c;
        piVar3 = (int *)0x0;
        iVar2 = (**(code **)(puVar1 + 4))(param_1,param_2);
        if ((iVar2 != 0) && (iVar2 = (**(code **)(puVar1 + 8))(param_1,param_2), iVar2 != 0)) {
          piVar3 = (int *)(*DAT_013f3aa8)(0x14,0);
          if (piVar3 == (int *)0x0) {
            (**(code **)(puVar1 + 0x34))(iVar2);
          }
          else {
            piVar3[1] = 0;
            piVar3[4] = 0;
            piVar3[2] = 0;
            piVar3[3] = (int)puVar1;
            *piVar3 = iVar2;
          }
        }
      }
      local_c = local_c + 1;
      puVar1 = *local_c;
    }
  }
  if (piVar3 != (int *)0x0) {
    return piVar3;
  }
LAB_00b1fb2f:
  FUN_00b1f840("Archive type unsupported");
  return (int *)0x0;
}

