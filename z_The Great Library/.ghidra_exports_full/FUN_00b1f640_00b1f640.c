// FUN_00b1f640 @ 00b1f640 body=[[00b1f640, 00b1f647] [00b1f650, 00b1f692]]


void FUN_00b1f640(uint param_1,uint param_2,code *param_3,code *param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  do {
    bVar1 = true;
    uVar3 = param_1;
    if (param_2 <= param_1) {
      return;
    }
    do {
      uVar3 = uVar3 + 1;
      iVar2 = (*param_3)();
      if (0 < iVar2) {
        (*param_4)();
        bVar1 = false;
      }
    } while (uVar3 < param_2);
  } while (!bVar1);
  return;
}

