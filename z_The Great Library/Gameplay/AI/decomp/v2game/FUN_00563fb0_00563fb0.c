// FUN_00563fb0 @ 00563fb0 body=[[00563fb0, 0056421d]]


bool FUN_00563fb0(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *in_ECX;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ba1a88;
  local_14 = ExceptionList;
  if ((((*(char *)(param_1 + 0xe5) == '\0') ||
       (iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[1] * 4),
       *(char *)(iVar4 + 0x12d0) == '\0')) || (*(char *)(iVar4 + 0x31) != '\0')) ||
     (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x50) / 1000 < *(int *)(iVar4 + 0x1404))) {
    if (*(char *)(param_1 + 0xe6) != '\0') {
      ExceptionList = &local_14;
      uVar2 = FUN_004bbd60(param_2);
      ExceptionList = local_14;
      return (bool)uVar2;
    }
    ExceptionList = &local_14;
    if ((((*(char *)(param_1 + 0xe9) == '\0') ||
         ((ExceptionList = &local_14, cVar3 = (**(code **)(**(int **)(param_2 + 0x188) + 0x24))(),
          cVar3 != '\0' && (*(char *)(*(int *)(param_2 + 0x188) + 0x27c) != '\0')))) &&
        ((*(char *)(param_1 + 0xe4) == '\0' || (*(int *)(param_2 + 300) == 0)))) &&
       ((bool)*(char *)(param_1 + 0xe8) == (*(int *)(param_2 + 300) == in_ECX[1]))) {
      if (0 < *(int *)(param_1 + 0x54)) {
        iVar4 = FUN_004dad40();
        iVar4 = *(int *)(iVar4 + 0x34);
        iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[1] * 4) + 0xbcc);
        if ((*(char *)(*(int *)(iVar4 + 0x58) + *(int *)(iVar1 + 0x2fc)) == '\0') &&
           (*(char *)(iVar4 + 0x130) == '\0')) {
          ExceptionList = local_14;
          return false;
        }
        if ((*(char *)(iVar4 + 0x130) == '\0') &&
           (*(int *)(*(int *)(iVar1 + 8) + *(int *)(iVar4 + 0x58) * 4) < 1)) {
          ExceptionList = local_14;
          return false;
        }
      }
      FUN_009885d0();
      uStack_c = 0;
      cVar3 = FUN_00416db0();
      uStack_c = 0xffffffff;
      FUN_00408ad0();
      if (cVar3 != '\0') {
        FUN_008a8650(0);
        uStack_54 = in_ECX[1];
        uStack_58 = *in_ECX;
        uStack_50 = *(undefined4 *)(param_2 + 0x58);
        cVar3 = (**(code **)(*(int *)(param_1 + 0x60) + 0x18))(auStack_60);
        ExceptionList = pvStack_18;
        return cVar3 != '\0';
      }
      iVar4 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[1] * 4) + 0x83c);
      while (iVar4 != 0) {
        iVar4 = *(int *)(iVar4 + 8);
        cVar3 = FUN_00416db0();
        if (cVar3 != '\0') {
          ExceptionList = local_14;
          return true;
        }
      }
    }
  }
  ExceptionList = local_14;
  return false;
}

