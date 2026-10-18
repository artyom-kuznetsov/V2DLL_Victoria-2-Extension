// FUN_0044cab0 @ 0044cab0 body=[[0044cab0, 0044cacc] [0044cad0, 0044caf9]]


void FUN_0044cab0(int param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar4 * 8);
      puVar2 = (undefined4 *)(*(int *)(in_EAX + 0x18) + iVar4 * 8);
      *puVar2 = *puVar1;
      iVar4 = iVar4 + 1;
      puVar2[1] = puVar1[1];
    } while (iVar4 < iVar3);
  }
  return;
}

