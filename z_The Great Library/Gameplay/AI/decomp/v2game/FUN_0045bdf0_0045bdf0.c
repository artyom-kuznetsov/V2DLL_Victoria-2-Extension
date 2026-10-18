// FUN_0045bdf0 @ 0045bdf0 body=[[0045bdf0, 0045be76]]


undefined4 FUN_0045bdf0(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  if ((int)(uVar1 - *param_1) / 0x1c != 0) {
    uVar2 = *param_2;
    if ((*(uint *)param_2[1] <= uVar2) && (uVar2 < ((uint *)param_2[1])[1])) {
      if (uVar2 != uVar1 - 0x1c) {
        while (uVar2 = uVar2 + 0x1c, uVar2 != uVar1) {
          FUN_00408ed0(uVar2,0,0xffffffff);
        }
        FUN_0045c020();
        return 1;
      }
      FUN_0045c020();
      return 1;
    }
  }
  return 0;
}

