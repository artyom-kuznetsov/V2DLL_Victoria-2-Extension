// FUN_00441e80 @ 00441e80 body=[[00441e80, 00441f32]]


undefined4 FUN_00441e80(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = DAT_012588e8;
  *param_2 = -1;
  *param_3 = -1;
  uVar2 = *(uint *)(param_1 + 0x34);
  do {
    do {
      uVar4 = uVar2;
      if ((uVar4 < *(uint *)(param_1 + 0x34)) || (*(uint *)(param_1 + 0x38) <= uVar4))
      goto LAB_00441f0a;
      iVar3 = *(int *)(uVar4 + 4);
      bVar5 = iVar3 != *(int *)(iVar1 + 0xb60);
      uVar2 = uVar4 + 8;
    } while (((*param_2 != -1) || (iVar3 == 0)) && (bVar5));
    iVar3 = FUN_0052fc10();
    *param_2 = iVar3;
    *param_3 = *(int *)(uVar4 + 4);
  } while (bVar5);
LAB_00441f0a:
  if ((*param_2 != -1) && (*param_3 != -1)) {
    return 1;
  }
  return 0;
}

