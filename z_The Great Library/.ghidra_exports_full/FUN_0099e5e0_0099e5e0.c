// FUN_0099e5e0 @ 0099e5e0 body=[[0099e5e0, 0099e629] [0099e630, 0099e652]]


undefined4 FUN_0099e5e0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *unaff_EDI;
  
  iVar1 = param_1[1];
  if ((iVar1 - *param_1) / 0xc != 0) {
    uVar2 = *unaff_EDI;
    if ((*(uint *)unaff_EDI[1] <= uVar2) && (uVar2 < ((uint *)unaff_EDI[1])[1])) {
      if ((uVar2 != iVar1 - 0xcU) && (iVar3 = uVar2 + 0xc, iVar3 != iVar1)) {
        puVar4 = (undefined4 *)(uVar2 + 8);
        do {
          puVar4[-1] = *(undefined4 *)(iVar3 + 4);
          *puVar4 = *(undefined4 *)(iVar3 + 8);
          iVar3 = iVar3 + 0xc;
          puVar4 = puVar4 + 3;
        } while (iVar3 != iVar1);
      }
      FUN_0099ed00(param_1);
      return 1;
    }
  }
  return 0;
}

