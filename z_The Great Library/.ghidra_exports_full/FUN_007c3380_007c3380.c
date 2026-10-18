// FUN_007c3380 @ 007c3380 body=[[007c3380, 007c3434]]


void FUN_007c3380(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_ESI;
  int *piVar6;
  
  iVar4 = DAT_012588e8;
  *(undefined1 *)(unaff_ESI + 0x16c) = 1;
  piVar6 = *(int **)(param_1 + 0x48);
  while ((*(int **)(param_1 + 0x48) <= piVar6 && (piVar6 < *(int **)(param_1 + 0x4c)))) {
    uVar1 = *(undefined4 *)(*(int *)(iVar4 + 0xacc) + *piVar6 * 4);
    iVar2 = *(int *)(unaff_ESI + 0x98);
    piVar6 = piVar6 + 1;
    puVar5 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = uVar1;
      puVar5[1] = iVar2;
      puVar5[2] = 0;
      *(undefined1 *)(puVar5 + 3) = 0;
    }
    iVar3 = *(int *)(unaff_ESI + 0x9c);
    *(undefined4 **)(unaff_ESI + 0x98) = puVar5;
    *(int *)(unaff_ESI + 0x9c) = iVar3 + 1;
    if (iVar3 == 0) {
      *(undefined4 **)(unaff_ESI + 0x94) = puVar5;
      *(undefined1 *)(unaff_ESI + 0x16c) = 1;
    }
    else {
      *(undefined4 **)(iVar2 + 8) = puVar5;
      *(undefined1 *)(unaff_ESI + 0x16c) = 1;
    }
  }
  return;
}

