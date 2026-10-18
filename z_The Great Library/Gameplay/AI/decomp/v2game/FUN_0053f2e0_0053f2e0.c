// FUN_0053f2e0 @ 0053f2e0 body=[[0053f2e0, 0053f3ab]]


undefined4 * FUN_0053f2e0(int param_1,char param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x1574) - *(int *)(param_1 + 0x1570) >> 2;
  iVar3 = 0;
  if (0 < iVar1) {
    piVar4 = *(int **)(param_1 + 0x1570);
    do {
      if ((*(int *)(*piVar4 + 8) == param_3) && (*(char *)(*piVar4 + 0x20) == param_2)) {
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x1570) + iVar3 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          *(undefined1 *)(puVar2 + 3) = param_4;
          FUN_0053f980(param_1);
          return puVar2;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
  }
  puVar2 = (undefined4 *)FUN_00aae9af(0x24);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[2] = param_3;
    puVar2[1] = 0x18d;
    *puVar2 = CRallyPoint::vftable;
    *(undefined1 *)(puVar2 + 3) = param_4;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *(char *)(puVar2 + 8) = param_2;
  }
  FUN_0068f390();
  FUN_0053f980(param_1);
  return puVar2;
}

