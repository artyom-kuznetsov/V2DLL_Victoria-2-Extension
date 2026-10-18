// FUN_009677a0 @ 009677a0 body=[[009677a0, 00967878]]


void FUN_009677a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int unaff_ESI;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(param_1 + 100) + 300) * 4);
  iVar2 = *(int *)(iVar1 + 0x1594) - *(int *)(iVar1 + 0x1590) >> 2;
  iVar4 = 0;
  if (0 < iVar2) {
    piVar5 = *(int **)(iVar1 + 0x1590);
    do {
      if (*(int *)(*piVar5 + 0xc) == unaff_ESI) {
        iVar1 = *(int *)(*(int *)(iVar1 + 0x1590) + iVar4 * 4);
        if (iVar1 != 0) {
          *(int *)(param_1 + 0x274) = iVar1;
          return;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < iVar2);
  }
  puVar3 = (undefined4 *)FUN_00aae9af(0x30);
  puVar6 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = 0x18d;
    *puVar3 = CPopMovement::vftable;
    puVar3[2] = 1;
    puVar3[3] = unaff_ESI;
    puVar3[4] = 0x2d2d2d;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar6 = puVar3;
  }
  FUN_0068f390();
  *(undefined4 **)(param_1 + 0x274) = puVar6;
  return;
}

